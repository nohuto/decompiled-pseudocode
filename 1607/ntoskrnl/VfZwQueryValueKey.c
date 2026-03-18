/*
 * XREFs of VfZwQueryValueKey @ 0x14071FFA8
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckUnicodeString @ 0x140720D68 (ViZwCheckUnicodeString.c)
 *     ViZwCheckVirtualAddress @ 0x140720DF8 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x140720E38 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwQueryValueKey(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5, __int64 a6)
{
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckUnicodeString(a2, (int)retaddr);
    ViZwCheckVirtualAddress(a4, (int)retaddr);
    ViZwCheckVirtualAddress(a6, (int)retaddr);
  }
  return pXdvZwQueryValueKey(a1, a2, a3, a4, a5, a6);
}
