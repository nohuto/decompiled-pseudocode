/*
 * XREFs of ZwRestoreKey @ 0x140181BF0
 * Callers:
 *     NtRestoreKey @ 0x140651558 (NtRestoreKey.c)
 *     VfZwRestoreKey @ 0x140757D34 (VfZwRestoreKey.c)
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
