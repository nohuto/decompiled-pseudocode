/*
 * XREFs of VfZwOpenThreadTokenEx @ 0x14071F014
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x140720DF8 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x140720E38 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwOpenThreadTokenEx(__int64 a1, unsigned int a2, char a3, unsigned int a4, __int64 a5)
{
  __int64 v9; // r8
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
    ViZwCheckVirtualAddress(a5, (int)retaddr);
  LOBYTE(v9) = a3;
  return pXdvZwOpenThreadTokenEx(a1, a2, v9, a4, a5);
}
