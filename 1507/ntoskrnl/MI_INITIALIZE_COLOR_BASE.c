/*
 * XREFs of MI_INITIALIZE_COLOR_BASE @ 0x140055C20
 * Callers:
 *     MiBuildForkPte @ 0x14000253C (MiBuildForkPte.c)
 *     MiDoneWithThisPageGetAnother @ 0x140003E18 (MiDoneWithThisPageGetAnother.c)
 *     MiHandleForkTransitionPte @ 0x140004220 (MiHandleForkTransitionPte.c)
 *     MiPfPutPagesInTransition @ 0x1400356F0 (MiPfPutPagesInTransition.c)
 *     MiMapWsMetaPage @ 0x14003C190 (MiMapWsMetaPage.c)
 *     MmCheckCachedPageStates @ 0x1400509D0 (MmCheckCachedPageStates.c)
 *     MiCopyOnWriteEx @ 0x140058250 (MiCopyOnWriteEx.c)
 *     MiFindNonPagedPoolPages @ 0x140059840 (MiFindNonPagedPoolPages.c)
 *     MiResolveMappedFileFault @ 0x14005D550 (MiResolveMappedFileFault.c)
 *     MiMapNewWorkingSetPage @ 0x140068BC8 (MiMapNewWorkingSetPage.c)
 *     MiAllocateKernelStackPages @ 0x140069190 (MiAllocateKernelStackPages.c)
 *     MiMakeZeroedPageTableRange @ 0x140069E70 (MiMakeZeroedPageTableRange.c)
 *     MiInitializeColorBase @ 0x14006AB5C (MiInitializeColorBase.c)
 *     MiGetPageForHeader @ 0x1400E1178 (MiGetPageForHeader.c)
 *     MiInitializeColorBaseSession @ 0x14012F804 (MiInitializeColorBaseSession.c)
 *     MiAllocateMdlPagesByLists @ 0x140133FF0 (MiAllocateMdlPagesByLists.c)
 *     MiMapPageFileHash @ 0x14013BAD4 (MiMapPageFileHash.c)
 *     MiResolvePageFileFault @ 0x140145F70 (MiResolvePageFileFault.c)
 *     MiMakeOutswappedPageResident @ 0x14020F4C4 (MiMakeOutswappedPageResident.c)
 *     MiSwitchToTransition @ 0x140219964 (MiSwitchToTransition.c)
 *     MiFillPerSessionProtos @ 0x14021C1E0 (MiFillPerSessionProtos.c)
 *     MmAllocateSpecialPool @ 0x14021F6C4 (MmAllocateSpecialPool.c)
 *     MiAllocateDriverPage @ 0x140452A88 (MiAllocateDriverPage.c)
 *     MiPfPrepareSequentialReadList @ 0x14049D9A0 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x14049E0C0 (MiPfPrepareReadList.c)
 *     MmCreateProcessAddressSpace @ 0x1404A2834 (MmCreateProcessAddressSpace.c)
 *     MmAllocateIndependentPages @ 0x1405610B8 (MmAllocateIndependentPages.c)
 *     MiSessionInitializeWorkingSetList @ 0x140579F34 (MiSessionInitializeWorkingSetList.c)
 *     MiMapNewSession @ 0x14057A744 (MiMapNewSession.c)
 *     MiFillPagedPoolLockedDown @ 0x1406A4AAC (MiFillPagedPoolLockedDown.c)
 *     MxRelocatePageTables @ 0x1407C4868 (MxRelocatePageTables.c)
 *     MiInitializeSystemWorkingSetList @ 0x1407CAA28 (MiInitializeSystemWorkingSetList.c)
 *     MiInitializeBootProcess @ 0x1407E2258 (MiInitializeBootProcess.c)
 * Callees:
 *     <none>
 */

unsigned int *__fastcall MI_INITIALIZE_COLOR_BASE(__int64 a1, int a2, __int64 a3)
{
  struct _KPRCB *CurrentPrcb; // r10
  unsigned int *result; // rax

  if ( a2 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    *(_WORD *)(a3 + 10) = ((_WORD)a2 - 1) << byte_14034EB89;
  }
  else
  {
    CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[KeGetCurrentThread()->IdealProcessor];
    *(_WORD *)(a3 + 10) = CurrentPrcb->NodeShiftedColor;
  }
  *(_WORD *)(a3 + 8) = (1 << byte_14034EB98) - 1;
  if ( !a1 || (result = (unsigned int *)(a1 + 192), (*(_BYTE *)(a1 + 216) & 7u) >= 2) )
    result = &CurrentPrcb->PageColor;
  *(_QWORD *)a3 = result;
  return result;
}
