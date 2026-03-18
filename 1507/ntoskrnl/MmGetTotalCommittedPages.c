/*
 * XREFs of MmGetTotalCommittedPages @ 0x140014388
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x14042E030 (ExpQuerySystemPerformanceInformation.c)
 *     ExpQuerySystemInformation @ 0x14042E880 (ExpQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 MmGetTotalCommittedPages()
{
  return *(_QWORD *)(*(_QWORD *)qword_14034F0E8 + 5576LL);
}
