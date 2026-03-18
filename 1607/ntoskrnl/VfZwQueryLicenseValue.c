/*
 * XREFs of VfZwQueryLicenseValue @ 0x14071FCB4
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckUnicodeString @ 0x140720D68 (ViZwCheckUnicodeString.c)
 *     ViZwCheckVirtualAddress @ 0x140720DF8 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x140720E38 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwQueryLicenseValue(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(a2, (int)retaddr);
    ViZwCheckVirtualAddress(a3, (int)retaddr);
    ViZwCheckVirtualAddress(a5, (int)retaddr);
    ViZwCheckUnicodeString(a1, (int)retaddr);
  }
  return pXdvZwQueryLicenseValue(a1, a2, a3, a4, a5);
}
