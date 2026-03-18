/*
 * XREFs of MiMakeValidKernelPte @ 0x14004D080
 * Callers:
 *     MiCopyDataPageToImagePage @ 0x14000EF10 (MiCopyDataPageToImagePage.c)
 *     MiDecrementAndInsertStandbyPages @ 0x14000FBD0 (MiDecrementAndInsertStandbyPages.c)
 *     MiExpandNonPagedPool @ 0x1400168DC (MiExpandNonPagedPool.c)
 *     MiMapNewWorkingSetPage @ 0x140017418 (MiMapNewWorkingSetPage.c)
 *     MiInitializeSystemPageTable @ 0x140017F70 (MiInitializeSystemPageTable.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14004B6B0 (MmMapLockedPagesSpecifyCache.c)
 *     MiResolveDemandZeroFault @ 0x140052430 (MiResolveDemandZeroFault.c)
 *     MiCompleteProtoPteFault @ 0x140054EB0 (MiCompleteProtoPteFault.c)
 *     MmCopyToCachedPage @ 0x140069110 (MmCopyToCachedPage.c)
 *     MiCopyPage @ 0x1400701E0 (MiCopyPage.c)
 *     MiReplaceTransitionPage @ 0x1400714A0 (MiReplaceTransitionPage.c)
 *     MiProtectPool @ 0x140078150 (MiProtectPool.c)
 *     MmCheckCachedPageStates @ 0x1400A40D0 (MmCheckCachedPageStates.c)
 *     MiReadyStandbyPageForActive @ 0x1400A6DA0 (MiReadyStandbyPageForActive.c)
 *     MiCopyToUserVa @ 0x1400B55D0 (MiCopyToUserVa.c)
 *     MiSetSystemCodeProtection @ 0x1400B8D54 (MiSetSystemCodeProtection.c)
 *     MiZeroInParallelWorker @ 0x1400BC39C (MiZeroInParallelWorker.c)
 *     MiMapContiguousMemory @ 0x1400C0CB8 (MiMapContiguousMemory.c)
 *     MiAssignNonPagedPoolPtes @ 0x1400D22E0 (MiAssignNonPagedPoolPtes.c)
 *     MiAllocateKernelStackPages @ 0x1400DFB3C (MiAllocateKernelStackPages.c)
 *     MiGetZeroingVa @ 0x1400E4BF0 (MiGetZeroingVa.c)
 *     MiReplaceUltraBit @ 0x1400E4CDC (MiReplaceUltraBit.c)
 *     MmProtectMdlSystemAddress @ 0x1400E5CC4 (MmProtectMdlSystemAddress.c)
 *     MmSetPageProtection @ 0x1400EBB14 (MmSetPageProtection.c)
 *     MiZeroPhysicalPage @ 0x1400FE170 (MiZeroPhysicalPage.c)
 *     MiGetPteFromCopyList @ 0x1400FE324 (MiGetPteFromCopyList.c)
 *     MiMapSinglePage @ 0x1400FE59C (MiMapSinglePage.c)
 *     MiPrivateFixup @ 0x1400FEA08 (MiPrivateFixup.c)
 *     MiMapPageFileHash @ 0x140108CF0 (MiMapPageFileHash.c)
 *     MiBuildReservationCluster @ 0x140109354 (MiBuildReservationCluster.c)
 *     MmMapMemoryDumpMdlEx @ 0x1401198BC (MmMapMemoryDumpMdlEx.c)
 *     MiMapWithLargePages @ 0x140124B88 (MiMapWithLargePages.c)
 *     MiSharePages @ 0x140128D20 (MiSharePages.c)
 *     MiMapArbitraryPage @ 0x140129AC0 (MiMapArbitraryPage.c)
 *     MiResolveProtoCombine @ 0x14012AE34 (MiResolveProtoCombine.c)
 *     MiPfnRangeIsZero @ 0x140132700 (MiPfnRangeIsZero.c)
 *     MiDemoteLargePage @ 0x140132C08 (MiDemoteLargePage.c)
 *     MiFillGapPtes @ 0x1401383CC (MiFillGapPtes.c)
 *     MiMapMdlCommon @ 0x1401D35FC (MiMapMdlCommon.c)
 *     MiCopySinglePage @ 0x1401D3E08 (MiCopySinglePage.c)
 *     MmProtectSystemCacheView @ 0x1401D57E4 (MmProtectSystemCacheView.c)
 *     MiInitializeSlowPte @ 0x1401D6C10 (MiInitializeSlowPte.c)
 *     MmAllocateSpecialPool @ 0x1401DAD04 (MmAllocateSpecialPool.c)
 *     MiDbgTranslatePhysicalAddress @ 0x1401DDD84 (MiDbgTranslatePhysicalAddress.c)
 *     MmReadProcessPageTables @ 0x1401DE458 (MmReadProcessPageTables.c)
 *     MiMapPagesToZero @ 0x1401E591C (MiMapPagesToZero.c)
 *     MmCreateProcessAddressSpace @ 0x1403CB7AC (MmCreateProcessAddressSpace.c)
 *     MmAllocateIndependentPages @ 0x1403CBDCC (MmAllocateIndependentPages.c)
 *     MiRelocateImagePfn @ 0x14041AB80 (MiRelocateImagePfn.c)
 *     MiValidateImagePfn @ 0x1404DB440 (MiValidateImagePfn.c)
 *     MiMapNewSession @ 0x1404FFD90 (MiMapNewSession.c)
 *     MiAllocateTopLevelPage @ 0x140621CD4 (MiAllocateTopLevelPage.c)
 *     MmAllocateNonCachedMemory @ 0x140623364 (MmAllocateNonCachedMemory.c)
 *     MiFillPagedPoolLockedDown @ 0x1406251DC (MiFillPagedPoolLockedDown.c)
 *     MiAddPagesToEnclave @ 0x140628AE0 (MiAddPagesToEnclave.c)
 *     MiCreateEnclave @ 0x1406297C0 (MiCreateEnclave.c)
 *     MxMapVa @ 0x140747468 (MxMapVa.c)
 *     MxCopyPage @ 0x140747934 (MxCopyPage.c)
 *     MxSwapPages @ 0x14074817C (MxSwapPages.c)
 *     MxFillPhysicalPage @ 0x140748414 (MxFillPhysicalPage.c)
 *     MmInitNucleus @ 0x140748C60 (MmInitNucleus.c)
 *     MiInitializeSystemWorkingSetList @ 0x14074A208 (MiInitializeSystemWorkingSetList.c)
 *     MiInitializeSystemImagePage @ 0x14074B5A8 (MiInitializeSystemImagePage.c)
 *     MiInitSystem @ 0x14074C59C (MiInitSystem.c)
 *     MiMapBBTMemory @ 0x14074E034 (MiMapBBTMemory.c)
 *     MxConvertKernelHal @ 0x140766618 (MxConvertKernelHal.c)
 *     MiInitializeGapFrames @ 0x140767B78 (MiInitializeGapFrames.c)
 *     MiInitializeBootProcess @ 0x14076CFE4 (MiInitializeBootProcess.c)
 *     MiMapDummyPages @ 0x140771604 (MiMapDummyPages.c)
 * Callees:
 *     MiGetPteAddress @ 0x14004EAF0 (MiGetPteAddress.c)
 */

