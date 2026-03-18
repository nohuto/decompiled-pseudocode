/*
 * XREFs of VfZwCreateSection @ 0x140755918
 * Callers:
 *     <none>
 * Callees:
 *     VfCheckPageProtection @ 0x1407386B0 (VfCheckPageProtection.c)
 *     ViZwCheckObjectAttributes @ 0x140758724 (ViZwCheckObjectAttributes.c)
 *     ViZwCheckVirtualAddress @ 0x1407587F0 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x14075882C (ViZwShouldCheck.c)
 */

NTSTATUS __fastcall VfZwCreateSection(
        HANDLE *a1,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        LARGE_INTEGER *a4,
        ULONG SectionPageProtection,
        ULONG a6,
        void *a7)
{
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  VfCheckPageProtection(SectionPageProtection, retaddr);
  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress((int)a1, retaddr);
    ViZwCheckObjectAttributes(ObjectAttributes, retaddr);
    ViZwCheckVirtualAddress((int)a4, retaddr);
  }
  return pXdvZwCreateSection(a1, DesiredAccess, ObjectAttributes, a4, SectionPageProtection, a6, a7);
}
