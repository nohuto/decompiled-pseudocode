/*
 * XREFs of MiGetContainingPageTable @ 0x1401F241C
 * Callers:
 *     MiInitializeTransitionPfn @ 0x140022CA4 (MiInitializeTransitionPfn.c)
 *     MmCopyToCachedPage @ 0x140037480 (MmCopyToCachedPage.c)
 *     MiCreateSharedZeroPages @ 0x140038C30 (MiCreateSharedZeroPages.c)
 *     MiCompletePrivateZeroFault @ 0x14003B270 (MiCompletePrivateZeroFault.c)
 *     MmUnmapViewInSystemCache @ 0x140048E40 (MmUnmapViewInSystemCache.c)
 *     MiDeleteValidSystemPage @ 0x14004B220 (MiDeleteValidSystemPage.c)
 *     MiDeletePteRun @ 0x140064CC0 (MiDeletePteRun.c)
 *     MiTrimSystemImagePages @ 0x140082164 (MiTrimSystemImagePages.c)
 *     MiDeleteClusterPage @ 0x140091A00 (MiDeleteClusterPage.c)
 *     MiDeletePteList @ 0x1400DD960 (MiDeletePteList.c)
 *     MiCopyOnWriteEx @ 0x1400E05D0 (MiCopyOnWriteEx.c)
 *     MiInitializeReadInProgressPfn @ 0x1400E39D0 (MiInitializeReadInProgressPfn.c)
 *     MiInitializePfn @ 0x1400E5120 (MiInitializePfn.c)
 *     MiSwitchToTransition @ 0x1401E8974 (MiSwitchToTransition.c)
 *     MmAllocateSpecialPool @ 0x1401EB90C (MmAllocateSpecialPool.c)
 *     MiInitializeFileOnlyPfn @ 0x1401ED710 (MiInitializeFileOnlyPfn.c)
 *     MiConvertPrivateToProto @ 0x1401F8734 (MiConvertPrivateToProto.c)
 *     MiConvertStandbyToProto @ 0x1401F8EE8 (MiConvertStandbyToProto.c)
 *     MiResolveProtoCombine @ 0x1401FA2B8 (MiResolveProtoCombine.c)
 *     MxZeroPageTablePfns @ 0x1407B239C (MxZeroPageTablePfns.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

unsigned __int64 __fastcall MiGetContainingPageTable(unsigned __int64 a1)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = MI_READ_PTE_LOCK_FREE(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  return ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v2) >> 12) & 0xFFFFFFFFFLL;
}
