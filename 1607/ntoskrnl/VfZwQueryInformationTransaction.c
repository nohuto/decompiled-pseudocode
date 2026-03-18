/*
 * XREFs of VfZwQueryInformationTransaction @ 0x14071FB04
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x140720DF8 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x140720E38 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwQueryInformationTransaction(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5)
{
  int v9; // r8d
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(v9, (int)retaddr);
    ViZwCheckVirtualAddress(a5, (int)retaddr);
  }
  return pXdvZwQueryInformationTransaction(a1, a2, a3, a4, a5);
}
