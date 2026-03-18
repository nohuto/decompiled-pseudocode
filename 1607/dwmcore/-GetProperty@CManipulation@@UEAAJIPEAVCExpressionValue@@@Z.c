/*
 * XREFs of ?GetProperty@CManipulation@@UEAAJIPEAVCExpressionValue@@@Z @ 0x180145A40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CManipulation::GetProperty(CManipulation *this, int a2, struct CExpressionValue *a3)
{
  unsigned int v3; // r9d
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // eax

  v3 = 0;
  if ( !a3 )
    return 2147942487LL;
  if ( !a2 )
  {
    *((_DWORD *)a3 + 16) = 52;
    *(_QWORD *)a3 = *(_QWORD *)((char *)this + 260);
    *((_DWORD *)a3 + 2) = *((_DWORD *)this + 67);
    goto LABEL_17;
  }
  v5 = a2 - 1;
  if ( !v5 )
  {
    *((_DWORD *)a3 + 16) = 52;
    *(_QWORD *)a3 = *((_QWORD *)this + 34);
    v9 = *((_DWORD *)this + 70);
    goto LABEL_11;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    *((_DWORD *)a3 + 16) = 52;
    *(_QWORD *)a3 = *((_QWORD *)this + 36);
    v9 = *((_DWORD *)this + 74);
    goto LABEL_11;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    *((_DWORD *)a3 + 16) = 265;
    *(_OWORD *)a3 = *(_OWORD *)((char *)this + 300);
    *((_OWORD *)a3 + 1) = *(_OWORD *)((char *)this + 316);
    *((_OWORD *)a3 + 2) = *(_OWORD *)((char *)this + 332);
    *((_OWORD *)a3 + 3) = *(_OWORD *)((char *)this + 348);
    goto LABEL_17;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    *((_DWORD *)a3 + 16) = 52;
    *(_QWORD *)a3 = *(_QWORD *)((char *)this + 364);
    v9 = *((_DWORD *)this + 93);
    goto LABEL_11;
  }
  if ( v8 == 1 )
  {
    *((_DWORD *)a3 + 16) = 52;
    *(_QWORD *)a3 = *((_QWORD *)this + 47);
    v9 = *((_DWORD *)this + 96);
LABEL_11:
    *((_DWORD *)a3 + 2) = v9;
LABEL_17:
    *((_BYTE *)a3 + 68) = 1;
    return v3;
  }
  return (unsigned int)-2147024809;
}
