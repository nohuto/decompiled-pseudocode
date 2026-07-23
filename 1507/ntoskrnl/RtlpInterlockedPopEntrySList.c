/*
 * XREFs of RtlpInterlockedPopEntrySList @ 0x14018B440
 * Callers:
 *     MiFreeClonePool @ 0x14000568C (MiFreeClonePool.c)
 *     EtwpAdjustTraceBuffers @ 0x140016700 (EtwpAdjustTraceBuffers.c)
 *     EtwpEventWriteFull @ 0x1400182F0 (EtwpEventWriteFull.c)
 *     PfFbLogEntryReserve @ 0x14001AC18 (PfFbLogEntryReserve.c)
 *     MmCreateKernelStack @ 0x140022090 (MmCreateKernelStack.c)
 *     ExAllocateFromNPagedLookasideList @ 0x140030738 (ExAllocateFromNPagedLookasideList.c)
 *     CcWriteBehind @ 0x1400326B0 (CcWriteBehind.c)
 *     IoAllocateMdl @ 0x140033BF0 (IoAllocateMdl.c)
 *     MiAllocatePoolPages @ 0x140046C90 (MiAllocatePoolPages.c)
 *     IopAllocateIrpPrivate @ 0x1400480F0 (IopAllocateIrpPrivate.c)
 *     MiGetInPageSupportBlock @ 0x14005EA80 (MiGetInPageSupportBlock.c)
 *     CcLazyWriteScan @ 0x140067780 (CcLazyWriteScan.c)
 *     MiAllocatePagedPoolPages @ 0x1400AC600 (MiAllocatePagedPoolPages.c)
 *     PfFileInfoNotify @ 0x1400B82A0 (PfFileInfoNotify.c)
 *     MiGetFreeOrZeroPage @ 0x1400BD9E0 (MiGetFreeOrZeroPage.c)
 *     PfTFullEventListAdd @ 0x1400D7BB0 (PfTFullEventListAdd.c)
 *     ?StAcquireReadContext@?$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z @ 0x1400DAF78 (-StAcquireReadContext@-$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z.c)
 *     MiCreateDecayPfn @ 0x1400E0F20 (MiCreateDecayPfn.c)
 *     CcNotifyOfMappedWrite @ 0x1400E3EC4 (CcNotifyOfMappedWrite.c)
 *     CcScheduleReadAheadEx @ 0x1400E4230 (CcScheduleReadAheadEx.c)
 *     MiRemoveAnyPage @ 0x140100180 (MiRemoveAnyPage.c)
 *     IoMakeAssociatedIrpPriv @ 0x140118234 (IoMakeAssociatedIrpPriv.c)
 *     CmpAllocateExtraHashInfo @ 0x14011A5CC (CmpAllocateExtraHashInfo.c)
 *     CcAsyncCopyRead @ 0x14011DCB4 (CcAsyncCopyRead.c)
 *     MiEmptyKernelStackCache @ 0x14012FF64 (MiEmptyKernelStackCache.c)
 *     CcWaitForCurrentLazyWriterActivity @ 0x140133BA4 (CcWaitForCurrentLazyWriterActivity.c)
 *     ?SmPageRead@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x14013C608 (-SmPageRead@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STAT.c)
 *     MiStoreWriteModifiedPages @ 0x14013D708 (MiStoreWriteModifiedPages.c)
 *     HvlQueryHypervisorTscAdjustment @ 0x140148C64 (HvlQueryHypervisorTscAdjustment.c)
 *     KeAllocateInterrupt @ 0x140155490 (KeAllocateInterrupt.c)
 *     CcQueueLazyWriteScanThread @ 0x140165CEC (CcQueueLazyWriteScanThread.c)
 *     CmpLockTableAdd @ 0x1401DFF3C (CmpLockTableAdd.c)
 *     HvlGetCoverageData @ 0x1401E4A7C (HvlGetCoverageData.c)
 *     HvlGetCoverageInfo @ 0x1401E4E54 (HvlGetCoverageInfo.c)
 *     HvlResetCoverageVector @ 0x1401E530C (HvlResetCoverageVector.c)
 *     HvlQueryNumaDistance @ 0x1401E5958 (HvlQueryNumaDistance.c)
 *     HvlpDepositPages @ 0x1401E5ED8 (HvlpDepositPages.c)
 *     HvlpGetLogicalProcessorProperty @ 0x1401E61E4 (HvlpGetLogicalProcessorProperty.c)
 *     HvlpGetVpIndexFromApicId @ 0x1401E65FC (HvlpGetVpIndexFromApicId.c)
 *     HvlpMapStatisticsPage @ 0x1401E6A38 (HvlpMapStatisticsPage.c)
 *     HvlpSetLogicalProcessorProperty @ 0x1401E7438 (HvlpSetLogicalProcessorProperty.c)
 *     sub_1401E7744 @ 0x1401E7744 (sub_1401E7744.c)
 *     HvlpStartVirtualProcessor @ 0x1401E7ACC (HvlpStartVirtualProcessor.c)
 *     HvlEnterSleepState @ 0x1401E7CD8 (HvlEnterSleepState.c)
 *     HvlLpReadCpuid @ 0x1401E82B4 (HvlLpReadCpuid.c)
 *     HvlLpReadMultipleMsr @ 0x1401E85D0 (HvlLpReadMultipleMsr.c)
 *     HvlLpWriteMultipleMsr @ 0x1401E8918 (HvlLpWriteMultipleMsr.c)
 *     HvlLpWritebackInvalidate @ 0x1401E8B18 (HvlLpWritebackInvalidate.c)
 *     HvlMapDeviceInterrupt @ 0x1401E8CA8 (HvlMapDeviceInterrupt.c)
 *     HvlNotifyDebugDeviceAvailable @ 0x1401E9568 (HvlNotifyDebugDeviceAvailable.c)
 *     HvlNotifyHpetEnabled @ 0x1401E9768 (HvlNotifyHpetEnabled.c)
 *     HvlNotifyRootCrashdump @ 0x1401E992C (HvlNotifyRootCrashdump.c)
 *     HvlQueryAssociatedProcessors @ 0x1401E9BA8 (HvlQueryAssociatedProcessors.c)
 *     HvlSetHpetConfig @ 0x1401E9F98 (HvlSetHpetConfig.c)
 *     HvlSetPartitionProperty @ 0x1401EA49C (HvlSetPartitionProperty.c)
 *     HvlSetSystemMachineCheckProperty @ 0x1401EA62C (HvlSetSystemMachineCheckProperty.c)
 *     HvlSetSystemSleepProperty @ 0x1401EA7F8 (HvlSetSystemSleepProperty.c)
 *     HvlSvmGetDeviceCapabilities @ 0x1401EAFC0 (HvlSvmGetDeviceCapabilities.c)
 *     HvlSvmGetSystemCapabilities @ 0x1401EB3A0 (HvlSvmGetSystemCapabilities.c)
 *     HvlUnmapDeviceInterrupt @ 0x1401EB8CC (HvlUnmapDeviceInterrupt.c)
 *     HvlpSlowAcknowledgePageRequest @ 0x1401EBF8C (HvlpSlowAcknowledgePageRequest.c)
 *     HvlpSlowFlushPasidAddressList @ 0x1401EC12C (HvlpSlowFlushPasidAddressList.c)
 *     HvlpSlowSendSyntheticClusterIpiEx @ 0x1401EC2B4 (HvlpSlowSendSyntheticClusterIpiEx.c)
 *     HvlNotifyAcpiReenabled @ 0x1401ECCE8 (HvlNotifyAcpiReenabled.c)
 *     HvlPrepareForHibernate @ 0x1401ECF1C (HvlPrepareForHibernate.c)
 *     HvlPrepareForSecureHibernate @ 0x1401ED27C (HvlPrepareForSecureHibernate.c)
 *     HvlpConfigureLegacyPowerPolicySetting @ 0x1401ED548 (HvlpConfigureLegacyPowerPolicySetting.c)
 *     HvlpInitializePowerStatistics @ 0x1401ED6C0 (HvlpInitializePowerStatistics.c)
 *     HvlpSetPowerProperty @ 0x1401EDBFC (HvlpSetPowerProperty.c)
 *     HvlpDetermineEnlightenments @ 0x1401EE7C4 (HvlpDetermineEnlightenments.c)
 *     HvlCollectLivedump @ 0x1401EEF4C (HvlCollectLivedump.c)
 *     HvlpLogIommuInitStatus @ 0x1401EFDF0 (HvlpLogIommuInitStatus.c)
 *     sub_1401F073C @ 0x1401F073C (sub_1401F073C.c)
 *     MiInsertPteTracker @ 0x140226BDC (MiInsertPteTracker.c)
 *     ObpDeferPushRefDerefInfo @ 0x140233478 (ObpDeferPushRefDerefInfo.c)
 *     RtlpStdGetSpaceForTrace @ 0x140246140 (RtlpStdGetSpaceForTrace.c)
 *     EtwpQueueStackWalkApc @ 0x140260000 (EtwpQueueStackWalkApc.c)
 *     EtwpTraceStackWalk @ 0x1402603FC (EtwpTraceStackWalk.c)
 *     EtwpTraceStackKey @ 0x140260B00 (EtwpTraceStackKey.c)
 *     HvlpFlushRangeListTb @ 0x140270BD0 (HvlpFlushRangeListTb.c)
 *     HvlpFlushRangeListTbEx @ 0x140270FD8 (HvlpFlushRangeListTbEx.c)
 *     HvlpSlowFlushAddressSpaceTb @ 0x140271660 (HvlpSlowFlushAddressSpaceTb.c)
 *     HvlpSlowFlushAddressSpaceTbEx @ 0x1402718A0 (HvlpSlowFlushAddressSpaceTbEx.c)
 *     HvlMapGpaPages @ 0x140271C0C (HvlMapGpaPages.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     IopAllocateMiniCompletionPacket @ 0x14042D3D0 (IopAllocateMiniCompletionPacket.c)
 *     EtwpWriteUserEvent @ 0x140437B50 (EtwpWriteUserEvent.c)
 *     AlpcpSendMessage @ 0x14047CF50 (AlpcpSendMessage.c)
 *     IopAllocRealFileObject @ 0x140488940 (IopAllocRealFileObject.c)
 *     ObCreateObjectEx @ 0x14048A8A0 (ObCreateObjectEx.c)
 *     ObpCaptureObjectName @ 0x1404900F0 (ObpCaptureObjectName.c)
 *     ObOpenObjectByName @ 0x1404902E0 (ObOpenObjectByName.c)
 *     CmpCallCallBacks @ 0x140496120 (CmpCallCallBacks.c)
 *     RtlpGetRegistryHandle @ 0x1404AAC78 (RtlpGetRegistryHandle.c)
 *     CmpDoOpen @ 0x1404C78D0 (CmpDoOpen.c)
 *     ObReferenceObjectByNameEx @ 0x1404EC8E0 (ObReferenceObjectByNameEx.c)
 *     IopCreateFile @ 0x14050A2E0 (IopCreateFile.c)
 *     WdipSemFastAllocate @ 0x1405525E0 (WdipSemFastAllocate.c)
 *     PfFbBufferListCleanup @ 0x14058E1EC (PfFbBufferListCleanup.c)
 *     sub_14067068C @ 0x14067068C (sub_14067068C.c)
 *     VeAllocatePoolWithTagPriority @ 0x140736208 (VeAllocatePoolWithTagPriority.c)
 *     ViGrowPoolAllocation @ 0x140736AA0 (ViGrowPoolAllocation.c)
 *     VerifierExpInterlockedPopEntrySList @ 0x140741C54 (VerifierExpInterlockedPopEntrySList.c)
 *     VfPoolCheckForLeaks @ 0x14074620C (VfPoolCheckForLeaks.c)
 *     HvlpLpCpuid @ 0x1407F8E68 (HvlpLpCpuid.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __stdcall RtlpInterlockedPopEntrySList(PSLIST_HEADER ListHead)
{
  _SLIST_ENTRY *v1; // r8
  unsigned __int64 Alignment; // rbx
  _SLIST_HEADER v3; // rt0

  _m_prefetchw(ListHead);
  while ( 1 )
  {
    v1 = (_SLIST_ENTRY *)(ListHead->Region & 0xFFFFFFFFFFFFFFF0uLL);
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
