/*
 * XREFs of IoCreateSymbolicLink_0 @ 0x1C000FFF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall IoCreateSymbolicLink_0(PUNICODE_STRING SymbolicLinkName, PUNICODE_STRING DeviceName)
{
  return IoCreateSymbolicLink(SymbolicLinkName, DeviceName);
}
