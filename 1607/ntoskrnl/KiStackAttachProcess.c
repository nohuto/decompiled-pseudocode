/*
 * XREFs of KiStackAttachProcess @ 0x1400CB090
 * Callers:
 *     ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z @ 0x140001F74 (-SmStPrioritizeRegionsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z.c)
 *     ?SmStSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x140002184 (-SmStSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140003B38 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     NtResetWriteWatch @ 0x140013270 (NtResetWriteWatch.c)
 *     NtGetWriteWatch @ 0x140014A70 (NtGetWriteWatch.c)
 *     MiTrimSharedPageFromViews @ 0x1400189D0 (MiTrimSharedPageFromViews.c)
 *     MiIssueHardFault @ 0x1400244B0 (MiIssueHardFault.c)
 *     IoRemoveIoCompletion @ 0x140069C60 (IoRemoveIoCompletion.c)
 *     MiDeleteFinalPageTables @ 0x140075B18 (MiDeleteFinalPageTables.c)
 *     MmAttachSession @ 0x14007659C (MmAttachSession.c)
 *     MmEnforceWorkingSetLimit @ 0x140076D74 (MmEnforceWorkingSetLimit.c)
 *     MiEmptyAccessLogs @ 0x140088410 (MiEmptyAccessLogs.c)
 *     MmQueryCommitReleaseState @ 0x1400AEEB0 (MmQueryCommitReleaseState.c)
 *     SepRmCallLsa @ 0x1400AF870 (SepRmCallLsa.c)
 *     PsQueryProcessCommandLine @ 0x1400B0074 (PsQueryProcessCommandLine.c)
 *     MiGetWorkingSetInfoList @ 0x1400B5870 (MiGetWorkingSetInfoList.c)
 *     MmAssignProcessToJob @ 0x1400B71DC (MmAssignProcessToJob.c)
 *     NtUnlockVirtualMemory @ 0x1400B8170 (NtUnlockVirtualMemory.c)
 *     NtLockVirtualMemory @ 0x1400B8D58 (NtLockVirtualMemory.c)
 *     MiStealPage @ 0x140105C04 (MiStealPage.c)
 *     MiLockDownWorkingSet @ 0x14010A384 (MiLockDownWorkingSet.c)
 *     MiCloneReserveVadCommit @ 0x14010A8B8 (MiCloneReserveVadCommit.c)
 *     MiGetWorkingSetInfoEx @ 0x14010FA14 (MiGetWorkingSetInfoEx.c)
 *     ?SmStDirectRead@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@@Z @ 0x140117780 (-SmStDirectRead@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS@@@@@.c)
 *     SepAdtLogAuditRecord @ 0x1401458A0 (SepAdtLogAuditRecord.c)
 *     IoRaiseHardError @ 0x1401C8B7C (IoRaiseHardError.c)
 *     KeSecureProcess @ 0x1401D204C (KeSecureProcess.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x1401E045C (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReleaseCommitForResetPages @ 0x1401E0760 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1401E09C4 (MiReleaseOutSwappedProcessCommit.c)
 *     MmReleaseCommitForMemResetPages @ 0x1401E0E70 (MmReleaseCommitForMemResetPages.c)
 *     MmSetCommitReleaseEligibility @ 0x1401E1044 (MmSetCommitReleaseEligibility.c)
 *     MmUpdateOldWorkingSetPages @ 0x1401EA350 (MmUpdateOldWorkingSetPages.c)
 *     MiSharePages @ 0x1401FA710 (MiSharePages.c)
 *     PsDispatchIumService @ 0x14020FA50 (PsDispatchIumService.c)
 *     ?SmStTrimWsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z @ 0x14021CDC0 (-SmStTrimWsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z.c)
 *     ExpSvmServicePageFault @ 0x14022F430 (ExpSvmServicePageFault.c)
 *     SmProcessStoreMemoryPriorityRequest @ 0x1403E47D4 (SmProcessStoreMemoryPriorityRequest.c)
 *     SmFirstTimeInit @ 0x1403E4E40 (SmFirstTimeInit.c)
 *     ObpDecrementHandleCount @ 0x1404052E0 (ObpDecrementHandleCount.c)
 *     AlpcpPrepareViewForDelivery @ 0x14040A858 (AlpcpPrepareViewForDelivery.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x14040B548 (MmSecureVirtualMemoryAgainstWrites.c)
 *     EtwpAddRegEntryToGroup @ 0x14040B73C (EtwpAddRegEntryToGroup.c)
 *     AlpcpReceiveView @ 0x14040BC48 (AlpcpReceiveView.c)
 *     NtQueryInformationProcess @ 0x140421450 (NtQueryInformationProcess.c)
 *     NtSetInformationProcess @ 0x1404248E0 (NtSetInformationProcess.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1404294F0 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     AlpcViewDestroyProcedure @ 0x14042A038 (AlpcViewDestroyProcedure.c)
 *     MiUnmapViewOfSection @ 0x14042D2D0 (MiUnmapViewOfSection.c)
 *     MiAllocateVirtualMemory @ 0x14042FD50 (MiAllocateVirtualMemory.c)
 *     MmQueryVirtualMemory @ 0x140431100 (MmQueryVirtualMemory.c)
 *     MiMapViewOfSection @ 0x140431EE0 (MiMapViewOfSection.c)
 *     NtProtectVirtualMemory @ 0x140432A50 (NtProtectVirtualMemory.c)
 *     NtFreeVirtualMemory @ 0x140432C90 (NtFreeVirtualMemory.c)
 *     ObpIncrementHandleCountEx @ 0x14044CB20 (ObpIncrementHandleCountEx.c)
 *     ObCloseHandleTableEntry @ 0x14044D250 (ObCloseHandleTableEntry.c)
 *     PspWriteTebIdealProcessor @ 0x14045836C (PspWriteTebIdealProcessor.c)
 *     EtwpWriteProcessEvent @ 0x14045C5C0 (EtwpWriteProcessEvent.c)
 *     PspRundownSingleProcess @ 0x14045CF90 (PspRundownSingleProcess.c)
 *     ObSetHandleAttributes @ 0x14045D5B8 (ObSetHandleAttributes.c)
 *     ExSweepHandleTable @ 0x14045E200 (ExSweepHandleTable.c)
 *     PspProcessDelete @ 0x14045F6F8 (PspProcessDelete.c)
 *     ExpWnfWriteStateData @ 0x140462258 (ExpWnfWriteStateData.c)
 *     PspChangeProcessExecutionState @ 0x140468830 (PspChangeProcessExecutionState.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x140469428 (PspApplyWorkingSetLimitsToProcess.c)
 *     PsMapSystemDlls @ 0x14046ACD8 (PsMapSystemDlls.c)
 *     MmCreatePeb @ 0x14046AF88 (MmCreatePeb.c)
 *     MmInitializeProcessAddressSpace @ 0x14046C248 (MmInitializeProcessAddressSpace.c)
 *     PspAllocateProcess @ 0x14046DF00 (PspAllocateProcess.c)
 *     EtwpEnableGuid @ 0x14048EE64 (EtwpEnableGuid.c)
 *     EtwpRealtimeInjectEtwBuffer @ 0x1404921F0 (EtwpRealtimeInjectEtwBuffer.c)
 *     EtwpProcessEnumCallback @ 0x140499444 (EtwpProcessEnumCallback.c)
 *     NtSetInformationObject @ 0x14049A550 (NtSetInformationObject.c)
 *     EtwQueryProcessTelemetryInfo @ 0x14049BF90 (EtwQueryProcessTelemetryInfo.c)
 *     PspQueryQuotaLimits @ 0x1404AF824 (PspQueryQuotaLimits.c)
 *     MmDeleteTeb @ 0x1404B2E50 (MmDeleteTeb.c)
 *     MmFlushVirtualMemory @ 0x1404B5438 (MmFlushVirtualMemory.c)
 *     PspWow64SetupUserStack @ 0x1404B63C8 (PspWow64SetupUserStack.c)
 *     CmpStartCLFSLog @ 0x1404BE47C (CmpStartCLFSLog.c)
 *     PspSetupReservedUserMappings @ 0x1404C2878 (PspSetupReservedUserMappings.c)
 *     PspSetQuotaLimits @ 0x1404C28C8 (PspSetQuotaLimits.c)
 *     PspDeleteUserStack @ 0x1404CF9AC (PspDeleteUserStack.c)
 *     MiInSwapStoreWorker @ 0x1404D3998 (MiInSwapStoreWorker.c)
 *     NtSetInformationVirtualMemory @ 0x1404D6C9C (NtSetInformationVirtualMemory.c)
 *     MmPrefetchVirtualMemory @ 0x1404D760C (MmPrefetchVirtualMemory.c)
 *     PfSnAsyncPrefetchWorker @ 0x1404D7A84 (PfSnAsyncPrefetchWorker.c)
 *     PfSnPopulateReadList @ 0x1404ED700 (PfSnPopulateReadList.c)
 *     MmCreateTeb @ 0x1404EE40C (MmCreateTeb.c)
 *     PspSetupUserStack @ 0x1404EE8C4 (PspSetupUserStack.c)
 *     AlpcpRestoreWriteAccess @ 0x1404EEAA0 (AlpcpRestoreWriteAccess.c)
 *     MmProbeAndLockProcessPages @ 0x1404EEB38 (MmProbeAndLockProcessPages.c)
 *     MmCopyVirtualMemory @ 0x1404EEDF0 (MmCopyVirtualMemory.c)
 *     ObDuplicateObject @ 0x1404EFB40 (ObDuplicateObject.c)
 *     PspWriteTebImpersonationInfo @ 0x1404F2760 (PspWriteTebImpersonationInfo.c)
 *     PspAllocateThread @ 0x1404F8890 (PspAllocateThread.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x1404FBC9C (PspWow64ReadOrWriteThreadCpuArea.c)
 *     PspSetupUserProcessAddressSpace @ 0x1404FD9F4 (PspSetupUserProcessAddressSpace.c)
 *     PspWow64InitThread @ 0x1404FDE08 (PspWow64InitThread.c)
 *     PspWritePebAffinityInfo @ 0x1404FE0C0 (PspWritePebAffinityInfo.c)
 *     MiMapImageInSystemSpace @ 0x140508D28 (MiMapImageInSystemSpace.c)
 *     MiCloneProcessAddressSpace @ 0x14050A958 (MiCloneProcessAddressSpace.c)
 *     MiAllocateChildVads @ 0x14050ABE0 (MiAllocateChildVads.c)
 *     EtwTraceAppStateChange @ 0x14051B448 (EtwTraceAppStateChange.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14054A1B4 (SepCleanupLUIDDeviceMapDirectory.c)
 *     MmProcessWorkingSetControl @ 0x14054C038 (MmProcessWorkingSetControl.c)
 *     AlpcpForceUnlinkSecureView @ 0x14054CBD8 (AlpcpForceUnlinkSecureView.c)
 *     PsStartSiloMonitor @ 0x14055FD28 (PsStartSiloMonitor.c)
 *     MmInitializeHandBuiltProcess2 @ 0x14057F1E4 (MmInitializeHandBuiltProcess2.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x1406116F4 (CmpAddRemoveContainerToCLFSLog.c)
 *     DbgkSendSystemDllMessages @ 0x140617F4C (DbgkSendSystemDllMessages.c)
 *     DbgkpMarkProcessPeb @ 0x1406184F4 (DbgkpMarkProcessPeb.c)
 *     DbgkpPostFakeProcessCreateMessages @ 0x140618758 (DbgkpPostFakeProcessCreateMessages.c)
 *     DbgkpPostFakeThreadMessages @ 0x140618800 (DbgkpPostFakeThreadMessages.c)
 *     IopIsNotNativeDriverImage @ 0x140621E1C (IopIsNotNativeDriverImage.c)
 *     IopRaiseHardError @ 0x14062212C (IopRaiseHardError.c)
 *     MmIsFileMapped @ 0x14065B7C8 (MmIsFileMapped.c)
 *     NtAllocateUserPhysicalPages @ 0x14065CB7C (NtAllocateUserPhysicalPages.c)
 *     NtFreeUserPhysicalPages @ 0x14065D304 (NtFreeUserPhysicalPages.c)
 *     MiCopyPagesIntoEnclave @ 0x14065E930 (MiCopyPagesIntoEnclave.c)
 *     NtCreateEnclave @ 0x14065F9DC (NtCreateEnclave.c)
 *     NtInitializeEnclave @ 0x14065FDAC (NtInitializeEnclave.c)
 *     MiCopyLargeVad @ 0x1406623D0 (MiCopyLargeVad.c)
 *     MiDeleteAllPartialCloneVads @ 0x140663140 (MiDeleteAllPartialCloneVads.c)
 *     MiInSwapSharedWorkingSetWorker @ 0x1406633D8 (MiInSwapSharedWorkingSetWorker.c)
 *     MiScrubProcesses @ 0x140664F24 (MiScrubProcesses.c)
 *     PfSnAppLaunchScenarioControl @ 0x140669CAC (PfSnAppLaunchScenarioControl.c)
 *     PsQueryProcessExceptionFlags @ 0x14067D130 (PsQueryProcessExceptionFlags.c)
 *     PspShutdownCsrProcess @ 0x14067EB60 (PspShutdownCsrProcess.c)
 *     PspCreateSecureThread @ 0x14067F50C (PspCreateSecureThread.c)
 *     PspApplyWorkingSetLimits @ 0x140680338 (PspApplyWorkingSetLimits.c)
 *     PsUnregisterSiloMonitor @ 0x140681148 (PsUnregisterSiloMonitor.c)
 *     PspIumGetPhysicalPage @ 0x1406822E8 (PspIumGetPhysicalPage.c)
 *     EtwpUMGLEnabled @ 0x14069FF10 (EtwpUMGLEnabled.c)
 *     EtwpUpdateProcessTracingCallback @ 0x1406A00DC (EtwpUpdateProcessTracingCallback.c)
 *     EtwpPsProvProcessEnumCallback @ 0x1406A7ECC (EtwpPsProvProcessEnumCallback.c)
 *     ExpDebuggerWorker @ 0x1406F3E60 (ExpDebuggerWorker.c)
 *     EmpMapPhysicalAddress @ 0x1407A7284 (EmpMapPhysicalAddress.c)
 *     PspInitPhase3 @ 0x1407BD288 (PspInitPhase3.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     KiAttachProcess @ 0x1400CB390 (KiAttachProcess.c)
 *     KiInSwapSingleProcess @ 0x1400CCAA4 (KiInSwapSingleProcess.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     HvlSwitchVirtualAddressSpace @ 0x1401C146C (HvlSwitchVirtualAddressSpace.c)
 *     KiSetAddressPolicy @ 0x1401D8EA8 (KiSetAddressPolicy.c)
 */

