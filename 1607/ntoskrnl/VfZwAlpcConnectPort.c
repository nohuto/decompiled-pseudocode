/*
 * XREFs of VfZwAlpcConnectPort @ 0x14071D4E4
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckObjectAttributes @ 0x140720D1C (ViZwCheckObjectAttributes.c)
 *     ViZwCheckUnicodeString @ 0x140720D68 (ViZwCheckUnicodeString.c)
 *     ViZwCheckVirtualAddress @ 0x140720DF8 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x140720E38 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwAlpcConnectPort(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11)
{
  void *retaddr; // [rsp+88h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(a1, (int)retaddr);
    ViZwCheckVirtualAddress(a4, (int)retaddr);
    ViZwCheckVirtualAddress(a6, (int)retaddr);
    ViZwCheckVirtualAddress(a7, (int)retaddr);
    ViZwCheckVirtualAddress(a8, (int)retaddr);
    ViZwCheckVirtualAddress(a9, (int)retaddr);
    ViZwCheckVirtualAddress(a10, (int)retaddr);
    ViZwCheckVirtualAddress(a11, (int)retaddr);
    ViZwCheckObjectAttributes(a3, retaddr);
    ViZwCheckUnicodeString(a2, (int)retaddr);
  }
  return pXdvZwAlpcConnectPort(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}
