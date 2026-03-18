/*
 * XREFs of MI_INITIALIZE_COLOR_BASE @ 0x140070760
 * Callers:
 *     MiGetPageForHeader @ 0x140011920 (MiGetPageForHeader.c)
 *     MiMapNewWorkingSetPage @ 0x140017418 (MiMapNewWorkingSetPage.c)
 *     MiMakeZeroedPageTableRange @ 0x140017CAC (MiMakeZeroedPageTableRange.c)
 *     MiGetPageTablePages @ 0x1400185B8 (MiGetPageTablePages.c)
 *     MiFindNonPagedPoolPages @ 0x1400198C0 (MiFindNonPagedPoolPages.c)
 *     MiInitializeColorBaseSession @ 0x140019BD4 (MiInitializeColorBaseSession.c)
 *     MiBuildForkPte @ 0x14001DDD8 (MiBuildForkPte.c)
 *     MiCopyOnWriteEx @ 0x14006EE60 (MiCopyOnWriteEx.c)
 *     MiMigratePfn @ 0x140073740 (MiMigratePfn.c)
 *     MmCheckCachedPageStates @ 0x1400A40D0 (MmCheckCachedPageStates.c)
 *     MiMapWsMetaPage @ 0x1400A90C0 (MiMapWsMetaPage.c)
 *     MiResolveMappedFileFault @ 0x1400AA7A0 (MiResolveMappedFileFault.c)
 *     MiAllocateKernelStackPages @ 0x1400DFB3C (MiAllocateKernelStackPages.c)
 *     MiDoneWithThisPageGetAnother @ 0x1400EC988 (MiDoneWithThisPageGetAnother.c)
 *     MiPfPutPagesInTransition @ 0x1400FCDE0 (MiPfPutPagesInTransition.c)
 *     MiAllocateMdlPagesByLists @ 0x140104DC8 (MiAllocateMdlPagesByLists.c)
 *     MiMapPageFileHash @ 0x140108CF0 (MiMapPageFileHash.c)
 *     MiResolvePageFileFault @ 0x1401129C8 (MiResolvePageFileFault.c)
 *     MiMakeOutswappedPageResident @ 0x1401CFB54 (MiMakeOutswappedPageResident.c)
 *     MiSwitchToTransition @ 0x1401D6E6C (MiSwitchToTransition.c)
 *     MmAllocateSpecialPool @ 0x1401DAD04 (MmAllocateSpecialPool.c)
 *     MiHandleForkTransitionPte @ 0x1401E4E64 (MiHandleForkTransitionPte.c)
 *     MmCreateProcessAddressSpace @ 0x1403CB7AC (MmCreateProcessAddressSpace.c)
 *     MmAllocateIndependentPages @ 0x1403CBDCC (MmAllocateIndependentPages.c)
 *     MiPfPrepareSequentialReadList @ 0x14042CB00 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x14042D190 (MiPfPrepareReadList.c)
 *     MiAllocateDriverPage @ 0x140484298 (MiAllocateDriverPage.c)
 *     MiSessionInitializeWorkingSetList @ 0x1404FF630 (MiSessionInitializeWorkingSetList.c)
 *     MiMapNewSession @ 0x1404FFD90 (MiMapNewSession.c)
 *     MiFillPagedPoolLockedDown @ 0x1406251DC (MiFillPagedPoolLockedDown.c)
 *     MiFillPerSessionProtos @ 0x14062C154 (MiFillPerSessionProtos.c)
 *     MxRelocatePageTables @ 0x140745ED8 (MxRelocatePageTables.c)
 *     MiInitializeSystemWorkingSetList @ 0x14074A208 (MiInitializeSystemWorkingSetList.c)
 *     MiInitializeBootProcess @ 0x14076CFE4 (MiInitializeBootProcess.c)
 * Callees:
 *     <none>
 */

unsigned int *__fastcall MI_INITIALIZE_COLOR_BASE(__int64 a1, int a2, __int64 a3)
{
  struct _KPRCB *CurrentPrcb; // r9
  unsigned int *result; // rax

  if ( a2 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    *(_WORD *)(a3 + 10) = ((_WORD)a2 - 1) << byte_1402FE6D9;
  }
  else
  {
    CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[KeGetCurrentThread()->IdealProcessor];
    *(_WORD *)(a3 + 10) = CurrentPrcb->NodeShiftedColor;
  }
  *(_WORD *)(a3 + 8) = (1 << byte_1402FE6E8) - 1;
  if ( a1 && (*(_BYTE *)(a1 + 216) & 7u) < 2 )
    result = (unsigned int *)(a1 + 192);
  else
    result = &CurrentPrcb->PageColor;
  *(_QWORD *)a3 = result;
  return result;
}
