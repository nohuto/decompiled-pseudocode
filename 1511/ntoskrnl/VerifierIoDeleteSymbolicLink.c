/*
 * XREFs of VerifierIoDeleteSymbolicLink @ 0x1406C0734
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierIoDeleteSymbolicLink(PUNICODE_STRING SymbolicLinkName)
{
  return pXdvIoDeleteSymbolicLink(SymbolicLinkName);
}
