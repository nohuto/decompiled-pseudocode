/*
 * XREFs of ZwPlugPlayControl @ 0x180094AD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwPlugPlayControl()
{
  __int64 result; // rax

  result = 285LL;
  __asm { syscall; Low latency system call }
  return result;
}
