/*
 * XREFs of MmGetResidentAvailablePages @ 0x140014190
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x1403CB0D0 (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     <none>
 */

__int64 MmGetResidentAvailablePages()
{
  return *(_QWORD *)(*(_QWORD *)qword_1402FEC28 + 5952LL);
}
