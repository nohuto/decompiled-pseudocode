/*
 * XREFs of ZwSaveKeyEx @ 0x14015CA80
 * Callers:
 *     NtSaveKeyEx @ 0x1405FAA3C (NtSaveKeyEx.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwSaveKeyEx(HANDLE KeyHandle, HANDLE FileHandle, ULONG Format)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle, FileHandle, *(_QWORD *)&Format);
}
