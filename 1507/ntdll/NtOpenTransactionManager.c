/*
 * XREFs of NtOpenTransactionManager @ 0x180094AC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtOpenTransactionManager()
{
  __int64 result; // rax

  result = 284LL;
  __asm { syscall; Low latency system call }
  return result;
}
