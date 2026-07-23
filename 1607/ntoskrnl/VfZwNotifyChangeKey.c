/*
 * XREFs of VfZwNotifyChangeKey @ 0x14071E9D8
 * Callers:
 *     <none>
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x14070C318 (VerifierBugCheckIfAppropriate.c)
 *     ViZwCheckVirtualAddress @ 0x140720DF8 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x140720E38 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwNotifyChangeKey(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        ULONG_PTR a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v12; // r8
  ULONG_PTR retaddr; // [rsp+68h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    if ( v12 )
    {
      ViZwCheckVirtualAddress(v12, retaddr);
      if ( (unsigned int)a4 > 6 && (unsigned int)(a4 - 32) > 0x1F )
        VerifierBugCheckIfAppropriate(0xC4u, 0xFCuLL, retaddr, a4, 0LL);
    }
    ViZwCheckVirtualAddress(a5, retaddr);
    ViZwCheckVirtualAddress(a8, retaddr);
  }
  return pXdvZwNotifyChangeKey(a1, a2, a3, a4, a5, a6, a7, a8);
}
