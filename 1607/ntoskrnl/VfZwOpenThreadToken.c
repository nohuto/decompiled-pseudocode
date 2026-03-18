/*
 * XREFs of VfZwOpenThreadToken @ 0x14071EFB8
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x140720DF8 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x140720E38 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwOpenThreadToken(__int64 a1, unsigned int a2, char a3, __int64 a4)
{
  __int64 v8; // r8
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
    ViZwCheckVirtualAddress(a4, (int)retaddr);
  LOBYTE(v8) = a3;
  return pXdvZwOpenThreadToken(a1, a2, v8, a4);
}
