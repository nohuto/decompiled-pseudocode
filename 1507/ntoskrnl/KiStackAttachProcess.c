/*
 * XREFs of KiStackAttachProcess @ 0x14009AB60
 * Callers:
 *     MiCloneReserveVadCommit @ 0x14000158C (MiCloneReserveVadCommit.c)
 *     MiLockDownWorkingSet @ 0x140001790 (MiLockDownWorkingSet.c)
 *     MmEnforceWorkingSetLimit @ 0x14000961C (MmEnforceWorkingSetLimit.c)
 *     NtGetWriteWatch @ 0x14003C8B0 (NtGetWriteWatch.c)
 *     MiStealPage @ 0x140055CB0 (MiStealPage.c)
 *     MiGetWorkingSetInfoList @ 0x14007A1C0 (MiGetWorkingSetInfoList.c)
 *     NtResetWriteWatch @ 0x14007CF90 (NtResetWriteWatch.c)
 *     NtUnlockVirtualMemory @ 0x14007ECE0 (NtUnlockVirtualMemory.c)
 *     MiIssueHardFault @ 0x140087FE0 (MiIssueHardFault.c)
 *     MiTrimOrAgeWorkingSet @ 0x140099740 (MiTrimOrAgeWorkingSet.c)
 *     IoRemoveIoCompletion @ 0x14009E3A0 (IoRemoveIoCompletion.c)
 *     MiEmptyAccessLogs @ 0x1400D6F7C (MiEmptyAccessLogs.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1400DA708 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     MiDeleteFinalPageTables @ 0x1400EEEC4 (MiDeleteFinalPageTables.c)
 *     MiTrimSharedPageFromViews @ 0x1400FAC3C (MiTrimSharedPageFromViews.c)
 *     MmAttachSession @ 0x1400FD5A0 (MmAttachSession.c)
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
 *     EmpMapPhysicalAddress @ 0x1407CD874 (EmpMapPhysicalAddress.c)
 *     PspInitPhase3 @ 0x1407E8FD8 (PspInitPhase3.c)
 * Callees:
 *     KiAttachProcess @ 0x14010C4D0 (KiAttachProcess.c)
 *     KiInSwapSingleProcess @ 0x14010C694 (KiInSwapSingleProcess.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     KiSetAddressPolicy @ 0x14020A1B8 (KiSetAddressPolicy.c)
 *     HvlSwitchVirtualAddressSpace @ 0x140270914 (HvlSwitchVirtualAddressSpace.c)
 */

int __fastcall KiStackAttachProcess(_KPROCESS *BugCheckParameter1, int a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rdi
  volatile int result; // eax
  unsigned __int8 CurrentIrql; // r12
  unsigned int v9; // ebx
  $CD287064E7C9F7953DE243E927CFCB99 *v10; // r8
  $4DF1778A7668F0E7B59F7C01D6E9C156 *v11; // rsi
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // rax
  _LIST_ENTRY *v14; // rcx
  _LIST_ENTRY *v15; // rax
  struct _LIST_ENTRY *v16; // rcx
  struct _LIST_ENTRY *v17; // rdx
  unsigned int v18; // ebx
  struct _KPRCB *CurrentPrcb; // rax
  _KPROCESS *Process; // r14
  unsigned __int64 GroupIndex; // rbp
  __int64 v22; // rsi
  unsigned __int64 DirectoryTableBase; // rbx
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rax

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
    if ( CurrentThread->ApcStateIndex )
    {
      return KiAttachProcess((_DWORD)CurrentThread, (_DWORD)BugCheckParameter1, CurrentIrql, a2, a3);
    }
    else
    {
      v10 = &CurrentThread->152;
      v11 = &CurrentThread->600;
      CurrentThread->SavedApcState.Process = CurrentThread->ApcState.Process;
      CurrentThread->SavedApcState.InProgressFlags = CurrentThread->ApcState.InProgressFlags;
      CurrentThread->SavedApcState.KernelApcPending = CurrentThread->ApcState.KernelApcPending;
      CurrentThread->SavedApcState.UserApcPending = CurrentThread->ApcState.UserApcPending;
      Flink = CurrentThread->ApcState.ApcListHead[0].Flink;
      if ( ($CD287064E7C9F7953DE243E927CFCB99 *)v10->ApcState.ApcListHead[0].Flink == v10 )
      {
        CurrentThread->SavedApcState.ApcListHead[0].Blink = CurrentThread->SavedApcState.ApcListHead;
        v11->SavedApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)v11;
        CurrentThread->SavedApcState.KernelApcPending = 0;
      }
      else
      {
        Blink = CurrentThread->ApcState.ApcListHead[0].Blink;
        v11->SavedApcState.ApcListHead[0].Flink = Flink;
        CurrentThread->SavedApcState.ApcListHead[0].Blink = Blink;
        Flink->Blink = (struct _LIST_ENTRY *)v11;
        Blink->Flink = (struct _LIST_ENTRY *)v11;
      }
      v14 = &CurrentThread->ApcState.ApcListHead[1];
      v15 = &CurrentThread->SavedApcState.ApcListHead[1];
      if ( v14->Flink == v14 )
      {
        CurrentThread->SavedApcState.ApcListHead[1].Blink = &CurrentThread->SavedApcState.ApcListHead[1];
        v15->Flink = v15;
        CurrentThread->SavedApcState.UserApcPending = 0;
      }
      else
      {
        v16 = v14->Flink;
        v17 = CurrentThread->ApcState.ApcListHead[1].Blink;
        v15->Flink = v16;
        CurrentThread->SavedApcState.ApcListHead[1].Blink = v17;
        v16->Blink = v15;
        v17->Flink = v15;
      }
      CurrentThread->ApcState.ApcListHead[0].Blink = CurrentThread->ApcState.ApcListHead;
      v10->ApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)v10;
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
        v18 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
        {
          do
          {
            if ( (++v18 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v18);
          }
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
