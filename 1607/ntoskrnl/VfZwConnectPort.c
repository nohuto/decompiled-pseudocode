/*
 * XREFs of VfZwConnectPort @ 0x14071DACC
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckUnicodeString @ 0x140720D68 (ViZwCheckUnicodeString.c)
 *     ViZwCheckVirtualAddress @ 0x140720DF8 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x140720E38 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwConnectPort(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(a1, (int)retaddr);
    ViZwCheckUnicodeString(a2, (int)retaddr);
    ViZwCheckVirtualAddress(a3, (int)retaddr);
    ViZwCheckVirtualAddress(a4, (int)retaddr);
    ViZwCheckVirtualAddress(a5, (int)retaddr);
    ViZwCheckVirtualAddress(a6, (int)retaddr);
    ViZwCheckVirtualAddress(a7, (int)retaddr);
    ViZwCheckVirtualAddress(a8, (int)retaddr);
  }
  return pXdvZwConnectPort(a1, a2, a3, a4, a5, a6, a7, a8);
}
