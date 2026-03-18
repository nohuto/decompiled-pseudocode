/*
 * XREFs of VfZwAlpcCreatePortSection @ 0x14071D66C
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x140720DF8 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x140720E38 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwAlpcCreatePortSection(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(a5, (int)retaddr);
    ViZwCheckVirtualAddress(a6, (int)retaddr);
  }
  return pXdvZwAlpcCreatePortSection(a1, a2, a3, a4, a5, a6);
}
