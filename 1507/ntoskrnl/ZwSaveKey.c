/*
 * XREFs of ZwSaveKey @ 0x140181CD0
 * Callers:
 *     NtSaveKey @ 0x1406519CC (NtSaveKey.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSaveKey(HANDLE KeyHandle, HANDLE FileHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
