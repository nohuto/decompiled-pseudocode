/*
 * XREFs of NtReplyWaitReplyPort @ 0x180094EC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtReplyWaitReplyPort()
{
  __int64 result; // rax

  result = 348LL;
  __asm { syscall; Low latency system call }
  return result;
}
