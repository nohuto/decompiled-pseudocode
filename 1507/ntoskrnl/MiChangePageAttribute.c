/*
 * XREFs of MiChangePageAttribute @ 0x1400E5678
 * Callers:
 *     MiBuildForkPageTable @ 0x140003AA4 (MiBuildForkPageTable.c)
 *     MiDuplicateCloneLeaf @ 0x140004A08 (MiDuplicateCloneLeaf.c)
 *     MiInitializeReadInProgressPfn @ 0x1400363F0 (MiInitializeReadInProgressPfn.c)
 *     MiCopyOnWriteEx @ 0x140058250 (MiCopyOnWriteEx.c)
 *     MiCopyPage @ 0x140058ED0 (MiCopyPage.c)
 *     MiFindNonPagedPoolPages @ 0x140059840 (MiFindNonPagedPoolPages.c)
 *     MiFinalizePageAttribute @ 0x140059C28 (MiFinalizePageAttribute.c)
 *     MiReplaceTransitionPage @ 0x140059C70 (MiReplaceTransitionPage.c)
 *     MiInitializePfn @ 0x140069490 (MiInitializePfn.c)
 *     MiPageAttributeBatchChangeNeeded @ 0x140077838 (MiPageAttributeBatchChangeNeeded.c)
 *     MiZeroPhysicalPage @ 0x1400793F0 (MiZeroPhysicalPage.c)
 *     MmCopyToCachedPage @ 0x1400B3650 (MmCopyToCachedPage.c)
 *     MiMigratePfn @ 0x1400B9D20 (MiMigratePfn.c)
 *     MiResolveDemandZeroFault @ 0x1400BBC00 (MiResolveDemandZeroFault.c)
 *     MiGetPage @ 0x1400BD890 (MiGetPage.c)
 *     MiZeroFault @ 0x1400C0DC0 (MiZeroFault.c)
 *     MiBuildMdlForMappedFileFault @ 0x1400DEFD0 (MiBuildMdlForMappedFileFault.c)
 *     MiAssignNonPagedPoolPtes @ 0x14010B830 (MiAssignNonPagedPoolPtes.c)
 *     MiConvertContiguousPages @ 0x14010FEA0 (MiConvertContiguousPages.c)
 *     MiSetPfnOwnedAndActive @ 0x1401225E4 (MiSetPfnOwnedAndActive.c)
 *     MiZeroPageThread @ 0x14015FE90 (MiZeroPageThread.c)
 *     MiAddExpansionNonPagedPool @ 0x140168300 (MiAddExpansionNonPagedPool.c)
 *     MiCopySinglePage @ 0x140215494 (MiCopySinglePage.c)
 *     MiFillCombinePage @ 0x14022A650 (MiFillCombinePage.c)
 *     MiComputeOptimalZeroPath @ 0x1407C88D8 (MiComputeOptimalZeroPath.c)
 * Callees:
 *     KeFlushTb @ 0x140042090 (KeFlushTb.c)
 *     MiAbortCombineScan @ 0x1400E59F8 (MiAbortCombineScan.c)
 *     MI_FLUSH_CACHE_DUE_TO_ATTRIBUTE_CHANGE @ 0x1400E5B38 (MI_FLUSH_CACHE_DUE_TO_ATTRIBUTE_CHANGE.c)
 *     HvlFlushTbAllPartitions @ 0x1400E6968 (HvlFlushTbAllPartitions.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

char __fastcall MiChangePageAttribute(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  char v4; // bl
  unsigned __int8 CurrentIrql; // bp
  unsigned int v8; // esi
  __int64 v9; // rcx
  int v10; // esi
  __int64 v11; // rdx
  unsigned int v12; // eax
  unsigned __int8 v13; // bl
  signed __int32 v15[14]; // [rsp+0h] [rbp-38h] BYREF

  v4 = a3;
  if ( (a3 & 1) != 0 || (struct _KTHREAD *)qword_14034F148 == KeGetCurrentThread() )
  {
    CurrentIrql = 17;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v8 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v8 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v8);
      }
      while ( *(__int64 *)(a1 + 24) < 0 || _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) );
    }
  }
  v9 = a1 + 0x58000000000LL;
  v10 = *(unsigned __int8 *)(a1 + 34) >> 6;
  v11 = (unsigned __int128)((a1 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  if ( dword_14034EF04 )
  {
    MiAbortCombineScan(a1);
    v4 = v4 & 0xF9 | 2;
  }
  LOBYTE(v12) = (_BYTE)a2 << 6;
  LOBYTE(v9) = ((_BYTE)a2 << 6) | *(_BYTE *)(a1 + 34) & 0x3F;
  *(_BYTE *)(a1 + 34) = v9;
  if ( v10 != 3 && (v4 & 4) == 0 )
  {
    if ( (v4 & 2) != 0
      || (v11 = *(_BYTE *)(a1 + 31) & 0xF,
          _InterlockedOr(v15, 0),
          v12 = ((_BYTE)KiTbFlushTimeStamp - (_BYTE)v11) & 0xF,
          v12 <= 2)
      && ((v11 & 1) != 0 || v12 < 2) )
    {
      ++dword_14034EBC8;
      HvlFlushTbAllPartitions(v9, v11, a3, a4);
      LOBYTE(v12) = KeFlushTb(3, 2);
    }
    if ( a2 != 1 && v10 == 1 )
    {
      ++dword_14034EBD0;
      v13 = KeGetCurrentIrql();
      __writecr8(2uLL);
      MI_FLUSH_CACHE_DUE_TO_ATTRIBUTE_CHANGE((a1 + 0x58000000000LL) / 48, 1LL, a2);
      LOBYTE(v12) = v13;
      __writecr8(v13);
    }
  }
  if ( CurrentIrql != 17 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    LOBYTE(v12) = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return v12;
}
