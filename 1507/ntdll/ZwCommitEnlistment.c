/*
 * XREFs of ZwCommitEnlistment @ 0x180094220
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwCommitEnlistment()
{
  __int64 result; // rax

  result = 146LL;
  __asm { syscall; Low latency system call }
  return result;
}
