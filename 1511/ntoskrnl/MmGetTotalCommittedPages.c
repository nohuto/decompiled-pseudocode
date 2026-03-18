/*
 * XREFs of MmGetTotalCommittedPages @ 0x140014500
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x1403CB0D0 (ExpQuerySystemPerformanceInformation.c)
 *     ExpQuerySystemInformation @ 0x140472CC0 (ExpQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 MmGetTotalCommittedPages()
{
  return *(_QWORD *)(*(_QWORD *)qword_1402FEC28 + 5960LL);
}
