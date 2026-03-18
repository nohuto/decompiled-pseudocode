/*
 * XREFs of MmGetAvailablePages @ 0x14001439C
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x14042E030 (ExpQuerySystemPerformanceInformation.c)
 *     ExpQuerySystemInformation @ 0x14042E880 (ExpQuerySystemInformation.c)
 *     CcZeroData @ 0x1404B124C (CcZeroData.c)
 *     ExpQueryNumaAvailableMemory @ 0x14058A3D4 (ExpQueryNumaAvailableMemory.c)
 * Callees:
 *     <none>
 */

__int64 MmGetAvailablePages()
{
  return *(_QWORD *)(*(_QWORD *)qword_14034F0E8 + 5504LL);
}
