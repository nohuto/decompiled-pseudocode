/*
 * XREFs of NtEnumerateTransactionObject @ 0x180094620
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtEnumerateTransactionObject()
{
  __int64 result; // rax

  result = 210LL;
  __asm { syscall; Low latency system call }
  return result;
}
