/*
 * XREFs of VfZwAlpcCreatePortSection @ 0x14075508C
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x1407587F0 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x14075882C (ViZwShouldCheck.c)
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
