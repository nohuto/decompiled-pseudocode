/*
 * XREFs of ZwSetTimer @ 0x180093F20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwSetTimer()
{
  __int64 result; // rax

  result = 98LL;
  __asm { syscall; Low latency system call }
  return result;
}
