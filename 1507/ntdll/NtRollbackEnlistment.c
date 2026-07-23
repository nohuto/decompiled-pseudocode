/*
 * XREFs of NtRollbackEnlistment @ 0x180094F40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtRollbackEnlistment(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  NTSTATUS result; // eax

  result = 356;
  __asm { syscall; Low latency system call }
  return result;
}
