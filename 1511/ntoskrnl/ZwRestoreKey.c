/*
 * XREFs of ZwRestoreKey @ 0x140153280
 * Callers:
 *     NtRestoreKey @ 0x1405DC6C0 (NtRestoreKey.c)
 *     VfZwRestoreKey @ 0x1406D416C (VfZwRestoreKey.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwRestoreKey(HANDLE KeyHandle, HANDLE FileHandle, ULONG Flags)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle, FileHandle, *(_QWORD *)&Flags);
}
