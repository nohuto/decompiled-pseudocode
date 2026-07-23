/*
 * XREFs of ZwSaveKey @ 0x140153360
 * Callers:
 *     NtSaveKey @ 0x1405DC954 (NtSaveKey.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSaveKey(HANDLE KeyHandle, HANDLE FileHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
