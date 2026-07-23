/*
 * XREFs of ZwSetInformationTransactionManager @ 0x14015D330
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetInformationTransactionManager(
        HANDLE TmHandle,
        TRANSACTIONMANAGER_INFORMATION_CLASS TransactionManagerInformationClass,
        PVOID TransactionManagerInformation,
        ULONG TransactionManagerInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TmHandle);
}
