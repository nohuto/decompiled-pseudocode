/*
 * XREFs of VfZwSetInformationTransaction @ 0x14075812C
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x1407587F0 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x14075882C (ViZwShouldCheck.c)
 */

NTSTATUS __fastcall VfZwSetInformationTransaction(
        HANDLE TransactionHandle,
        TRANSACTION_INFORMATION_CLASS TransactionInformationClass,
        void *a3,
        ULONG TransactionInformationLength)
{
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
    ViZwCheckVirtualAddress((int)a3, (int)retaddr);
  return pXdvZwSetInformationTransaction(
           TransactionHandle,
           TransactionInformationClass,
           a3,
           TransactionInformationLength);
}
