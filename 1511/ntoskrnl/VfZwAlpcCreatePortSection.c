/*
 * XREFs of VfZwAlpcCreatePortSection @ 0x1406D14C4
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x1406D4C1C (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x1406D4C58 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwAlpcCreatePortSection(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, int a5, int a6)
{
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(a5, (int)retaddr);
    ViZwCheckVirtualAddress(a6, (int)retaddr);
  }
  return pXdvZwAlpcCreatePortSection(a1, a2, a3);
}
