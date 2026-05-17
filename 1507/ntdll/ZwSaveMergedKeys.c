/*
 * XREFs of ZwSaveMergedKeys @ 0x180094F90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwSaveMergedKeys()
{
  __int64 result; // rax

  result = 361LL;
  __asm { syscall; Low latency system call }
  return result;
}
