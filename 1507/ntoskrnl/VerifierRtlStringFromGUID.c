/*
 * XREFs of VerifierRtlStringFromGUID @ 0x140752DA4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierRtlStringFromGUID(const GUID *const Guid, PUNICODE_STRING GuidString)
{
  return pXdvRtlStringFromGUID(Guid, GuidString);
}
