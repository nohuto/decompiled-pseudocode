/*
 * XREFs of ZwRenameKey @ 0x14015CDD0
 * Callers:
 *     CmpDoReDoRenameKey @ 0x140611AB0 (CmpDoReDoRenameKey.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRenameKey(HANDLE KeyHandle, PUNICODE_STRING NewName)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
