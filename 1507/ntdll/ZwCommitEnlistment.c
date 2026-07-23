/*
 * XREFs of ZwCommitEnlistment @ 0x180094220
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCommitEnlistment(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  NTSTATUS result; // eax

  result = 146;
  __asm { syscall; Low latency system call }
  return result;
}
