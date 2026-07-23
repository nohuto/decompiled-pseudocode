/*
 * XREFs of ZwQueryInformationTransactionManager @ 0x140181690
 * Callers:
 *     VfZwQueryInformationTransactionManager @ 0x140757580 (VfZwQueryInformationTransactionManager.c)
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
