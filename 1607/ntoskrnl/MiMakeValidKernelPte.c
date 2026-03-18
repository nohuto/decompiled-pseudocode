/*
 * XREFs of MiMakeValidKernelPte @ 0x140034D10
 * Callers:
 *     MiAllocateKernelStackPages @ 0x1400019C0 (MiAllocateKernelStackPages.c)
 *     MiCopyToUserVa @ 0x140014B50 (MiCopyToUserVa.c)
 *     MiAssignNonPagedPoolPtes @ 0x14001B400 (MiAssignNonPagedPoolPtes.c)
 *     MiInitializeSystemPageTable @ 0x140020FBC (MiInitializeSystemPageTable.c)
 *     MiCopyDataPageToImagePage @ 0x140023A40 (MiCopyDataPageToImagePage.c)
 *     MmCheckCachedPageStates @ 0x140033AB0 (MmCheckCachedPageStates.c)
 *     MiReadyStandbyPageForActive @ 0x1400348B0 (MiReadyStandbyPageForActive.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140034990 (MiMapPageInHyperSpaceWorker.c)
 *     MiGetPteFromCopyList @ 0x140034B80 (MiGetPteFromCopyList.c)
 *     MmCopyToCachedPage @ 0x140037900 (MmCopyToCachedPage.c)
 *     MiCompleteProtoPteFault @ 0x140039AF0 (MiCompleteProtoPteFault.c)
 *     MiCompletePrivateZeroFault @ 0x14003B6F0 (MiCompletePrivateZeroFault.c)
 *     MiDispatchFault @ 0x1400403C0 (MiDispatchFault.c)
 *     MiMapLargePagesToZero @ 0x14008AE60 (MiMapLargePagesToZero.c)
 *     MiMapContiguousMemory @ 0x14009B8AC (MiMapContiguousMemory.c)
 *     MmSetPageProtection @ 0x1400B23C0 (MmSetPageProtection.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400DE220 (MmMapLockedPagesSpecifyCache.c)
 *     MiProtectPool @ 0x1400EA400 (MiProtectPool.c)
 *     MiSetSystemCodeProtection @ 0x1400FE0F4 (MiSetSystemCodeProtection.c)
 *     MiExpandNonPagedPool @ 0x140101824 (MiExpandNonPagedPool.c)
 *     MiMapNewWorkingSetPage @ 0x140102E50 (MiMapNewWorkingSetPage.c)
 *     MiZeroInParallelWorker @ 0x140109B40 (MiZeroInParallelWorker.c)
 *     MiMapSinglePage @ 0x14010A184 (MiMapSinglePage.c)
 *     MiZeroPhysicalPage @ 0x14010A488 (MiZeroPhysicalPage.c)
 *     MiPrivateFixup @ 0x14010B3F0 (MiPrivateFixup.c)
 *     MmMapMemoryDumpMdlEx @ 0x140113F4C (MmMapMemoryDumpMdlEx.c)
 *     MiBuildReservationCluster @ 0x14011603C (MiBuildReservationCluster.c)
 *     MiMapPageFileHash @ 0x140116930 (MiMapPageFileHash.c)
 *     MiMapWithLargePages @ 0x14012E28C (MiMapWithLargePages.c)
 *     MiPfnRangeIsZero @ 0x14013E6D4 (MiPfnRangeIsZero.c)
 *     MiDemoteLargePage @ 0x14013EC14 (MiDemoteLargePage.c)
 *     MiInitializeNewUltraHugeContext @ 0x14013F65C (MiInitializeNewUltraHugeContext.c)
 *     MiGetUltraMapping @ 0x14013F7E4 (MiGetUltraMapping.c)
 *     MiFillGapPtes @ 0x140141A14 (MiFillGapPtes.c)
 *     MiDbgTranslatePhysicalAddress @ 0x1401470C4 (MiDbgTranslatePhysicalAddress.c)
 *     MiMapMdlCommon @ 0x1401E3868 (MiMapMdlCommon.c)
 *     MiUnmapMdlCommon @ 0x1401E3CF0 (MiUnmapMdlCommon.c)
 *     MmProtectMdlSystemAddress @ 0x1401E44E4 (MmProtectMdlSystemAddress.c)
 *     MiCopySinglePage @ 0x1401E49FC (MiCopySinglePage.c)
 *     MmProtectSystemCacheView @ 0x1401E6EC4 (MmProtectSystemCacheView.c)
 *     MiInitializeSlowPte @ 0x1401E88E0 (MiInitializeSlowPte.c)
 *     MmAllocateSpecialPool @ 0x1401EBAE0 (MmAllocateSpecialPool.c)
 *     MmReadProcessPageTables @ 0x1401EEF28 (MmReadProcessPageTables.c)
 *     MiMapArbitraryPage @ 0x1401FA03C (MiMapArbitraryPage.c)
 *     MiResolveProtoCombine @ 0x1401FA48C (MiResolveProtoCombine.c)
 *     MiSharePages @ 0x1401FA8E4 (MiSharePages.c)
 *     MiScrubNodeLargePageList @ 0x1401FBCA8 (MiScrubNodeLargePageList.c)
 *     MiZeroAndConvertLargePage @ 0x1401FC4CC (MiZeroAndConvertLargePage.c)
 *     MiRelocateImagePfn @ 0x140447780 (MiRelocateImagePfn.c)
 *     MmAllocateIndependentPages @ 0x1404E6034 (MmAllocateIndependentPages.c)
 *     MmCreateProcessAddressSpace @ 0x1405261BC (MmCreateProcessAddressSpace.c)
 *     MiValidateImagePfn @ 0x14052685C (MiValidateImagePfn.c)
 *     MiMapNewSession @ 0x140536994 (MiMapNewSession.c)
 *     MiAllocateTopLevelPage @ 0x140656D60 (MiAllocateTopLevelPage.c)
 *     MmAllocateNonCachedMemory @ 0x1406587C4 (MmAllocateNonCachedMemory.c)
 *     MiFillPagedPoolLockedDown @ 0x14065A01C (MiFillPagedPoolLockedDown.c)
 *     MiInitializeShadowPageTable @ 0x14065B988 (MiInitializeShadowPageTable.c)
 *     MiAddPagesToEnclave @ 0x14065E1EC (MiAddPagesToEnclave.c)
 *     MiCreateEnclave @ 0x14065EF30 (MiCreateEnclave.c)
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
    v4 = HIBYTE(word_140326AA8);
LABEL_11:
    if ( v4 )
      v3 |= 0x100uLL;
    return v3 & 0xFFFFFFFFFFFFFE7FuLL | ((unsigned __int64)(word_140326AA8 & 1) << 8);
  }
  if ( (a3 < (((unsigned __int64)qword_140326910 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
     || a3 >= (((unsigned __int64)(qword_140326910 + 0x8000000000LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL)
    && (a3 < 0xFFFFF6FB40000000uLL || a3 > 0xFFFFF6FB7FFFFFF8uLL) )
  {
    if ( a3 < (((unsigned __int64)qword_140327F90 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
      || a3 > (((unsigned __int64)qword_140326CF8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
    {
      v4 = (unsigned __int8)word_140326AA8;
    }
    else
    {
      v4 = HIBYTE(word_140326AA8);
    }
    goto LABEL_11;
  }
  return v3 & 0xFFFFFFFFFFFFFE7FuLL | ((unsigned __int64)(word_140326AA8 & 1) << 8);
}
