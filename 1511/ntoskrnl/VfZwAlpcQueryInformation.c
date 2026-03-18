/*
 * XREFs of VfZwAlpcQueryInformation @ 0x1406D164C
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x1406D4C1C (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x1406D4C58 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwAlpcQueryInformation(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, int a5)
{
  int v8; // r8d
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(v8, (int)retaddr);
    ViZwCheckVirtualAddress(a5, (int)retaddr);
  }
  return pXdvZwAlpcQueryInformation(a1, a2, a3);
}
