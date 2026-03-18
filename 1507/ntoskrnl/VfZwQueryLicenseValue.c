/*
 * XREFs of VfZwQueryLicenseValue @ 0x1407576B0
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckUnicodeString @ 0x140758770 (ViZwCheckUnicodeString.c)
 *     ViZwCheckVirtualAddress @ 0x1407587F0 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x14075882C (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwQueryLicenseValue(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(a2, (int)retaddr);
    ViZwCheckVirtualAddress(a3, (int)retaddr);
    ViZwCheckVirtualAddress(a5, (int)retaddr);
    ViZwCheckUnicodeString(a1, (int)retaddr);
  }
  return pXdvZwQueryLicenseValue(a1, a2, a3);
}
