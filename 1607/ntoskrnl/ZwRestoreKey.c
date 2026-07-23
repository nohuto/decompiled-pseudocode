/*
 * XREFs of ZwRestoreKey @ 0x14015CED0
 * Callers:
 *     NtRestoreKey @ 0x1405FA624 (NtRestoreKey.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRestoreKey(HANDLE KeyHandle, HANDLE FileHandle, ULONG Flags)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
