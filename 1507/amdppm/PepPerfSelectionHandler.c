/*
 * XREFs of PepPerfSelectionHandler @ 0x1C0004C50
 * Callers:
 *     <none>
 * Callees:
 *     PepPerformanceFromPercentage @ 0x1C0004F44 (PepPerformanceFromPercentage.c)
 */

__int64 __fastcall PepPerfSelectionHandler(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        _DWORD *a6,
        _QWORD *a7)
{
  unsigned int v7; // r10d
  unsigned int v8; // r8d
  unsigned int v9; // r10d
  unsigned int *v10; // r11
  unsigned __int64 v11; // rdx

  v7 = a3;
  if ( a2 >= a3 )
  {
    v7 = a2;
    if ( a2 > a4 )
      v7 = a4;
  }
  v8 = PepPerformanceFromPercentage(a1, v7);
  *a7 = v8;
  v11 = v10[5];
  if ( v8 < v11 )
    v11 = v8;
  *a6 = v11 * *(unsigned int *)(*(_QWORD *)v10 + 16LL) / *(unsigned int *)(*(_QWORD *)v10 + 4LL);
  return v9;
}
