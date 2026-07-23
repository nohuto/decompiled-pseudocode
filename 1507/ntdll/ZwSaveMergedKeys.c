/*
 * XREFs of ZwSaveMergedKeys @ 0x180094F90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSaveMergedKeys(HANDLE HighPrecedenceKeyHandle, HANDLE LowPrecedenceKeyHandle, HANDLE FileHandle)
{
  NTSTATUS result; // eax

  result = 361;
  __asm { syscall; Low latency system call }
  return result;
}
