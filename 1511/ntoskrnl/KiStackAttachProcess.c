/*
 * XREFs of KiStackAttachProcess @ 0x1400A6700
 * Callers:
 *     ?SmStSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x140001F48 (-SmStSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z.c)
 *     MiDeleteFinalPageTables @ 0x1400055B8 (MiDeleteFinalPageTables.c)
 *     MiTrimSharedPageFromViews @ 0x140008834 (MiTrimSharedPageFromViews.c)
 *     NtUnlockVirtualMemory @ 0x140021060 (NtUnlockVirtualMemory.c)
 *     MmEnforceWorkingSetLimit @ 0x140021C18 (MmEnforceWorkingSetLimit.c)
 *     MiIssueHardFault @ 0x140039650 (MiIssueHardFault.c)
 *     IoRemoveIoCompletion @ 0x140080540 (IoRemoveIoCompletion.c)
 *     MmAttachSession @ 0x14009197C (MmAttachSession.c)
 *     MiLockDownWorkingSet @ 0x14009A59C (MiLockDownWorkingSet.c)
 *     MiCloneReserveVadCommit @ 0x14009AA54 (MiCloneReserveVadCommit.c)
 *     MiTrimOrAgeWorkingSet @ 0x1400A59F0 (MiTrimOrAgeWorkingSet.c)
 *     NtResetWriteWatch @ 0x1400A5E20 (NtResetWriteWatch.c)
 *     MiStealPage @ 0x1400ABC50 (MiStealPage.c)
 *     NtGetWriteWatch @ 0x1400B66D0 (NtGetWriteWatch.c)
 *     MiGetWorkingSetInfoList @ 0x1400B9CE0 (MiGetWorkingSetInfoList.c)
 *     NtLockVirtualMemory @ 0x1400BB80C (NtLockVirtualMemory.c)
 *     SepRmCallLsa @ 0x1400D4F24 (SepRmCallLsa.c)
 *     ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z @ 0x1400E7988 (-SmStPrioritizeRegionsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z.c)
 *     PsQueryProcessCommandLine @ 0x1400F1FB4 (PsQueryProcessCommandLine.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1400F7B0C (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmStDirectRead@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@@Z @ 0x140109F6C (-SmStDirectRead@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS@@@@@.c)
 *     MiEmptyAccessLogs @ 0x140116604 (MiEmptyAccessLogs.c)
 *     MiSharePages @ 0x140128D20 (MiSharePages.c)
 *     SepAdtLogAuditRecord @ 0x14013C4E0 (SepAdtLogAuditRecord.c)
 *     IoRaiseHardError @ 0x1401BAE90 (IoRaiseHardError.c)
 *     KeSecureProcess @ 0x1401C38F4 (KeSecureProcess.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x1401D03B4 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1401D059C (MiReleaseOutSwappedProcessCommit.c)
 *     MmSetCommitReleaseEligibility @ 0x1401D09A8 (MmSetCommitReleaseEligibility.c)
 *     MmUpdateOldWorkingSetPages @ 0x1401D8810 (MmUpdateOldWorkingSetPages.c)
 *     MiGetWorkingSetInfoEx @ 0x1401DF5F4 (MiGetWorkingSetInfoEx.c)
 *     PsDispatchIumService @ 0x1401F5B10 (PsDispatchIumService.c)
 *     ?SmStTrimWsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z @ 0x14020326C (-SmStTrimWsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z.c)
 *     ExpSvmServicePageFault @ 0x140215530 (ExpSvmServicePageFault.c)
 *     MiInSwapStoreWorker @ 0x1403B5A9C (MiInSwapStoreWorker.c)
 *     MiMapImageInSystemSpace @ 0x1403C72D4 (MiMapImageInSystemSpace.c)
 *     NtSetInformationVirtualMemory @ 0x1403CA6EC (NtSetInformationVirtualMemory.c)
 *     PspProcessDelete @ 0x1403E3968 (PspProcessDelete.c)
 *     ExpWnfWriteStateData @ 0x1403E68DC (ExpWnfWriteStateData.c)
 *     PspRundownSingleProcess @ 0x1403E770C (PspRundownSingleProcess.c)
 *     MmAssignProcessToJob @ 0x1403E8528 (MmAssignProcessToJob.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x1403E9200 (PspApplyWorkingSetLimitsToProcess.c)
 *     PspChangeProcessExecutionState @ 0x1403EC57C (PspChangeProcessExecutionState.c)
 *     PspAllocateThread @ 0x1403F0BB0 (PspAllocateThread.c)
 *     MmCreateTeb @ 0x1403F22E4 (MmCreateTeb.c)
 *     PspSetupUserStack @ 0x1403F2A8C (PspSetupUserStack.c)
 *     AlpcViewDestroyProcedure @ 0x1403F4818 (AlpcViewDestroyProcedure.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1403F71D0 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     ObpIncrementHandleCountEx @ 0x14040BFB0 (ObpIncrementHandleCountEx.c)
 *     ObCloseHandleTableEntry @ 0x14040C6C0 (ObCloseHandleTableEntry.c)
 *     NtFreeVirtualMemory @ 0x140417AA0 (NtFreeVirtualMemory.c)
 *     MmQueryVirtualMemory @ 0x140418260 (MmQueryVirtualMemory.c)
 *     NtProtectVirtualMemory @ 0x140418D90 (NtProtectVirtualMemory.c)
 *     MiMapViewOfSection @ 0x140419680 (MiMapViewOfSection.c)
 *     MiAllocateVirtualMemory @ 0x140419B20 (MiAllocateVirtualMemory.c)
 *     MiUnmapViewOfSection @ 0x14041BC60 (MiUnmapViewOfSection.c)
 *     NtQueryInformationProcess @ 0x14041D530 (NtQueryInformationProcess.c)
 *     ObDuplicateObject @ 0x1404246E0 (ObDuplicateObject.c)
 *     PspWriteTebImpersonationInfo @ 0x1404268E0 (PspWriteTebImpersonationInfo.c)
 *     PspWriteTebIdealProcessor @ 0x140445D80 (PspWriteTebIdealProcessor.c)
 *     EtwTraceProcess @ 0x1404497E4 (EtwTraceProcess.c)
 *     PspAllocateProcess @ 0x14044C768 (PspAllocateProcess.c)
 *     SmProcessCreateNotification @ 0x14044F374 (SmProcessCreateNotification.c)
 *     NtSetInformationProcess @ 0x1404507B0 (NtSetInformationProcess.c)
 *     PspSetQuotaLimits @ 0x1404524F0 (PspSetQuotaLimits.c)
 *     MmFlushVirtualMemory @ 0x140455438 (MmFlushVirtualMemory.c)
 *     MiCloneProcessAddressSpace @ 0x14046100C (MiCloneProcessAddressSpace.c)
 *     MiAllocateChildVads @ 0x140461278 (MiAllocateChildVads.c)
 *     MmInitializeProcessAddressSpace @ 0x140462718 (MmInitializeProcessAddressSpace.c)
 *     PspSetupUserProcessAddressSpace @ 0x14046390C (PspSetupUserProcessAddressSpace.c)
 *     MmCreatePeb @ 0x140463D38 (MmCreatePeb.c)
 *     PsMapSystemDlls @ 0x140464324 (PsMapSystemDlls.c)
 *     PspWritePebAffinityInfo @ 0x1404645DC (PspWritePebAffinityInfo.c)
 *     EtwpAddRegEntryToGroup @ 0x14046CBFC (EtwpAddRegEntryToGroup.c)
 *     ObpDecrementHandleCount @ 0x140470084 (ObpDecrementHandleCount.c)
 *     MmCopyVirtualMemory @ 0x14047AC20 (MmCopyVirtualMemory.c)
 *     MiFindNextEnclaveBoundary @ 0x14047B340 (MiFindNextEnclaveBoundary.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x14047B7F8 (MmSecureVirtualMemoryAgainstWrites.c)
 *     AlpcpPrepareViewForDelivery @ 0x14047BDF0 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpReceiveView @ 0x14047C0A8 (AlpcpReceiveView.c)
 *     NtSetInformationObject @ 0x140492930 (NtSetInformationObject.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14049B9C8 (SepCleanupLUIDDeviceMapDirectory.c)
 *     EtwQueryProcessTelemetryInfo @ 0x1404A32FC (EtwQueryProcessTelemetryInfo.c)
 *     PspWow64InitThread @ 0x1404A46DC (PspWow64InitThread.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x1404A53C8 (PspWow64ReadOrWriteThreadCpuArea.c)
 *     PspQueryQuotaLimits @ 0x1404A6FA8 (PspQueryQuotaLimits.c)
 *     MmDeleteTeb @ 0x1404A92F8 (MmDeleteTeb.c)
 *     ObSetHandleAttributes @ 0x1404AA8BC (ObSetHandleAttributes.c)
 *     AlpcpRestoreWriteAccess @ 0x1404AAD84 (AlpcpRestoreWriteAccess.c)
 *     SmProcessStoreMemoryPriorityRequest @ 0x1404AD068 (SmProcessStoreMemoryPriorityRequest.c)
 *     PspWow64SetupUserStack @ 0x1404B0A74 (PspWow64SetupUserStack.c)
 *     MmPrefetchVirtualMemory @ 0x1404B70E8 (MmPrefetchVirtualMemory.c)
 *     PspSetupReservedUserMappings @ 0x1404B7C1C (PspSetupReservedUserMappings.c)
 *     PspDeleteUserStack @ 0x1404C073C (PspDeleteUserStack.c)
 *     EtwpRealtimeInjectEtwBuffer @ 0x1404CAF98 (EtwpRealtimeInjectEtwBuffer.c)
 *     EtwpEnableGuid @ 0x1404CD4B0 (EtwpEnableGuid.c)
 *     MmProbeAndLockProcessPages @ 0x1404D8364 (MmProbeAndLockProcessPages.c)
 *     PfSnPopulateReadList @ 0x1404DA590 (PfSnPopulateReadList.c)
 *     PfSnAsyncPrefetchWorker @ 0x1404DEC44 (PfSnAsyncPrefetchWorker.c)
 *     EtwpProcessEnumCallback @ 0x1405008B4 (EtwpProcessEnumCallback.c)
 *     MmProcessWorkingSetControl @ 0x140517540 (MmProcessWorkingSetControl.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x140518D60 (CmpAddRemoveContainerToCLFSLog.c)
 *     AlpcpForceUnlinkSecureView @ 0x14051A418 (AlpcpForceUnlinkSecureView.c)
 *     CmpStartCLFSLog @ 0x140542C50 (CmpStartCLFSLog.c)
 *     MmInitializeHandBuiltProcess2 @ 0x140549A5C (MmInitializeHandBuiltProcess2.c)
 *     DbgkSendSystemDllMessages @ 0x1405EE270 (DbgkSendSystemDllMessages.c)
 *     DbgkpMarkProcessPeb @ 0x1405EE810 (DbgkpMarkProcessPeb.c)
 *     DbgkpPostFakeProcessCreateMessages @ 0x1405EEA74 (DbgkpPostFakeProcessCreateMessages.c)
 *     DbgkpPostFakeThreadMessages @ 0x1405EEB1C (DbgkpPostFakeThreadMessages.c)
 *     IopIsNotNativeDriverImage @ 0x1405F7FA8 (IopIsNotNativeDriverImage.c)
 *     IopRaiseHardError @ 0x1405F81F0 (IopRaiseHardError.c)
 *     MmIsFileMapped @ 0x140625E58 (MmIsFileMapped.c)
 *     NtAllocateUserPhysicalPages @ 0x140627344 (NtAllocateUserPhysicalPages.c)
 *     NtFreeUserPhysicalPages @ 0x140627AE0 (NtFreeUserPhysicalPages.c)
 *     MiCopyPagesIntoEnclave @ 0x140629118 (MiCopyPagesIntoEnclave.c)
 *     NtCreateEnclave @ 0x14062A184 (NtCreateEnclave.c)
 *     NtInitializeEnclave @ 0x14062A548 (NtInitializeEnclave.c)
 *     MiInSwapSharedWorkingSetWorker @ 0x14062AD24 (MiInSwapSharedWorkingSetWorker.c)
 *     MiDeleteAllPartialCloneVads @ 0x14062CB58 (MiDeleteAllPartialCloneVads.c)
 *     MiScrubProcesses @ 0x14062CF2C (MiScrubProcesses.c)
 *     PfSnAppLaunchScenarioControl @ 0x140631A54 (PfSnAppLaunchScenarioControl.c)
 *     PsQueryProcessExceptionFlags @ 0x14063EA7C (PsQueryProcessExceptionFlags.c)
 *     PspShutdownCsrProcess @ 0x140640950 (PspShutdownCsrProcess.c)
 *     PspCreateSecureThread @ 0x140641044 (PspCreateSecureThread.c)
 *     PspApplyWorkingSetLimits @ 0x140641E10 (PspApplyWorkingSetLimits.c)
 *     PspIumGetPhysicalPage @ 0x14064377C (PspIumGetPhysicalPage.c)
 *     EtwpUMGLEnabled @ 0x14065FED4 (EtwpUMGLEnabled.c)
 *     EtwpUpdateProcessTracingCallback @ 0x1406600BC (EtwpUpdateProcessTracingCallback.c)
 *     EtwpPsProvProcessEnumCallback @ 0x140666328 (EtwpPsProvProcessEnumCallback.c)
 *     ExpDebuggerWorker @ 0x1406AA01C (ExpDebuggerWorker.c)
 *     EmpMapPhysicalAddress @ 0x14075EFF8 (EmpMapPhysicalAddress.c)
 *     PspInitPhase3 @ 0x140772470 (PspInitPhase3.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KiAttachProcess @ 0x1400C7960 (KiAttachProcess.c)
 *     KiInSwapSingleProcess @ 0x1400C7B28 (KiInSwapSingleProcess.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     KiSetAddressPolicy @ 0x1401CA818 (KiSetAddressPolicy.c)
 *     HvlSwitchVirtualAddressSpace @ 0x14022153C (HvlSwitchVirtualAddressSpace.c)
 */

