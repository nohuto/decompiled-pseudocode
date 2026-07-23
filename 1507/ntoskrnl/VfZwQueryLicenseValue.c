/*
 * XREFs of VfZwQueryLicenseValue @ 0x1407576B0
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckUnicodeString @ 0x140758770 (ViZwCheckUnicodeString.c)
 *     ViZwCheckVirtualAddress @ 0x1407587F0 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x14075882C (ViZwShouldCheck.c)
 */

NTSTATUS __fastcall VfZwQueryLicenseValue(
        UNICODE_STRING *a1,
        ULONG *a2,
        void *a3,
        ULONG DataSize,
        PULONG ResultDataSize)
{
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress((int)a2, (int)retaddr);
    ViZwCheckVirtualAddress((int)a3, (int)retaddr);
    ViZwCheckVirtualAddress((int)ResultDataSize, (int)retaddr);
    ViZwCheckUnicodeString((int)a1, (int)retaddr);
  }
  return pXdvZwQueryLicenseValue(a1, a2, a3, DataSize, ResultDataSize);
}
