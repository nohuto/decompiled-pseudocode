/*
 * XREFs of VfZwCreateKey @ 0x140755864
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckObjectAttributes @ 0x140758724 (ViZwCheckObjectAttributes.c)
 *     ViZwCheckUnicodeString @ 0x140758770 (ViZwCheckUnicodeString.c)
 *     ViZwCheckVirtualAddress @ 0x1407587F0 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x14075882C (ViZwShouldCheck.c)
 */

NTSTATUS __fastcall VfZwCreateKey(
        HANDLE *a1,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG TitleIndex,
        PUNICODE_STRING Class,
        ULONG a6,
        PULONG Disposition)
{
  void *retaddr; // [rsp+58h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress((int)a1, (int)retaddr);
    ViZwCheckObjectAttributes(ObjectAttributes, retaddr);
    ViZwCheckUnicodeString((int)Class, (int)retaddr);
    ViZwCheckVirtualAddress((int)Disposition, (int)retaddr);
  }
  return pXdvZwCreateKey(a1, DesiredAccess, ObjectAttributes, TitleIndex, Class, a6, Disposition);
}
