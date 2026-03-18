/*
 * XREFs of VfZwAddDriverEntry @ 0x140754CB4
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x1407587F0 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x14075882C (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwAddDriverEntry(__int64 a1, __int64 a2)
{
  __int64 v4; // r8
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(a1, (int)retaddr);
    ViZwCheckVirtualAddress(a2, (int)retaddr);
  }
  return pXdvZwAddDriverEntry(a1, a2, v4);
}
