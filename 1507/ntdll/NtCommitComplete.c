/*
 * XREFs of NtCommitComplete @ 0x180094210
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtCommitComplete(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  NTSTATUS result; // eax

  result = 145;
  __asm { syscall; Low latency system call }
  return result;
}
