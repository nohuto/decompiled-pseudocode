/*
 * XREFs of NtQueryInformationEnlistment @ 0x180094C00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtQueryInformationEnlistment()
{
  __int64 result; // rax

  result = 304LL;
  __asm { syscall; Low latency system call }
  return result;
}
