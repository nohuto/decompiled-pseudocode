/*
 * XREFs of KiUnstackDetachProcess @ 0x1400CC6C0
 * Callers:
 *     ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z @ 0x140001F74 (-SmStPrioritizeRegionsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z.c)
 *     ?SmStSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x140002184 (-SmStSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140003B38 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     NtResetWriteWatch @ 0x140013270 (NtResetWriteWatch.c)
 *     NtGetWriteWatch @ 0x140014A70 (NtGetWriteWatch.c)
 *     MiTrimSharedPageFromViews @ 0x1400189D0 (MiTrimSharedPageFromViews.c)
 *     MiWaitForInPageComplete @ 0x140024D30 (MiWaitForInPageComplete.c)
 *     IoRemoveIoCompletion @ 0x140069C60 (IoRemoveIoCompletion.c)
 *     MiDeleteFinalPageTables @ 0x140075B18 (MiDeleteFinalPageTables.c)
 *     MmDetachSession @ 0x140076538 (MmDetachSession.c)
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
 *     MiUnmapImageInSystemSpace @ 0x140508E5C (MiUnmapImageInSystemSpace.c)
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
 *     EmpCacheBiosDate @ 0x1407A7158 (EmpCacheBiosDate.c)
 *     EmpMapPhysicalAddress @ 0x1407A7284 (EmpMapPhysicalAddress.c)
 *     PspInitPhase3 @ 0x1407BD288 (PspInitPhase3.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     KiSwapProcess @ 0x1400CC870 (KiSwapProcess.c)
 *     KiMoveApcState @ 0x1400CC940 (KiMoveApcState.c)
 *     KiDecrementProcessStackCount @ 0x1400CC9C0 (KiDecrementProcessStackCount.c)
 *     KiAcquireThreadLockRaiseToDpc @ 0x1400CCC8C (KiAcquireThreadLockRaiseToDpc.c)
 *     KeBugCheck @ 0x14015DA60 (KeBugCheck.c)
 */

int __fastcall KiUnstackDetachProcess(struct _KTHREAD *a1, int a2)
{
  unsigned __int64 QuantumTarget; // rax
  struct _KTHREAD *CurrentThread; // rbx
  _KPROCESS *Process; // rsi
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v7; // bp
  $2B8565053CDC740D4E4887693DD8AC9E *v8; // rdi
  __int64 v9; // rcx
  unsigned __int8 v11; // [rsp+50h] [rbp+8h] BYREF
  int v12; // [rsp+60h] [rbp+18h] BYREF

  QuantumTarget = a1->QuantumTarget;
  if ( QuantumTarget != 1 )
  {
    if ( QuantumTarget )
    {
      LODWORD(QuantumTarget) = KiDetachProcess(a1, a2);
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      Process = CurrentThread->ApcState.Process;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      v11 = CurrentIrql;
      v12 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v12);
        while ( CurrentThread->ThreadLock );
      }
      while ( CurrentThread->ApcState.KernelApcPending )
      {
        if ( CurrentThread->SpecialApcDisable )
          break;
        v7 = v11;
        if ( v11 )
          goto LABEL_7;
        CurrentThread->ThreadLock = 0LL;
        __writecr8(0LL);
        KiAcquireThreadLockRaiseToDpc(CurrentThread, &v11);
      }
      v7 = v11;
LABEL_7:
      if ( !CurrentThread->ApcStateIndex
        || (CurrentThread->ApcState.InProgressFlags & 1) != 0
        || (v8 = &CurrentThread->152, ($2B8565053CDC740D4E4887693DD8AC9E *)v8->ApcState.ApcListHead[0].Flink != v8)
        || (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink != &CurrentThread->ApcStateFill[16] )
      {
        KeBugCheck(6u);
      }
      CurrentThread->MiscFlags |= 0x800u;
      KiMoveApcState(&CurrentThread->600, &CurrentThread->152);
      CurrentThread->SavedApcState.Process = 0LL;
      CurrentThread->ApcStateIndex = 0;
      CurrentThread->ThreadLock = 0LL;
      KiSwapProcess(CurrentThread->ApcState.Process, Process);
      CurrentThread->MiscFlags &= ~0x800u;
      LODWORD(QuantumTarget) = v7;
      __writecr8(v7);
      if ( !a2 )
        LODWORD(QuantumTarget) = KiDecrementProcessStackCount(Process);
      if ( ($2B8565053CDC740D4E4887693DD8AC9E *)v8->ApcState.ApcListHead[0].Flink != v8 )
      {
        LOBYTE(v9) = 1;
        CurrentThread->ApcState.KernelApcPending = 1;
        LODWORD(QuantumTarget) = HalRequestSoftwareInterrupt(v9);
      }
    }
  }
  return QuantumTarget;
}
