/*
 * XREFs of ZwSaveKey @ 0x14015CFD0
 * Callers:
 *     NtSaveKey @ 0x1405FA8B4 (NtSaveKey.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSaveKey(HANDLE KeyHandle, HANDLE FileHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
