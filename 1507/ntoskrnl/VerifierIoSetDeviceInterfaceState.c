/*
 * XREFs of VerifierIoSetDeviceInterfaceState @ 0x140742040
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierIoSetDeviceInterfaceState(PUNICODE_STRING SymbolicLinkName, BOOLEAN Enable)
{
  return pXdvIoSetDeviceInterfaceState(SymbolicLinkName, Enable);
}
