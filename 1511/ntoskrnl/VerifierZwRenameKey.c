/*
 * XREFs of VerifierZwRenameKey @ 0x1406C0DC4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierZwRenameKey(HANDLE KeyHandle, PUNICODE_STRING NewName)
{
  return pXdvZwRenameKey(KeyHandle, NewName);
}
