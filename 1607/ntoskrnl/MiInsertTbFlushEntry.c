/*
 * XREFs of MiInsertTbFlushEntry @ 0x1400E0240
 * Callers:
 *     NtGetWriteWatch @ 0x140014EF0 (NtGetWriteWatch.c)
 *     MiLockCode @ 0x1400155F0 (MiLockCode.c)
 *     MmSetAddressRangeModified @ 0x140016FA0 (MmSetAddressRangeModified.c)
 *     MiReleaseSystemCacheView @ 0x140018374 (MiReleaseSystemCacheView.c)
 *     MmMapViewInSystemCache @ 0x140018A20 (MmMapViewInSystemCache.c)
 *     MiTrimSharedPageFromViews @ 0x140018E50 (MiTrimSharedPageFromViews.c)
 *     MiObtainSystemCacheView @ 0x140019B70 (MiObtainSystemCacheView.c)
 *     MiInitializeSystemPageTable @ 0x140020FBC (MiInitializeSystemPageTable.c)
 *     MiClearNonPagedPtes @ 0x140024520 (MiClearNonPagedPtes.c)
 *     MiGetPteFromCopyList @ 0x140034B80 (MiGetPteFromCopyList.c)
 *     MiMoveDirtyBitsToPfns @ 0x140042A70 (MiMoveDirtyBitsToPfns.c)
 *     MiDeleteVirtualAddresses @ 0x140045C00 (MiDeleteVirtualAddresses.c)
 *     MiDeleteSystemPagableVm @ 0x14004ACA0 (MiDeleteSystemPagableVm.c)
 *     MiFreePagedPoolPages @ 0x14004BBA0 (MiFreePagedPoolPages.c)
 *     MiReleasePtes @ 0x1400516D0 (MiReleasePtes.c)
 *     MiDeletePagablePteRange @ 0x1400751A0 (MiDeletePagablePteRange.c)
 *     MiOutPageSingleKernelStack @ 0x140075734 (MiOutPageSingleKernelStack.c)
 *     MiSetPagingOfDriver @ 0x140083DC4 (MiSetPagingOfDriver.c)
 *     MiReplenishBitMap @ 0x140089320 (MiReplenishBitMap.c)
 *     MiGetSmallZeroPtes @ 0x14008B074 (MiGetSmallZeroPtes.c)
 *     MiZeroPageWorkMapping @ 0x14008B8A0 (MiZeroPageWorkMapping.c)
 *     MiInsertLargeTbFlushEntry @ 0x14008B9B4 (MiInsertLargeTbFlushEntry.c)
 *     MiZeroAndFlushPtes @ 0x14009B608 (MiZeroAndFlushPtes.c)
 *     MiFlushHyperSpace @ 0x14009E1E8 (MiFlushHyperSpace.c)
 *     MiReplacePageTablePage @ 0x1400A55B8 (MiReplacePageTablePage.c)
 *     MiFlushDirtyBitsToPfn @ 0x1400A5F84 (MiFlushDirtyBitsToPfn.c)
 *     MmSetPageProtection @ 0x1400B23C0 (MmSetPageProtection.c)
 *     MmRemoveExecuteGrants @ 0x1400B88A0 (MmRemoveExecuteGrants.c)
 *     MiWalkVaRange @ 0x1400BB684 (MiWalkVaRange.c)
 *     MiBuildForkPte @ 0x1400BCCA0 (MiBuildForkPte.c)
 *     MiReturnSystemPtes @ 0x1400C07D0 (MiReturnSystemPtes.c)
 *     MiReturnSystemVa @ 0x1400C08D0 (MiReturnSystemVa.c)
 *     MiFlushTbAsNeeded @ 0x1400E0040 (MiFlushTbAsNeeded.c)
 *     MiRevertValidPte @ 0x1400E17F0 (MiRevertValidPte.c)
 *     MiClearPteAccessed @ 0x1400E1EF0 (MiClearPteAccessed.c)
 *     MiCopyOnWriteEx @ 0x1400E2730 (MiCopyOnWriteEx.c)
 *     MiDeletePageTableHierarchy @ 0x1400E4D40 (MiDeletePageTableHierarchy.c)
 *     MiProtectPool @ 0x1400EA400 (MiProtectPool.c)
 *     MiSetSystemCodeProtection @ 0x1400FE0F4 (MiSetSystemCodeProtection.c)
 *     MiRemoveMappedPtes @ 0x140100320 (MiRemoveMappedPtes.c)
 *     MiDeleteValidSystemPte @ 0x140100BF0 (MiDeleteValidSystemPte.c)
 *     MiReturnNonPagedPoolVa @ 0x140103670 (MiReturnNonPagedPoolVa.c)
 *     MiReplaceRotateWithDemandZero @ 0x14010DAD4 (MiReplaceRotateWithDemandZero.c)
 *     MiDeletePhysmemVad @ 0x1401115BC (MiDeletePhysmemVad.c)
 *     MmMapMemoryDumpMdlEx @ 0x140113F4C (MmMapMemoryDumpMdlEx.c)
 *     MiDeleteSystemPte @ 0x140122F44 (MiDeleteSystemPte.c)
 *     MiDeleteBootRange @ 0x140138D04 (MiDeleteBootRange.c)
 *     MiZeroPageThread @ 0x140139C40 (MiZeroPageThread.c)
 *     MiPfnRangeIsZero @ 0x14013E6D4 (MiPfnRangeIsZero.c)
 *     MiDemoteLargePage @ 0x14013EC14 (MiDemoteLargePage.c)
 *     MiMapMdlCommon @ 0x1401E3868 (MiMapMdlCommon.c)
 *     MiUnmapMdlCommon @ 0x1401E3CF0 (MiUnmapMdlCommon.c)
 *     MmProtectMdlSystemAddress @ 0x1401E44E4 (MmProtectMdlSystemAddress.c)
 *     MmProtectSystemCacheView @ 0x1401E6EC4 (MmProtectSystemCacheView.c)
 *     MiSwitchToTransition @ 0x1401E8B48 (MiSwitchToTransition.c)
 *     MiJoinBitmapPages @ 0x1401EB324 (MiJoinBitmapPages.c)
 *     MmFreeSpecialPool @ 0x1401EC0A4 (MmFreeSpecialPool.c)
 *     MiLargePageFault @ 0x1401EF82C (MiLargePageFault.c)
 *     MiDeleteEnclavePage @ 0x1401F02DC (MiDeleteEnclavePage.c)
 *     MiUnmapLargePages @ 0x1401F5944 (MiUnmapLargePages.c)
 *     MiConvertPrivateToProto @ 0x1401F8908 (MiConvertPrivateToProto.c)
 *     MiSharePages @ 0x1401FA8E4 (MiSharePages.c)
 *     MiScrubLargeMappedPage @ 0x1401FE334 (MiScrubLargeMappedPage.c)
 *     MiInitializeDynamicBitmap @ 0x140535E80 (MiInitializeDynamicBitmap.c)
 *     MmDeleteShadowMapping @ 0x14065BE04 (MmDeleteShadowMapping.c)
 *     MiProtectAweRegion @ 0x14065C4E0 (MiProtectAweRegion.c)
 *     MiRemoveUserPhysicalPagesVad @ 0x14065C694 (MiRemoveUserPhysicalPagesVad.c)
 *     NtMapUserPhysicalPages @ 0x14065D72C (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x14065DBA8 (NtMapUserPhysicalPagesScatter.c)
 *     MiDeleteEnclavePages @ 0x14065F308 (MiDeleteEnclavePages.c)
 *     MiProtectEnclavePages @ 0x14065F614 (MiProtectEnclavePages.c)
 *     MiMarkBootKernelStack @ 0x14078E4F0 (MiMarkBootKernelStack.c)
 *     MiProtectSharedUserPage @ 0x14078FA44 (MiProtectSharedUserPage.c)
 *     MmFreeLoaderBlock @ 0x140791ED4 (MmFreeLoaderBlock.c)
 *     MiReloadBootLoadedDrivers @ 0x1407A57F0 (MiReloadBootLoadedDrivers.c)
 *     MiInitializeTbFlushing @ 0x1407A6B10 (MiInitializeTbFlushing.c)
 *     MiReturnDriverLoadPages @ 0x1407D106C (MiReturnDriverLoadPages.c)
 * Callees:
 *     MiCompressTbFlushList @ 0x1400974F0 (MiCompressTbFlushList.c)
 *     qsort @ 0x14014DF60 (qsort.c)
 */

