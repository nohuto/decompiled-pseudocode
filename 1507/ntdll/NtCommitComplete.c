/*
 * XREFs of NtCommitComplete @ 0x180094210
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtCommitComplete()
{
  __int64 result; // rax

  result = 145LL;
  __asm { syscall; Low latency system call }
  return result;
}
