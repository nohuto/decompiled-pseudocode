/*
 * XREFs of ZwQueryInformationTransaction @ 0x140152D00
 * Callers:
 *     VfZwQueryInformationTransaction @ 0x1406D3938 (VfZwQueryInformationTransaction.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryInformationTransaction(
        HANDLE TransactionHandle,
        TRANSACTION_INFORMATION_CLASS TransactionInformationClass,
        PVOID TransactionInformation,
        ULONG TransactionInformationLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TransactionHandle);
}
