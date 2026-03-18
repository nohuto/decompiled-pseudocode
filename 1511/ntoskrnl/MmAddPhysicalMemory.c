/*
 * XREFs of MmAddPhysicalMemory @ 0x140623094
 * Callers:
 *     VerifierMmAddPhysicalMemory @ 0x1406C0AA8 (VerifierMmAddPhysicalMemory.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall MmAddPhysicalMemory(PPHYSICAL_ADDRESS StartAddress, PLARGE_INTEGER NumberOfBytes)
{
  return MiAddPhysicalMemoryChunks(MiSystemPartition, (__int64 *)StartAddress, (__int64 *)NumberOfBytes);
}
