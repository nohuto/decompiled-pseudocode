/*
 * XREFs of VfZwCreateTransactionManager @ 0x140755B70
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckObjectAttributes @ 0x140758724 (ViZwCheckObjectAttributes.c)
 *     ViZwCheckUnicodeString @ 0x140758770 (ViZwCheckUnicodeString.c)
 *     ViZwCheckVirtualAddress @ 0x1407587F0 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x14075882C (ViZwShouldCheck.c)
 */

NTSTATUS __fastcall VfZwCreateTransactionManager(
        HANDLE *a1,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        UNICODE_STRING *a4,
        ULONG a5,
        ULONG a6)
{
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress((int)a1, (int)retaddr);
    ViZwCheckObjectAttributes(ObjectAttributes, retaddr);
    ViZwCheckUnicodeString((int)a4, (int)retaddr);
  }
  return pXdvZwCreateTransactionManager(a1, DesiredAccess, ObjectAttributes, a4, a5, a6);
}
