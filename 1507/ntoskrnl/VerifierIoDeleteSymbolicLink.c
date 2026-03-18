/*
 * XREFs of VerifierIoDeleteSymbolicLink @ 0x140741F28
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
