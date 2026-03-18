/*
 * XREFs of VfZwOpenTransactionManager @ 0x14071F16C
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckObjectAttributes @ 0x140720D1C (ViZwCheckObjectAttributes.c)
 *     ViZwCheckUnicodeString @ 0x140720D68 (ViZwCheckUnicodeString.c)
 *     ViZwCheckVirtualAddress @ 0x140720DF8 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x140720E38 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwOpenTransactionManager(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5)
{
  void *retaddr; // [rsp+48h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckVirtualAddress(a1, (int)retaddr);
    ViZwCheckObjectAttributes(a3, retaddr);
    ViZwCheckUnicodeString(a4, (int)retaddr);
    ViZwCheckVirtualAddress(a5, (int)retaddr);
  }
  return pXdvZwOpenTransactionManager(a1, a2, a3, a4, a5);
}
