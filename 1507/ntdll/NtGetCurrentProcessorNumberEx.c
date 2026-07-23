/*
 * XREFs of NtGetCurrentProcessorNumberEx @ 0x180094750
 * Callers:
 *     RtlGetCurrentProcessorNumberEx @ 0x180093520 (RtlGetCurrentProcessorNumberEx.c)
 * Callees:
 *     <none>
 */

ULONG __cdecl NtGetCurrentProcessorNumberEx(PPROCESSOR_NUMBER ProcessorNumber)
{
  ULONG result; // eax

  result = 229;
  __asm { syscall; Low latency system call }
  return result;
}
