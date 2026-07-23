/*
 * XREFs of ZwSetInformationTransaction @ 0x140181FF0
 * Callers:
 *     VfZwSetInformationTransaction @ 0x14075812C (VfZwSetInformationTransaction.c)
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
