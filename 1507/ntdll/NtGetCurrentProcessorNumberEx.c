/*
 * XREFs of NtGetCurrentProcessorNumberEx @ 0x180094750
 * Callers:
 *     RtlGetCurrentProcessorNumberEx @ 0x180093520 (RtlGetCurrentProcessorNumberEx.c)
 * Callees:
 *     <none>
 */

__int64 NtGetCurrentProcessorNumberEx()
{
  __int64 result; // rax

  result = 229LL;
  __asm { syscall; Low latency system call }
  return result;
}
