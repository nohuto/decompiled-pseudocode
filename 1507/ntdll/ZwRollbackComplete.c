/*
 * XREFs of ZwRollbackComplete @ 0x180094F30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwRollbackComplete(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  NTSTATUS result; // eax

  result = 355;
  __asm { syscall; Low latency system call }
  return result;
}
