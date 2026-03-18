/*
 * XREFs of VfZwQueryDirectoryObject @ 0x14071F604
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x140720DF8 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x140720E38 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwQueryDirectoryObject(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        char a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v11; // r9
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(a2, (int)retaddr);
    ViZwCheckVirtualAddress(a6, (int)retaddr);
    ViZwCheckVirtualAddress(a7, (int)retaddr);
  }
  LOBYTE(v11) = a4;
  return pXdvZwQueryDirectoryObject(a1, a2, a3, v11, a5, a6, a7);
}
