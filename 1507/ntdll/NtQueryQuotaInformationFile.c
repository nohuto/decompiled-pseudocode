/*
 * XREFs of NtQueryQuotaInformationFile @ 0x180094D00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtQueryQuotaInformationFile()
{
  __int64 result; // rax

  result = 320LL;
  __asm { syscall; Low latency system call }
  return result;
}
