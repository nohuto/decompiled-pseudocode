/*
 * XREFs of MiInsertTbFlushEntry @ 0x1400AE330
 * Callers:
 *     MiBuildForkPte @ 0x14000253C (MiBuildForkPte.c)
 *     MiDeletePagablePteRange @ 0x140008890 (MiDeletePagablePteRange.c)
 *     MiLockCode @ 0x140010950 (MiLockCode.c)
 *     MiReplenishBitMap @ 0x140012E20 (MiReplenishBitMap.c)
 *     MiSetSystemCodeProtection @ 0x140023140 (MiSetSystemCodeProtection.c)
 *     MiDeleteValidSystemPte @ 0x140038C20 (MiDeleteValidSystemPte.c)
 *     MiRemoveMappedPtes @ 0x140039410 (MiRemoveMappedPtes.c)
 *     MiDeletePageTableHierarchy @ 0x140039EA0 (MiDeletePageTableHierarchy.c)
 *     NtGetWriteWatch @ 0x14003C8B0 (NtGetWriteWatch.c)
 *     MmMapViewInSystemCache @ 0x14003D650 (MmMapViewInSystemCache.c)
 *     MiObtainSystemCacheView @ 0x14003DD60 (MiObtainSystemCacheView.c)
 *     MiFreePagedPoolPages @ 0x14003E5F0 (MiFreePagedPoolPages.c)
 *     MiCopyOnWriteEx @ 0x140058250 (MiCopyOnWriteEx.c)
 *     MiCopyPage @ 0x140058ED0 (MiCopyPage.c)
 *     MiGetPteFromCopyList @ 0x140059330 (MiGetPteFromCopyList.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14005A4E0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiProtectPool @ 0x14005EFD0 (MiProtectPool.c)
 *     MiReturnNonPagedPoolVa @ 0x1400645C0 (MiReturnNonPagedPoolVa.c)
 *     MiClearNonPagedPtes @ 0x140065600 (MiClearNonPagedPtes.c)
 *     MiInitializeSystemPageTable @ 0x14006A1F8 (MiInitializeSystemPageTable.c)
 *     MiReleaseSystemCacheView @ 0x14006B8A0 (MiReleaseSystemCacheView.c)
 *     MmRemoveExecuteGrants @ 0x14007B234 (MmRemoveExecuteGrants.c)
 *     MmSetAddressRangeModified @ 0x14007C280 (MmSetAddressRangeModified.c)
 *     MiWalkVaRange @ 0x14007F5DC (MiWalkVaRange.c)
 *     MiDeleteVirtualAddresses @ 0x140094110 (MiDeleteVirtualAddresses.c)
 *     MiFlushTbAsNeeded @ 0x1400ADC10 (MiFlushTbAsNeeded.c)
 *     MiClearPteAccessed @ 0x1400ADE80 (MiClearPteAccessed.c)
 *     MiFreeWsleList @ 0x1400AE6D0 (MiFreeWsleList.c)
 *     MiDeleteSystemPagableVm @ 0x1400AFDF0 (MiDeleteSystemPagableVm.c)
 *     MiReleasePtes @ 0x1400B1800 (MiReleasePtes.c)
 *     MiPfnShareCountIsZero @ 0x1400B2270 (MiPfnShareCountIsZero.c)
 *     MiDeletePteRun @ 0x1400C3A20 (MiDeletePteRun.c)
 *     MiSetPagingOfDriver @ 0x1400D3E3C (MiSetPagingOfDriver.c)
 *     MI_FLUSH_CACHE_DUE_TO_ATTRIBUTE_CHANGE @ 0x1400E5B38 (MI_FLUSH_CACHE_DUE_TO_ATTRIBUTE_CHANGE.c)
 *     MiOutPageSingleKernelStack @ 0x1400EE63C (MiOutPageSingleKernelStack.c)
 *     MiReleaseZeroingVa @ 0x1400FC378 (MiReleaseZeroingVa.c)
 *     MiDecrementAndInsertStandbyPages @ 0x140102820 (MiDecrementAndInsertStandbyPages.c)
 *     MiReturnSystemPtes @ 0x140107F70 (MiReturnSystemPtes.c)
 *     MiReturnSystemVa @ 0x140108060 (MiReturnSystemVa.c)
 *     MiReplacePageTablePage @ 0x14010F190 (MiReplacePageTablePage.c)
 *     MiZeroAndFlushPtes @ 0x140115540 (MiZeroAndFlushPtes.c)
 *     MmProtectMdlSystemAddress @ 0x1401184E8 (MmProtectMdlSystemAddress.c)
 *     MiFlushDirtyBitsToPfn @ 0x140119A48 (MiFlushDirtyBitsToPfn.c)
 *     MiReplaceRotateWithDemandZero @ 0x140134D50 (MiReplaceRotateWithDemandZero.c)
 *     MmSetPageProtection @ 0x14013821C (MmSetPageProtection.c)
 *     MiDeletePhysmemVad @ 0x140138DDC (MiDeletePhysmemVad.c)
 *     MiDeleteSystemPte @ 0x1401498C4 (MiDeleteSystemPte.c)
 *     MmMapMemoryDumpMdlEx @ 0x14014E5A8 (MmMapMemoryDumpMdlEx.c)
 *     MiUnmapLargePages @ 0x14015D84C (MiUnmapLargePages.c)
 *     MiZeroPageThread @ 0x14015FE90 (MiZeroPageThread.c)
 *     MiDeleteBootRange @ 0x140162804 (MiDeleteBootRange.c)
 *     MmUnmapReservedMapping @ 0x140214F34 (MmUnmapReservedMapping.c)
 *     MmProtectSystemCacheView @ 0x140217958 (MmProtectSystemCacheView.c)
 *     MiSwitchToTransition @ 0x140219964 (MiSwitchToTransition.c)
 *     MiJoinBitmapPages @ 0x14021ED0C (MiJoinBitmapPages.c)
 *     MmFreeSpecialPool @ 0x14021FC4C (MmFreeSpecialPool.c)
 *     MiLargePageFault @ 0x140223C5C (MiLargePageFault.c)
 *     MiProtectAweRegion @ 0x140224890 (MiProtectAweRegion.c)
 *     MiConvertPrivateToProto @ 0x140228698 (MiConvertPrivateToProto.c)
 *     MiSharePages @ 0x14022B7E8 (MiSharePages.c)
 *     MiUnmapLargeUserPages @ 0x14022FBF4 (MiUnmapLargeUserPages.c)
 *     MiGetPteMappingPair @ 0x140231378 (MiGetPteMappingPair.c)
 *     MiScrubLargeMappedPage @ 0x140232658 (MiScrubLargeMappedPage.c)
 *     MmUnmapLockedRestartPages @ 0x1406A0550 (MmUnmapLockedRestartPages.c)
 *     MiRemoveUserPhysicalPagesVad @ 0x1406A6148 (MiRemoveUserPhysicalPagesVad.c)
 *     NtMapUserPhysicalPages @ 0x1406A703C (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x1406A75B4 (NtMapUserPhysicalPagesScatter.c)
 *     MmDeleteShadowMapping @ 0x1406A84B8 (MmDeleteShadowMapping.c)
 *     MiInitializeTbFlushing @ 0x1407C7E90 (MiInitializeTbFlushing.c)
 *     MiEliminatePageTablesOfOnes @ 0x1407CB738 (MiEliminatePageTablesOfOnes.c)
 *     MiReloadBootLoadedDrivers @ 0x1407CC4D4 (MiReloadBootLoadedDrivers.c)
 *     MmFreeLoaderBlock @ 0x1407CFF0C (MmFreeLoaderBlock.c)
 *     MiMarkBootKernelStack @ 0x1407D4164 (MiMarkBootKernelStack.c)
 *     MiProtectSharedUserPage @ 0x1407E8138 (MiProtectSharedUserPage.c)
 *     MiReturnDriverLoadPages @ 0x1407FB4F0 (MiReturnDriverLoadPages.c)
 * Callees:
 *     MiCompressTbFlushList @ 0x14007B750 (MiCompressTbFlushList.c)
 *     qsort @ 0x140172BB0 (qsort.c)
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
