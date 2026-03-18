/*
 * XREFs of KeReleaseMutex @ 0x14004BE50
 * Callers:
 *     NtTraceEvent @ 0x140016980 (NtTraceEvent.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x1400219C0 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x140025AE4 (LdrUnloadAlternateResourceModuleEx.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x140029F54 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     LdrpGetFromMUIMemCache @ 0x14002A698 (LdrpGetFromMUIMemCache.c)
 *     WmipReceiveNotifications @ 0x140074DAC (WmipReceiveNotifications.c)
 *     WmipFindRegEntryByProviderId @ 0x1400CF03C (WmipFindRegEntryByProviderId.c)
 *     WmipBuildTraceDeviceList @ 0x14011A6D4 (WmipBuildTraceDeviceList.c)
 *     WmipDeregisterRegEntry @ 0x14012785C (WmipDeregisterRegEntry.c)
 *     WmipFindRegEntryByDevice @ 0x140127AA4 (WmipFindRegEntryByDevice.c)
 *     WmiQueryTraceProviderCount @ 0x14014F95C (WmiQueryTraceProviderCount.c)
 *     WmipAllocRegEntry @ 0x140157134 (WmipAllocRegEntry.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x14016D60C (LdrpSetAlternateResourceModuleHandle.c)
 *     PopWdiTimerWorkerThread @ 0x14023F3F4 (PopWdiTimerWorkerThread.c)
 *     EtwpStopLoggerInstance @ 0x14040F284 (EtwpStopLoggerInstance.c)
 *     PnpDeviceEventWorker @ 0x14045FC1C (PnpDeviceEventWorker.c)
 *     WmipOpenBlock @ 0x1404A9494 (WmipOpenBlock.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x1404A9688 (WmipDisableCollectionForRemovedGuid.c)
 *     WmipProcessEvent @ 0x1404A9A7C (WmipProcessEvent.c)
 *     WmipSendEnableDisableRequest @ 0x1404A9BE0 (WmipSendEnableDisableRequest.c)
 *     WmipFindGEByGuid @ 0x1404A9D94 (WmipFindGEByGuid.c)
 *     WmipPrepareForWnodeAD @ 0x1404A9E74 (WmipPrepareForWnodeAD.c)
 *     WmipEnableCollectOrEvent @ 0x1404AB4A8 (WmipEnableCollectOrEvent.c)
 *     WmipIsQuerySetGuid @ 0x1404AB7C8 (WmipIsQuerySetGuid.c)
 *     WmipEnumerateMofResources @ 0x1404AC0B4 (WmipEnumerateMofResources.c)
 *     EtwpRegisterUMGuid @ 0x1404CDCF0 (EtwpRegisterUMGuid.c)
 *     EtwpDeleteRegistrationObject @ 0x1404CDFEC (EtwpDeleteRegistrationObject.c)
 *     EtwpAddRegEntryToGroup @ 0x1404D1618 (EtwpAddRegEntryToGroup.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x1404D196C (EtwpClearSessionAndUnreferenceEntry.c)
 *     WmipUnreferenceEntry @ 0x1404D2094 (WmipUnreferenceEntry.c)
 *     EtwpReleaseLoggerContext @ 0x1404D3208 (EtwpReleaseLoggerContext.c)
 *     EtwpEnableGuid @ 0x1404D4AD0 (EtwpEnableGuid.c)
 *     EtwpNotifyGuid @ 0x1404D8804 (EtwpNotifyGuid.c)
 *     EtwpCrimsonProvEnableCallback @ 0x1404FB194 (EtwpCrimsonProvEnableCallback.c)
 *     sub_140511D20 @ 0x140511D20 (sub_140511D20.c)
 *     EtwpFreeSystemLoggerIndex @ 0x14052489C (EtwpFreeSystemLoggerIndex.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x1405333A4 (WmipSendWmiIrpToTraceDeviceList.c)
 *     EtwpGetTraceGuidInfo @ 0x14053DADC (EtwpGetTraceGuidInfo.c)
 *     IoWMIRegistrationControl @ 0x140545FA0 (IoWMIRegistrationControl.c)
 *     WmipDeregisterDevice @ 0x140546074 (WmipDeregisterDevice.c)
 *     EtwpUpdateKernelGroupMasks @ 0x14054A8A8 (EtwpUpdateKernelGroupMasks.c)
 *     EtwpRegisterProvider @ 0x14054C6A8 (EtwpRegisterProvider.c)
 *     EtwpGetTraceGroupInfo @ 0x14054EAA8 (EtwpGetTraceGroupInfo.c)
 *     EtwpUpdateDisallowList @ 0x1405513E4 (EtwpUpdateDisallowList.c)
 *     WmipDSCleanup @ 0x14055653C (WmipDSCleanup.c)
 *     WmipDeleteMethod @ 0x140556C0C (WmipDeleteMethod.c)
 *     WmipDisableCollectOrEvent @ 0x140556CFC (WmipDisableCollectOrEvent.c)
 *     EtwpTrackProviderBinary @ 0x140558080 (EtwpTrackProviderBinary.c)
 *     EtwUnregister @ 0x140558318 (EtwUnregister.c)
 *     EtwpStartTrace @ 0x140559FF0 (EtwpStartTrace.c)
 *     WmipLegacyEtwWorker @ 0x14055AC9C (WmipLegacyEtwWorker.c)
 *     WmipQueryGuidInfo @ 0x14055B92C (WmipQueryGuidInfo.c)
 *     EtwpGetDisallowList @ 0x14055CFB0 (EtwpGetDisallowList.c)
 *     WmipPrepareWnodeSI @ 0x14057AFF4 (WmipPrepareWnodeSI.c)
 *     WmipAddDataSource @ 0x14057B770 (WmipAddDataSource.c)
 *     WmipDetermineInstanceBaseIndex @ 0x14057BD98 (WmipDetermineInstanceBaseIndex.c)
 *     WmipFindISinGEbyName @ 0x14057BF4C (WmipFindISinGEbyName.c)
 *     WmipEnableCollectionForNewGuid @ 0x14057D87C (WmipEnableCollectionForNewGuid.c)
 *     WmipRegistrationWorker @ 0x14057E3C4 (WmipRegistrationWorker.c)
 *     WmipRegisterDevice @ 0x14057E4D8 (WmipRegisterDevice.c)
 *     WmipQueueRegWork @ 0x14057E640 (WmipQueueRegWork.c)
 *     WmipUpdateDeviceStackSize @ 0x14057E710 (WmipUpdateDeviceStackSize.c)
 *     WmipGetGuidObjectInstanceInfo @ 0x140582C64 (WmipGetGuidObjectInstanceInfo.c)
 *     WmipAddMofResource @ 0x1405905DC (WmipAddMofResource.c)
 *     WmipFindMRByNames @ 0x140590814 (WmipFindMRByNames.c)
 *     WmipSetTraceNotify @ 0x1405BAA3C (WmipSetTraceNotify.c)
 *     WmipProcessLegacyEtwRegister @ 0x1405BBEFC (WmipProcessLegacyEtwRegister.c)
 *     IoWMISetNotificationCallback @ 0x1405C1250 (IoWMISetNotificationCallback.c)
 *     WmipLegacyEtwCallback @ 0x1405C5E44 (WmipLegacyEtwCallback.c)
 *     PopDiagNextSleepStudySession @ 0x1406B8720 (PopDiagNextSleepStudySession.c)
 *     IoWMIAllocateInstanceIds @ 0x1406DFC88 (IoWMIAllocateInstanceIds.c)
 *     WmipDereferenceEvent @ 0x1406E0434 (WmipDereferenceEvent.c)
 *     WmipEnumerateGuids @ 0x1406E0654 (WmipEnumerateGuids.c)
 *     WmipIncludeStaticNames @ 0x1406E07DC (WmipIncludeStaticNames.c)
 *     WmipGetSysIds @ 0x1406E18D4 (WmipGetSysIds.c)
 *     WmipUpdateDataSource @ 0x1406E1F18 (WmipUpdateDataSource.c)
 *     WmipWaitForCollectionEnabled @ 0x1406E247C (WmipWaitForCollectionEnabled.c)
 *     EtwpEnableDisableUMGL @ 0x1406E26D4 (EtwpEnableDisableUMGL.c)
 *     EtwpSetPmcProfileSource @ 0x1406E51EC (EtwpSetPmcProfileSource.c)
 *     EtwSetPerformanceTraceInformation @ 0x1406E6024 (EtwSetPerformanceTraceInformation.c)
 *     EtwDereferenceSpinLockCounters @ 0x1406E7E10 (EtwDereferenceSpinLockCounters.c)
 *     EtwReferenceSpinLockCounters @ 0x1406E7E60 (EtwReferenceSpinLockCounters.c)
 *     EtwpSampledProfileRunDown @ 0x1406E9678 (EtwpSampledProfileRunDown.c)
 *     NtStartProfile @ 0x1406FA0A8 (NtStartProfile.c)
 *     NtStopProfile @ 0x1406FA30C (NtStopProfile.c)
 *     sub_1406FDFB8 @ 0x1406FDFB8 (sub_1406FDFB8.c)
 *     MmIsDriverSuspectForVerifier @ 0x14073263C (MmIsDriverSuspectForVerifier.c)
 *     VfDriverEnableVerifier @ 0x140738F7C (VfDriverEnableVerifier.c)
 *     VfDriverEnableVerifierForAll @ 0x1407390F8 (VfDriverEnableVerifierForAll.c)
 *     VfDriverUnlock @ 0x1407391EC (VfDriverUnlock.c)
 *     ViDriverReApplyVerifierForAll @ 0x1407392F4 (ViDriverReApplyVerifierForAll.c)
 *     VfThunkAddDriverThunks @ 0x140744960 (VfThunkAddDriverThunks.c)
 *     VfThunkAddSpecialDriverThunks @ 0x1407449E0 (VfThunkAddSpecialDriverThunks.c)
 *     VerifierKeReleaseMutex @ 0x14074892C (VerifierKeReleaseMutex.c)
 *     VerifierKeReleaseMutexNoReboot @ 0x14074899C (VerifierKeReleaseMutexNoReboot.c)
 *     VfSuspectDriversGetVerifierInformation @ 0x140749F34 (VfSuspectDriversGetVerifierInformation.c)
 *     VfSuspectDriversLoadCallback @ 0x14074A174 (VfSuspectDriversLoadCallback.c)
 *     VfSuspectDriversRemove @ 0x14074A4F0 (VfSuspectDriversRemove.c)
 *     VfSuspectDriversUnloadCallback @ 0x14074A574 (VfSuspectDriversUnloadCallback.c)
 *     VfAddVerifierEntry @ 0x14075886C (VfAddVerifierEntry.c)
 *     VfSetVerifierInformation @ 0x140758A54 (VfSetVerifierInformation.c)
 *     VfSetVerifierInformationEx @ 0x140758B4C (VfSetVerifierInformationEx.c)
 * Callees:
 *     RtlRaiseStatus @ 0x14001BB3C (RtlRaiseStatus.c)
 *     KiWakeQueueWaiter @ 0x140043EC0 (KiWakeQueueWaiter.c)
 *     KiExitDispatcher @ 0x14004C6B0 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x14004DFB0 (KiTryUnwaitThread.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     EtwTraceEnqueueWork @ 0x14025CFD4 (EtwTraceEnqueueWork.c)
 */

