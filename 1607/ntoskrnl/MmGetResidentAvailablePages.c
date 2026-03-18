/*
 * XREFs of MmGetResidentAvailablePages @ 0x1400AB11C
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x140414000 (ExpQuerySystemPerformanceInformation.c)
 *     ExpQuerySystemInformation @ 0x140415620 (ExpQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 MmGetResidentAvailablePages()
{
  return *(_QWORD *)(*(_QWORD *)qword_140326FF8 + 6528LL);
}
