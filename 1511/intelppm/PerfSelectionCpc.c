/*
 * XREFs of PerfSelectionCpc @ 0x1C0002300
 * Callers:
 *     <none>
 * Callees:
 *     PerformanceFromPercentage @ 0x1C000167C (PerformanceFromPercentage.c)
 */

__int64 __fastcall PerfSelectionCpc(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        _DWORD *a6,
        unsigned __int64 *a7)
{
  unsigned int v7; // r11d
  unsigned __int64 v8; // rcx
  __int64 v9; // r10
  unsigned int v10; // r11d
  unsigned __int64 v11; // rdx

  v7 = a2;
  if ( a2 < a3 )
    v7 = a3;
  if ( v7 > a4 )
    v7 = a4;
  v8 = PerformanceFromPercentage(a1, v7);
  *a7 = v8;
  v11 = *(_QWORD *)(v9 + 48);
  if ( v8 < v11 )
    v11 = v8;
  *a6 = v11 * *(unsigned int *)(v9 + 56) / *(_QWORD *)(v9 + 8);
  return v10;
}
