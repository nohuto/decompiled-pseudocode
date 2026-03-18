/*
 * XREFs of VfZwQuerySection @ 0x14071FDC8
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x140720DF8 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x140720E38 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwQuerySection(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v9; // r8d
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(v9, (int)retaddr);
    ViZwCheckVirtualAddress(a5, (int)retaddr);
  }
  return pXdvZwQuerySection(a1, a2, a3, a4, a5);
}
