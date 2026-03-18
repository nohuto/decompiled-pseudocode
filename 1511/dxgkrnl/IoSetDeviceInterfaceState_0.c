/*
 * XREFs of IoSetDeviceInterfaceState_0 @ 0x1C0011620
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
