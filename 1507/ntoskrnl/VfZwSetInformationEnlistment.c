/*
 * XREFs of VfZwSetInformationEnlistment @ 0x140757EE8
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x1407587F0 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x14075882C (ViZwShouldCheck.c)
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
