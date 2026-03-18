/*
 * XREFs of VerifierRtlStringFromGUID @ 0x1406CF2D8
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
