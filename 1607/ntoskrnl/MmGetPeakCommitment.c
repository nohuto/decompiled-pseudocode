/*
 * XREFs of MmGetPeakCommitment @ 0x1400AB108
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x140414000 (ExpQuerySystemPerformanceInformation.c)
 *     ExpQuerySystemInformation @ 0x140415620 (ExpQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 MmGetPeakCommitment()
{
  return *(_QWORD *)(*(_QWORD *)qword_140326FF8 + 5632LL);
}
