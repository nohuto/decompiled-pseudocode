/*
 * XREFs of MiGetPagingFileOffset @ 0x1400B7610
 * Callers:
 *     MiRestoreTransitionPte @ 0x14001CD70 (MiRestoreTransitionPte.c)
 *     MiIssueHardFault @ 0x1400244B0 (MiIssueHardFault.c)
 *     MiCompleteProtoPteFault @ 0x140039670 (MiCompleteProtoPteFault.c)
 *     MiWalkEntireImage @ 0x14004C0F0 (MiWalkEntireImage.c)
 *     MiPfnShareCountIsZero @ 0x140066260 (MiPfnShareCountIsZero.c)
 *     MiFlowThroughInsertNode @ 0x1400B24E8 (MiFlowThroughInsertNode.c)
 *     MiGetWorkingSetInfoList @ 0x1400B5870 (MiGetWorkingSetInfoList.c)
 *     MiExpandSharedZeroCluster @ 0x1400B72E8 (MiExpandSharedZeroCluster.c)
 *     NtLockVirtualMemory @ 0x1400B8D58 (NtLockVirtualMemory.c)
 *     MiComputeFaultCluster @ 0x1400BD91C (MiComputeFaultCluster.c)
 *     MiPfPutPagesInTransition @ 0x1400E2FA0 (MiPfPutPagesInTransition.c)
 *     MiValidatePagefilePageHash @ 0x140115370 (MiValidatePagefilePageHash.c)
 *     MiComputePageHash @ 0x140115750 (MiComputePageHash.c)
 *     MiStoreUpdatePagefileHash @ 0x140116D10 (MiStoreUpdatePagefileHash.c)
 *     MiResolvePageFileFault @ 0x1401218D0 (MiResolvePageFileFault.c)
 *     MiDbgMarkPfnModified @ 0x14014829C (MiDbgMarkPfnModified.c)
 *     MiMakeOutswappedPageResident @ 0x1401DFC0C (MiMakeOutswappedPageResident.c)
 *     MiTranslatePageForCopy @ 0x1401E4A80 (MiTranslatePageForCopy.c)
 *     MiScanPagefileSpace @ 0x14065B208 (MiScanPagefileSpace.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiGetPagingFileOffset(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // r8

  v1 = MI_READ_PTE_LOCK_FREE(a1);
  if ( (v1 & 4) != 0 )
    return MiGetPteTimeStamp(v1, v2, v3);
  else
    return 0LL;
}
