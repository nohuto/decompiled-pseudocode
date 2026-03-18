/*
 * XREFs of VfZwModifyBootEntry @ 0x140756374
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x1407587F0 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x14075882C (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwModifyBootEntry(__int64 a1)
{
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
    ViZwCheckVirtualAddress(a1, (int)retaddr);
  return pXdvZwModifyBootEntry(a1);
}
