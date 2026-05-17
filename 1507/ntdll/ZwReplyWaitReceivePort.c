/*
 * XREFs of ZwReplyWaitReceivePort @ 0x1800939B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwReplyWaitReceivePort()
{
  __int64 result; // rax

  result = 11LL;
  __asm { syscall; Low latency system call }
  return result;
}
