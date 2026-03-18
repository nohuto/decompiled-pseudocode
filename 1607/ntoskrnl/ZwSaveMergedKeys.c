/*
 * XREFs of ZwSaveMergedKeys @ 0x14015CAA0
 * Callers:
 *     NtSaveMergedKeys @ 0x1405FACD4 (NtSaveMergedKeys.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSaveMergedKeys(HANDLE HighPrecedenceKeyHandle, HANDLE LowPrecedenceKeyHandle, HANDLE FileHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(HighPrecedenceKeyHandle, LowPrecedenceKeyHandle, FileHandle);
}
