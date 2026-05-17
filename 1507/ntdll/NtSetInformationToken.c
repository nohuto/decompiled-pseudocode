/*
 * XREFs of NtSetInformationToken @ 0x1800950F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtSetInformationToken()
{
  __int64 result; // rax

  result = 383LL;
  __asm { syscall; Low latency system call }
  return result;
}
