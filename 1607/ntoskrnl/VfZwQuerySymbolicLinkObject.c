/*
 * XREFs of VfZwQuerySymbolicLinkObject @ 0x14071FEC8
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckUnicodeString @ 0x140720D68 (ViZwCheckUnicodeString.c)
 *     ViZwCheckVirtualAddress @ 0x140720DF8 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x140720E38 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwQuerySymbolicLinkObject(__int64 a1, __int64 a2, __int64 a3)
{
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckUnicodeString(a2, (int)retaddr);
    ViZwCheckVirtualAddress(a3, (int)retaddr);
  }
  return pXdvZwQuerySymbolicLinkObject(a1, a2, a3);
}
