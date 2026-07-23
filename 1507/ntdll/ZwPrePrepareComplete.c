/*
 * XREFs of ZwPrePrepareComplete @ 0x180094AE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwPrePrepareComplete(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  NTSTATUS result; // eax

  result = 286;
  __asm { syscall; Low latency system call }
  return result;
}
