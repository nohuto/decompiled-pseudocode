/*
 * XREFs of scl_CalcDevHorMetrics @ 0x1C00D4918
 * Callers:
 *     fs__Contour @ 0x1C00B4F90 (fs__Contour.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall scl_CalcDevHorMetrics(__int64 a1, int *a2, _DWORD *a3, _DWORD *a4)
{
  __int64 v4; // r10
  __int64 v6; // rax
  signed int v7; // ebx
  int v8; // r11d
  int *v9; // r10
  __int64 result; // rax
  int v11; // r8d
  __int64 v12; // rdx
  int v13; // ecx

  v4 = *(__int16 *)(a1 + 80);
  v6 = *(_QWORD *)(a1 + 64);
  *a3 = 0x7FFFFFFF;
  v7 = 0x80000000;
  v8 = *(unsigned __int16 *)(v6 + 2 * v4 - 2);
  v9 = *(int **)a1;
  result = (unsigned int)(v8 + 1);
  v11 = v9[(unsigned __int16)(v8 + 2)] - v9[(unsigned __int16)(v8 + 1)];
  *a2 = v11;
  if ( (_WORD)v8 != 0xFFFF )
  {
    v12 = (unsigned __int16)(v8 + 1);
    do
    {
      v13 = *v9;
      result = (unsigned int)*a3;
      ++v9;
      if ( v13 > v7 )
        v7 = v13;
      if ( v13 < (int)result )
        result = (unsigned int)v13;
      *a3 = result;
      --v12;
    }
    while ( v12 );
  }
  *a4 = v11 - v7;
  return result;
}
