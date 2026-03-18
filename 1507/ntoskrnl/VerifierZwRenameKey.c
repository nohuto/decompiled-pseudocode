/*
 * XREFs of VerifierZwRenameKey @ 0x140742604
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
