/*
 * XREFs of scl_CalcDevHorMetrics @ 0x1C00F8B98
 * Callers:
 *     fs__Contour @ 0x1C00C7348 (fs__Contour.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall scl_CalcDevHorMetrics(__int64 a1, int *a2, _DWORD *a3, _DWORD *a4)
{
  int v4; // eax
  signed int v6; // ebx
  int v7; // r11d
  int *v8; // r10
  __int64 result; // rax
  int v10; // r8d
  __int64 v11; // rdx
  int v12; // ecx

  v4 = *(__int16 *)(a1 + 80) - 1;
  *a3 = 0x7FFFFFFF;
  v6 = 0x80000000;
  v7 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 64) + 2LL * v4);
  v8 = *(int **)a1;
  result = (unsigned int)(v7 + 1);
  v10 = v8[(unsigned __int16)(v7 + 2)] - v8[(unsigned __int16)(v7 + 1)];
  *a2 = v10;
  if ( (_WORD)v7 != 0xFFFF )
  {
    v11 = (unsigned __int16)(v7 + 1);
    do
    {
      v12 = *v8;
      result = (unsigned int)*a3;
      ++v8;
      if ( v12 > v6 )
        v6 = v12;
      if ( v12 < (int)result )
        result = (unsigned int)v12;
      *a3 = result;
      --v11;
    }
    while ( v11 );
  }
  *a4 = v10 - v6;
  return result;
}
