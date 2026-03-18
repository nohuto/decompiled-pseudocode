/*
 * XREFs of MiInitializeGapFrames @ 0x140767B78
 * Callers:
 *     MmInitNucleus @ 0x140748C60 (MmInitNucleus.c)
 *     MiFillPfnGaps @ 0x140767B20 (MiFillPfnGaps.c)
 * Callees:
 *     MiReservePtes @ 0x140049FD0 (MiReservePtes.c)
 *     MiMakeValidKernelPte @ 0x14004D080 (MiMakeValidKernelPte.c)
 *     MiGetPage @ 0x1400549D0 (MiGetPage.c)
 *     MiChargeCommit @ 0x140063610 (MiChargeCommit.c)
 *     MiReleasePtes @ 0x1400680A0 (MiReleasePtes.c)
 *     MiFinalizePageAttribute @ 0x140072854 (MiFinalizePageAttribute.c)
 *     MiChargeResident @ 0x1400AA260 (MiChargeResident.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

__int64 __fastcall MiInitializeGapFrames(__int64 a1, __int64 *a2)
{
  __int64 v3; // r14
  unsigned __int64 v4; // r8
  _QWORD *v5; // r15
  __int64 v6; // rsi
  __int64 *v7; // rbp
  __int64 Page; // rax
  __int64 v9; // rdi
  __int64 v10; // r9
  __int64 v11; // rbx
  unsigned __int64 v12; // rdi
  __int64 v13; // r9
  __int64 v14; // rbx
  unsigned __int64 ValidKernelPte; // rax

  if ( a1 )
  {
    if ( a1 != -1 )
      return 0LL;
    v3 = qword_1402FF238;
  }
  else
  {
    v3 = qword_1402FF250;
  }
  if ( !(unsigned int)MiChargeResident(MiSystemPartition, 3uLL, 0LL) )
    return 0LL;
  _InterlockedExchangeAdd64(&qword_1402FF448, 3uLL);
  if ( !(unsigned int)MiChargeCommit((unsigned __int64)MiSystemPartition, 3uLL, 1uLL) )
    return 0LL;
  v5 = (_QWORD *)MiReservePtes((__int64)&qword_1402FF7B0, 3u, v4);
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
      MiFinalizePageAttribute(v9, 1LL, 0);
      *(_QWORD *)(v9 + 24) = *(_QWORD *)(v9 + 24) & 0xC000000000000000uLL | 1;
      v11 = (__int64)&v5[v6 - 1];
      v12 = MiMakeValidKernelPte(v3, 4, (unsigned __int64)&v5[v6], v10) | 0x42;
      *(_QWORD *)v11 = v12;
      if ( MiPteInShadowRange(v11) )
        MiWritePteShadow(v11, v12);
      v14 = v11 << 25 >> 16;
      if ( (_DWORD)v6 == 1 )
        ValidKernelPte = MiMakeValidKernelPte(*a2, 1, (unsigned __int64)v5, v13);
      else
        ValidKernelPte = MiMakeValidKernelPte(a2[(unsigned int)(v6 - 1)], 4, 0LL, v13) & 0xFFFFFFFFFFFFFEBDuLL | 0x42;
      memset64((void *)v14, ValidKernelPte, 0x200uLL);
    }
    *v7 = v3;
    v6 = (unsigned int)(v6 + 1);
    ++v7;
  }
  while ( (unsigned int)v6 < 4 );
  MiReleasePtes((__int64)&qword_1402FF7B0, v5, 3u);
  return 1LL;
}
