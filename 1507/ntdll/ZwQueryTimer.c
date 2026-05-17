/*
 * XREFs of ZwQueryTimer @ 0x180093C80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwQueryTimer()
{
  __int64 result; // rax

  result = 56LL;
  __asm { syscall; Low latency system call }
  return result;
}
