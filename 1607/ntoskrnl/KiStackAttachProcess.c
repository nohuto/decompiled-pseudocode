/*
 * XREFs of KiStackAttachProcess @ 0x1400CD1F0
 * Callers:
 *     ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z @ 0x140001E00 (-SmStPrioritizeRegionsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z.c)
 *     ?SmStSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x140002010 (-SmStSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1400039C4 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     NtResetWriteWatch @ 0x1400136F0 (NtResetWriteWatch.c)
 *     NtGetWriteWatch @ 0x140014EF0 (NtGetWriteWatch.c)
 *     MiTrimSharedPageFromViews @ 0x140018E50 (MiTrimSharedPageFromViews.c)
 *     MiIssueHardFault @ 0x140024930 (MiIssueHardFault.c)
 *     IoRemoveIoCompletion @ 0x14006A0E0 (IoRemoveIoCompletion.c)
 *     MiDeleteFinalPageTables @ 0x140075A98 (MiDeleteFinalPageTables.c)
 *     MmAttachSession @ 0x14007651C (MmAttachSession.c)
 *     MmEnforceWorkingSetLimit @ 0x140076CF4 (MmEnforceWorkingSetLimit.c)
 *     MiEmptyAccessLogs @ 0x140086B20 (MiEmptyAccessLogs.c)
 *     MmQueryCommitReleaseState @ 0x1400B0E40 (MmQueryCommitReleaseState.c)
 *     SepRmCallLsa @ 0x1400B1930 (SepRmCallLsa.c)
 *     PsQueryProcessCommandLine @ 0x1400B2134 (PsQueryProcessCommandLine.c)
 *     MiGetWorkingSetInfoList @ 0x1400B79E0 (MiGetWorkingSetInfoList.c)
 *     MmAssignProcessToJob @ 0x1400B934C (MmAssignProcessToJob.c)
 *     NtUnlockVirtualMemory @ 0x1400BA2E0 (NtUnlockVirtualMemory.c)
 *     NtLockVirtualMemory @ 0x1400BAEC8 (NtLockVirtualMemory.c)
 *     MiStealPage @ 0x140107E84 (MiStealPage.c)
 *     MiLockDownWorkingSet @ 0x14010C604 (MiLockDownWorkingSet.c)
 *     MiCloneReserveVadCommit @ 0x14010CB38 (MiCloneReserveVadCommit.c)
 *     MiGetWorkingSetInfoEx @ 0x14010F4B0 (MiGetWorkingSetInfoEx.c)
 *     ?SmStDirectRead@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@@Z @ 0x140117210 (-SmStDirectRead@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS@@@@@.c)
 *     SepAdtLogAuditRecord @ 0x140145330 (SepAdtLogAuditRecord.c)
 *     IoRaiseHardError @ 0x1401C8CDC (IoRaiseHardError.c)
 *     KeSecureProcess @ 0x1401D2220 (KeSecureProcess.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x1401E0630 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReleaseCommitForResetPages @ 0x1401E0934 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1401E0B98 (MiReleaseOutSwappedProcessCommit.c)
 *     MmReleaseCommitForMemResetPages @ 0x1401E1044 (MmReleaseCommitForMemResetPages.c)
 *     MmSetCommitReleaseEligibility @ 0x1401E1218 (MmSetCommitReleaseEligibility.c)
 *     MmUpdateOldWorkingSetPages @ 0x1401EA524 (MmUpdateOldWorkingSetPages.c)
 *     MiSharePages @ 0x1401FA8E4 (MiSharePages.c)
 *     PsDispatchIumService @ 0x14020FC24 (PsDispatchIumService.c)
 *     ?SmStTrimWsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z @ 0x14021CF94 (-SmStTrimWsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z.c)
 *     ExpSvmServicePageFault @ 0x14022F604 (ExpSvmServicePageFault.c)
 *     SmProcessStoreMemoryPriorityRequest @ 0x1403E31A8 (SmProcessStoreMemoryPriorityRequest.c)
 *     SmFirstTimeInit @ 0x1403E3814 (SmFirstTimeInit.c)
 *     ObpDecrementHandleCount @ 0x140406420 (ObpDecrementHandleCount.c)
 *     AlpcpPrepareViewForDelivery @ 0x14040B998 (AlpcpPrepareViewForDelivery.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x14040C688 (MmSecureVirtualMemoryAgainstWrites.c)
 *     EtwpAddRegEntryToGroup @ 0x14040C87C (EtwpAddRegEntryToGroup.c)
 *     AlpcpReceiveView @ 0x14040CD88 (AlpcpReceiveView.c)
 *     NtQueryInformationProcess @ 0x140422590 (NtQueryInformationProcess.c)
 *     NtSetInformationProcess @ 0x140425A10 (NtSetInformationProcess.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x14042A620 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     AlpcViewDestroyProcedure @ 0x14042B168 (AlpcViewDestroyProcedure.c)
 *     MiUnmapViewOfSection @ 0x14042E400 (MiUnmapViewOfSection.c)
 *     MiAllocateVirtualMemory @ 0x140430E80 (MiAllocateVirtualMemory.c)
 *     MmQueryVirtualMemory @ 0x140432230 (MmQueryVirtualMemory.c)
 *     MiMapViewOfSection @ 0x140433010 (MiMapViewOfSection.c)
 *     NtProtectVirtualMemory @ 0x140433B80 (NtProtectVirtualMemory.c)
 *     NtFreeVirtualMemory @ 0x140433DC0 (NtFreeVirtualMemory.c)
 *     ObpIncrementHandleCountEx @ 0x14044DC50 (ObpIncrementHandleCountEx.c)
 *     ObCloseHandleTableEntry @ 0x14044E380 (ObCloseHandleTableEntry.c)
 *     PspWriteTebIdealProcessor @ 0x14045949C (PspWriteTebIdealProcessor.c)
 *     EtwpWriteProcessEvent @ 0x14045D6F0 (EtwpWriteProcessEvent.c)
 *     PspRundownSingleProcess @ 0x14045E0C0 (PspRundownSingleProcess.c)
 *     ObSetHandleAttributes @ 0x14045E6E8 (ObSetHandleAttributes.c)
 *     ExSweepHandleTable @ 0x14045F330 (ExSweepHandleTable.c)
 *     PspProcessDelete @ 0x140460828 (PspProcessDelete.c)
 *     ExpWnfWriteStateData @ 0x140463388 (ExpWnfWriteStateData.c)
 *     PspChangeProcessExecutionState @ 0x140469960 (PspChangeProcessExecutionState.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x14046A558 (PspApplyWorkingSetLimitsToProcess.c)
 *     PsMapSystemDlls @ 0x14046BE08 (PsMapSystemDlls.c)
 *     MmCreatePeb @ 0x14046C0B8 (MmCreatePeb.c)
 *     MmInitializeProcessAddressSpace @ 0x14046D378 (MmInitializeProcessAddressSpace.c)
 *     PspAllocateProcess @ 0x14046F030 (PspAllocateProcess.c)
 *     EtwpEnableGuid @ 0x14048E3D4 (EtwpEnableGuid.c)
 *     EtwpRealtimeInjectEtwBuffer @ 0x140491760 (EtwpRealtimeInjectEtwBuffer.c)
 *     EtwpProcessEnumCallback @ 0x1404989B4 (EtwpProcessEnumCallback.c)
 *     EtwTraceAppStateChange @ 0x1404A3048 (EtwTraceAppStateChange.c)
 *     NtSetInformationObject @ 0x1404B0170 (NtSetInformationObject.c)
 *     EtwQueryProcessTelemetryInfo @ 0x1404B1BB0 (EtwQueryProcessTelemetryInfo.c)
 *     PspQueryQuotaLimits @ 0x1404C9AA4 (PspQueryQuotaLimits.c)
 *     MmDeleteTeb @ 0x1404CD424 (MmDeleteTeb.c)
 *     MmFlushVirtualMemory @ 0x1404D1998 (MmFlushVirtualMemory.c)
 *     PspWow64SetupUserStack @ 0x1404D2928 (PspWow64SetupUserStack.c)
 *     CmpStartCLFSLog @ 0x1404DAE78 (CmpStartCLFSLog.c)
 *     PspSetupReservedUserMappings @ 0x1404DF274 (PspSetupReservedUserMappings.c)
 *     PspSetQuotaLimits @ 0x1404DF2C4 (PspSetQuotaLimits.c)
 *     PspDeleteUserStack @ 0x1404ED8F4 (PspDeleteUserStack.c)
 *     MiInSwapStoreWorker @ 0x1404F18A4 (MiInSwapStoreWorker.c)
 *     NtSetInformationVirtualMemory @ 0x1404F3D10 (NtSetInformationVirtualMemory.c)
 *     MmPrefetchVirtualMemory @ 0x1404F4680 (MmPrefetchVirtualMemory.c)
 *     PfSnAsyncPrefetchWorker @ 0x1404F4AF8 (PfSnAsyncPrefetchWorker.c)
 *     PfSnPopulateReadList @ 0x14050A770 (PfSnPopulateReadList.c)
 *     MmCreateTeb @ 0x14050B47C (MmCreateTeb.c)
 *     PspSetupUserStack @ 0x14050B934 (PspSetupUserStack.c)
 *     AlpcpRestoreWriteAccess @ 0x14050BB10 (AlpcpRestoreWriteAccess.c)
 *     MmProbeAndLockProcessPages @ 0x14050BBA8 (MmProbeAndLockProcessPages.c)
 *     MmCopyVirtualMemory @ 0x14050BE60 (MmCopyVirtualMemory.c)
 *     ObDuplicateObject @ 0x14050CBB0 (ObDuplicateObject.c)
 *     PspWriteTebImpersonationInfo @ 0x14050F7D0 (PspWriteTebImpersonationInfo.c)
 *     PspAllocateThread @ 0x1405154A0 (PspAllocateThread.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x1405188AC (PspWow64ReadOrWriteThreadCpuArea.c)
 *     PspSetupUserProcessAddressSpace @ 0x14051A604 (PspSetupUserProcessAddressSpace.c)
 *     PspWow64InitThread @ 0x14051AA18 (PspWow64InitThread.c)
 *     PspWritePebAffinityInfo @ 0x14051ACD0 (PspWritePebAffinityInfo.c)
 *     MiMapImageInSystemSpace @ 0x140525CC8 (MiMapImageInSystemSpace.c)
 *     MiCloneProcessAddressSpace @ 0x1405278F8 (MiCloneProcessAddressSpace.c)
 *     MiAllocateChildVads @ 0x140527B80 (MiAllocateChildVads.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x140549C74 (SepCleanupLUIDDeviceMapDirectory.c)
 *     MmProcessWorkingSetControl @ 0x14054BAF8 (MmProcessWorkingSetControl.c)
 *     AlpcpForceUnlinkSecureView @ 0x14054C698 (AlpcpForceUnlinkSecureView.c)
 *     PsStartSiloMonitor @ 0x14055F7E8 (PsStartSiloMonitor.c)
 *     MmInitializeHandBuiltProcess2 @ 0x14057ED38 (MmInitializeHandBuiltProcess2.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x140611640 (CmpAddRemoveContainerToCLFSLog.c)
 *     DbgkSendSystemDllMessages @ 0x140617E98 (DbgkSendSystemDllMessages.c)
 *     DbgkpMarkProcessPeb @ 0x140618440 (DbgkpMarkProcessPeb.c)
 *     DbgkpPostFakeProcessCreateMessages @ 0x1406186A4 (DbgkpPostFakeProcessCreateMessages.c)
 *     DbgkpPostFakeThreadMessages @ 0x14061874C (DbgkpPostFakeThreadMessages.c)
 *     IopIsNotNativeDriverImage @ 0x140621D68 (IopIsNotNativeDriverImage.c)
 *     IopRaiseHardError @ 0x140622078 (IopRaiseHardError.c)
 *     MmIsFileMapped @ 0x14065B6E4 (MmIsFileMapped.c)
 *     NtAllocateUserPhysicalPages @ 0x14065CA98 (NtAllocateUserPhysicalPages.c)
 *     NtFreeUserPhysicalPages @ 0x14065D220 (NtFreeUserPhysicalPages.c)
 *     MiCopyPagesIntoEnclave @ 0x14065E84C (MiCopyPagesIntoEnclave.c)
 *     NtCreateEnclave @ 0x14065F8F8 (NtCreateEnclave.c)
 *     NtInitializeEnclave @ 0x14065FCC8 (NtInitializeEnclave.c)
 *     MiCopyLargeVad @ 0x1406622EC (MiCopyLargeVad.c)
 *     MiDeleteAllPartialCloneVads @ 0x14066305C (MiDeleteAllPartialCloneVads.c)
 *     MiInSwapSharedWorkingSetWorker @ 0x1406632F4 (MiInSwapSharedWorkingSetWorker.c)
 *     MiScrubProcesses @ 0x140664E40 (MiScrubProcesses.c)
 *     PfSnAppLaunchScenarioControl @ 0x140669BC8 (PfSnAppLaunchScenarioControl.c)
 *     PsQueryProcessExceptionFlags @ 0x14067D04C (PsQueryProcessExceptionFlags.c)
 *     PspShutdownCsrProcess @ 0x14067EA7C (PspShutdownCsrProcess.c)
 *     PspCreateSecureThread @ 0x14067F428 (PspCreateSecureThread.c)
 *     PspApplyWorkingSetLimits @ 0x140680254 (PspApplyWorkingSetLimits.c)
 *     PsUnregisterSiloMonitor @ 0x140681064 (PsUnregisterSiloMonitor.c)
 *     PspIumGetPhysicalPage @ 0x140682204 (PspIumGetPhysicalPage.c)
 *     EtwpUMGLEnabled @ 0x14069FDD8 (EtwpUMGLEnabled.c)
 *     EtwpUpdateProcessTracingCallback @ 0x14069FFA4 (EtwpUpdateProcessTracingCallback.c)
 *     EtwpPsProvProcessEnumCallback @ 0x1406A7D94 (EtwpPsProvProcessEnumCallback.c)
 *     ExpDebuggerWorker @ 0x1406F3E60 (ExpDebuggerWorker.c)
 *     EmpMapPhysicalAddress @ 0x1407A7284 (EmpMapPhysicalAddress.c)
 *     PspInitPhase3 @ 0x1407BD288 (PspInitPhase3.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002ECB0 (KeYieldProcessorEx.c)
 *     KiAttachProcess @ 0x1400CD4F0 (KiAttachProcess.c)
 *     KiInSwapSingleProcess @ 0x1400CEC04 (KiInSwapSingleProcess.c)
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 *     HvlSwitchVirtualAddressSpace @ 0x1401C1588 (HvlSwitchVirtualAddressSpace.c)
 *     KiSetAddressPolicy @ 0x1401D907C (KiSetAddressPolicy.c)
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
