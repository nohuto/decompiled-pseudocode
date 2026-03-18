/*
 * XREFs of VerifierIoCreateUnprotectedSymbolicLink @ 0x140741F10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierIoCreateUnprotectedSymbolicLink(
        PUNICODE_STRING SymbolicLinkName,
        PUNICODE_STRING DeviceName)
{
  return pXdvIoCreateUnprotectedSymbolicLink(SymbolicLinkName, DeviceName);
}
