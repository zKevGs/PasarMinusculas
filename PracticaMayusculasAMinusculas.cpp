#include <iostream>
#include <string>

using namespace std;

string DiaSemana(string Dia){
    if (Dia == "lunes"){
        cout << "buena semana";
    }else if (Dia == "martes"){
        cout << "buen dia";
    }else if (Dia  == "miercoles"){
        cout << "buen dia";
    }else if (Dia  == "jueves"){
        cout << "buen dia";
    }else if (Dia  == "viernes"){
       cout << "buen finde";
    }else{
        cout << "no es un dia de la semana";
    }

}


int main (){

string dia;
string Minusculas;
string Texto;


cout << "ingrese el dia de la semana: ";
cin >> dia;


for (int i = 0; i < dia.size(); i++){
    Minusculas = (char) tolower(dia[i]);
    Texto = Texto + Minusculas;
}
cout <<DiaSemana(Texto);


return 0;
}
