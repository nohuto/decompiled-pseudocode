/*
 * XREFs of ZwStopProfile @ 0x1800952D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwStopProfile()
{
  __int64 result; // rax

  result = 413LL;
  __asm { syscall; Low latency system call }
  return result;
}
