/*
 * XREFs of KiUnstackDetachProcess @ 0x14009A720
 * Callers:
 *     MiCloneReserveVadCommit @ 0x14000158C (MiCloneReserveVadCommit.c)
 *     MiLockDownWorkingSet @ 0x140001790 (MiLockDownWorkingSet.c)
 *     MmEnforceWorkingSetLimit @ 0x14000961C (MmEnforceWorkingSetLimit.c)
 *     NtGetWriteWatch @ 0x14003C8B0 (NtGetWriteWatch.c)
 *     MiStealPage @ 0x140055CB0 (MiStealPage.c)
 *     MiGetWorkingSetInfoList @ 0x14007A1C0 (MiGetWorkingSetInfoList.c)
 *     NtResetWriteWatch @ 0x14007CF90 (NtResetWriteWatch.c)
 *     NtUnlockVirtualMemory @ 0x14007ECE0 (NtUnlockVirtualMemory.c)
 *     MiWaitForInPageComplete @ 0x140087120 (MiWaitForInPageComplete.c)
 *     IoRemoveIoCompletion @ 0x14009E3A0 (IoRemoveIoCompletion.c)
 *     MiEmptyAccessLogs @ 0x1400D6F7C (MiEmptyAccessLogs.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1400DA708 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     MiDeleteFinalPageTables @ 0x1400EEEC4 (MiDeleteFinalPageTables.c)
 *     MiTrimSharedPageFromViews @ 0x1400FAC3C (MiTrimSharedPageFromViews.c)
 *     MmDetachSession @ 0x1400FD53C (MmDetachSession.c)
 *     NtLockVirtualMemory @ 0x1400FD8C4 (NtLockVirtualMemory.c)
 *     SepRmCallLsa @ 0x140117528 (SepRmCallLsa.c)
 *     ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z @ 0x1401286CC (-SmStPrioritizeRegionsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z.c)
 *     PsQueryProcessCommandLine @ 0x14012F404 (PsQueryProcessCommandLine.c)
 *     ?SmStSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x140131D5C (-SmStSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z.c)
 *     ?SmStDirectRead@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@@Z @ 0x1401400E0 (-SmStDirectRead@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS@@@@@.c)
 *     MiGetWorkingSetInfoEx @ 0x14014EE78 (MiGetWorkingSetInfoEx.c)
 *     SepAdtLogAuditRecord @ 0x140164DBC (SepAdtLogAuditRecord.c)
 *     IoRaiseHardError @ 0x1401F60B8 (IoRaiseHardError.c)
 *     KeSecureProcess @ 0x1401FF820 (KeSecureProcess.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x14020FF64 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x14021023C (MiReleaseOutSwappedProcessCommit.c)
 *     MmSetCommitReleaseEligibility @ 0x1402107D4 (MmSetCommitReleaseEligibility.c)
 *     MmUpdateOldWorkingSetPages @ 0x14021B8BC (MmUpdateOldWorkingSetPages.c)
 *     MiSharePages @ 0x14022B7E8 (MiSharePages.c)
 *     PsDispatchIumService @ 0x140244710 (PsDispatchIumService.c)
 *     ?SmStTrimWsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x140252598 (-SmStTrimWsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     ExpSvmServicePageFault @ 0x140265694 (ExpSvmServicePageFault.c)
 *     MiAllocateChildVads @ 0x140406234 (MiAllocateChildVads.c)
 *     MiCloneProcessAddressSpace @ 0x140406774 (MiCloneProcessAddressSpace.c)
 *     MmAssignProcessToJob @ 0x14041AD30 (MmAssignProcessToJob.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x14041B1FC (PspApplyWorkingSetLimitsToProcess.c)
 *     EtwpProcessEnumCallback @ 0x14041C13C (EtwpProcessEnumCallback.c)
 *     NtSetInformationProcess @ 0x14041CF90 (NtSetInformationProcess.c)
 *     MmCreateTeb @ 0x140420A54 (MmCreateTeb.c)
 *     PspInsertThread @ 0x140423090 (PspInsertThread.c)
 *     ObDuplicateObject @ 0x1404243A0 (ObDuplicateObject.c)
 *     PspAllocateThread @ 0x140451490 (PspAllocateThread.c)
 *     PfSnAsyncPrefetchWorker @ 0x1404567D0 (PfSnAsyncPrefetchWorker.c)
 *     PspSetupUserProcessAddressSpace @ 0x14046567C (PspSetupUserProcessAddressSpace.c)
 *     MmCreatePeb @ 0x140465AC4 (MmCreatePeb.c)
 *     PsMapSystemDlls @ 0x140466680 (PsMapSystemDlls.c)
 *     PspWritePebAffinityInfo @ 0x1404668C8 (PspWritePebAffinityInfo.c)
 *     MmInitializeProcessAddressSpace @ 0x140467860 (MmInitializeProcessAddressSpace.c)
 *     PspAllocateProcess @ 0x140468798 (PspAllocateProcess.c)
 *     SmProcessCreateNotification @ 0x140469E2C (SmProcessCreateNotification.c)
 *     PfSnPopulateReadList @ 0x1404733A0 (PfSnPopulateReadList.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x140474640 (MmSecureVirtualMemoryAgainstWrites.c)
 *     AlpcpReceiveView @ 0x140474CA0 (AlpcpReceiveView.c)
 *     AlpcViewDestroyProcedure @ 0x140476810 (AlpcViewDestroyProcedure.c)
 *     AlpcpPrepareViewForDelivery @ 0x140477090 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpRestoreWriteAccess @ 0x140477450 (AlpcpRestoreWriteAccess.c)
 *     MmProbeAndLockProcessPages @ 0x1404778C8 (MmProbeAndLockProcessPages.c)
 *     PspWriteTebIdealProcessor @ 0x140479050 (PspWriteTebIdealProcessor.c)
 *     PspWriteTebImpersonationInfo @ 0x140479740 (PspWriteTebImpersonationInfo.c)
 *     ObpCreateHandle @ 0x140492D10 (ObpCreateHandle.c)
 *     ObCloseHandleTableEntry @ 0x1404946D0 (ObCloseHandleTableEntry.c)
 *     ObpIncrementHandleCountEx @ 0x1404952B0 (ObpIncrementHandleCountEx.c)
 *     EtwpRealtimeInjectEtwBuffer @ 0x1404A2364 (EtwpRealtimeInjectEtwBuffer.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1404B4A40 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MmQueryVirtualMemory @ 0x1404B4DD0 (MmQueryVirtualMemory.c)
 *     MiUnmapViewOfSection @ 0x1404B72D0 (MiUnmapViewOfSection.c)
 *     NtProtectVirtualMemory @ 0x1404B9510 (NtProtectVirtualMemory.c)
 *     NtFreeVirtualMemory @ 0x1404B9FC0 (NtFreeVirtualMemory.c)
 *     MiMapViewOfSection @ 0x1404BA540 (MiMapViewOfSection.c)
 *     MiAllocateVirtualMemory @ 0x1404BA9D0 (MiAllocateVirtualMemory.c)
 *     MmCopyVirtualMemory @ 0x1404BD870 (MmCopyVirtualMemory.c)
 *     EtwpAddRegEntryToGroup @ 0x1404D1618 (EtwpAddRegEntryToGroup.c)
 *     ObpDecrementHandleCount @ 0x1404D3564 (ObpDecrementHandleCount.c)
 *     EtwpEnableGuid @ 0x1404D4AD0 (EtwpEnableGuid.c)
 *     EtwQueryProcessTelemetryInfo @ 0x1404F34A0 (EtwQueryProcessTelemetryInfo.c)
 *     MmPrefetchVirtualMemory @ 0x1404FB458 (MmPrefetchVirtualMemory.c)
 *     NtSetInformationVirtualMemory @ 0x1404FB5E8 (NtSetInformationVirtualMemory.c)
 *     ExpWnfWriteStateData @ 0x14050395C (ExpWnfWriteStateData.c)
 *     PspProcessDelete @ 0x140503E8C (PspProcessDelete.c)
 *     PspChangeProcessExecutionState @ 0x14050637C (PspChangeProcessExecutionState.c)
 *     PspRundownSingleProcess @ 0x140508838 (PspRundownSingleProcess.c)
 *     EtwTraceProcess @ 0x14050C208 (EtwTraceProcess.c)
 *     NtQueryInformationProcess @ 0x14050D9A0 (NtQueryInformationProcess.c)
 *     PspQueryQuotaLimits @ 0x140511084 (PspQueryQuotaLimits.c)
 *     MiMapImageInSystemSpace @ 0x14051BD60 (MiMapImageInSystemSpace.c)
 *     MiUnmapImageInSystemSpace @ 0x14051BE94 (MiUnmapImageInSystemSpace.c)
 *     NtSetInformationObject @ 0x140520060 (NtSetInformationObject.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14052E744 (SepCleanupLUIDDeviceMapDirectory.c)
 *     PspWow64InitThread @ 0x140530C38 (PspWow64InitThread.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x1405315F4 (PspWow64ReadOrWriteThreadCpuArea.c)
 *     MmFlushVirtualMemory @ 0x140531D6C (MmFlushVirtualMemory.c)
 *     ObSetHandleAttributes @ 0x140533E6C (ObSetHandleAttributes.c)
 *     MmDeleteTeb @ 0x14053E174 (MmDeleteTeb.c)
 *     SmProcessStoreMemoryPriorityRequest @ 0x140547048 (SmProcessStoreMemoryPriorityRequest.c)
 *     PspSetQuotaLimits @ 0x14054F6C8 (PspSetQuotaLimits.c)
 *     ObClearProcessHandleTable @ 0x14055AC34 (ObClearProcessHandleTable.c)
 *     MiInSwapStoreWorker @ 0x14055D454 (MiInSwapStoreWorker.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x14058CBA8 (CmpAddRemoveContainerToCLFSLog.c)
 *     CmpStartCLFSLog @ 0x1405B9014 (CmpStartCLFSLog.c)
 *     MmInitializeHandBuiltProcess2 @ 0x1405C008C (MmInitializeHandBuiltProcess2.c)
 *     DbgkSendSystemDllMessages @ 0x1406667F0 (DbgkSendSystemDllMessages.c)
 *     DbgkpMarkProcessPeb @ 0x140666EA8 (DbgkpMarkProcessPeb.c)
 *     DbgkpPostFakeProcessCreateMessages @ 0x1406671DC (DbgkpPostFakeProcessCreateMessages.c)
 *     DbgkpPostFakeThreadMessages @ 0x140667284 (DbgkpPostFakeThreadMessages.c)
 *     IopIsNotNativeDriverImage @ 0x140671E78 (IopIsNotNativeDriverImage.c)
 *     IopRaiseHardError @ 0x140672188 (IopRaiseHardError.c)
 *     AlpcpForceUnlinkSecureView @ 0x14069F1C4 (AlpcpForceUnlinkSecureView.c)
 *     MmIsFileMapped @ 0x1406A5898 (MmIsFileMapped.c)
 *     NtAllocateUserPhysicalPages @ 0x1406A6328 (NtAllocateUserPhysicalPages.c)
 *     NtFreeUserPhysicalPages @ 0x1406A6AD8 (NtFreeUserPhysicalPages.c)
 *     MmCreateShadowMapping @ 0x1406A833C (MmCreateShadowMapping.c)
 *     MmDeleteShadowMapping @ 0x1406A84B8 (MmDeleteShadowMapping.c)
 *     MiInSwapSharedWorkingSetWorker @ 0x1406A93F4 (MiInSwapSharedWorkingSetWorker.c)
 *     MmProcessWorkingSetControl @ 0x1406A9564 (MmProcessWorkingSetControl.c)
 *     MiDeleteAllPartialCloneVads @ 0x1406AA5D0 (MiDeleteAllPartialCloneVads.c)
 *     MiScrubProcesses @ 0x1406AA9CC (MiScrubProcesses.c)
 *     PfSnAppLaunchScenarioControl @ 0x1406AFD38 (PfSnAppLaunchScenarioControl.c)
 *     PsQueryProcessExceptionFlags @ 0x1406BF504 (PsQueryProcessExceptionFlags.c)
 *     CsrShutdownSynchronization @ 0x1406C094C (CsrShutdownSynchronization.c)
 *     PspCreateSecureThread @ 0x1406C35B4 (PspCreateSecureThread.c)
 *     PspApplyWorkingSetLimits @ 0x1406C43B8 (PspApplyWorkingSetLimits.c)
 *     PspCreateMinimalProcess @ 0x1406C58D4 (PspCreateMinimalProcess.c)
 *     PspIumGetPhysicalPage @ 0x1406C6518 (PspIumGetPhysicalPage.c)
 *     EtwpUMGLEnabled @ 0x1406E27A0 (EtwpUMGLEnabled.c)
 *     EtwpUpdateProcessTracingCallback @ 0x1406E298C (EtwpUpdateProcessTracingCallback.c)
 *     EtwpPsProvProcessEnumCallback @ 0x1406E94E0 (EtwpPsProvProcessEnumCallback.c)
 *     ExpDebuggerWorker @ 0x14072A01C (ExpDebuggerWorker.c)
 *     EmpCacheBiosDate @ 0x1407CD748 (EmpCacheBiosDate.c)
 *     EmpMapPhysicalAddress @ 0x1407CD874 (EmpMapPhysicalAddress.c)
 *     PspInitPhase3 @ 0x1407E8FD8 (PspInitPhase3.c)
 * Callees:
 *     KiMoveApcState @ 0x14009A9E0 (KiMoveApcState.c)
 *     KiDecrementProcessStackCount @ 0x14009AA60 (KiDecrementProcessStackCount.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheck @ 0x140182740 (KeBugCheck.c)
 *     KiSetAddressPolicy @ 0x14020A1B8 (KiSetAddressPolicy.c)
 *     HvlSwitchVirtualAddressSpace @ 0x140270914 (HvlSwitchVirtualAddressSpace.c)
 */

