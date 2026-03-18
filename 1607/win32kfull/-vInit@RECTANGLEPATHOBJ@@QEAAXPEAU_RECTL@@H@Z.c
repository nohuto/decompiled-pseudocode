/*
 * XREFs of ?vInit@RECTANGLEPATHOBJ@@QEAAXPEAU_RECTL@@H@Z @ 0x1C000F434
 * Callers:
 *     GreRectangle @ 0x1C000E9CC (GreRectangle.c)
 * Callees:
 *     <none>
 */

void __fastcall RECTANGLEPATHOBJ::vInit(RECTANGLEPATHOBJ *this, struct _RECTL *a2, int a3)
{
  int v3; // eax
  int v4; // eax
  int v5; // r9d
  int v6; // eax

  *((_DWORD *)this + 108) = 15;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 52) = 0LL;
  *((_QWORD *)this + 15) = (char *)this + 416;
  *((_QWORD *)this + 16) = (char *)this + 416;
  *((_DWORD *)this + 109) = 4;
  *((_QWORD *)this + 1) = (char *)this + 88;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 12) = 0;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 53) = 0LL;
  *((_DWORD *)this + 40) = 0;
  *((_QWORD *)this + 14) = 0LL;
  *((_DWORD *)this + 1) = 4;
  *(_DWORD *)this = 0;
  v3 = 16 * a2->left;
  *((_DWORD *)this + 34) = v3;
  *((_DWORD *)this + 112) = v3;
  *((_DWORD *)this + 114) = *((_DWORD *)this + 34);
  v4 = 16 * a2->right;
  *((_DWORD *)this + 36) = v4;
  *((_DWORD *)this + 110) = v4;
  *((_DWORD *)this + 116) = *((_DWORD *)this + 36);
  v5 = 16 * a2->top;
  *((_DWORD *)this + 35) = v5;
  v6 = 16 * a2->bottom;
  *((_DWORD *)this + 37) = v6;
  if ( a3 )
  {
    *((_DWORD *)this + 115) = v5;
    *((_DWORD *)this + 117) = v5;
    *((_DWORD *)this + 111) = v6;
    *((_DWORD *)this + 113) = *((_DWORD *)this + 37);
  }
  else
  {
    *((_DWORD *)this + 111) = v5;
    *((_DWORD *)this + 113) = v5;
    *((_DWORD *)this + 115) = v6;
    *((_DWORD *)this + 117) = *((_DWORD *)this + 37);
  }
}
