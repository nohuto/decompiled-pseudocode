/*
 * XREFs of PerformanceFromPercentage @ 0x1C000167C
 * Callers:
 *     PerfSelectionCpc @ 0x1C0002300 (PerfSelectionCpc.c)
 *     PerfControlCpc @ 0x1C0004470 (PerfControlCpc.c)
 *     PerfControlCpcSingleRegister @ 0x1C0004530 (PerfControlCpcSingleRegister.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall PerformanceFromPercentage(__int64 a1, unsigned int a2)
{
  if ( a2 == *(_DWORD *)(a1 + 60) )
    return *(_QWORD *)a1;
  if ( a2 == 100 )
    return *(_QWORD *)(a1 + 8);
  if ( *(_BYTE *)(a1 + 85) && a2 == *(_DWORD *)(a1 + 72) )
    return *(_QWORD *)(a1 + 48);
  if ( a2 == *(_DWORD *)(a1 + 64) )
    return *(_QWORD *)(a1 + 16);
  if ( a2 == *(_DWORD *)(a1 + 68) )
    return *(_QWORD *)(a1 + 24);
  return (unsigned __int64)a2 * *(_QWORD *)(a1 + 8) / 0x64;
}
