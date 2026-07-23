/*
 * XREFs of ZwRenameKey @ 0x140153180
 * Callers:
 *     CmpDoReDoRenameKey @ 0x1405ED268 (CmpDoReDoRenameKey.c)
 *     VerifierZwRenameKey @ 0x1406C0DC4 (VerifierZwRenameKey.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRenameKey(HANDLE KeyHandle, PUNICODE_STRING NewName)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
