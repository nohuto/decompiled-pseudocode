/*
 * XREFs of ZwSetIoCompletion @ 0x180095150
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwSetIoCompletion()
{
  __int64 result; // rax

  result = 389LL;
  __asm { syscall; Low latency system call }
  return result;
}
