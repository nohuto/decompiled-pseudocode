/*
 * XREFs of VfZwAlpcCreateResourceReserve @ 0x1406D1558
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x1406D4C1C (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x1406D4C58 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwAlpcCreateResourceReserve(__int64 a1, unsigned int a2, __int64 a3, int a4)
{
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
    ViZwCheckVirtualAddress(a4, (int)retaddr);
  return pXdvZwAlpcCreateResourceReserve(a1, a2, a3);
}
