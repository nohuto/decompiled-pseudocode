/*
 * XREFs of VerifierRtlDeleteRegistryValue @ 0x1406C0C6C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierRtlDeleteRegistryValue(ULONG RelativeTo, PCWSTR Path, PCWSTR ValueName)
{
  return pXdvRtlDeleteRegistryValue(RelativeTo, Path, ValueName);
}
