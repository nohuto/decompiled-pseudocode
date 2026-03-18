/*
 * XREFs of MiInsertTbFlushEntry @ 0x1400606D0
 * Callers:
 *     MiOutPageSingleKernelStack @ 0x1400052A8 (MiOutPageSingleKernelStack.c)
 *     MiTrimSharedPageFromViews @ 0x140008834 (MiTrimSharedPageFromViews.c)
 *     MiFlushHyperSpace @ 0x140010528 (MiFlushHyperSpace.c)
 *     MiReplenishBitMap @ 0x140013C80 (MiReplenishBitMap.c)
 *     MiReturnSystemPtes @ 0x1400153A0 (MiReturnSystemPtes.c)
 *     MiReturnSystemVa @ 0x140015490 (MiReturnSystemVa.c)
 *     MiInitializeSystemPageTable @ 0x140017F70 (MiInitializeSystemPageTable.c)
 *     MiSetPagingOfDriver @ 0x14001A3D0 (MiSetPagingOfDriver.c)
 *     MiWalkVaRange @ 0x14001C524 (MiWalkVaRange.c)
 *     MiBuildForkPte @ 0x14001DDD8 (MiBuildForkPte.c)
 *     MiFreePagedPoolPages @ 0x14003B820 (MiFreePagedPoolPages.c)
 *     MiDeleteSystemPagableVm @ 0x14003C140 (MiDeleteSystemPagableVm.c)
 *     MiDeleteVirtualAddresses @ 0x140057CB0 (MiDeleteVirtualAddresses.c)
 *     MiAllocatePagedPoolPages @ 0x14005F630 (MiAllocatePagedPoolPages.c)
 *     MiFlushTbAsNeeded @ 0x140061B60 (MiFlushTbAsNeeded.c)
 *     MiReleasePtes @ 0x1400680A0 (MiReleasePtes.c)
 *     MiFreeWsleList @ 0x14006C330 (MiFreeWsleList.c)
 *     MiDeletePageTableHierarchy @ 0x14006D570 (MiDeletePageTableHierarchy.c)
 *     MiCopyOnWriteEx @ 0x14006EE60 (MiCopyOnWriteEx.c)
 *     MiCopyPage @ 0x1400701E0 (MiCopyPage.c)
 *     MiProtectPool @ 0x140078150 (MiProtectPool.c)
 *     MiFlushDirtyBitsToPfn @ 0x140098664 (MiFlushDirtyBitsToPfn.c)
 *     MiDeleteValidSystemPte @ 0x1400A1760 (MiDeleteValidSystemPte.c)
 *     MiReleaseSystemCacheView @ 0x1400AE7E8 (MiReleaseSystemCacheView.c)
 *     MmMapViewInSystemCache @ 0x1400B0E10 (MmMapViewInSystemCache.c)
 *     MiObtainSystemCacheView @ 0x1400B1590 (MiObtainSystemCacheView.c)
 *     MiReturnNonPagedPoolVa @ 0x1400B4000 (MiReturnNonPagedPoolVa.c)
 *     NtGetWriteWatch @ 0x1400B66D0 (NtGetWriteWatch.c)
 *     MiRemoveMappedPtes @ 0x1400B6D00 (MiRemoveMappedPtes.c)
 *     MiClearPteAccessed @ 0x1400B72A0 (MiClearPteAccessed.c)
 *     MiLockCode @ 0x1400B7B30 (MiLockCode.c)
 *     MiSetSystemCodeProtection @ 0x1400B8D54 (MiSetSystemCodeProtection.c)
 *     MmSetAddressRangeModified @ 0x1400B9910 (MmSetAddressRangeModified.c)
 *     MiDeletePagablePteRange @ 0x1400BACF0 (MiDeletePagablePteRange.c)
 *     MmRemoveExecuteGrants @ 0x1400BB4A8 (MmRemoveExecuteGrants.c)
 *     MiZeroAndFlushPtes @ 0x1400C097C (MiZeroAndFlushPtes.c)
 *     MiClearNonPagedPtes @ 0x1400D2B70 (MiClearNonPagedPtes.c)
 *     MiReplacePageTablePage @ 0x1400D98A0 (MiReplacePageTablePage.c)
 *     MiReleaseZeroingVa @ 0x1400E4ABC (MiReleaseZeroingVa.c)
 *     MmProtectMdlSystemAddress @ 0x1400E5CC4 (MmProtectMdlSystemAddress.c)
 *     MmSetPageProtection @ 0x1400EBB14 (MmSetPageProtection.c)
 *     MiGetPteFromCopyList @ 0x1400FE324 (MiGetPteFromCopyList.c)
 *     MiReplaceRotateWithDemandZero @ 0x140102EA0 (MiReplaceRotateWithDemandZero.c)
 *     MiDeletePhysmemVad @ 0x1401061CC (MiDeletePhysmemVad.c)
 *     MiDeleteSystemPte @ 0x1401141C8 (MiDeleteSystemPte.c)
 *     MmMapMemoryDumpMdlEx @ 0x1401198BC (MmMapMemoryDumpMdlEx.c)
 *     MiSharePages @ 0x140128D20 (MiSharePages.c)
 *     MiConvertPrivateToProto @ 0x14012A57C (MiConvertPrivateToProto.c)
 *     MiZeroPageThread @ 0x1401307A0 (MiZeroPageThread.c)
 *     MiPfnRangeIsZero @ 0x140132700 (MiPfnRangeIsZero.c)
 *     MiDemoteLargePage @ 0x140132C08 (MiDemoteLargePage.c)
 *     MiDeleteBootRange @ 0x1401332F0 (MiDeleteBootRange.c)
 *     MmUnmapReservedMapping @ 0x1401D3934 (MmUnmapReservedMapping.c)
 *     MmProtectSystemCacheView @ 0x1401D57E4 (MmProtectSystemCacheView.c)
 *     MiSwitchToTransition @ 0x1401D6E6C (MiSwitchToTransition.c)
 *     MiJoinBitmapPages @ 0x1401DA568 (MiJoinBitmapPages.c)
 *     MmFreeSpecialPool @ 0x1401DB2D8 (MmFreeSpecialPool.c)
 *     MiLargePageFault @ 0x1401DED84 (MiLargePageFault.c)
 *     MiDeleteEnclavePage @ 0x1401DFA64 (MiDeleteEnclavePage.c)
 *     MiUnmapLargePages @ 0x1401E2648 (MiUnmapLargePages.c)
 *     MiUnmapLargeUserPages @ 0x1401E27F0 (MiUnmapLargeUserPages.c)
 *     MiScrubLargeMappedPage @ 0x1401E5BA4 (MiScrubLargeMappedPage.c)
 *     MiInitializeDynamicBitmap @ 0x1404FF1D8 (MiInitializeDynamicBitmap.c)
 *     MmUnmapLockedRestartPages @ 0x140620ED4 (MmUnmapLockedRestartPages.c)
 *     MmDeleteShadowMapping @ 0x140626638 (MmDeleteShadowMapping.c)
 *     MiProtectAweRegion @ 0x140626D90 (MiProtectAweRegion.c)
 *     MiRemoveUserPhysicalPagesVad @ 0x140626F34 (MiRemoveUserPhysicalPagesVad.c)
 *     NtMapUserPhysicalPages @ 0x140627FF0 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x140628474 (NtMapUserPhysicalPagesScatter.c)
 *     MiDeleteEnclavePages @ 0x140629B8C (MiDeleteEnclavePages.c)
 *     MiProtectEnclavePages @ 0x140629E98 (MiProtectEnclavePages.c)
 *     MiEliminatePageTablesOfOnes @ 0x14074A504 (MiEliminatePageTablesOfOnes.c)
 *     MiReloadBootLoadedDrivers @ 0x14074AF5C (MiReloadBootLoadedDrivers.c)
 *     MiInitializeTbFlushing @ 0x14074C190 (MiInitializeTbFlushing.c)
 *     MmFreeLoaderBlock @ 0x14074E52C (MmFreeLoaderBlock.c)
 *     MiMarkBootKernelStack @ 0x140763814 (MiMarkBootKernelStack.c)
 *     MiProtectSharedUserPage @ 0x140771744 (MiProtectSharedUserPage.c)
 *     MiReturnDriverLoadPages @ 0x140784C40 (MiReturnDriverLoadPages.c)
 * Callees:
 *     MiCompressTbFlushList @ 0x1400D92A0 (MiCompressTbFlushList.c)
 *     qsort @ 0x140144B80 (qsort.c)
 */

