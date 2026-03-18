/*
 * XREFs of MiInitializeZeroPagePtes @ 0x140130700
 * Callers:
 *     MiZeroPageThread @ 0x1401307A0 (MiZeroPageThread.c)
 * Callees:
 *     MiReservePtes @ 0x140049FD0 (MiReservePtes.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

ULONG_PTR __fastcall MiInitializeZeroPagePtes(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // rdi
  ULONG_PTR result; // rax
  _QWORD *v6; // rbx
  _QWORD *v7; // rdi

  v4 = 256LL;
  result = MiReservePtes((__int64)&qword_1402FF7B0, 0x100u, a3);
  v6 = (_QWORD *)result;
  if ( result )
  {
    *(_QWORD *)(a1 + 5152) = result;
    do
    {
      *v6 = 0LL;
      if ( (unsigned int)MiPteInShadowRange(v6) )
        MiWritePteShadow(v6, 0LL);
      ++v6;
      --v4;
    }
    while ( v4 );
    v7 = *(_QWORD **)(a1 + 5152);
    *v7 = 0x10000000000LL;
    if ( (unsigned int)MiPteInShadowRange(v7) )
      MiWritePteShadow(v7, 0x10000000000LL);
    return 1LL;
  }
  return result;
}
