/*
 * XREFs of VfZwOpenSymbolicLinkObject @ 0x1406D2D04
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckObjectAttributes @ 0x1406D4B50 (ViZwCheckObjectAttributes.c)
 *     ViZwCheckVirtualAddress @ 0x1406D4C1C (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x1406D4C58 (ViZwShouldCheck.c)
 */

NTSTATUS __fastcall VfZwOpenSymbolicLinkObject(
        HANDLE *a1,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress((int)a1, (int)retaddr);
    ViZwCheckObjectAttributes(ObjectAttributes, retaddr);
  }
  return pXdvZwOpenSymbolicLinkObject(a1, DesiredAccess, ObjectAttributes);
}