__int64 __fastcall KiUnstackDetachProcess(struct _KTHREAD *a1, int a2)
{
  __int64 result; // rax
  $4DF1778A7668F0E7B59F7C01D6E9C156 *v4; // rsi
  struct _KTHREAD *CurrentThread; // rdi
  _KPROCESS *Process; // r13
  unsigned __int8 CurrentIrql; // r15
  unsigned int v8; // ebx
  unsigned int v9; // ebx
  $CD287064E7C9F7953DE243E927CFCB99 *v10; // rbx
  $CD287064E7C9F7953DE243E927CFCB99 *v11; // rdx
  struct _KPRCB *CurrentPrcb; // rax
  _KPROCESS *v13; // rdx
  unsigned __int64 Group; // rcx
  unsigned __int64 GroupIndex; // r14
  __int64 v16; // rbp
  unsigned __int64 DirectoryTableBase; // rsi
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax

  result = a1->QuantumTarget;
  if ( result != 1 )
  {
    if ( result )
    {
      return KiDetachProcess(a1, a2);
    }
    else
    {
      v4 = &KeGetCurrentThread()->600;
      CurrentThread = KeGetCurrentThread();
      Process = CurrentThread->ApcState.Process;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      v8 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
        {
          if ( (++v8 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v8);
        }
        while ( CurrentThread->ThreadLock );
      }
      while ( CurrentThread->ApcState.KernelApcPending )
      {
        if ( CurrentThread->SpecialApcDisable || CurrentIrql )
          break;
        CurrentThread->ThreadLock = 0LL;
        __writecr8(0LL);
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        v9 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
        {
          do
          {
            if ( (++v9 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v9);
          }
          while ( CurrentThread->ThreadLock );
        }
      }
      if ( !CurrentThread->ApcStateIndex
        || (CurrentThread->ApcState.InProgressFlags & 1) != 0
        || (v10 = &CurrentThread->152, ($CD287064E7C9F7953DE243E927CFCB99 *)v10->ApcState.ApcListHead[0].Flink != v10)
        || (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink != &CurrentThread->ApcStateFill[16] )
      {
        KeBugCheck(6u);
      }
      CurrentThread->MiscFlags |= 0x800u;
      v11 = &CurrentThread->152;
      if ( v4 == &CurrentThread->600 )
      {
        KiMoveApcState(&CurrentThread->600, v11);
        CurrentThread->SavedApcState.Process = 0LL;
        CurrentThread->ApcStateIndex = 0;
      }
      else
      {
        KiMoveApcState(v4, v11);
      }
      CurrentThread->ThreadLock = 0LL;
      CurrentPrcb = KeGetCurrentPrcb();
      v13 = CurrentThread->ApcState.Process;
      Group = CurrentPrcb->Group;
      GroupIndex = CurrentPrcb->GroupIndex;
      v16 = 8 * Group + 280;
      _interlockedbittestandset64((volatile signed __int32 *)((char *)&v13->Header.Lock + v16), GroupIndex);
      DirectoryTableBase = v13->DirectoryTableBase;
      if ( KiKvaShadow )
      {
        v18 = v13->DirectoryTableBase;
        if ( (DirectoryTableBase & 2) != 0 )
          v18 = DirectoryTableBase | 0x8000000000000000uLL;
        __writegsqword(0x7000u, v18);
        KiSetAddressPolicy(v13->AddressPolicy);
      }
      if ( (HvlEnlightenments & 1) != 0 )
        HvlSwitchVirtualAddressSpace(DirectoryTableBase);
      else
        __writecr3(DirectoryTableBase);
      if ( KiKvaShadow && !KiFlushPcid )
      {
        Group = __readcr4();
        if ( (Group & 0x20080) != 0 )
        {
          __writecr4(Group ^ 0x80);
          __writecr4(Group);
        }
        else
        {
          v19 = __readcr3();
          __writecr3(v19);
        }
      }
      _interlockedbittestandreset64((volatile signed __int32 *)((char *)&Process->Header.Lock + v16), GroupIndex);
      CurrentThread->MiscFlags &= ~0x800u;
      result = CurrentIrql;
      __writecr8(CurrentIrql);
      if ( !a2 )
        result = KiDecrementProcessStackCount(Process);
      if ( ($CD287064E7C9F7953DE243E927CFCB99 *)v10->ApcState.ApcListHead[0].Flink != v10 )
      {
        LOBYTE(Group) = 1;
        CurrentThread->ApcState.KernelApcPending = 1;
        return HalRequestSoftwareInterrupt(Group);
      }
    }
  }
  return result;
}
