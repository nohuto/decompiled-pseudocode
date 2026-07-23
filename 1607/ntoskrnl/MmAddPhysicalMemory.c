/*
 * XREFs of MmAddPhysicalMemory @ 0x1406585D8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall MmAddPhysicalMemory(PPHYSICAL_ADDRESS StartAddress, PLARGE_INTEGER NumberOfBytes)
{
  return MiAddPhysicalMemoryChunks(MiSystemPartition, (__int64 *)StartAddress, (signed __int64 *)NumberOfBytes);
}
