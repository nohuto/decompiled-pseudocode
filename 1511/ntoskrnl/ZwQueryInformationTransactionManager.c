/*
 * XREFs of ZwQueryInformationTransactionManager @ 0x140152D20
 * Callers:
 *     VfZwQueryInformationTransactionManager @ 0x1406D39B8 (VfZwQueryInformationTransactionManager.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryInformationTransactionManager(
        HANDLE TransactionManagerHandle,
        TRANSACTIONMANAGER_INFORMATION_CLASS TransactionManagerInformationClass,
        PVOID TransactionManagerInformation,
        ULONG TransactionManagerInformationLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TransactionManagerHandle);
}
