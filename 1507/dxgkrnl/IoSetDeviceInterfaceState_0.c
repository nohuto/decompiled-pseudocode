/*
 * XREFs of IoSetDeviceInterfaceState_0 @ 0x1C000FEB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall IoSetDeviceInterfaceState_0(PUNICODE_STRING SymbolicLinkName, BOOLEAN Enable)
{
  return IoSetDeviceInterfaceState(SymbolicLinkName, Enable);
}
