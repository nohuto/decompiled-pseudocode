/*
 * XREFs of VerifierMmRemovePhysicalMemory @ 0x140742330
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierMmRemovePhysicalMemory(PPHYSICAL_ADDRESS StartAddress, PLARGE_INTEGER NumberOfBytes)
{
  return pXdvMmRemovePhysicalMemory(StartAddress, NumberOfBytes);
}
