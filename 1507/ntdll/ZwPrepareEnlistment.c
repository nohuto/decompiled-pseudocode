/*
 * XREFs of ZwPrepareEnlistment @ 0x180094B10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwPrepareEnlistment(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  NTSTATUS result; // eax

  result = 289;
  __asm { syscall; Low latency system call }
  return result;
}
