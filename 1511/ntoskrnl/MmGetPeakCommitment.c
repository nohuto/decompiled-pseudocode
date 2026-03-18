/*
 * XREFs of MmGetPeakCommitment @ 0x1400144D8
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x1403CB0D0 (ExpQuerySystemPerformanceInformation.c)
 *     ExpQuerySystemInformation @ 0x140472CC0 (ExpQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 MmGetPeakCommitment()
{
  return *(_QWORD *)(*(_QWORD *)qword_1402FEC28 + 4992LL);
}
