/*
 * XREFs of VerifierMmSecureVirtualMemory @ 0x140742340
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
HANDLE __stdcall VerifierMmSecureVirtualMemory(PVOID Address, SIZE_T Size, ULONG ProbeMode)
{
  return pXdvMmSecureVirtualMemory(Address, Size, ProbeMode);
}
