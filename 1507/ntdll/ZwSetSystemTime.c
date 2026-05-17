/*
 * XREFs of ZwSetSystemTime @ 0x180095200
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwSetSystemTime()
{
  __int64 result; // rax

  result = 400LL;
  __asm { syscall; Low latency system call }
  return result;
}
