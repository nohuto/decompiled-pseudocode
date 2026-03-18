/*
 * XREFs of MmGetAvailablePages @ 0x14006D5BC
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x140414000 (ExpQuerySystemPerformanceInformation.c)
 *     ExpQuerySystemInformation @ 0x140415620 (ExpQuerySystemInformation.c)
 *     CcZeroData @ 0x1404584CC (CcZeroData.c)
 *     ExpQueryNumaAvailableMemory @ 0x14054C0E4 (ExpQueryNumaAvailableMemory.c)
 * Callees:
 *     <none>
 */

__int64 MmGetAvailablePages()
{
  return *(_QWORD *)(*(_QWORD *)qword_140326FF8 + 6464LL);
}
