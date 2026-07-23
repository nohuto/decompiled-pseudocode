/*
 * XREFs of NtRecoverTransactionManager @ 0x180094E10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtRecoverTransactionManager(HANDLE TransactionManagerHandle)
{
  NTSTATUS result; // eax

  result = 337;
  __asm { syscall; Low latency system call }
  return result;
}
