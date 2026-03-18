/*
 * XREFs of VfZwQueryEaFile @ 0x14071F708
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x140720DF8 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x140720E38 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwQueryEaFile(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  int v12; // r8d
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(v12, (int)retaddr);
    ViZwCheckVirtualAddress(a6, (int)retaddr);
    ViZwCheckVirtualAddress(a8, (int)retaddr);
  }
  return pXdvZwQueryEaFile(a1, a2, a3, a4, a5, a6, a7, a8);
}
