/*
 * XREFs of MmGetTotalCommittedPages @ 0x1400A9660
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x140412EC0 (ExpQuerySystemPerformanceInformation.c)
 *     ExpQuerySystemInformation @ 0x1404144E0 (ExpQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 MmGetTotalCommittedPages()
{
  return *(_QWORD *)(*(_QWORD *)qword_140327038 + 7208LL);
}
