/*
 * XREFs of MmGetAvailablePages @ 0x14006D13C
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x140412EC0 (ExpQuerySystemPerformanceInformation.c)
 *     ExpQuerySystemInformation @ 0x1404144E0 (ExpQuerySystemInformation.c)
 *     CcZeroData @ 0x14045739C (CcZeroData.c)
 *     ExpQueryNumaAvailableMemory @ 0x14054C624 (ExpQueryNumaAvailableMemory.c)
 * Callees:
 *     <none>
 */

__int64 MmGetAvailablePages()
{
  return *(_QWORD *)(*(_QWORD *)qword_140327038 + 6464LL);
}
