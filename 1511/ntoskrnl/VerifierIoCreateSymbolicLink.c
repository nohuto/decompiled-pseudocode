/*
 * XREFs of VerifierIoCreateSymbolicLink @ 0x1406C070C
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
