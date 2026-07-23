/*
 * XREFs of ZwRenameKey @ 0x140181AF0
 * Callers:
 *     CmpDoReDoRenameKey @ 0x140665668 (CmpDoReDoRenameKey.c)
 *     VerifierZwRenameKey @ 0x140742604 (VerifierZwRenameKey.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRenameKey(HANDLE KeyHandle, PUNICODE_STRING NewName)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
