/*
 * XREFs of ZwSaveKeyEx @ 0x14015CFF0
 * Callers:
 *     NtSaveKeyEx @ 0x1405FAAF0 (NtSaveKeyEx.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSaveKeyEx(HANDLE KeyHandle, HANDLE FileHandle, ULONG Format)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
