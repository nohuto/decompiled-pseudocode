/*
 * XREFs of ZwSuspendProcess @ 0x1800952F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSuspendProcess(HANDLE ProcessHandle)
{
  NTSTATUS result; // eax

  result = 415;
  __asm { syscall; Low latency system call }
  return result;
}
