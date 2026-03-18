/*
 * XREFs of ZwRenameKey @ 0x14015C860
 * Callers:
 *     CmpDoReDoRenameKey @ 0x1406119FC (CmpDoReDoRenameKey.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRenameKey(HANDLE KeyHandle, PUNICODE_STRING NewName)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle, NewName, v2);
}
