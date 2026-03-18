/*
 * XREFs of VerifierMmAddPhysicalMemory @ 0x1407422E8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierMmAddPhysicalMemory(PPHYSICAL_ADDRESS StartAddress, PLARGE_INTEGER NumberOfBytes)
{
  return pXdvMmAddPhysicalMemory(StartAddress, NumberOfBytes);
}
