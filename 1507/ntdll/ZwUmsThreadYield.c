/*
 * XREFs of ZwUmsThreadYield @ 0x180095380
 * Callers:
 *     RtlUmsThreadYield @ 0x1800DE320 (RtlUmsThreadYield.c)
 * Callees:
 *     <none>
 */

__int64 ZwUmsThreadYield()
{
  __int64 result; // rax

  result = 424LL;
  __asm { syscall; Low latency system call }
  return result;
}
