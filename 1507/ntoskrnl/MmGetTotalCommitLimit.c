/*
 * XREFs of MmGetTotalCommitLimit @ 0x140014374
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x14042E030 (ExpQuerySystemPerformanceInformation.c)
 *     ExpQuerySystemInformation @ 0x14042E880 (ExpQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 MmGetTotalCommitLimit()
{
  return *(_QWORD *)(*(_QWORD *)qword_14034F0E8 + 5736LL);
}
