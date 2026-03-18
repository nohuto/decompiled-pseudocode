/*
 * XREFs of MmGetAvailablePages @ 0x140014514
 * Callers:
 *     CcZeroData @ 0x1403CAF50 (CcZeroData.c)
 *     ExpQuerySystemPerformanceInformation @ 0x1403CB0D0 (ExpQuerySystemPerformanceInformation.c)
 *     ExpQuerySystemInformation @ 0x140472CC0 (ExpQuerySystemInformation.c)
 *     ExpQueryNumaAvailableMemory @ 0x14051820C (ExpQueryNumaAvailableMemory.c)
 * Callees:
 *     <none>
 */

__int64 MmGetAvailablePages()
{
  return *(_QWORD *)(*(_QWORD *)qword_1402FEC28 + 5888LL);
}
