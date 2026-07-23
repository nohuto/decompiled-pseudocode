/*
 * XREFs of ZwQueryInformationTransaction @ 0x140181670
 * Callers:
 *     VfZwQueryInformationTransaction @ 0x140757500 (VfZwQueryInformationTransaction.c)
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
