/*
 * XREFs of VfZwDuplicateToken @ 0x14071E3D8
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckObjectAttributes @ 0x140720D1C (ViZwCheckObjectAttributes.c)
 *     ViZwCheckVirtualAddress @ 0x140720DF8 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x140720E38 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwDuplicateToken(__int64 a1, unsigned int a2, __int64 a3, char a4, __int64 a5, __int64 a6)
{
  __int64 v10; // r8
  __int64 v11; // r9
  void *retaddr; // [rsp+48h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckObjectAttributes(v10, retaddr);
    ViZwCheckVirtualAddress(a6, (int)retaddr);
  }
  LOBYTE(v11) = a4;
  return pXdvZwDuplicateToken(a1, a2, a3, v11, a5, a6);
}
