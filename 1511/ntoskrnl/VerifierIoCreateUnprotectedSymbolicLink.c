/*
 * XREFs of VerifierIoCreateUnprotectedSymbolicLink @ 0x1406C071C
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
