/*
 * XREFs of VfZwSetBootEntryOrder @ 0x140720380
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x140720DF8 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x140720E38 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwSetBootEntryOrder(__int64 a1, unsigned int a2)
{
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
    ViZwCheckVirtualAddress(a1, (int)retaddr);
  return pXdvZwSetBootEntryOrder(a1, a2);
}
