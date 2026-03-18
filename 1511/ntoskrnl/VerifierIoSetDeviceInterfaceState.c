/*
 * XREFs of VerifierIoSetDeviceInterfaceState @ 0x1406C084C
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
