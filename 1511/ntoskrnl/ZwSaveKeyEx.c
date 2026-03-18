/*
 * XREFs of ZwSaveKeyEx @ 0x140153380
 * Callers:
 *     NtSaveKeyEx @ 0x1405DCB94 (NtSaveKeyEx.c)
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