void __fastcall MiInsertTbFlushEntry(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // r10
  int v8; // edx
  __int64 v9; // r14
  char v10; // cl
  unsigned __int64 i; // rax
  unsigned int v12; // r8d
  __int64 v13; // r11
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rbp
  __int64 v19; // rdx
  unsigned __int64 v20; // rax
  unsigned int v21; // eax

  v5 = a4;
  v8 = *(_DWORD *)a1;
  v9 = 4096LL << (9 * (unsigned __int8)a4);
  if ( *(_DWORD *)a1 != 1 )
  {
    v10 = *(_BYTE *)(a1 + 4);
    if ( (v10 & 4) == 0 && a2 >= 0xFFFFF68000000000uLL && a2 <= 0xFFFFF6FFFFFFFFFFuLL )
      *(_BYTE *)(a1 + 4) = v10 | 4;
    if ( v8 )
    {
      for ( i = a2; i >= 0xFFFFF68000000000uLL; i = (__int64)(i << 25) >> 16 )
      {
        if ( i > 0xFFFFF6FFFFFFFFFFuLL )
          break;
      }
    }
  }
  v12 = *(_DWORD *)(a1 + 12);
  if ( v12 )
  {
    v13 = a1 + 8LL * (v12 - 1);
    v14 = *(_QWORD *)(v13 + 24);
    if ( ((v14 >> 10) & 3) == a4 )
    {
      v15 = *(_QWORD *)(v13 + 24) & 0x3FFLL;
      if ( (v14 & 0xFFFFFFFFFFFFF000uLL) + v9 * (v15 + 1) == a2 && v15 + a3 > v15 && v15 + a3 <= 0x3FF )
        goto LABEL_20;
    }
    v13 = a1 + 8LL * (v12 - 1);
    v16 = *(_QWORD *)(v13 + 24);
    if ( ((v16 >> 10) & 3) == v5 && (v16 & 0xFFFFFFFFFFFFF000uLL) == a3 * v9 + a2 )
    {
      v17 = v16 & 0x3FF;
      if ( v17 + a3 > v17 && v17 + a3 <= 0x3FF )
      {
        v14 = v16 - a3 * v9;
LABEL_20:
        *(_QWORD *)(a1 + 16) += a3;
        *(_QWORD *)(v13 + 24) = v14 ^ ((unsigned __int16)v14 ^ (unsigned __int16)(v14 + a3)) & 0x3FF;
        return;
      }
    }
  }
  if ( v12 < *(_DWORD *)(a1 + 8) )
  {
    if ( a3 )
    {
      v18 = (unsigned __int64)(v5 & 3) << 10;
      while ( 1 )
      {
        v19 = 1024LL;
        if ( (unsigned __int64)(a3 - 1) <= 0x3FF )
          v19 = a3;
        a3 -= v19;
        v20 = a2 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v19 - 1) & 0x3FF;
        a2 += v9 * v19;
        *(_QWORD *)(a1 + 8LL * (unsigned int)(*(_DWORD *)(a1 + 12))++ + 24) = v18 | v20;
        v21 = *(_DWORD *)(a1 + 12);
        *(_QWORD *)(a1 + 16) += v19;
        if ( v21 == *(_DWORD *)(a1 + 8) )
        {
          qsort((void *)(a1 + 24), v21, 8uLL, (int (__cdecl *)(const void *, const void *))MiTbFlushSort);
          MiCompressTbFlushList(a1);
          if ( *(_DWORD *)(a1 + 12) == *(_DWORD *)(a1 + 8) )
            break;
        }
        if ( !a3 )
          return;
      }
      if ( a3 )
      {
        *(_QWORD *)(a1 + 16) = *(unsigned int *)(a1 + 12);
        *(_BYTE *)(a1 + 5) = 1;
      }
    }
  }
  else
  {
    *(_BYTE *)(a1 + 5) = 1;
  }
}
