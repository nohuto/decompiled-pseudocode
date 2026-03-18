/*
 * XREFs of RtlStringFromGUID_0 @ 0x1C000FEA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall RtlStringFromGUID_0(const GUID *const Guid, PUNICODE_STRING GuidString)
{
  return RtlStringFromGUID(Guid, GuidString);
}
