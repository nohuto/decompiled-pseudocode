/*
 * XREFs of ZwGetCurrentProcessorNumber @ 0x180094740
 * Callers:
 *     RtlGetCurrentProcessorNumber @ 0x1800934F0 (RtlGetCurrentProcessorNumber.c)
 * Callees:
 *     <none>
 */

__int64 ZwGetCurrentProcessorNumber()
{
  __int64 result; // rax

  result = 228LL;
  __asm { syscall; Low latency system call }
  return result;
}
