/*
 * XREFs of MiChangePageAttribute @ 0x1400AA634
 * Callers:
 *     MiFindNonPagedPoolPages @ 0x1400198C0 (MiFindNonPagedPoolPages.c)
 *     MiZeroFault @ 0x14004D290 (MiZeroFault.c)
 *     MiResolveDemandZeroFault @ 0x140052430 (MiResolveDemandZeroFault.c)
 *     MiGetPage @ 0x1400549D0 (MiGetPage.c)
 *     MmCopyToCachedPage @ 0x140069110 (MmCopyToCachedPage.c)
 *     MiCopyOnWriteEx @ 0x14006EE60 (MiCopyOnWriteEx.c)
 *     MiCopyPage @ 0x1400701E0 (MiCopyPage.c)
 *     MiReplaceTransitionPage @ 0x1400714A0 (MiReplaceTransitionPage.c)
 *     MiFinalizePageAttribute @ 0x140072854 (MiFinalizePageAttribute.c)
 *     MiMapWsMetaPage @ 0x1400A90C0 (MiMapWsMetaPage.c)
 *     MiInitializePfn @ 0x1400AA390 (MiInitializePfn.c)
 *     MiBuildMdlForMappedFileFault @ 0x1400AB410 (MiBuildMdlForMappedFileFault.c)
 *     MiPageAttributeBatchChangeNeeded @ 0x1400BCED4 (MiPageAttributeBatchChangeNeeded.c)
 *     MiConvertContiguousPages @ 0x1400BFF60 (MiConvertContiguousPages.c)
 *     MiSetPfnOwnedAndActive @ 0x1400C0054 (MiSetPfnOwnedAndActive.c)
 *     MiAssignNonPagedPoolPtes @ 0x1400D22E0 (MiAssignNonPagedPoolPtes.c)
 *     MiBuildForkPageTable @ 0x1400EE1AC (MiBuildForkPageTable.c)
 *     MiDuplicateCloneLeaf @ 0x1400F3798 (MiDuplicateCloneLeaf.c)
 *     MiInitializeReadInProgressPfn @ 0x1400FD7D0 (MiInitializeReadInProgressPfn.c)
 *     MiZeroPhysicalPage @ 0x1400FE170 (MiZeroPhysicalPage.c)
 *     MiFillCombinePage @ 0x14012B61C (MiFillCombinePage.c)
 *     MiZeroPageThread @ 0x1401307A0 (MiZeroPageThread.c)
 *     MiAddExpansionNonPagedPool @ 0x14013713C (MiAddExpansionNonPagedPool.c)
 *     MiCopySinglePage @ 0x1401D3E08 (MiCopySinglePage.c)
 *     MiComputeOptimalZeroPath @ 0x14074D98C (MiComputeOptimalZeroPath.c)
 * Callees:
 *     KeFlushTb @ 0x1400078BC (KeFlushTb.c)
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MiAbortCombineScan @ 0x1400A980C (MiAbortCombineScan.c)
 *     MiPageCombiningActive @ 0x1400A98D0 (MiPageCombiningActive.c)
 *     MI_FLUSH_CACHE_DUE_TO_ATTRIBUTE_CHANGE @ 0x1400A9904 (MI_FLUSH_CACHE_DUE_TO_ATTRIBUTE_CHANGE.c)
 *     HvlFlushTbAllPartitions @ 0x1400E8120 (HvlFlushTbAllPartitions.c)
 */

char __fastcall MiChangePageAttribute(__int64 a1, int a2, unsigned __int8 a3)
{
  unsigned __int8 v3; // bl
  unsigned __int8 v6; // si
  int v7; // r14d
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned __int64 v12; // r13
  unsigned int v13; // eax
  unsigned __int8 CurrentIrql; // bl
  signed __int32 v16[14]; // [rsp+0h] [rbp-38h] BYREF

  v3 = a3;
  if ( (a3 & 1) != 0 || (struct _KTHREAD *)qword_1402FEC88 == KeGetCurrentThread() )
    v6 = 17;
  else
    v6 = MiLockPageInline(a1);
  v7 = *(unsigned __int8 *)(a1 + 34) >> 6;
  LOBYTE(v8) = MiPageCombiningActive(0LL);
  v12 = (unsigned int)(v10 + 2);
  if ( v8 )
  {
    MiAbortCombineScan(a1);
    v3 = v12 | v3 & 0xFB;
  }
  LOBYTE(v13) = (_BYTE)a2 << 6;
  LOBYTE(v10) = ((_BYTE)a2 << 6) | *(_BYTE *)(a1 + 34) & 0x3F;
  *(_BYTE *)(a1 + 34) = v10;
  if ( v7 != 3 && (v3 & 4) == 0 )
  {
    if ( (v3 & (unsigned __int8)v12) != 0
      || (v9 = *(_BYTE *)(a1 + 31) & 0xF,
          _InterlockedOr(v16, 0),
          v13 = ((_BYTE)KiTbFlushTimeStamp - (_BYTE)v9) & 0xF,
          v13 <= (unsigned int)v12)
      && ((v9 & 1) != 0 || v13 < (unsigned int)v12) )
    {
      ++dword_1402FE710;
      HvlFlushTbAllPartitions(v10, v9, v11);
      LOBYTE(v13) = KeFlushTb(3u, v12);
    }
    if ( a2 != 1 && v7 == 1 )
    {
      ++dword_1402FE718;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(v12);
      MI_FLUSH_CACHE_DUE_TO_ATTRIBUTE_CHANGE((a1 + 0x58000000000LL) / 48, 1LL, a2);
      LOBYTE(v13) = CurrentIrql;
      __writecr8(CurrentIrql);
    }
  }
  if ( v6 != 17 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    LOBYTE(v13) = v6;
    __writecr8(v6);
  }
  return v13;
}
