/*
 * XREFs of ZwReplyWaitReceivePortEx @ 0x180093BB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwReplyWaitReceivePortEx()
{
  __int64 result; // rax

  result = 43LL;
  __asm { syscall; Low latency system call }
  return result;
}
