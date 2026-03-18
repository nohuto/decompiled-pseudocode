/*
 * XREFs of VfZwCreateTransaction @ 0x1406D1EE8
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckObjectAttributes @ 0x1406D4B50 (ViZwCheckObjectAttributes.c)
 *     ViZwCheckUnicodeString @ 0x1406D4B9C (ViZwCheckUnicodeString.c)
 *     ViZwCheckVirtualAddress @ 0x1406D4C1C (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x1406D4C58 (ViZwShouldCheck.c)
 */

NTSTATUS __fastcall VfZwCreateTransaction(
        HANDLE *a1,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        GUID *a4,
        void *a5,
        ULONG a6,
        ULONG a7,
        ULONG a8,
        PLARGE_INTEGER Timeout,
        PUNICODE_STRING Description)
{
  void *retaddr; // [rsp+68h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress((int)a1, (int)retaddr);
    ViZwCheckVirtualAddress((int)a4, (int)retaddr);
    ViZwCheckVirtualAddress((int)Timeout, (int)retaddr);
    ViZwCheckObjectAttributes(ObjectAttributes, retaddr);
    ViZwCheckUnicodeString((int)Description, (int)retaddr);
  }
  return pXdvZwCreateTransaction(a1, DesiredAccess, ObjectAttributes, a4, a5, a6, a7, a8, Timeout, Description);
}
