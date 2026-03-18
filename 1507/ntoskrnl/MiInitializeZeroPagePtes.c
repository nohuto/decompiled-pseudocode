/*
 * XREFs of MiInitializeZeroPagePtes @ 0x140597BAC
 * Callers:
 *     MiZeroPageThread @ 0x14015FE90 (MiZeroPageThread.c)
 * Callees:
 *     MiReservePtes @ 0x1400AAD50 (MiReservePtes.c)
 *     MiPteInShadowRange @ 0x140225548 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiMakePageFilePte @ 0x140225C2C (MiMakePageFilePte.c)
 */

__int64 *__fastcall MiInitializeZeroPagePtes(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 *result; // rax
  _QWORD *v5; // rbx
  __int64 v6; // rdi
  __int64 PageFilePte; // rax
  __int64 *v8; // rdi
  __int64 v9; // rbx

  result = MiReservePtes((__int64)&qword_14034FC70, 0x100u, a3);
  v5 = result;
  if ( result )
  {
    *(_QWORD *)(a1 + 4824) = result;
    v6 = 256LL;
    do
    {
      *v5 = 0LL;
      if ( MiPteInShadowRange((__int64)v5) )
        MiWritePteShadow((__int64)v5, 0LL);
      ++v5;
      --v6;
    }
    while ( v6 );
    PageFilePte = MiMakePageFilePte(256LL);
    v8 = *(__int64 **)(a1 + 4824);
    v9 = PageFilePte;
    *v8 = PageFilePte;
    if ( MiPteInShadowRange((__int64)v8) )
      MiWritePteShadow((__int64)v8, v9);
    return (__int64 *)1;
  }
  return result;
}
