/*
 * XREFs of MiDemoteLargePage @ 0x14013F184
 * Callers:
 *     MiPfnRangeIsZero @ 0x14013EC44 (MiPfnRangeIsZero.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x14001D720 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMarkPageActive @ 0x140021054 (MiMarkPageActive.c)
 *     MiInitializePfnForOtherProcess @ 0x140021288 (MiInitializePfnForOtherProcess.c)
 *     MiUpdateLargePageBitMap @ 0x140022760 (MiUpdateLargePageBitMap.c)
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140034510 (MiMapPageInHyperSpaceWorker.c)
 *     MiMakeValidKernelPte @ 0x140034890 (MiMakeValidKernelPte.c)
 *     MiInsertTbFlushEntry @ 0x1400DE0E0 (MiInsertTbFlushEntry.c)
 *     MiGetPageTablePages @ 0x140100588 (MiGetPageTablePages.c)
 *     MI_INTERLOCKED_EXCHANGE_PTE @ 0x1401E1924 (MI_INTERLOCKED_EXCHANGE_PTE.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiDemoteLargePage(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rsi
  __int64 result; // rax
  __int64 v6; // r13
  char v7; // al
  __int64 v8; // r15
  _QWORD *v9; // rdi
  __int64 v10; // rdx
  unsigned __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // r9
  __int64 v14; // r15
  __int64 v15; // rbx
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // [rsp+30h] [rbp-39h]
  __int64 v19; // [rsp+38h] [rbp-31h]
  unsigned __int64 v20; // [rsp+40h] [rbp-29h]
  __int64 v21[4]; // [rsp+48h] [rbp-21h] BYREF
  int v22; // [rsp+6Ch] [rbp+3h]
  unsigned __int8 v23; // [rsp+D0h] [rbp+67h] BYREF
  __int64 v24; // [rsp+D8h] [rbp+6Fh]
  unsigned __int64 v25; // [rsp+E0h] [rbp+77h] BYREF
  __int64 v26; // [rsp+E8h] [rbp+7Fh] BYREF

  v24 = a2;
  v3 = ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v26 = MI_READ_PTE_LOCK_FREE(v3);
  v21[1] = (__int64)MiSystemPartition;
  v22 = 0;
  v21[2] = 0LL;
  v21[3] = 0LL;
  v21[0] = 0xFFFFFFFFFLL;
  v4 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v26) >> 12) & 0xFFFFFFFFFLL;
  result = MiGetPageTablePages((__int64)v21, a1, 1uLL, 4);
  if ( (_DWORD)result )
  {
    v6 = v21[0];
    v7 = *(_BYTE *)(v21[0] + 38) & 0xF;
    *(_QWORD *)v21[0] = 0LL;
    *(_BYTE *)(v6 + 38) = v7 | 0x40;
    v8 = (v6 + 0x58000000000LL) / 48;
    v25 = MI_READ_PTE_LOCK_FREE(((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v18 = MI_GET_PAGE_FRAME_FROM_PTE(&v25);
    v19 = MiMapPageInHyperSpaceWorker(v8, &v23, 0x80000000);
    v9 = (_QWORD *)v19;
    v20 = (__int64)(v3 << 25) >> 16;
    v11 = MiMakeValidKernelPte(v4, 4, v20) | 0x42;
    v25 = v11;
    do
    {
      *v9 = v11;
      if ( (unsigned int)MiPteInShadowRange(v9, v10) )
        MiWritePteShadow(v12, v13);
      ++v9;
      v11 = (v13 ^ ((v13 & 0xFFFFFFFFFFFFF000uLL) + 4096)) & 0xFFFFFFFFF000LL ^ v13;
      v25 = v11;
    }
    while ( ((unsigned __int16)v9 & 0xFFF) != 0 );
    v25 = ~qword_1403A9350 & 0xFFFFFFFFFFFFFEFFuLL & v11;
    MiInitializePfnForOtherProcess((v6 + 0x58000000000LL) / 48, v3, v18, 0);
    MiLockPageAtDpcInline(v6);
    *(_QWORD *)(v6 + 24) ^= (*(_QWORD *)(v6 + 24) ^ (*(_QWORD *)(v6 + 24) + 512LL)) & 0x3FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiMarkPageActive(v21[0]);
    v14 = v8 & 0xFFFFFFFFFLL;
    v25 = (v14 << 12) | v25 & 0xFFFF000000000FFFuLL;
    MI_INTERLOCKED_EXCHANGE_PTE(v3, v25);
    v15 = 48 * v4 - 0x58000000000LL;
    v16 = 512LL;
    do
    {
      MiLockPageAtDpcInline(v15);
      *(_QWORD *)(v15 + 40) = v14 | *(_QWORD *)(v15 + 40) & 0xFFFFFFF000000000uLL;
      _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v15 += 48LL;
      --v16;
    }
    while ( v16 );
    LOBYTE(v17) = v23;
    MiUnmapPageInHyperSpaceWorker(v19, v17);
    MiInsertTbFlushEntry(v24, a1 & 0xFFFFFFFFFFE00000uLL, 1LL, 1u);
    MiUpdateLargePageBitMap((__int64)MiSystemPartition, v4, 0x200uLL, 0, 1);
    MiInsertTbFlushEntry(v24, v20, 1LL, 0);
    return 1LL;
  }
  return result;
}
