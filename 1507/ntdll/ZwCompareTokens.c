/*
 * XREFs of ZwCompareTokens @ 0x180094260
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwCompareTokens()
{
  __int64 result; // rax

  result = 150LL;
  __asm { syscall; Low latency system call }
  return result;
}
