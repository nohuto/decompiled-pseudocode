/*
 * XREFs of VerifierIoCreateSymbolicLink @ 0x140741F00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierIoCreateSymbolicLink(PUNICODE_STRING SymbolicLinkName, PUNICODE_STRING DeviceName)
{
  return pXdvIoCreateSymbolicLink(SymbolicLinkName, DeviceName);
}
