/*
 * XREFs of NtPrePrepareEnlistment @ 0x180094AF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtPrePrepareEnlistment(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  NTSTATUS result; // eax

  result = 287;
  __asm { syscall; Low latency system call }
  return result;
}
