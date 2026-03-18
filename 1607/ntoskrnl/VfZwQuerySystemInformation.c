/*
 * XREFs of VfZwQuerySystemInformation @ 0x14071FF30
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x140720DF8 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x140720E38 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwQuerySystemInformation(unsigned int a1, __int64 a2, unsigned int a3, __int64 a4)
{
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(a2, (int)retaddr);
    ViZwCheckVirtualAddress(a4, (int)retaddr);
  }
  return pXdvZwQuerySystemInformation(a1, a2, a3, a4);
}
