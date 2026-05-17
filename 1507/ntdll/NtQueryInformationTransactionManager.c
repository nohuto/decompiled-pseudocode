/*
 * XREFs of NtQueryInformationTransactionManager @ 0x180094C50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtQueryInformationTransactionManager()
{
  __int64 result; // rax

  result = 309LL;
  __asm { syscall; Low latency system call }
  return result;
}