unsigned __int64 __fastcall MiMakeValidKernelPte(__int64 a1, int a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  __int64 v6; // rdx
  unsigned __int64 PteAddress; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int8 v11; // si
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  bool v22; // cc

  v5 = MmProtectToPteMask[a2] ^ ((a1 << 12) ^ MmProtectToPteMask[a2]) & 0xFFFFFFFFF000LL | 0x21;
  if ( a3 + 0x904C0000000LL <= 0x3FFFFFFF )
    v5 &= ~qword_140381310 & 0x7FFFFFFFFFFFFFFFLL;
  v6 = 0x98000000000LL;
  if ( a3 <= (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
    && a3 >= 0xFFFFF68000000000uLL
    || a3 >= 0xFFFFF6FB40000000uLL
    && a3 <= (((unsigned __int64)MmHighestUserAddress >> 18) & 0x3FFFFFF8) - 0x904C0000000LL
    || a3 >= 0xFFFFF6FB7DA00000uLL
    && (v6 = 0x90482600000LL, a3 <= (((unsigned __int64)MmHighestUserAddress >> 27) & 0x1FFFF8) - 0x90482600000LL)
    || a3 >= 0xFFFFF6FB7DBED000uLL
    && a3 <= 8 * (((unsigned __int64)MmHighestUserAddress >> 39) & 0x1FF) - 0x90482413000LL )
  {
    v5 |= 4uLL;
  }
  PteAddress = MiGetPteAddress(0xFFFF800000000000uLL, v6, 0x904C0000000LL, a4);
  v11 = word_1402FE760;
  if ( a3 < PteAddress )
  {
    v12 = HIBYTE(word_1402FE760);
LABEL_21:
    if ( v12 )
      v5 |= 0x100uLL;
    return v5 & 0xFFFFFFFFFFFFFE7FuLL | ((unsigned __int64)(v11 & 1) << 8);
  }
  if ( (a3 < MiGetPteAddress(0xFFFFF90000000000uLL, v8, v9, v10)
     || a3 >= MiGetPteAddress(0xFFFFF98000000000uLL, v13, v14, v15))
    && (a3 < MiGetPteAddress(0xFFFFF68000000000uLL, v13, v14, v15)
     || a3 > MiGetPteAddress(0xFFFFF6FFFFFFFFFFuLL, v16, v17, v18)) )
  {
    if ( a3 < MiGetPteAddress(0xFFFFF58000000000uLL, v16, v17, v18)
      || (v22 = a3 <= MiGetPteAddress(0xFFFFF6FFFFFFFFFFuLL, v19, v20, v21), v12 = HIBYTE(word_1402FE760), !v22) )
    {
      v12 = v11;
    }
    goto LABEL_21;
  }
  return v5 & 0xFFFFFFFFFFFFFE7FuLL | ((unsigned __int64)(v11 & 1) << 8);
}
