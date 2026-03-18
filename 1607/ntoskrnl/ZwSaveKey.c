/*
 * XREFs of ZwSaveKey @ 0x14015CA60
 * Callers:
 *     NtSaveKey @ 0x1405FA800 (NtSaveKey.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSaveKey(HANDLE KeyHandle, HANDLE FileHandle)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle, FileHandle, v2);
}
