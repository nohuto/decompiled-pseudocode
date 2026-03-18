/*
 * XREFs of MmGetTotalCommittedPages @ 0x1400AB0E0
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x140414000 (ExpQuerySystemPerformanceInformation.c)
 *     ExpQuerySystemInformation @ 0x140415620 (ExpQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 MmGetTotalCommittedPages()
{
  return *(_QWORD *)(*(_QWORD *)qword_140326FF8 + 7208LL);
}
