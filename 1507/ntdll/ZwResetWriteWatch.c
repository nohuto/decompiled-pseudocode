/*
 * XREFs of ZwResetWriteWatch @ 0x180094EF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwResetWriteWatch(HANDLE ProcessHandle, PVOID BaseAddress, SIZE_T RegionSize)
{
  NTSTATUS result; // eax

  result = 351;
  __asm { syscall; Low latency system call }
  return result;
}
