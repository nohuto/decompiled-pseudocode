/*
 * XREFs of MmGetWorkingSetLeafSize @ 0x14001411C
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x14042E030 (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetWorkingSetLeafSize(int a1)
{
  return qword_14034FBA8[32 * (__int64)a1];
}
