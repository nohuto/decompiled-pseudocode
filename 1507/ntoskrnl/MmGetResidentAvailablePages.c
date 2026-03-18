/*
 * XREFs of MmGetResidentAvailablePages @ 0x140014138
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x14042E030 (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     <none>
 */

__int64 MmGetResidentAvailablePages()
{
  return *(_QWORD *)(*(_QWORD *)qword_14034F0E8 + 5568LL);
}
