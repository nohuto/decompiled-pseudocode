/*
 * XREFs of ZwSetInformationTransaction @ 0x140153680
 * Callers:
 *     VfZwSetInformationTransaction @ 0x1406D4564 (VfZwSetInformationTransaction.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetInformationTransaction(
        HANDLE TransactionHandle,
        TRANSACTION_INFORMATION_CLASS TransactionInformationClass,
        PVOID TransactionInformation,
        ULONG TransactionInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TransactionHandle);
}
