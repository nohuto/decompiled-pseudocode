/*
 * XREFs of MiFinalizePageAttribute @ 0x14002375C
 * Callers:
 *     MiInitializeTransitionPfn @ 0x140023124 (MiInitializeTransitionPfn.c)
 *     MiMigratePfn @ 0x140036E10 (MiMigratePfn.c)
 *     MiBuildForkPte @ 0x1400BCCA0 (MiBuildForkPte.c)
 *     MiReplaceTransitionPage @ 0x1401074C4 (MiReplaceTransitionPage.c)
 *     MiStealPage @ 0x140107E84 (MiStealPage.c)
 *     MiTradeActivePage @ 0x14010B184 (MiTradeActivePage.c)
 *     MiSwapStackPage @ 0x14010BCFC (MiSwapStackPage.c)
 *     MiZeroPageThread @ 0x140139C40 (MiZeroPageThread.c)
 *     MiMakeOutswappedPageResident @ 0x1401DFDE0 (MiMakeOutswappedPageResident.c)
 *     MiSplitDirectMapPage @ 0x1401EDA58 (MiSplitDirectMapPage.c)
 *     MiSwapNumaStandbyPage @ 0x1401F3ACC (MiSwapNumaStandbyPage.c)
 *     MiHandleForkTransitionPte @ 0x1401F71F0 (MiHandleForkTransitionPte.c)
 *     MiConvertPrivateToProto @ 0x1401F8908 (MiConvertPrivateToProto.c)
 *     MiInitializeGapFrames @ 0x14078F08C (MiInitializeGapFrames.c)
 *     MxSwapPages @ 0x140797EAC (MxSwapPages.c)
 *     MiAllocateDummyPage @ 0x140798314 (MiAllocateDummyPage.c)
 *     MiInitializeCacheFlushing @ 0x1407A64D8 (MiInitializeCacheFlushing.c)
 * Callees:
 *     MiChangePageAttribute @ 0x14001D088 (MiChangePageAttribute.c)
 */

__int64 __fastcall MiFinalizePageAttribute(__int64 a1, unsigned int a2, unsigned int a3)
{
  if ( *(unsigned __int8 *)(a1 + 34) >> 6 != a2 )
    MiChangePageAttribute(a1, a2, a3 == 1);
  return MiSetPfnTbFlushStamp(a1, 0LL, a3);
}
