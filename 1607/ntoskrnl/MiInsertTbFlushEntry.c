/*
 * XREFs of MiInsertTbFlushEntry @ 0x1400DE0E0
 * Callers:
 *     NtGetWriteWatch @ 0x140014A70 (NtGetWriteWatch.c)
 *     MiLockCode @ 0x140015170 (MiLockCode.c)
 *     MmSetAddressRangeModified @ 0x140016B20 (MmSetAddressRangeModified.c)
 *     MiReleaseSystemCacheView @ 0x140017EF4 (MiReleaseSystemCacheView.c)
 *     MmMapViewInSystemCache @ 0x1400185A0 (MmMapViewInSystemCache.c)
 *     MiTrimSharedPageFromViews @ 0x1400189D0 (MiTrimSharedPageFromViews.c)
 *     MiObtainSystemCacheView @ 0x1400196F0 (MiObtainSystemCacheView.c)
 *     MiInitializeSystemPageTable @ 0x140020B3C (MiInitializeSystemPageTable.c)
 *     MiClearNonPagedPtes @ 0x1400240A0 (MiClearNonPagedPtes.c)
 *     MiGetPteFromCopyList @ 0x140034700 (MiGetPteFromCopyList.c)
 *     MiMoveDirtyBitsToPfns @ 0x1400425F0 (MiMoveDirtyBitsToPfns.c)
 *     MiDeleteVirtualAddresses @ 0x140045780 (MiDeleteVirtualAddresses.c)
 *     MiDeleteSystemPagableVm @ 0x14004A820 (MiDeleteSystemPagableVm.c)
 *     MiFreePagedPoolPages @ 0x14004B720 (MiFreePagedPoolPages.c)
 *     MiReleasePtes @ 0x140051250 (MiReleasePtes.c)
 *     MiDeletePagablePteRange @ 0x140075220 (MiDeletePagablePteRange.c)
 *     MiOutPageSingleKernelStack @ 0x1400757B4 (MiOutPageSingleKernelStack.c)
 *     MiSetPagingOfDriver @ 0x140081F24 (MiSetPagingOfDriver.c)
 *     MiReplenishBitMap @ 0x140088A20 (MiReplenishBitMap.c)
 *     MiGetSmallZeroPtes @ 0x14008A774 (MiGetSmallZeroPtes.c)
 *     MiZeroPageWorkMapping @ 0x14008AFA0 (MiZeroPageWorkMapping.c)
 *     MiInsertLargeTbFlushEntry @ 0x14008B0B4 (MiInsertLargeTbFlushEntry.c)
 *     MiZeroAndFlushPtes @ 0x14009AE08 (MiZeroAndFlushPtes.c)
 *     MiFlushHyperSpace @ 0x14009D9E8 (MiFlushHyperSpace.c)
 *     MiReplacePageTablePage @ 0x1400A3B30 (MiReplacePageTablePage.c)
 *     MiFlushDirtyBitsToPfn @ 0x1400A44FC (MiFlushDirtyBitsToPfn.c)
 *     MmSetPageProtection @ 0x1400B0300 (MmSetPageProtection.c)
 *     MmRemoveExecuteGrants @ 0x1400B6730 (MmRemoveExecuteGrants.c)
 *     MiWalkVaRange @ 0x1400B9514 (MiWalkVaRange.c)
 *     MiBuildForkPte @ 0x1400BAB30 (MiBuildForkPte.c)
 *     MiReturnSystemPtes @ 0x1400BE660 (MiReturnSystemPtes.c)
 *     MiReturnSystemVa @ 0x1400BE760 (MiReturnSystemVa.c)
 *     MiFlushTbAsNeeded @ 0x1400DDEE0 (MiFlushTbAsNeeded.c)
 *     MiRevertValidPte @ 0x1400DF690 (MiRevertValidPte.c)
 *     MiClearPteAccessed @ 0x1400DFD90 (MiClearPteAccessed.c)
 *     MiCopyOnWriteEx @ 0x1400E05D0 (MiCopyOnWriteEx.c)
 *     MiDeletePageTableHierarchy @ 0x1400E2BE0 (MiDeletePageTableHierarchy.c)
 *     MiProtectPool @ 0x1400E8270 (MiProtectPool.c)
 *     MiSetSystemCodeProtection @ 0x1400FBE74 (MiSetSystemCodeProtection.c)
 *     MiRemoveMappedPtes @ 0x1400FE0A0 (MiRemoveMappedPtes.c)
 *     MiDeleteValidSystemPte @ 0x1400FE970 (MiDeleteValidSystemPte.c)
 *     MiReturnNonPagedPoolVa @ 0x1401013F0 (MiReturnNonPagedPoolVa.c)
 *     MiReplaceRotateWithDemandZero @ 0x14010E038 (MiReplaceRotateWithDemandZero.c)
 *     MiDeletePhysmemVad @ 0x140111B20 (MiDeletePhysmemVad.c)
 *     MmMapMemoryDumpMdlEx @ 0x1401144BC (MmMapMemoryDumpMdlEx.c)
 *     MiDeleteSystemPte @ 0x1401234B4 (MiDeleteSystemPte.c)
 *     MiDeleteBootRange @ 0x140139274 (MiDeleteBootRange.c)
 *     MiZeroPageThread @ 0x14013A1B0 (MiZeroPageThread.c)
 *     MiPfnRangeIsZero @ 0x14013EC44 (MiPfnRangeIsZero.c)
 *     MiDemoteLargePage @ 0x14013F184 (MiDemoteLargePage.c)
 *     MiMapMdlCommon @ 0x1401E3694 (MiMapMdlCommon.c)
 *     MiUnmapMdlCommon @ 0x1401E3B1C (MiUnmapMdlCommon.c)
 *     MmProtectMdlSystemAddress @ 0x1401E4310 (MmProtectMdlSystemAddress.c)
 *     MmProtectSystemCacheView @ 0x1401E6CF0 (MmProtectSystemCacheView.c)
 *     MiSwitchToTransition @ 0x1401E8974 (MiSwitchToTransition.c)
 *     MiJoinBitmapPages @ 0x1401EB150 (MiJoinBitmapPages.c)
 *     MmFreeSpecialPool @ 0x1401EBED0 (MmFreeSpecialPool.c)
 *     MiLargePageFault @ 0x1401EF658 (MiLargePageFault.c)
 *     MiDeleteEnclavePage @ 0x1401F0108 (MiDeleteEnclavePage.c)
 *     MiUnmapLargePages @ 0x1401F5770 (MiUnmapLargePages.c)
 *     MiConvertPrivateToProto @ 0x1401F8734 (MiConvertPrivateToProto.c)
 *     MiSharePages @ 0x1401FA710 (MiSharePages.c)
 *     MiScrubLargeMappedPage @ 0x1401FE160 (MiScrubLargeMappedPage.c)
 *     MiInitializeDynamicBitmap @ 0x1405363C0 (MiInitializeDynamicBitmap.c)
 *     MmDeleteShadowMapping @ 0x14065BEE8 (MmDeleteShadowMapping.c)
 *     MiProtectAweRegion @ 0x14065C5C4 (MiProtectAweRegion.c)
 *     MiRemoveUserPhysicalPagesVad @ 0x14065C778 (MiRemoveUserPhysicalPagesVad.c)
 *     NtMapUserPhysicalPages @ 0x14065D810 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x14065DC8C (NtMapUserPhysicalPagesScatter.c)
 *     MiDeleteEnclavePages @ 0x14065F3EC (MiDeleteEnclavePages.c)
 *     MiProtectEnclavePages @ 0x14065F6F8 (MiProtectEnclavePages.c)
 *     MiMarkBootKernelStack @ 0x14078E4F0 (MiMarkBootKernelStack.c)
 *     MiProtectSharedUserPage @ 0x14078FA44 (MiProtectSharedUserPage.c)
 *     MmFreeLoaderBlock @ 0x140791ED4 (MmFreeLoaderBlock.c)
 *     MiReloadBootLoadedDrivers @ 0x1407A57F0 (MiReloadBootLoadedDrivers.c)
 *     MiInitializeTbFlushing @ 0x1407A6B10 (MiInitializeTbFlushing.c)
 *     MiReturnDriverLoadPages @ 0x1407D106C (MiReturnDriverLoadPages.c)
 * Callees:
 *     MiCompressTbFlushList @ 0x140096CF0 (MiCompressTbFlushList.c)
 *     qsort @ 0x14014E520 (qsort.c)
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
