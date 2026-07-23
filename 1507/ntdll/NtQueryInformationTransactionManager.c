/*
 * XREFs of NtQueryInformationTransactionManager @ 0x180094C50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtQueryInformationTransactionManager(
        HANDLE TransactionManagerHandle,
        TRANSACTIONMANAGER_INFORMATION_CLASS TransactionManagerInformationClass,
        PVOID TransactionManagerInformation,
        ULONG TransactionManagerInformationLength,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax

  result = 309;
  __asm { syscall; Low latency system call }
  return result;
}
