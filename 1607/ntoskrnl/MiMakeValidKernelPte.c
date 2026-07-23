/*
 * XREFs of MiMakeValidKernelPte @ 0x140034890
 * Callers:
 *     MiAllocateKernelStackPages @ 0x140001B34 (MiAllocateKernelStackPages.c)
 *     MiCopyToUserVa @ 0x1400146D0 (MiCopyToUserVa.c)
 *     MiAssignNonPagedPoolPtes @ 0x14001AF80 (MiAssignNonPagedPoolPtes.c)
 *     MiInitializeSystemPageTable @ 0x140020B3C (MiInitializeSystemPageTable.c)
 *     MiCopyDataPageToImagePage @ 0x1400235C0 (MiCopyDataPageToImagePage.c)
 *     MmCheckCachedPageStates @ 0x140033630 (MmCheckCachedPageStates.c)
 *     MiReadyStandbyPageForActive @ 0x140034430 (MiReadyStandbyPageForActive.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140034510 (MiMapPageInHyperSpaceWorker.c)
 *     MiGetPteFromCopyList @ 0x140034700 (MiGetPteFromCopyList.c)
 *     MmCopyToCachedPage @ 0x140037480 (MmCopyToCachedPage.c)
 *     MiCompleteProtoPteFault @ 0x140039670 (MiCompleteProtoPteFault.c)
 *     MiCompletePrivateZeroFault @ 0x14003B270 (MiCompletePrivateZeroFault.c)
 *     MiDispatchFault @ 0x14003FF40 (MiDispatchFault.c)
 *     MiMapLargePagesToZero @ 0x14008A560 (MiMapLargePagesToZero.c)
 *     MiMapContiguousMemory @ 0x14009B0AC (MiMapContiguousMemory.c)
 *     MmSetPageProtection @ 0x1400B0300 (MmSetPageProtection.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400DC0C0 (MmMapLockedPagesSpecifyCache.c)
 *     MiProtectPool @ 0x1400E8270 (MiProtectPool.c)
 *     MiSetSystemCodeProtection @ 0x1400FBE74 (MiSetSystemCodeProtection.c)
 *     MiExpandNonPagedPool @ 0x1400FF5A4 (MiExpandNonPagedPool.c)
 *     MiMapNewWorkingSetPage @ 0x140100BD0 (MiMapNewWorkingSetPage.c)
 *     MiZeroInParallelWorker @ 0x1401078C0 (MiZeroInParallelWorker.c)
 *     MiMapSinglePage @ 0x140107F04 (MiMapSinglePage.c)
 *     MiZeroPhysicalPage @ 0x140108208 (MiZeroPhysicalPage.c)
 *     MiPrivateFixup @ 0x140109170 (MiPrivateFixup.c)
 *     MmMapMemoryDumpMdlEx @ 0x1401144BC (MmMapMemoryDumpMdlEx.c)
 *     MiBuildReservationCluster @ 0x1401165AC (MiBuildReservationCluster.c)
 *     MiMapPageFileHash @ 0x140116EA0 (MiMapPageFileHash.c)
 *     MiMapWithLargePages @ 0x14012E7FC (MiMapWithLargePages.c)
 *     MiPfnRangeIsZero @ 0x14013EC44 (MiPfnRangeIsZero.c)
 *     MiDemoteLargePage @ 0x14013F184 (MiDemoteLargePage.c)
 *     MiInitializeNewUltraHugeContext @ 0x14013FBCC (MiInitializeNewUltraHugeContext.c)
 *     MiGetUltraMapping @ 0x14013FD54 (MiGetUltraMapping.c)
 *     MiFillGapPtes @ 0x140141F84 (MiFillGapPtes.c)
 *     MiDbgTranslatePhysicalAddress @ 0x140147634 (MiDbgTranslatePhysicalAddress.c)
 *     MiMapMdlCommon @ 0x1401E3694 (MiMapMdlCommon.c)
 *     MiUnmapMdlCommon @ 0x1401E3B1C (MiUnmapMdlCommon.c)
 *     MmProtectMdlSystemAddress @ 0x1401E4310 (MmProtectMdlSystemAddress.c)
 *     MiCopySinglePage @ 0x1401E4828 (MiCopySinglePage.c)
 *     MmProtectSystemCacheView @ 0x1401E6CF0 (MmProtectSystemCacheView.c)
 *     MiInitializeSlowPte @ 0x1401E870C (MiInitializeSlowPte.c)
 *     MmAllocateSpecialPool @ 0x1401EB90C (MmAllocateSpecialPool.c)
 *     MmReadProcessPageTables @ 0x1401EED54 (MmReadProcessPageTables.c)
 *     MiMapArbitraryPage @ 0x1401F9E68 (MiMapArbitraryPage.c)
 *     MiResolveProtoCombine @ 0x1401FA2B8 (MiResolveProtoCombine.c)
 *     MiSharePages @ 0x1401FA710 (MiSharePages.c)
 *     MiScrubNodeLargePageList @ 0x1401FBAD4 (MiScrubNodeLargePageList.c)
 *     MiZeroAndConvertLargePage @ 0x1401FC2F8 (MiZeroAndConvertLargePage.c)
 *     MiRelocateImagePfn @ 0x140446650 (MiRelocateImagePfn.c)
 *     MmAllocateIndependentPages @ 0x1404C8A68 (MmAllocateIndependentPages.c)
 *     MmCreateProcessAddressSpace @ 0x14050921C (MmCreateProcessAddressSpace.c)
 *     MiValidateImagePfn @ 0x1405098BC (MiValidateImagePfn.c)
 *     MiMapNewSession @ 0x140536ED4 (MiMapNewSession.c)
 *     MiAllocateTopLevelPage @ 0x140656E44 (MiAllocateTopLevelPage.c)
 *     MmAllocateNonCachedMemory @ 0x1406588A8 (MmAllocateNonCachedMemory.c)
 *     MiFillPagedPoolLockedDown @ 0x14065A100 (MiFillPagedPoolLockedDown.c)
 *     MiInitializeShadowPageTable @ 0x14065BA6C (MiInitializeShadowPageTable.c)
 *     MiAddPagesToEnclave @ 0x14065E2D0 (MiAddPagesToEnclave.c)
 *     MiCreateEnclave @ 0x14065F014 (MiCreateEnclave.c)
 *     MiMapDummyPages @ 0x14078EE84 (MiMapDummyPages.c)
 *     MiInitializeGapFrames @ 0x14078F08C (MiInitializeGapFrames.c)
 *     MxMapVa @ 0x14079747C (MxMapVa.c)
 *     MxCopyPage @ 0x1407977D0 (MxCopyPage.c)
 *     MxSwapPages @ 0x140797EAC (MxSwapPages.c)
 *     MxFillPhysicalPage @ 0x140798170 (MxFillPhysicalPage.c)
 *     MiInitializeSystemImagePage @ 0x1407A5EBC (MiInitializeSystemImagePage.c)
 *     MiMapBBTMemory @ 0x1407A6948 (MiMapBBTMemory.c)
 *     MiInitializeBootProcess @ 0x1407B7300 (MiInitializeBootProcess.c)
 *     MiInitializeSharedUserData @ 0x1407D0468 (MiInitializeSharedUserData.c)
 *     MiInitNucleus @ 0x1407D06B4 (MiInitNucleus.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiMakeValidKernelPte(__int64 a1, int a2, unsigned __int64 a3)
{
  __int64 v3; // r9
  int v4; // eax

  v3 = MmProtectToPteMask[a2] ^ ((a1 << 12) ^ MmProtectToPteMask[a2]) & 0xFFFFFFFFF000LL | 0x21;
  if ( a3 >= 0xFFFFF6FB40000000uLL && a3 <= 0xFFFFF6FB7FFFFFFFuLL )
    v3 &= ~qword_1403A9350 & 0x7FFFFFFFFFFFFFFFLL;
  if ( a3 <= 0xFFFFF6BFFFFFFF78uLL && a3 >= 0xFFFFF68000000000uLL
    || a3 >= 0xFFFFF6FB40000000uLL && a3 <= 0xFFFFF6FB5FFFFFF8uLL
    || a3 >= 0xFFFFF6FB7DA00000uLL && a3 <= 0xFFFFF6FB7DAFFFF8uLL
    || a3 >= 0xFFFFF6FB7DBED000uLL && a3 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    v3 |= 4uLL;
  }
  if ( a3 < 0xFFFFF6C000000000uLL )
  {
    v4 = HIBYTE(word_140326AE8);
LABEL_11:
    if ( v4 )
      v3 |= 0x100uLL;
    return v3 & 0xFFFFFFFFFFFFFE7FuLL | ((unsigned __int64)(word_140326AE8 & 1) << 8);
  }
  if ( (a3 < (((unsigned __int64)qword_140326950 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
     || a3 >= (((unsigned __int64)(qword_140326950 + 0x8000000000LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL)
    && (a3 < 0xFFFFF6FB40000000uLL || a3 > 0xFFFFF6FB7FFFFFF8uLL) )
  {
    if ( a3 < (((unsigned __int64)qword_140327FD0 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
      || a3 > (((unsigned __int64)qword_140326D38 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
    {
      v4 = (unsigned __int8)word_140326AE8;
    }
    else
    {
      v4 = HIBYTE(word_140326AE8);
    }
    goto LABEL_11;
  }
  return v3 & 0xFFFFFFFFFFFFFE7FuLL | ((unsigned __int64)(word_140326AE8 & 1) << 8);
}
