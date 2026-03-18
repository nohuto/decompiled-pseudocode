/*
 * XREFs of VfZwCreateSection @ 0x1406D1D50
 * Callers:
 *     <none>
 * Callees:
 *     VfCheckPageProtection @ 0x1406B818C (VfCheckPageProtection.c)
 *     ViZwCheckObjectAttributes @ 0x1406D4B50 (ViZwCheckObjectAttributes.c)
 *     ViZwCheckVirtualAddress @ 0x1406D4C1C (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x1406D4C58 (ViZwShouldCheck.c)
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
