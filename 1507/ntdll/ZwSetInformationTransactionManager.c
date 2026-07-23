/*
 * XREFs of ZwSetInformationTransactionManager @ 0x180095110
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetInformationTransactionManager(
        HANDLE TmHandle,
        TRANSACTIONMANAGER_INFORMATION_CLASS TransactionManagerInformationClass,
        PVOID TransactionManagerInformation,
        ULONG TransactionManagerInformationLength)
{
  NTSTATUS result; // eax

  result = 385;
  __asm { syscall; Low latency system call }
  return result;
}
