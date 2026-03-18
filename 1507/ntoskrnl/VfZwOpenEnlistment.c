/*
 * XREFs of VfZwOpenEnlistment @ 0x14075650C
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckObjectAttributes @ 0x140758724 (ViZwCheckObjectAttributes.c)
 *     ViZwCheckVirtualAddress @ 0x1407587F0 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x14075882C (ViZwShouldCheck.c)
 */

NTSTATUS __fastcall VfZwOpenEnlistment(
        HANDLE *a1,
        ACCESS_MASK DesiredAccess,
        HANDLE RmHandle,
        LPGUID EnlistmentGuid,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  void *retaddr; // [rsp+48h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress((int)a1, (int)retaddr);
    ViZwCheckObjectAttributes(ObjectAttributes, retaddr);
  }
  return pXdvZwOpenEnlistment(a1, DesiredAccess, RmHandle, EnlistmentGuid, ObjectAttributes);
}
