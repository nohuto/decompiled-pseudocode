/*
 * XREFs of MiGetContainingPageTable @ 0x1401F25F0
 * Callers:
 *     MiInitializeTransitionPfn @ 0x140023124 (MiInitializeTransitionPfn.c)
 *     MmCopyToCachedPage @ 0x140037900 (MmCopyToCachedPage.c)
 *     MiCreateSharedZeroPages @ 0x1400390B0 (MiCreateSharedZeroPages.c)
 *     MiCompletePrivateZeroFault @ 0x14003B6F0 (MiCompletePrivateZeroFault.c)
 *     MmUnmapViewInSystemCache @ 0x1400492C0 (MmUnmapViewInSystemCache.c)
 *     MiDeleteValidSystemPage @ 0x14004B6A0 (MiDeleteValidSystemPage.c)
 *     MiDeletePteRun @ 0x140065140 (MiDeletePteRun.c)
 *     MiTrimSystemImagePages @ 0x140084004 (MiTrimSystemImagePages.c)
 *     MiDeleteClusterPage @ 0x1400922A0 (MiDeleteClusterPage.c)
 *     MiDeletePteList @ 0x1400DFAC0 (MiDeletePteList.c)
 *     MiCopyOnWriteEx @ 0x1400E2730 (MiCopyOnWriteEx.c)
 *     MiInitializeReadInProgressPfn @ 0x1400E5B30 (MiInitializeReadInProgressPfn.c)
 *     MiInitializePfn @ 0x1400E7280 (MiInitializePfn.c)
 *     MiSwitchToTransition @ 0x1401E8B48 (MiSwitchToTransition.c)
 *     MmAllocateSpecialPool @ 0x1401EBAE0 (MmAllocateSpecialPool.c)
 *     MiInitializeFileOnlyPfn @ 0x1401ED8E4 (MiInitializeFileOnlyPfn.c)
 *     MiConvertPrivateToProto @ 0x1401F8908 (MiConvertPrivateToProto.c)
 *     MiConvertStandbyToProto @ 0x1401F90BC (MiConvertStandbyToProto.c)
 *     MiResolveProtoCombine @ 0x1401FA48C (MiResolveProtoCombine.c)
 *     MxZeroPageTablePfns @ 0x1407B239C (MxZeroPageTablePfns.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F25D0 (MI_READ_PTE_LOCK_FREE.c)
 */

unsigned __int64 __fastcall MiGetContainingPageTable(unsigned __int64 a1)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = MI_READ_PTE_LOCK_FREE(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  return ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v2) >> 12) & 0xFFFFFFFFFLL;
}
