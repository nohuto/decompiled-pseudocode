/*
 * XREFs of ZwSetLowEventPair @ 0x180095180
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwSetLowEventPair()
{
  __int64 result; // rax

  result = 392LL;
  __asm { syscall; Low latency system call }
  return result;
}