LONG __stdcall KeReleaseMutex(PRKMUTEX Mutex, BOOLEAN Wait)
{
  struct _KTHREAD *CurrentThread; // rdi
  BOOLEAN v3; // r15
  int ApcDisable; // r14d
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // r10
  unsigned int v8; // ebx
  int SignalState; // ebx
  unsigned int v10; // ebx
  _KTHREAD *OwnerThread; // rdi
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  struct _KMUTANT *v14; // r12
  __int64 v15; // r14
  __int64 v16; // rcx
  _QWORD *v17; // rax
  char v18; // al
  bool v19; // zf
  __int64 v20; // rdx
  __int64 v21; // r8
  __int16 v22; // ax
  $CD287064E7C9F7953DE243E927CFCB99 *v23; // rcx
  __int64 v25; // rdi
  struct _KPRCB *v26; // r13
  _KTHREAD *v27; // rbp
  bool v28; // al
  unsigned int v29; // ebx
  __int64 *v30; // rcx
  NTSTATUS v31; // ecx
  unsigned __int8 v32; // [rsp+30h] [rbp-78h]
  struct _KTHREAD *v33; // [rsp+38h] [rbp-70h]
  _BYTE v34[8]; // [rsp+40h] [rbp-68h] BYREF
  LONG LockNV; // [rsp+48h] [rbp-60h]
  int v36; // [rsp+B0h] [rbp+8h]
  int v38; // [rsp+C0h] [rbp+18h]
  struct _KPRCB *v39; // [rsp+C8h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v3 = Wait;
  v33 = CurrentThread;
  ApcDisable = 0;
  CurrentIrql = KeGetCurrentIrql();
  v32 = CurrentIrql;
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v8 = 0;
  v39 = CurrentPrcb;
  if ( _interlockedbittestandset(&Mutex->Header.Lock, 7u) )
  {
    do
    {
      if ( (++v8 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v8);
    }
    while ( (Mutex->Header.LockNV & 0x80u) != 0 || _interlockedbittestandset(&Mutex->Header.Lock, 7u) );
    CurrentPrcb = v39;
  }
  SignalState = Mutex->Header.SignalState;
  v38 = SignalState;
  if ( Mutex->OwnerThread != CurrentThread || Mutex->Header.Size != CurrentPrcb->DpcRoutineActive )
  {
    _InterlockedAnd(&Mutex->Header.Lock, 0xFFFFFF7F);
    __writecr8(CurrentIrql);
    v31 = -1073741754;
    if ( Mutex->Abandoned )
      v31 = 128;
    RtlRaiseStatus(v31);
  }
  if ( ++Mutex->Header.SignalState == 1 && SignalState <= 0 )
  {
    v10 = 0;
    LockNV = Mutex->Header.LockNV;
    BYTE2(LockNV) = 0;
    Mutex->Header.LockNV = LockNV;
    ApcDisable = Mutex->ApcDisable;
    OwnerThread = Mutex->OwnerThread;
    v36 = ApcDisable;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&OwnerThread->ThreadLock, 0LL) )
    {
      do
      {
        if ( (++v10 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v10);
      }
      while ( OwnerThread->ThreadLock );
    }
    Flink = Mutex->MutantListEntry.Flink;
    Blink = Mutex->MutantListEntry.Blink;
    if ( Flink->Blink != &Mutex->MutantListEntry || Blink->Flink != &Mutex->MutantListEntry )
      __fastfail(3u);
    Blink->Flink = Flink;
    Flink->Blink = Blink;
    OwnerThread->ThreadLock = 0LL;
    v14 = (struct _KMUTANT *)Mutex->Header.WaitListHead.Flink;
    Mutex->OwnerThread = 0LL;
    if ( v14 != (struct _KMUTANT *)&Mutex->Header.WaitListHead )
    {
      while ( 1 )
      {
        v15 = (__int64)v14;
        v14 = *(struct _KMUTANT **)&v14->Header.Lock;
        v16 = *(_QWORD *)v15;
        v17 = *(_QWORD **)(v15 + 8);
        if ( *(_QWORD *)(*(_QWORD *)v15 + 8LL) != v15 || *v17 != v15 )
          __fastfail(3u);
        *v17 = v16;
        *(_QWORD *)(v16 + 8) = v17;
        v18 = *(_BYTE *)(v15 + 16);
        if ( v18 == 1 )
        {
          if ( (unsigned __int8)KiTryUnwaitThread(v39, v15, *(unsigned __int16 *)(v15 + 18), v34) )
          {
            v19 = Mutex->Header.SignalState-- == 1;
            if ( v19 )
              goto LABEL_29;
          }
        }
        else if ( v18 == 2 )
        {
          *(_BYTE *)(v15 + 17) = 5;
          v25 = *(_QWORD *)(v15 + 24);
          *(_QWORD *)v15 = 0LL;
          __writecr8(2uLL);
          v26 = KeGetCurrentPrcb();
          v27 = v26->CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            v28 = v27->WaitBlockFill6[68] == 2 && v27->NextProcessor == KeGetPcr()->Prcb.Number;
            EtwTraceEnqueueWork(v26->CurrentThread, v15, v28);
          }
          v29 = 0;
          if ( _interlockedbittestandset((volatile signed __int32 *)v25, 7u) )
          {
            do
            {
              if ( (++v29 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v29);
            }
            while ( (*(_DWORD *)v25 & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)v25, 7u) );
          }
          if ( *(_QWORD *)(v25 + 16) == v25 + 8
            || *(_DWORD *)(v25 + 40) >= *(_DWORD *)(v25 + 44)
            || v27->Queue == (_DISPATCHER_HEADER *volatile)v25 && v27->WaitReason == 15
            || !KiWakeQueueWaiter((__int64)v26, v25, v15) )
          {
            ++*(_DWORD *)(v25 + 4);
            v30 = *(__int64 **)(v25 + 32);
            *(_QWORD *)v15 = v25 + 24;
            *(_QWORD *)(v15 + 8) = v30;
            if ( *v30 != v25 + 24 )
              __fastfail(3u);
            *v30 = v15;
            *(_QWORD *)(v25 + 32) = v15;
          }
          _InterlockedAnd((volatile signed __int32 *)v25, 0xFFFFFF7F);
          v19 = Mutex->Header.SignalState-- == 1;
          if ( v19 )
          {
LABEL_29:
            CurrentIrql = v32;
            ApcDisable = v36;
            v3 = Wait;
            break;
          }
        }
        else
        {
          KiTryUnwaitThread(v39, v15, 256LL, 0LL);
        }
        if ( v14 == (struct _KMUTANT *)&Mutex->Header.WaitListHead )
          goto LABEL_29;
      }
    }
    SignalState = v38;
    CurrentThread = v33;
    LODWORD(CurrentPrcb) = (_DWORD)v39;
  }
  _InterlockedAnd(&Mutex->Header.Lock, 0xFFFFFF7F);
  KiExitDispatcher((_DWORD)CurrentPrcb, v3, 1, 1, CurrentIrql);
  if ( ApcDisable )
  {
    v22 = CurrentThread->KernelApcDisable + 1;
    CurrentThread->KernelApcDisable = v22;
    if ( !v22 )
    {
      v23 = &CurrentThread->152;
      if ( ($CD287064E7C9F7953DE243E927CFCB99 *)v23->ApcState.ApcListHead[0].Flink != v23
        && !CurrentThread->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery(v23, v20, v21);
      }
    }
  }
  return SignalState;
}
