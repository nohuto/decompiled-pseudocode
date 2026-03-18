/*
 * XREFs of VfZwQueryDirectoryFile @ 0x14071F52C
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckApcRequirement @ 0x140720CBC (ViZwCheckApcRequirement.c)
 *     ViZwCheckUnicodeString @ 0x140720D68 (ViZwCheckUnicodeString.c)
 *     ViZwCheckVirtualAddress @ 0x140720DF8 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x140720E38 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwQueryDirectoryFile(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  int v14; // r8d
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(v14, (int)retaddr);
    ViZwCheckVirtualAddress(a4, (int)retaddr);
    ViZwCheckVirtualAddress(a5, (int)retaddr);
    ViZwCheckVirtualAddress(a6, (int)retaddr);
    ViZwCheckUnicodeString(a10, (int)retaddr);
    ViZwCheckApcRequirement((int)retaddr);
  }
  return pXdvZwQueryDirectoryFile(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
}
