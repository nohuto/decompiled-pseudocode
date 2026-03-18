/*
 * XREFs of MiInitializePageColorBase @ 0x1400E60A0
 * Callers:
 *     MiAllocateKernelStackPages @ 0x1400019C0 (MiAllocateKernelStackPages.c)
 *     MiMakeZeroedPageTableRange @ 0x140020CC8 (MiMakeZeroedPageTableRange.c)
 *     MmCheckCachedPageStates @ 0x140033AB0 (MmCheckCachedPageStates.c)
 *     MiMigratePfn @ 0x140036E10 (MiMigratePfn.c)
 *     MiWalkEntireImage @ 0x14004C570 (MiWalkEntireImage.c)
 *     MiInitializeColorBaseSession @ 0x1400B3A88 (MiInitializeColorBaseSession.c)
 *     MiBuildForkPte @ 0x1400BCCA0 (MiBuildForkPte.c)
 *     MiCopyOnWriteEx @ 0x1400E2730 (MiCopyOnWriteEx.c)
 *     MiPfPutPagesInTransition @ 0x1400E5100 (MiPfPutPagesInTransition.c)
 *     MiResolveMappedFileFault @ 0x1400E68A0 (MiResolveMappedFileFault.c)
 *     MiFindNonPagedPoolPages @ 0x1400E7060 (MiFindNonPagedPoolPages.c)
 *     MiGetPageForHeader @ 0x1400FDB48 (MiGetPageForHeader.c)
 *     MiInitializeColorBase @ 0x1401029C4 (MiInitializeColorBase.c)
 *     MiMapNewWorkingSetPage @ 0x140102E50 (MiMapNewWorkingSetPage.c)
 *     MiDoneWithThisPageGetAnother @ 0x14010AD3C (MiDoneWithThisPageGetAnother.c)
 *     MiAllocateMdlPagesByLists @ 0x14010F82C (MiAllocateMdlPagesByLists.c)
 *     MiMapPageFileHash @ 0x140116930 (MiMapPageFileHash.c)
 *     MiMakeOutswappedPageResident @ 0x1401DFDE0 (MiMakeOutswappedPageResident.c)
 *     MiSwitchToTransition @ 0x1401E8B48 (MiSwitchToTransition.c)
 *     MmAllocateSpecialPool @ 0x1401EBAE0 (MmAllocateSpecialPool.c)
 *     MiGetClusterPage @ 0x1401F6318 (MiGetClusterPage.c)
 *     MiIdealClusterPage @ 0x1401F6748 (MiIdealClusterPage.c)
 *     MiHandleForkTransitionPte @ 0x1401F71F0 (MiHandleForkTransitionPte.c)
 *     MiPfPrepareSequentialReadList @ 0x1404302F0 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x140445CF0 (MiPfPrepareReadList.c)
 *     MmAllocateIndependentPages @ 0x1404E6034 (MmAllocateIndependentPages.c)
 *     MmCreateProcessAddressSpace @ 0x1405261BC (MmCreateProcessAddressSpace.c)
 *     MiAllocateDriverPage @ 0x140526790 (MiAllocateDriverPage.c)
 *     MiMapNewSession @ 0x140536994 (MiMapNewSession.c)
 *     MiFillPagedPoolLockedDown @ 0x14065A01C (MiFillPagedPoolLockedDown.c)
 *     MiFillPerSessionProtos @ 0x140661E34 (MiFillPerSessionProtos.c)
 *     MxRelocatePageTables @ 0x14078F670 (MxRelocatePageTables.c)
 *     MiInitializeBootProcess @ 0x1407B7300 (MiInitializeBootProcess.c)
 * Callees:
 *     <none>
 */

unsigned int *__fastcall MiInitializePageColorBase(__int64 a1, int a2, __int64 a3)
{
  unsigned int *result; // rax
  struct _KPRCB *CurrentPrcb; // r9

  result = (unsigned int *)a1;
  if ( a2 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    *(_WORD *)(a3 + 10) = ((_WORD)a2 - 1) << byte_1403269C9;
  }
  else
  {
    CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[KeGetCurrentThread()->IdealProcessor];
    *(_WORD *)(a3 + 10) = CurrentPrcb->NodeShiftedColor;
  }
  *(_WORD *)(a3 + 8) = (1 << byte_1403269D8) - 1;
  if ( !a1 || (*(_BYTE *)(a1 + 184) & 7u) >= 2 )
    result = &CurrentPrcb->PageColor;
  *(_QWORD *)a3 = result;
  return result;
}
