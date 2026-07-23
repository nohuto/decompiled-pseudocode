/*
 * XREFs of MiInitializeGapFrames @ 0x14078F08C
 * Callers:
 *     MiFillPfnGaps @ 0x14078F034 (MiFillPfnGaps.c)
 *     MiInitNucleus @ 0x1407D06B4 (MiInitNucleus.c)
 * Callees:
 *     MiFinalizePageAttribute @ 0x1400232DC (MiFinalizePageAttribute.c)
 *     MiChargeCommit @ 0x14002B1D0 (MiChargeCommit.c)
 *     MiMakeValidKernelPte @ 0x140034890 (MiMakeValidKernelPte.c)
 *     MiGetPage @ 0x14003D5D0 (MiGetPage.c)
 *     MiReleasePtes @ 0x140051250 (MiReleasePtes.c)
 *     MiReservePtes @ 0x1400DB9F0 (MiReservePtes.c)
 *     MiChargeResident @ 0x1401011D0 (MiChargeResident.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 */

__int64 __fastcall MiInitializeGapFrames(__int64 a1, __int64 *a2)
{
  __int64 v3; // rsi
  unsigned __int64 v4; // r8
  ULONG_PTR v5; // r14
  __int64 v6; // rbx
  __int64 *v7; // r15
  __int64 Page; // rax
  __int64 v9; // rdi
  unsigned __int64 ValidKernelPte; // rax
  __int64 v11; // r8
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdi
  unsigned __int64 v16; // rax

  if ( a1 )
  {
    if ( a1 != -1 )
      return 0LL;
    v3 = qword_1403276C8;
  }
  else
  {
    v3 = qword_1403276E0;
  }
  if ( !(unsigned int)MiChargeResident(MiSystemPartition, 3uLL, 0LL) )
    return 0LL;
  if ( !(unsigned int)MiChargeCommit((__int64)MiSystemPartition, 3uLL, 1) )
    return 0LL;
  v5 = MiReservePtes((__int64)&qword_1403278B0, 3uLL, v4);
  if ( !v5 )
    return 0LL;
  v6 = 0LL;
  v7 = a2;
  do
  {
    if ( (_DWORD)v6 )
    {
      Page = MiGetPage((__int64)MiSystemPartition, v6, 8u);
      v3 = Page;
      if ( Page == -1 )
        return 0LL;
      v9 = 48 * Page - 0x58000000000LL;
      *(_QWORD *)v9 = 0LL;
      *(_QWORD *)(v9 + 40) &= ~0x200000000000000uLL;
      *(_WORD *)(v9 + 32) = 1;
      MiFinalizePageAttribute(v9, 1u, 0);
      *(_QWORD *)(v9 + 24) = *(_QWORD *)(v9 + 24) & 0xC000000000000000uLL | 1;
      ValidKernelPte = MiMakeValidKernelPte(v3, 4, v5 + 8 * v6);
      v12 = v11 - 8;
      *(_QWORD *)(v11 - 8) = ValidKernelPte | 0x42;
      if ( MiPteInShadowRange(v11 - 8) )
        MiWritePteShadow(v14, v13);
      v15 = v12 << 25 >> 16;
      if ( (_DWORD)v6 == 1 )
        v16 = MiMakeValidKernelPte(*a2, 1, v5);
      else
        v16 = MiMakeValidKernelPte(a2[(unsigned int)(v6 - 1)], 4, 0LL) & 0xFFFFFFFFFFFFFEBDuLL | 0x42;
      memset64((void *)v15, v16, 0x200uLL);
    }
    *v7 = v3;
    v6 = (unsigned int)(v6 + 1);
    ++v7;
  }
  while ( (unsigned int)v6 < 4 );
  MiReleasePtes((__int64)&qword_1403278B0, v5, 3u);
  return 1LL;
}
