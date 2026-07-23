/*
 * XREFs of ZwGetCurrentProcessorNumber @ 0x180094740
 * Callers:
 *     RtlGetCurrentProcessorNumber @ 0x1800934F0 (RtlGetCurrentProcessorNumber.c)
 * Callees:
 *     <none>
 */

ULONG ZwGetCurrentProcessorNumber(void)
{
  ULONG result; // eax

  result = 228;
  __asm { syscall; Low latency system call }
  return result;
}
