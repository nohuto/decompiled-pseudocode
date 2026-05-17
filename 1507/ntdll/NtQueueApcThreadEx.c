/*
 * XREFs of NtQueueApcThreadEx @ 0x180094DB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtQueueApcThreadEx()
{
  __int64 result; // rax

  result = 331LL;
  __asm { syscall; Low latency system call }
  return result;
}
