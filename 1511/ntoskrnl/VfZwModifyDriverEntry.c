/*
 * XREFs of VfZwModifyDriverEntry @ 0x1406D27DC
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x1406D4C1C (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x1406D4C58 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwModifyDriverEntry(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
    ViZwCheckVirtualAddress(a1, (int)retaddr);
  return pXdvZwModifyDriverEntry(a1, v2, v3);
}
