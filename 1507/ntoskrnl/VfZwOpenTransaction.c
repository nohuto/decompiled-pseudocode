/*
 * XREFs of VfZwOpenTransaction @ 0x140756AE4
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckObjectAttributes @ 0x140758724 (ViZwCheckObjectAttributes.c)
 *     ViZwCheckVirtualAddress @ 0x1407587F0 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x14075882C (ViZwShouldCheck.c)
 */

NTSTATUS __fastcall VfZwOpenTransaction(
        HANDLE *a1,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        GUID *a4,
        void *a5)
{
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress((int)a1, (int)retaddr);
    ViZwCheckVirtualAddress((int)a4, (int)retaddr);
    ViZwCheckObjectAttributes(ObjectAttributes, retaddr);
  }
  return pXdvZwOpenTransaction(a1, DesiredAccess, ObjectAttributes, a4, a5);
}
