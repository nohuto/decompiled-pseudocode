/*
 * XREFs of ZwSetInformationTransactionManager @ 0x180095110
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwSetInformationTransactionManager()
{
  __int64 result; // rax

  result = 385LL;
  __asm { syscall; Low latency system call }
  return result;
}
