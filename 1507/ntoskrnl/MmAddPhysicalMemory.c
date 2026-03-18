/*
 * XREFs of MmAddPhysicalMemory @ 0x1406A2278
 * Callers:
 *     VerifierMmAddPhysicalMemory @ 0x1407422E8 (VerifierMmAddPhysicalMemory.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall MmAddPhysicalMemory(PPHYSICAL_ADDRESS StartAddress, PLARGE_INTEGER NumberOfBytes)
{
  return MiAddPhysicalMemoryChunks(MiSystemPartition, (__int64 *)StartAddress, (signed __int64 *)NumberOfBytes);
}
