/*
 * XREFs of ZwSaveMergedKeys @ 0x1401533A0
 * Callers:
 *     NtSaveMergedKeys @ 0x1405DCE34 (NtSaveMergedKeys.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSaveMergedKeys(HANDLE HighPrecedenceKeyHandle, HANDLE LowPrecedenceKeyHandle, HANDLE FileHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(HighPrecedenceKeyHandle);
}
