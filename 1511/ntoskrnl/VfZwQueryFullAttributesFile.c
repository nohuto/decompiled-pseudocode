/*
 * XREFs of VfZwQueryFullAttributesFile @ 0x1406D35E8
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckObjectAttributes @ 0x1406D4B50 (ViZwCheckObjectAttributes.c)
 *     ViZwCheckVirtualAddress @ 0x1406D4C1C (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x1406D4C58 (ViZwShouldCheck.c)
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
