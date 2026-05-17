/*
 * XREFs of NtCreateUserProcess @ 0x1800944A0
 * Callers:
 *     RtlpCreateUserProcess @ 0x180080478 (RtlpCreateUserProcess.c)
 * Callees:
 *     <none>
 */

__int64 NtCreateUserProcess()
{
  __int64 result; // rax

  result = 186LL;
  __asm { syscall; Low latency system call }
  return result;
}
