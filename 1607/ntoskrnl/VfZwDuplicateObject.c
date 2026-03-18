/*
 * XREFs of VfZwDuplicateObject @ 0x14071E378
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x140720DF8 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x140720E38 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwDuplicateObject(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
    ViZwCheckVirtualAddress(a4, (int)retaddr);
  return pXdvZwDuplicateObject(a1, a2, a3, a4);
}
