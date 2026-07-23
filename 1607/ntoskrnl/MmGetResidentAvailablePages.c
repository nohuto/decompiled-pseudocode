/*
 * XREFs of MmGetResidentAvailablePages @ 0x1400A969C
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x140412EC0 (ExpQuerySystemPerformanceInformation.c)
 *     ExpQuerySystemInformation @ 0x1404144E0 (ExpQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 MmGetResidentAvailablePages()
{
  return *(_QWORD *)(*(_QWORD *)qword_140327038 + 6528LL);
}
