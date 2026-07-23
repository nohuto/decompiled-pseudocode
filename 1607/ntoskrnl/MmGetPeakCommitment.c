/*
 * XREFs of MmGetPeakCommitment @ 0x1400A9688
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x140412EC0 (ExpQuerySystemPerformanceInformation.c)
 *     ExpQuerySystemInformation @ 0x1404144E0 (ExpQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 MmGetPeakCommitment()
{
  return *(_QWORD *)(*(_QWORD *)qword_140327038 + 5632LL);
}
