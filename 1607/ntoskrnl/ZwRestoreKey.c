/*
 * XREFs of ZwRestoreKey @ 0x14015C960
 * Callers:
 *     NtRestoreKey @ 0x1405FA570 (NtRestoreKey.c)
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
