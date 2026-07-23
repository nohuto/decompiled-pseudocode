/*
 * XREFs of ZwReadOnlyEnlistment @ 0x180094DE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwReadOnlyEnlistment(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  NTSTATUS result; // eax

  result = 334;
  __asm { syscall; Low latency system call }
  return result;
}