int __fastcall KiStackAttachProcess(_KPROCESS *BugCheckParameter1, int a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rbx
  volatile int result; // eax
  unsigned __int8 CurrentIrql; // r12
  $2B8565053CDC740D4E4887693DD8AC9E *v9; // r8
  $35A53143D7708A3431DC0DDB695C8DF9 *v10; // rdi
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // rax
  _LIST_ENTRY *v13; // rcx
  _LIST_ENTRY *v14; // rax
  struct _LIST_ENTRY *v15; // rcx
  struct _LIST_ENTRY *v16; // rdx
  struct _KPRCB *CurrentPrcb; // rax
  _KPROCESS *Process; // r15
  unsigned __int64 GroupIndex; // r14
  __int64 v20; // rbp
  unsigned __int64 DirectoryTableBase; // rdi
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rax
  int v25; // [rsp+30h] [rbp-48h] BYREF
  int v26[3]; // [rsp+34h] [rbp-44h] BYREF

  CurrentThread = KeGetCurrentThread();
  result = KeGetPcr()->Prcb.DpcRequestSummary;
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
    v25 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
    {
      do
        KeYieldProcessorEx(&v25);
      while ( CurrentThread->ThreadLock );
    }
    if ( CurrentThread->ApcStateIndex )
    {
      return KiAttachProcess((_DWORD)CurrentThread, (_DWORD)BugCheckParameter1, CurrentIrql, a2, a3);
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
      if ( ($2B8565053CDC740D4E4887693DD8AC9E *)v9->ApcState.ApcListHead[0].Flink == v9 )
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
      if ( !a2 && (_InterlockedExchangeAdd(&BugCheckParameter1->StackCount.Value, 8u) & 7) != 0 )
      {
        CurrentThread->ThreadLock = 0LL;
        KiInSwapSingleProcess(CurrentThread, BugCheckParameter1, CurrentIrql);
        __writecr8(2uLL);
        v26[0] = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
        {
          do
            KeYieldProcessorEx(v26);
          while ( CurrentThread->ThreadLock );
        }
      }
      CurrentThread->MiscFlags |= 0x800u;
      CurrentThread->ApcState.Process = BugCheckParameter1;
      CurrentThread->ThreadLock = 0LL;
      CurrentPrcb = KeGetCurrentPrcb();
      Process = CurrentThread->SavedApcState.Process;
      GroupIndex = CurrentPrcb->GroupIndex;
      v20 = 8LL * CurrentPrcb->Group + 280;
      _interlockedbittestandset64(
        (volatile signed __int32 *)((char *)&BugCheckParameter1->Header.Lock + v20),
        GroupIndex);
      DirectoryTableBase = BugCheckParameter1->DirectoryTableBase;
      if ( KiKvaShadow )
      {
        v22 = BugCheckParameter1->DirectoryTableBase;
        if ( (DirectoryTableBase & 2) != 0 )
          v22 = DirectoryTableBase | 0x8000000000000000uLL;
        __writegsqword(0x7000u, v22);
        KiSetAddressPolicy(BugCheckParameter1->AddressPolicy);
      }
      if ( (HvlEnlightenments & 1) != 0 )
        HvlSwitchVirtualAddressSpace(DirectoryTableBase);
      else
        __writecr3(DirectoryTableBase);
      if ( KiKvaShadow && !KiFlushPcid )
      {
        v23 = __readcr4();
        if ( (v23 & 0x20080) != 0 )
        {
          __writecr4(v23 ^ 0x80);
          __writecr4(v23);
        }
        else
        {
          v24 = __readcr3();
          __writecr3(v24);
        }
      }
      _interlockedbittestandreset64((volatile signed __int32 *)((char *)&Process->Header.Lock + v20), GroupIndex);
      CurrentThread->MiscFlags &= ~0x800u;
      result = CurrentIrql;
      __writecr8(CurrentIrql);
      *(_QWORD *)(a3 + 32) = 0LL;
    }
  }
  return result;
}
