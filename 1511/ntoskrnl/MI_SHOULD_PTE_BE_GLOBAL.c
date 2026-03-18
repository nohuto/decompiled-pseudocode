/*
 * XREFs of MI_SHOULD_PTE_BE_GLOBAL @ 0x1400AA020
 * Callers:
 *     MiMapNewWorkingSetPage @ 0x140017418 (MiMapNewWorkingSetPage.c)
 *     MiInitializeSystemPageTable @ 0x140017F70 (MiInitializeSystemPageTable.c)
 *     MiIssueHardFault @ 0x140039650 (MiIssueHardFault.c)
 *     MiZeroFault @ 0x14004D290 (MiZeroFault.c)
 *     MiCompleteProtoPteFault @ 0x140054EB0 (MiCompleteProtoPteFault.c)
 *     MiFinishHardFault @ 0x1400663D0 (MiFinishHardFault.c)
 *     MmCopyToCachedPage @ 0x140069110 (MmCopyToCachedPage.c)
 *     MiProtectPool @ 0x140078150 (MiProtectPool.c)
 *     MiMapWsMetaPage @ 0x1400A90C0 (MiMapWsMetaPage.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400A9AE0 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnlinkStandbyBatch @ 0x1400A9C40 (MiUnlinkStandbyBatch.c)
 *     MiSetSystemCodeProtection @ 0x1400B8D54 (MiSetSystemCodeProtection.c)
 *     MiFinishLastForkPageTable @ 0x1400ECA54 (MiFinishLastForkPageTable.c)
 *     MiBuildForkPageTable @ 0x1400EE1AC (MiBuildForkPageTable.c)
 *     MiResolveProtoCombine @ 0x14012AE34 (MiResolveProtoCombine.c)
 *     MiMakeOutswappedPageResident @ 0x1401CFB54 (MiMakeOutswappedPageResident.c)
 *     MiJoinBitmapPages @ 0x1401DA568 (MiJoinBitmapPages.c)
 *     MmAllocateSpecialPool @ 0x1401DAD04 (MmAllocateSpecialPool.c)
 *     MiMapUserLargePages @ 0x1401E1F60 (MiMapUserLargePages.c)
 *     MiCreatePagingFileMap @ 0x1403C89F8 (MiCreatePagingFileMap.c)
 *     MiMapViewOfDataSection @ 0x140416C00 (MiMapViewOfDataSection.c)
 *     MiInitializeDynamicBitmap @ 0x1404FF1D8 (MiInitializeDynamicBitmap.c)
 *     MiSessionInitializeWorkingSetList @ 0x1404FF630 (MiSessionInitializeWorkingSetList.c)
 *     MiMapNewSession @ 0x1404FFD90 (MiMapNewSession.c)
 *     MiInitializeShadowPageTable @ 0x1406260E8 (MiInitializeShadowPageTable.c)
 *     MiInitializeDummyPages @ 0x1407460E4 (MiInitializeDummyPages.c)
 *     MiEliminatePageTablesOfOnes @ 0x14074A504 (MiEliminatePageTablesOfOnes.c)
 *     MiInitializeTbFlushing @ 0x14074C190 (MiInitializeTbFlushing.c)
 * Callees:
 *     MiGetPteAddress @ 0x14004EAF0 (MiGetPteAddress.c)
 */

__int64 __fastcall MI_SHOULD_PTE_BE_GLOBAL(unsigned __int64 a1)
{
  __int64 result; // rax
  bool v3; // cc

  if ( a1 < MiGetPteAddress(0xFFFF800000000000uLL) )
    return HIBYTE(word_1402FE760);
  if ( a1 >= MiGetPteAddress(0xFFFFF90000000000uLL) && a1 < MiGetPteAddress(0xFFFFF98000000000uLL) )
    return 0LL;
  if ( a1 >= MiGetPteAddress(0xFFFFF68000000000uLL) && a1 <= MiGetPteAddress(0xFFFFF6FFFFFFFFFFuLL) )
    return 0LL;
  if ( a1 < MiGetPteAddress(0xFFFFF58000000000uLL) )
    return (unsigned __int8)word_1402FE760;
  v3 = a1 <= MiGetPteAddress(0xFFFFF6FFFFFFFFFFuLL);
  result = HIBYTE(word_1402FE760);
  if ( !v3 )
    return (unsigned __int8)word_1402FE760;
  return result;
}
