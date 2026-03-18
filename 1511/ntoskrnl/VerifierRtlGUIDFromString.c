/*
 * XREFs of VerifierRtlGUIDFromString @ 0x1406CF238
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
