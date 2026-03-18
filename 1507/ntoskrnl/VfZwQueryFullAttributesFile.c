/*
 * XREFs of VfZwQueryFullAttributesFile @ 0x1407571B0
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckObjectAttributes @ 0x140758724 (ViZwCheckObjectAttributes.c)
 *     ViZwCheckVirtualAddress @ 0x1407587F0 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x14075882C (ViZwShouldCheck.c)
 */

NTSTATUS __fastcall VfZwQueryFullAttributesFile(
        POBJECT_ATTRIBUTES ObjectAttributes,
        struct _FILE_NETWORK_OPEN_INFORMATION *a2)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckObjectAttributes(ObjectAttributes, retaddr);
    ViZwCheckVirtualAddress((int)a2, (int)retaddr);
  }
  return pXdvZwQueryFullAttributesFile(ObjectAttributes, a2);
}
