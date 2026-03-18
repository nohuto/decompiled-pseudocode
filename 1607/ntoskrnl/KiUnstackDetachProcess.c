/*
 * XREFs of KiUnstackDetachProcess @ 0x1400CE820
 * Callers:
 *     ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z @ 0x140001E00 (-SmStPrioritizeRegionsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z.c)
 *     ?SmStSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x140002010 (-SmStSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1400039C4 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     NtResetWriteWatch @ 0x1400136F0 (NtResetWriteWatch.c)
 *     NtGetWriteWatch @ 0x140014EF0 (NtGetWriteWatch.c)
 *     MiTrimSharedPageFromViews @ 0x140018E50 (MiTrimSharedPageFromViews.c)
 *     MiWaitForInPageComplete @ 0x1400251B0 (MiWaitForInPageComplete.c)
 *     IoRemoveIoCompletion @ 0x14006A0E0 (IoRemoveIoCompletion.c)
 *     MiDeleteFinalPageTables @ 0x140075A98 (MiDeleteFinalPageTables.c)
 *     MmDetachSession @ 0x1400764B8 (MmDetachSession.c)
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
 *     MiUnmapImageInSystemSpace @ 0x140525DFC (MiUnmapImageInSystemSpace.c)
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
 *     EmpCacheBiosDate @ 0x1407A7158 (EmpCacheBiosDate.c)
 *     EmpMapPhysicalAddress @ 0x1407A7284 (EmpMapPhysicalAddress.c)
 *     PspInitPhase3 @ 0x1407BD288 (PspInitPhase3.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002ECB0 (KeYieldProcessorEx.c)
 *     KiSwapProcess @ 0x1400CE9D0 (KiSwapProcess.c)
 *     KiMoveApcState @ 0x1400CEAA0 (KiMoveApcState.c)
 *     KiDecrementProcessStackCount @ 0x1400CEB20 (KiDecrementProcessStackCount.c)
 *     KiAcquireThreadLockRaiseToDpc @ 0x1400CEDEC (KiAcquireThreadLockRaiseToDpc.c)
 *     KeBugCheck @ 0x14015D4F0 (KeBugCheck.c)
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
