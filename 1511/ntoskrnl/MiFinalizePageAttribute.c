/*
 * XREFs of MiFinalizePageAttribute @ 0x140072854
 * Callers:
 *     MiTradeActivePage @ 0x140007470 (MiTradeActivePage.c)
 *     MiInitializeTransitionPfn @ 0x140011764 (MiInitializeTransitionPfn.c)
 *     MiGetSystemPage @ 0x140011A30 (MiGetSystemPage.c)
 *     MiGetPageTablePages @ 0x1400185B8 (MiGetPageTablePages.c)
 *     MiBuildForkPte @ 0x14001DDD8 (MiBuildForkPte.c)
 *     MiMigratePfn @ 0x140073740 (MiMigratePfn.c)
 *     MiStealPage @ 0x1400ABC50 (MiStealPage.c)
 *     MiSwapStackPage @ 0x1400D872C (MiSwapStackPage.c)
 *     MiConvertStandbyToProto @ 0x140127A94 (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x14012A57C (MiConvertPrivateToProto.c)
 *     MiZeroPageThread @ 0x1401307A0 (MiZeroPageThread.c)
 *     MiCreateZeroThreadContext @ 0x1401318FC (MiCreateZeroThreadContext.c)
 *     MiMakeOutswappedPageResident @ 0x1401CFB54 (MiMakeOutswappedPageResident.c)
 *     MiSwapNumaStandbyPage @ 0x1401E4470 (MiSwapNumaStandbyPage.c)
 *     MiHandleForkTransitionPte @ 0x1401E4E64 (MiHandleForkTransitionPte.c)
 *     MiMapPagesToZero @ 0x1401E591C (MiMapPagesToZero.c)
 *     MxSwapPages @ 0x14074817C (MxSwapPages.c)
 *     MiAllocateDummyPage @ 0x140748580 (MiAllocateDummyPage.c)
 *     MiInitializeCacheFlushing @ 0x14074DBEC (MiInitializeCacheFlushing.c)
 *     MiInitializeGapFrames @ 0x140767B78 (MiInitializeGapFrames.c)
 * Callees:
 *     MiChangePageAttribute @ 0x1400AA634 (MiChangePageAttribute.c)
 */

signed __int64 __fastcall MiFinalizePageAttribute(__int64 a1, __int64 a2, int a3)
{
  if ( *(unsigned __int8 *)(a1 + 34) >> 6 != (_DWORD)a2 )
    MiChangePageAttribute(a1, a2, a3 == 1);
  return MiSetPfnTbFlushStamp(a1, 0LL, a3);
}
