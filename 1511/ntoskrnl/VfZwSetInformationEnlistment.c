/*
 * XREFs of VfZwSetInformationEnlistment @ 0x1406D4320
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x1406D4C1C (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x1406D4C58 (ViZwShouldCheck.c)
 */

NTSTATUS __fastcall VfZwSetInformationEnlistment(
        HANDLE EnlistmentHandle,
        ENLISTMENT_INFORMATION_CLASS EnlistmentInformationClass,
        void *a3,
        ULONG EnlistmentInformationLength)
{
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
    ViZwCheckVirtualAddress((int)a3, (int)retaddr);
  return pXdvZwSetInformationEnlistment(EnlistmentHandle, EnlistmentInformationClass, a3, EnlistmentInformationLength);
}
