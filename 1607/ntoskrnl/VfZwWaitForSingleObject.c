/*
 * XREFs of VfZwWaitForSingleObject @ 0x140720B74
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x140720DF8 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x140720E38 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwWaitForSingleObject(__int64 a1, char a2, __int64 a3)
{
  __int64 v6; // rdx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
    ViZwCheckVirtualAddress(a3, (int)retaddr);
  LOBYTE(v6) = a2;
  return pXdvZwWaitForSingleObject(a1, v6, a3);
}
