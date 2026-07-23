/*
 * XREFs of ZwSinglePhaseReject @ 0x1800952B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSinglePhaseReject(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  NTSTATUS result; // eax

  result = 411;
  __asm { syscall; Low latency system call }
  return result;
}
