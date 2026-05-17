/*
 * XREFs of ZwUnloadDriver @ 0x180095390
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwUnloadDriver()
{
  __int64 result; // rax

  result = 425LL;
  __asm { syscall; Low latency system call }
  return result;
}
