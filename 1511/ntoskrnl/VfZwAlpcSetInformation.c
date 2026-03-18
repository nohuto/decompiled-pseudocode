/*
 * XREFs of VfZwAlpcSetInformation @ 0x1406D17B8
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x1406D4C1C (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x1406D4C58 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwAlpcSetInformation(__int64 a1, unsigned int a2, __int64 a3)
{
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
    ViZwCheckVirtualAddress(a3, (int)retaddr);
  return pXdvZwAlpcSetInformation(a1, a2, a3);
}
