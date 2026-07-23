/*
 * XREFs of NtFlushInstructionCache @ 0x180094690
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtFlushInstructionCache(HANDLE ProcessHandle, PVOID BaseAddress, SIZE_T Length)
{
  NTSTATUS result; // eax

  result = 217;
  __asm { syscall; Low latency system call }
  return result;
}
