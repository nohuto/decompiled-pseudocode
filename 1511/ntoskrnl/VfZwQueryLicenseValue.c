/*
 * XREFs of VfZwQueryLicenseValue @ 0x1406D3AE8
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckUnicodeString @ 0x1406D4B9C (ViZwCheckUnicodeString.c)
 *     ViZwCheckVirtualAddress @ 0x1406D4C1C (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x1406D4C58 (ViZwShouldCheck.c)
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
