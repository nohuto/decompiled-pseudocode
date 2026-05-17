/*
 * XREFs of ZwSetEventBoostPriority @ 0x180093BD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwSetEventBoostPriority()
{
  __int64 result; // rax

  result = 45LL;
  __asm { syscall; Low latency system call }
  return result;
}
