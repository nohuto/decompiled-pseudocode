/*
 * XREFs of NtSetInformationEnlistment @ 0x1800950A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtSetInformationEnlistment()
{
  __int64 result; // rax

  result = 378LL;
  __asm { syscall; Low latency system call }
  return result;
}
