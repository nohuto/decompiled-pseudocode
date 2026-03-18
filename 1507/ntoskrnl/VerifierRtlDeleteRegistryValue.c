/*
 * XREFs of VerifierRtlDeleteRegistryValue @ 0x1407424AC
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
