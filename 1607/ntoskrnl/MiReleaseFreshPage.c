/*
 * XREFs of MiReleaseFreshPage @ 0x1400AAB5C
 * Callers:
 *     MiAllocateKernelStackPages @ 0x140001B34 (MiAllocateKernelStackPages.c)
 *     MiLockCode @ 0x140015170 (MiLockCode.c)
 *     MmCheckCachedPageStates @ 0x140033630 (MmCheckCachedPageStates.c)
 *     MmCopyToCachedPage @ 0x140037480 (MmCopyToCachedPage.c)
 *     MiGetPage @ 0x14003D5D0 (MiGetPage.c)
 *     MiFinishHardFault @ 0x14004D220 (MiFinishHardFault.c)
 *     MiMakeDriverPagesPrivate @ 0x140087988 (MiMakeDriverPagesPrivate.c)
 *     MiBuildMdlForMappedFileFault @ 0x1400BD440 (MiBuildMdlForMappedFileFault.c)
 *     MiCleanupPageTablePages @ 0x1401004E0 (MiCleanupPageTablePages.c)
 *     MiMapNewWorkingSetPage @ 0x140100BD0 (MiMapNewWorkingSetPage.c)
 *     MiObtainTransitionPage @ 0x140104F94 (MiObtainTransitionPage.c)
 *     MiStealPage @ 0x140105C04 (MiStealPage.c)
 *     MiPrivateFixup @ 0x140109170 (MiPrivateFixup.c)
 *     MiSwapStackPage @ 0x140109A7C (MiSwapStackPage.c)
 *     MiAllocateMdlPagesByLists @ 0x14010FD90 (MiAllocateMdlPagesByLists.c)
 *     MiResolvePageFileFault @ 0x1401218D0 (MiResolvePageFileFault.c)
 *     MiFreePageChain @ 0x1401228C0 (MiFreePageChain.c)
 *     MiDeleteZeroThreadContext @ 0x14013F75C (MiDeleteZeroThreadContext.c)
 *     MiSwitchToTransition @ 0x1401E8974 (MiSwitchToTransition.c)
 *     MiReplaceLockedPage @ 0x1401EAFB8 (MiReplaceLockedPage.c)
 *     MmAllocateSpecialPool @ 0x1401EB90C (MmAllocateSpecialPool.c)
 *     MiSwapNumaStandbyPage @ 0x1401F38F8 (MiSwapNumaStandbyPage.c)
 *     MiIdealClusterPage @ 0x1401F6574 (MiIdealClusterPage.c)
 *     MiFreeReadListPages @ 0x14042B6A4 (MiFreeReadListPages.c)
 *     MiInitializeCacheFlushing @ 0x1407A64D8 (MiInitializeCacheFlushing.c)
 * Callees:
 *     MiReleaseFreshPageLocked @ 0x140021D24 (MiReleaseFreshPageLocked.c)
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 */

__int64 __fastcall MiReleaseFreshPage(__int64 a1)
{
  unsigned __int64 v2; // rbx
  __int64 result; // rax

  v2 = (unsigned __int8)MiLockPageInline(a1);
  MiReleaseFreshPageLocked(a1);
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v2);
  return result;
}
