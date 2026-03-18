/*
 * XREFs of MmGetWorkingSetLeafSize @ 0x140014174
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x1403CB0D0 (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetWorkingSetLeafSize(int a1)
{
  return qword_1402FF6E8[32 * (__int64)a1];
}
