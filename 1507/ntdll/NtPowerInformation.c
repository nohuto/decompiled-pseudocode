/*
 * XREFs of NtPowerInformation @ 0x180093EF0
 * Callers:
 *     RtlpCreateExecutionRequiredRequest @ 0x1800EA934 (RtlpCreateExecutionRequiredRequest.c)
 *     RtlpDestroyExecutionRequiredRequest @ 0x1800EAA34 (RtlpDestroyExecutionRequiredRequest.c)
 * Callees:
 *     <none>
 */

__int64 NtPowerInformation()
{
  __int64 result; // rax

  result = 95LL;
  __asm { syscall; Low latency system call }
  return result;
}