int __fastcall KiStackAttachProcess(_KPROCESS *BugCheckParameter1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rbx
  volatile int result; // eax
  int v6; // ebp
  unsigned __int8 CurrentIrql; // r12
  $E81C3296F15336D9BF9B2D43BB137B25 *v9; // r8
  $D4FCF91253F76F57393CBFE908971F67 *v10; // rdi
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // rax
  _LIST_ENTRY *v13; // rcx
  _LIST_ENTRY *v14; // rax
  struct _LIST_ENTRY *v15; // rcx
  struct _LIST_ENTRY *v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // r8
  struct _KPRCB *CurrentPrcb; // rax
  _KPROCESS *Process; // r15
  unsigned __int64 GroupIndex; // r14
  __int64 v22; // rbp
  unsigned __int64 DirectoryTableBase; // rdi
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rax
  int v27; // [rsp+30h] [rbp-48h] BYREF
  int v28[3]; // [rsp+34h] [rbp-44h] BYREF

  CurrentThread = KeGetCurrentThread();
  result = KeGetPcr()->Prcb.DpcRequestSummary;
  v6 = a2;
  if ( (result & 0x10001) != 0 )
    KeBugCheckEx(
      5u,
      (ULONG_PTR)BugCheckParameter1,
      (ULONG_PTR)CurrentThread->ApcState.Process,
      CurrentThread->ApcStateIndex,
      KeGetPcr()->Prcb.DpcRequestSummary & 0x10001);
  if ( CurrentThread->ApcState.Process == BugCheckParameter1 )
  {
    *(_QWORD *)(a3 + 32) = 1LL;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v27 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
    {
      do
        KeYieldProcessorEx(&v27, a2, a3);
      while ( CurrentThread->ThreadLock );
    }
    if ( CurrentThread->ApcStateIndex )
    {
      return KiAttachProcess((_DWORD)CurrentThread, (_DWORD)BugCheckParameter1, CurrentIrql, v6, a3);
    }
    else
    {
      v9 = &CurrentThread->152;
      v10 = &CurrentThread->600;
      CurrentThread->SavedApcState.Process = CurrentThread->ApcState.Process;
      CurrentThread->SavedApcState.InProgressFlags = CurrentThread->ApcState.InProgressFlags;
      CurrentThread->SavedApcState.KernelApcPending = CurrentThread->ApcState.KernelApcPending;
      CurrentThread->SavedApcState.UserApcPending = CurrentThread->ApcState.UserApcPending;
      Flink = CurrentThread->ApcState.ApcListHead[0].Flink;
      if ( ($E81C3296F15336D9BF9B2D43BB137B25 *)v9->ApcState.ApcListHead[0].Flink == v9 )
      {
        CurrentThread->SavedApcState.ApcListHead[0].Blink = CurrentThread->SavedApcState.ApcListHead;
        v10->SavedApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)v10;
        CurrentThread->SavedApcState.KernelApcPending = 0;
      }
      else
      {
        Blink = CurrentThread->ApcState.ApcListHead[0].Blink;
        v10->SavedApcState.ApcListHead[0].Flink = Flink;
        CurrentThread->SavedApcState.ApcListHead[0].Blink = Blink;
        Flink->Blink = (struct _LIST_ENTRY *)v10;
        Blink->Flink = (struct _LIST_ENTRY *)v10;
      }
      v13 = &CurrentThread->ApcState.ApcListHead[1];
      v14 = &CurrentThread->SavedApcState.ApcListHead[1];
      if ( v13->Flink == v13 )
      {
        CurrentThread->SavedApcState.ApcListHead[1].Blink = &CurrentThread->SavedApcState.ApcListHead[1];
        v14->Flink = v14;
        CurrentThread->SavedApcState.UserApcPending = 0;
      }
      else
      {
        v15 = v13->Flink;
        v16 = CurrentThread->ApcState.ApcListHead[1].Blink;
        v14->Flink = v15;
        CurrentThread->SavedApcState.ApcListHead[1].Blink = v16;
        v15->Blink = v14;
        v16->Flink = v14;
      }
      CurrentThread->ApcState.ApcListHead[0].Blink = CurrentThread->ApcState.ApcListHead;
      v9->ApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)v9;
      CurrentThread->ApcState.ApcListHead[1].Blink = &CurrentThread->ApcState.ApcListHead[1];
      CurrentThread->ApcState.ApcListHead[1].Flink = &CurrentThread->ApcState.ApcListHead[1];
      *(_WORD *)&CurrentThread->ApcStateFill[40] = 0;
      CurrentThread->ApcState.UserApcPending = 0;
      CurrentThread->ApcStateIndex = 1;
      if ( !v6 && (_InterlockedExchangeAdd(&BugCheckParameter1->StackCount.Value, 8u) & 7) != 0 )
      {
        CurrentThread->ThreadLock = 0LL;
        KiInSwapSingleProcess(CurrentThread, BugCheckParameter1, CurrentIrql);
        __writecr8(2uLL);
        v28[0] = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
        {
          do
            KeYieldProcessorEx(v28, v17, v18);
          while ( CurrentThread->ThreadLock );
        }
      }
      CurrentThread->MiscFlags |= 0x800u;
      CurrentThread->ApcState.Process = BugCheckParameter1;
      CurrentThread->ThreadLock = 0LL;
      CurrentPrcb = KeGetCurrentPrcb();
      Process = CurrentThread->SavedApcState.Process;
      GroupIndex = CurrentPrcb->GroupIndex;
      v22 = 8LL * CurrentPrcb->Group + 280;
      _interlockedbittestandset64(
        (volatile signed __int32 *)((char *)&BugCheckParameter1->Header.Lock + v22),
        GroupIndex);
      DirectoryTableBase = BugCheckParameter1->DirectoryTableBase;
      if ( KiKvaShadow )
      {
        v24 = BugCheckParameter1->DirectoryTableBase;
        if ( (DirectoryTableBase & 2) != 0 )
          v24 = DirectoryTableBase | 0x8000000000000000uLL;
        __writegsqword(0x7000u, v24);
        KiSetAddressPolicy(BugCheckParameter1->AddressPolicy);
      }
      if ( (HvlEnlightenments & 1) != 0 )
        HvlSwitchVirtualAddressSpace(DirectoryTableBase);
      else
        __writecr3(DirectoryTableBase);
      if ( KiKvaShadow && !KiFlushPcid )
      {
        v25 = __readcr4();
        if ( (v25 & 0x20080) != 0 )
        {
          __writecr4(v25 ^ 0x80);
          __writecr4(v25);
        }
        else
        {
          v26 = __readcr3();
          __writecr3(v26);
        }
      }
      _interlockedbittestandreset64((volatile signed __int32 *)((char *)&Process->Header.Lock + v22), GroupIndex);
      CurrentThread->MiscFlags &= ~0x800u;
      result = CurrentIrql;
      __writecr8(CurrentIrql);
      *(_QWORD *)(a3 + 32) = 0LL;
    }
  }
  return result;
}
