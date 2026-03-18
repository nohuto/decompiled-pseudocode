/*
 * XREFs of MiGetPagingFileOffset @ 0x1400B9780
 * Callers:
 *     MiRestoreTransitionPte @ 0x14001D1F0 (MiRestoreTransitionPte.c)
 *     MiIssueHardFault @ 0x140024930 (MiIssueHardFault.c)
 *     MiCompleteProtoPteFault @ 0x140039AF0 (MiCompleteProtoPteFault.c)
 *     MiWalkEntireImage @ 0x14004C570 (MiWalkEntireImage.c)
 *     MiPfnShareCountIsZero @ 0x1400666E0 (MiPfnShareCountIsZero.c)
 *     MiFlowThroughInsertNode @ 0x1400B4668 (MiFlowThroughInsertNode.c)
 *     MiGetWorkingSetInfoList @ 0x1400B79E0 (MiGetWorkingSetInfoList.c)
 *     MiExpandSharedZeroCluster @ 0x1400B9458 (MiExpandSharedZeroCluster.c)
 *     NtLockVirtualMemory @ 0x1400BAEC8 (NtLockVirtualMemory.c)
 *     MiComputeFaultCluster @ 0x1400BFA8C (MiComputeFaultCluster.c)
 *     MiPfPutPagesInTransition @ 0x1400E5100 (MiPfPutPagesInTransition.c)
 *     MiValidatePagefilePageHash @ 0x140114E00 (MiValidatePagefilePageHash.c)
 *     MiComputePageHash @ 0x1401151E0 (MiComputePageHash.c)
 *     MiStoreUpdatePagefileHash @ 0x1401167A0 (MiStoreUpdatePagefileHash.c)
 *     MiResolvePageFileFault @ 0x140121360 (MiResolvePageFileFault.c)
 *     MiDbgMarkPfnModified @ 0x140147D2C (MiDbgMarkPfnModified.c)
 *     MiMakeOutswappedPageResident @ 0x1401DFDE0 (MiMakeOutswappedPageResident.c)
 *     MiTranslatePageForCopy @ 0x1401E4C54 (MiTranslatePageForCopy.c)
 *     MiScanPagefileSpace @ 0x14065B124 (MiScanPagefileSpace.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F25D0 (MI_READ_PTE_LOCK_FREE.c)
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