void __fastcall MiInsertTbFlushEntry(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned int v4; // r10d
  __int64 v7; // rbp
  __int64 v9; // r9
  __int64 v10; // rax
  unsigned __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned __int64 v14; // rax
  size_t v15; // rax
  __int64 v16; // r8
  __int64 v17; // rax
  unsigned __int64 v18; // rcx
  __int64 v19; // r15

  v4 = *(_DWORD *)(a1 + 12);
  v7 = a2;
  if ( !v4
    || (v9 = a1 + 8LL * (v4 - 1), v10 = *(_QWORD *)(v9 + 24), (v10 & 0x800) != 0)
    || a4
    || (v11 = *(_QWORD *)(v9 + 24) & 0x7FFLL, (v10 & 0xFFFFFFFFFFFFF000uLL) + ((v11 + 1) << 12) != a2)
    || v11 + a3 > 0x7FF
    || v11 + a3 <= v11 )
  {
    if ( !v4
      || (v16 = a1 + 8LL * (v4 - 1), v17 = *(_QWORD *)(v16 + 24), (v17 & 0x800) != 0)
      || a4
      || (v17 & 0xFFFFFFFFFFFFF000uLL) != a2 + (a3 << 12)
      || (v18 = *(_QWORD *)(v16 + 24) & 0x7FFLL, v18 + a3 > 0x7FF)
      || v18 + a3 <= v18 )
    {
      if ( v4 >= *(_DWORD *)(a1 + 8) )
      {
        *(_BYTE *)(a1 + 5) = 1;
      }
      else if ( a3 )
      {
        while ( 1 )
        {
          v12 = 2048LL;
          if ( (unsigned __int64)(a3 - 1) <= 0x7FF )
            v12 = a3;
          a3 -= v12;
          v13 = 4096LL;
          v14 = ((unsigned __int64)(a4 & 1) << 11) | v7 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v12 - 1) & 0x7FF;
          if ( a4 == 1 )
            v13 = 0x200000LL;
          v7 += v12 * v13;
          *(_QWORD *)(a1 + 8LL * (unsigned int)(*(_DWORD *)(a1 + 12))++ + 24) = v14;
          v15 = *(unsigned int *)(a1 + 12);
          *(_QWORD *)(a1 + 16) += v12;
          if ( (_DWORD)v15 == *(_DWORD *)(a1 + 8) )
          {
            qsort((void *)(a1 + 24), v15, 8uLL, MiTbFlushSort);
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
      v19 = 4096LL;
      if ( (v17 & 0x800) != 0 )
        v19 = 0x200000LL;
      *(_QWORD *)(a1 + 16) += a3;
      *(_QWORD *)(v16 + 24) = (v17 - a3 * v19) ^ ((unsigned __int16)(v17 - a3 * v19) ^ (unsigned __int16)(v17 - a3 * v19 + a3)) & 0x7FF;
    }
  }
  else
  {
    *(_QWORD *)(a1 + 16) += a3;
    *(_QWORD *)(v9 + 24) = v10 ^ ((unsigned __int16)v10 ^ (unsigned __int16)(v10 + a3)) & 0x7FF;
  }
}
