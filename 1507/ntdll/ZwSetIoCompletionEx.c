/*
 * XREFs of ZwSetIoCompletionEx @ 0x180095160
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwSetIoCompletionEx()
{
  __int64 result; // rax

  result = 390LL;
  __asm { syscall; Low latency system call }
  return result;
}
