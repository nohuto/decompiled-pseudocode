/*
 * XREFs of MI_GET_PAGING_FILE_OFFSET @ 0x1400BB740
 * Callers:
 *     MiIssueHardFault @ 0x140039650 (MiIssueHardFault.c)
 *     MiDeleteSystemPagableVm @ 0x14003C140 (MiDeleteSystemPagableVm.c)
 *     MiDeleteBatch @ 0x14003D3A0 (MiDeleteBatch.c)
 *     MiResolveDemandZeroFault @ 0x140052430 (MiResolveDemandZeroFault.c)
 *     MiCompleteProtoPteFault @ 0x140054EB0 (MiCompleteProtoPteFault.c)
 *     MiDeletePteList @ 0x140060900 (MiDeletePteList.c)
 *     MiValidateImagePages @ 0x140064AE0 (MiValidateImagePages.c)
 *     MiPfnShareCountIsZero @ 0x14006A920 (MiPfnShareCountIsZero.c)
 *     MiComputeFaultCluster @ 0x1400AD64C (MiComputeFaultCluster.c)
 *     MiRestoreTransitionPte @ 0x1400B4ED0 (MiRestoreTransitionPte.c)
 *     MiGetWorkingSetInfoList @ 0x1400B9CE0 (MiGetWorkingSetInfoList.c)
 *     MiWorkingSetInfoCheckPageTable @ 0x1400BA994 (MiWorkingSetInfoCheckPageTable.c)
 *     NtLockVirtualMemory @ 0x1400BB80C (NtLockVirtualMemory.c)
 *     MiFlowThroughInsertNode @ 0x1400F2B80 (MiFlowThroughInsertNode.c)
 *     MiPfPutPagesInTransition @ 0x1400FCDE0 (MiPfPutPagesInTransition.c)
 *     MiValidatePagefilePageHash @ 0x140108248 (MiValidatePagefilePageHash.c)
 *     MiComputePageHash @ 0x14010875C (MiComputePageHash.c)
 *     MiStoreUpdatePagefileHash @ 0x140108B4C (MiStoreUpdatePagefileHash.c)
 *     MiResolvePageFileFault @ 0x1401129C8 (MiResolvePageFileFault.c)
 *     MiMakeOutswappedPageResident @ 0x1401CFB54 (MiMakeOutswappedPageResident.c)
 *     MiTranslatePageForCopy @ 0x1401D4068 (MiTranslatePageForCopy.c)
 *     MiDbgMarkPfnModified @ 0x1401DDAA0 (MiDbgMarkPfnModified.c)
 *     MiScanPagefileSpace @ 0x140625888 (MiScanPagefileSpace.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

unsigned __int64 __fastcall MI_GET_PAGING_FILE_OFFSET(__int64 a1)
{
  unsigned __int64 v1; // rax

  v1 = MI_READ_PTE_LOCK_FREE(a1);
  if ( (v1 & 0x2000) != 0 )
    return HIDWORD(v1);
  else
    return 0LL;
}
