/*
 * XREFs of ZwSaveKeyEx @ 0x140181CF0
 * Callers:
 *     NtSaveKeyEx @ 0x140651DA0 (NtSaveKeyEx.c)
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
