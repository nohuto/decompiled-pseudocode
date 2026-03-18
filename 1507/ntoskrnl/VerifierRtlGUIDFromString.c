/*
 * XREFs of VerifierRtlGUIDFromString @ 0x140752D04
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierRtlGUIDFromString(PCUNICODE_STRING GuidString, GUID *Guid)
{
  return pXdvRtlGUIDFromString(GuidString, Guid);
}
