/*
 * XREFs of VfZwCreateFile @ 0x14071DD20
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckObjectAttributes @ 0x140720D1C (ViZwCheckObjectAttributes.c)
 *     ViZwCheckVirtualAddress @ 0x140720DF8 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x140720E38 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwCreateFile(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  void *retaddr; // [rsp+78h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(a1, (int)retaddr);
    ViZwCheckObjectAttributes(a3, retaddr);
    ViZwCheckVirtualAddress(a4, (int)retaddr);
    ViZwCheckVirtualAddress(a5, (int)retaddr);
    ViZwCheckVirtualAddress(a10, (int)retaddr);
  }
  return pXdvZwCreateFile(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
}
