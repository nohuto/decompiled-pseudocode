/*
 * XREFs of VfZwQueryDefaultLocale @ 0x14071F4BC
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x140720DF8 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x140720E38 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwQueryDefaultLocale(char a1, __int64 a2)
{
  __int64 v4; // rcx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
    ViZwCheckVirtualAddress(a2, (int)retaddr);
  LOBYTE(v4) = a1;
  return pXdvZwQueryDefaultLocale(v4, a2);
}
