/*
 * XREFs of RtlpInterlockedPopEntrySList @ 0x140166E00
 * Callers:
 *     MiEmptyKernelStackCache @ 0x14000196C (MiEmptyKernelStackCache.c)
 *     ?StAcquireReadContext@?$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z @ 0x14000473C (-StAcquireReadContext@-$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z.c)
 *     ExpAllocateBigPool @ 0x140011AD0 (ExpAllocateBigPool.c)
 *     IopAllocateIrpPrivate @ 0x14002E250 (IopAllocateIrpPrivate.c)
 *     IoAllocateMdl @ 0x14002EF90 (IoAllocateMdl.c)
 *     MiGetFreeOrZeroPage @ 0x14003DC80 (MiGetFreeOrZeroPage.c)
 *     MiSlistGetFreePage @ 0x140061478 (MiSlistGetFreePage.c)
 *     ExAllocateFromNPagedLookasideList @ 0x14006FEB0 (ExAllocateFromNPagedLookasideList.c)
 *     CcAllocateWorkQueueEntry @ 0x140072080 (CcAllocateWorkQueueEntry.c)
 *     EtwpEventWriteFull @ 0x140073CE0 (EtwpEventWriteFull.c)
 *     EtwpAdjustTraceBuffers @ 0x140085490 (EtwpAdjustTraceBuffers.c)
 *     IoMakeAssociatedIrpPriv @ 0x14008E078 (IoMakeAssociatedIrpPriv.c)
 *     MiCreateDecayPfn @ 0x1400976F0 (MiCreateDecayPfn.c)
 *     MiAllocatePoolPages @ 0x14009DBEC (MiAllocatePoolPages.c)
 *     MiFreeClonePool @ 0x1400B47F4 (MiFreeClonePool.c)
 *     PfFbLogEntryReserve @ 0x1400D3E04 (PfFbLogEntryReserve.c)
 *     MiAllocatePagedPoolPages @ 0x1400DE970 (MiAllocatePagedPoolPages.c)
 *     MiGetInPageSupportBlock @ 0x1400E7520 (MiGetInPageSupportBlock.c)
 *     PfFileInfoNotify @ 0x1400EEAD0 (PfFileInfoNotify.c)
 *     PfTFullEventListAdd @ 0x1400F0468 (PfTFullEventListAdd.c)
 *     MmCreateKernelStack @ 0x1400F17B0 (MmCreateKernelStack.c)
 *     ?SmPageRead@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x140116FE8 (-SmPageRead@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STAT.c)
 *     MiStoreWriteModifiedPages @ 0x140118960 (MiStoreWriteModifiedPages.c)
 *     KeAllocateInterrupt @ 0x14012CF1C (KeAllocateInterrupt.c)
 *     CmpLockTableAdd @ 0x1401B5204 (CmpLockTableAdd.c)
 *     HvlpAcquireHypercallPage @ 0x1401BB294 (HvlpAcquireHypercallPage.c)
 *     MiInsertPteTracker @ 0x1401FC7EC (MiInsertPteTracker.c)
 *     ObpDeferPushRefDerefInfo @ 0x1401FECC4 (ObpDeferPushRefDerefInfo.c)
 *     RtlpStdGetSpaceForTrace @ 0x140211B38 (RtlpStdGetSpaceForTrace.c)
 *     EtwpGetStackLookasideListEntry @ 0x14022920C (EtwpGetStackLookasideListEntry.c)
 *     EtwpQueueStackWalkApc @ 0x140229234 (EtwpQueueStackWalkApc.c)
 *     EtwpTraceStackKey @ 0x14022B1D8 (EtwpTraceStackKey.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     ObOpenObjectByNameEx @ 0x140419070 (ObOpenObjectByNameEx.c)
 *     ObpCaptureObjectName @ 0x1404199F0 (ObpCaptureObjectName.c)
 *     ObCreateObjectEx @ 0x14041D970 (ObCreateObjectEx.c)
 *     IopAllocRealFileObject @ 0x140442AB0 (IopAllocRealFileObject.c)
 *     AlpcpSendMessage @ 0x14044A880 (AlpcpSendMessage.c)
 *     CmpCallCallBacks @ 0x140452A00 (CmpCallCallBacks.c)
 *     CmpDoParseKey @ 0x140453D10 (CmpDoParseKey.c)
 *     IopCreateFile @ 0x14045B980 (IopCreateFile.c)
 *     FsRtlAllocateExtraCreateParameterList @ 0x14045C9A0 (FsRtlAllocateExtraCreateParameterList.c)
 *     IopAllocateMiniCompletionPacket @ 0x140471A08 (IopAllocateMiniCompletionPacket.c)
 *     ObReferenceObjectByNameEx @ 0x140499E04 (ObReferenceObjectByNameEx.c)
 *     CmpExpandPathInfo @ 0x1404B13EC (CmpExpandPathInfo.c)
 *     WdipSemFastAllocate @ 0x1404E4438 (WdipSemFastAllocate.c)
 *     RtlpGetRegistryHandle @ 0x1404FADEC (RtlpGetRegistryHandle.c)
 *     PfFbBufferListCleanup @ 0x14066A0A0 (PfFbBufferListCleanup.c)
 *     VeAllocatePoolWithTagPriority @ 0x140701D78 (VeAllocatePoolWithTagPriority.c)
 *     ViGrowPoolAllocation @ 0x140702610 (ViGrowPoolAllocation.c)
 *     VfPoolCheckForLeaks @ 0x1407109DC (VfPoolCheckForLeaks.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __stdcall RtlpInterlockedPopEntrySList(PSLIST_HEADER ListHead)
{
  struct _SLIST_ENTRY *v1; // r8
  unsigned __int64 Alignment; // rbx
  union _SLIST_HEADER v3; // rt0

  _m_prefetchw(ListHead);
  while ( 1 )
  {
    v1 = (struct _SLIST_ENTRY *)(ListHead->Region & 0xFFFFFFFFFFFFFFF0uLL);
    if ( !v1 )
      break;
    Alignment = ListHead->Alignment;
    v3 = *ListHead;
    LOWORD(Alignment) = ListHead->Alignment - 1;
    if ( _InterlockedCompareExchange128(
           (volatile signed __int64 *)ListHead,
           (signed __int64)v1->Next,
           Alignment,
           (signed __int64 *)&v3) )
    {
      return v1;
    }
  }
  _InterlockedOr64((volatile signed __int64 *)ListHead, 0LL);
  return v1;
}
