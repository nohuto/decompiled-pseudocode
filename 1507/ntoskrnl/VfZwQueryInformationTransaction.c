/*
 * XREFs of VfZwQueryInformationTransaction @ 0x140757500
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x1407587F0 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x14075882C (ViZwShouldCheck.c)
 */

NTSTATUS __fastcall VfZwQueryInformationTransaction(
        HANDLE TransactionHandle,
        TRANSACTION_INFORMATION_CLASS TransactionInformationClass,
        PVOID TransactionInformation,
        ULONG TransactionInformationLength,
        PULONG ReturnLength)
{
  int v9; // r8d
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(v9, (int)retaddr);
    ViZwCheckVirtualAddress((int)ReturnLength, (int)retaddr);
  }
  return pXdvZwQueryInformationTransaction(
           TransactionHandle,
           TransactionInformationClass,
           TransactionInformation,
           TransactionInformationLength,
           ReturnLength);
}
