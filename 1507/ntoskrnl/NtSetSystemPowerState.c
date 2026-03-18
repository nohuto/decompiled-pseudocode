/*
 * XREFs of NtSetSystemPowerState @ 0x1403ED18C
 * Callers:
 *     NtShutdownSystem @ 0x1406EFF14 (NtShutdownSystem.c)
 * Callees:
 *     KeSuspendThread @ 0x14000C978 (KeSuspendThread.c)
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
 *     PopExecuteOnTargetProcessors @ 0x140013958 (PopExecuteOnTargetProcessors.c)
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     PsGetCurrentServerSilo @ 0x1400CE990 (PsGetCurrentServerSilo.c)
 *     PopCheckForWork @ 0x1400D01A4 (PopCheckForWork.c)
 *     PopGetPolicyWorker @ 0x1400D042C (PopGetPolicyWorker.c)
 *     PopSetNotificationWork @ 0x1400D0780 (PopSetNotificationWork.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     StringCchPrintfW @ 0x140126550 (StringCchPrintfW.c)
 *     PspDereferenceSiloObject @ 0x140127C98 (PspDereferenceSiloObject.c)
 *     DbgPrint @ 0x140131E68 (DbgPrint.c)
 *     PopRunMaximumIrpWorkers @ 0x140147CEC (PopRunMaximumIrpWorkers.c)
 *     PopCheckPowerSourceAfterRtcWakeCancel @ 0x140147F78 (PopCheckPowerSourceAfterRtcWakeCancel.c)
 *     PopIgnoreBatteryStatusChange @ 0x140147FB0 (PopIgnoreBatteryStatusChange.c)
 *     PopEnforceResiliencyScenarios @ 0x140147FD0 (PopEnforceResiliencyScenarios.c)
 *     PopActionRetrieveInitialState @ 0x14014800C (PopActionRetrieveInitialState.c)
 *     PopForceCompleteSleepStudySession @ 0x1401481F8 (PopForceCompleteSleepStudySession.c)
 *     PopThermalSxEntry @ 0x14014822C (PopThermalSxEntry.c)
 *     ExWakeTimersPause @ 0x1401485F0 (ExWakeTimersPause.c)
 *     PopThermalSxExit @ 0x1401486FC (PopThermalSxExit.c)
 *     ExWakeTimersResume @ 0x140148924 (ExWakeTimersResume.c)
 *     PsIumResumeAfterHibernate @ 0x14015A5EC (PsIumResumeAfterHibernate.c)
 *     ZwSetSystemPowerState @ 0x1401821D0 (ZwSetSystemPowerState.c)
 *     memset @ 0x140195A80 (memset.c)
 *     IoRaiseInformationalHardError @ 0x1401F6358 (IoRaiseInformationalHardError.c)
 *     PopReadShutdownPolicy @ 0x140233B48 (PopReadShutdownPolicy.c)
 *     PopFxPrepareDevicesForShutdown @ 0x1402386A0 (PopFxPrepareDevicesForShutdown.c)
 *     PopCheckPowerSourceAfterRtcWakeSet @ 0x14023D080 (PopCheckPowerSourceAfterRtcWakeSet.c)
 *     PsTerminateServerSilo @ 0x1402443F4 (PsTerminateServerSilo.c)
 *     ExDeleteWakeTimerInfo @ 0x1402644E8 (ExDeleteWakeTimerInfo.c)
 *     PopReleasePolicyLock @ 0x1403EB86C (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1403EB8DC (PopAcquirePolicyLock.c)
 *     PopFlushVolumes @ 0x1403ECAA4 (PopFlushVolumes.c)
 *     PopDiagTracePostSleepNotification @ 0x1403ECFF4 (PopDiagTracePostSleepNotification.c)
 *     IoFreePoDeviceNotifyList @ 0x1403ED0AC (IoFreePoDeviceNotifyList.c)
 *     PfPowerActionNotify @ 0x1403EE01C (PfPowerActionNotify.c)
 *     PopSetDevicesSystemState @ 0x1403EE24C (PopSetDevicesSystemState.c)
 *     PopQpcTimeInMs @ 0x1403EF040 (PopQpcTimeInMs.c)
 *     PopCaptureTimeOnProcZero @ 0x1403EF070 (PopCaptureTimeOnProcZero.c)
 *     PopNewWakeInfo @ 0x1403EF2D0 (PopNewWakeInfo.c)
 *     ExUpdateSystemTimeFromCmos @ 0x1403F6BAC (ExUpdateSystemTimeFromCmos.c)
 *     xHalDpMaskLevelTriggeredInterrupts @ 0x1403FB1C0 (xHalDpMaskLevelTriggeredInterrupts.c)
 *     PopGracefulShutdown @ 0x140403318 (PopGracefulShutdown.c)
 *     PopDiagTraceFirmwareS3Stats @ 0x140403C20 (PopDiagTraceFirmwareS3Stats.c)
 *     PopDiagTraceHibernateErrorStatus @ 0x140403DEC (PopDiagTraceHibernateErrorStatus.c)
 *     PopDiagTraceMtrrError @ 0x140403E74 (PopDiagTraceMtrrError.c)
 *     ExGetNextWakeTime @ 0x1404043CC (ExGetNextWakeTime.c)
 *     MmLockPagableSectionByHandle @ 0x1404251E8 (MmLockPagableSectionByHandle.c)
 *     SeSinglePrivilegeCheck @ 0x14046D4B8 (SeSinglePrivilegeCheck.c)
 *     PopFilterCapabilities @ 0x1404E0F04 (PopFilterCapabilities.c)
 *     PopCheckResiliencyScenarios @ 0x1404E4FEC (PopCheckResiliencyScenarios.c)
 *     PopFindPowerSettingConfiguration @ 0x140500508 (PopFindPowerSettingConfiguration.c)
 *     PopAcquireTransitionLock @ 0x1405649F8 (PopAcquireTransitionLock.c)
 *     PopNotifyCallbacksPreSleep @ 0x140564A20 (PopNotifyCallbacksPreSleep.c)
 *     ExSwapinWorkerThreads @ 0x140564D10 (ExSwapinWorkerThreads.c)
 *     CmSetLazyFlushState @ 0x140564EB0 (CmSetLazyFlushState.c)
 *     PoInitializeBroadcast @ 0x140565238 (PoInitializeBroadcast.c)
 *     PopExecutePowerAction @ 0x1405654E8 (PopExecutePowerAction.c)
 *     PopFastS4Check @ 0x140565990 (PopFastS4Check.c)
 *     PopAdvanceSystemPowerState @ 0x1405659A0 (PopAdvanceSystemPowerState.c)
 *     PopDiagTraceKernelQueriesAllowed @ 0x140565A00 (PopDiagTraceKernelQueriesAllowed.c)
 *     PopDiagTracePreSleepNotification @ 0x140565A98 (PopDiagTracePreSleepNotification.c)
 *     PopEsEnterSleepShutdown @ 0x140565B64 (PopEsEnterSleepShutdown.c)
 *     PopInitSystemSleeperThread @ 0x140565D38 (PopInitSystemSleeperThread.c)
 *     PopQueueBatteryStatusTimeout @ 0x140565DF8 (PopQueueBatteryStatusTimeout.c)
 *     PoClearBroadcast @ 0x140565E40 (PoClearBroadcast.c)
 *     PopEsExitSleep @ 0x140565E94 (PopEsExitSleep.c)
 *     PopBootLoaderTraceProcess @ 0x140566000 (PopBootLoaderTraceProcess.c)
 *     PpmPerfReApplyStates @ 0x140566064 (PpmPerfReApplyStates.c)
 *     PopNotifyTelemetryOsState @ 0x140566B94 (PopNotifyTelemetryOsState.c)
 *     PopSetSleepMarker @ 0x140567668 (PopSetSleepMarker.c)
 *     PopAllocateHiberContext @ 0x14056A188 (PopAllocateHiberContext.c)
 *     PopCurrentPowerStatePrecise @ 0x14056C204 (PopCurrentPowerStatePrecise.c)
 *     PopInitSIdle @ 0x1405813E0 (PopInitSIdle.c)
 *     RtlGetSetBootStatusData @ 0x140583084 (RtlGetSetBootStatusData.c)
 *     PopInitializePowerPolicySimulate @ 0x140583C84 (PopInitializePowerPolicySimulate.c)
 *     RtlLockBootStatusData @ 0x140583F50 (RtlLockBootStatusData.c)
 *     RtlUnlockBootStatusData @ 0x140584278 (RtlUnlockBootStatusData.c)
 *     PopResetActionDefaults @ 0x140584484 (PopResetActionDefaults.c)
 *     MmZeroPageFileAtShutdown @ 0x1406A0668 (MmZeroPageFileAtShutdown.c)
 *     PopFindNextSystemPowerState @ 0x1406B066C (PopFindNextSystemPowerState.c)
 *     PopZeroHiberFile @ 0x1406B5D1C (PopZeroHiberFile.c)
 *     PspShutdownServerSilos @ 0x1406C292C (PspShutdownServerSilos.c)
 */

NTSTATUS __stdcall NtSetSystemPowerState(POWER_ACTION SystemAction, SYSTEM_POWER_STATE MinSystemState, ULONG Flags)
{
  unsigned int v3; // r12d
  char v6; // r14
  KPROCESSOR_MODE PreviousMode; // dl
  __int64 CurrentServerSilo; // rax
  void *v10; // rbx
  NTSTATUS v11; // edi
  unsigned int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  NTSTATUS v17; // ebx
  char v18; // bl
  __int64 v19; // rcx
  NTSTATUS HiberContext; // esi
  char v21; // al
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rbx
  unsigned __int8 CurrentIrql; // r14
  __int64 PowerSettingConfiguration; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  unsigned __int8 v29; // bl
  char v30; // r14
  signed __int32 v31; // eax
  int v32; // r8d
  __int64 v33; // rdx
  unsigned int v34; // r12d
  unsigned int v35; // r15d
  __int64 v36; // rcx
  char v37; // bl
  __int64 v38; // rcx
  int v39; // eax
  HANDLE v40; // rbx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rsi
  __int64 v49; // rcx
  void *v50; // r14
  int v51; // r8d
  __int64 *v52; // rax
  int v53; // ebx
  __int64 v54; // rcx
  PVOID v55; // r8
  int v56; // ecx
  int v57; // r8d
  void *v58; // r8
  int v59; // ebx
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  char v64; // al
  char Buffer_1; // [rsp+31h] [rbp-CFh] BYREF
  char Buffer_2; // [rsp+32h] [rbp-CEh]
  char Buffer_3; // [rsp+33h] [rbp-CDh] BYREF
  int v68; // [rsp+34h] [rbp-CCh]
  unsigned int v69; // [rsp+38h] [rbp-C8h] BYREF
  int v70; // [rsp+3Ch] [rbp-C4h]
  void *v71; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v72; // [rsp+50h] [rbp-B0h]
  void *v73; // [rsp+58h] [rbp-A8h] BYREF
  POWER_ACTION v74; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v75; // [rsp+64h] [rbp-9Ch]
  __int64 v76; // [rsp+68h] [rbp-98h]
  __int64 v77; // [rsp+70h] [rbp-90h]
  __int64 v78; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v79[3]; // [rsp+80h] [rbp-80h] BYREF
  HANDLE FileHandle; // [rsp+98h] [rbp-68h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-60h] BYREF
  char v82[24]; // [rsp+B0h] [rbp-50h] BYREF
  struct _KEVENT Event; // [rsp+C8h] [rbp-38h] BYREF
  char Object[28]; // [rsp+E0h] [rbp-20h] BYREF
  NTSTATUS v85; // [rsp+FCh] [rbp-4h]
  char v86[80]; // [rsp+100h] [rbp+0h] BYREF
  char v89; // [rsp+178h] [rbp+78h]

  v3 = Flags;
  v78 = 0LL;
  Buffer_2 = 0;
  v73 = 0LL;
  v71 = 0LL;
  v6 = 1;
  v72 = 1LL;
  v77 = 0LL;
  v68 = 0;
  if ( (unsigned int)(MinSystemState - 1) > 5 || (unsigned int)(SystemAction - 1) > 6 || (Flags & 0xFFFFFF0) != 0 )
  {
    if ( (PoDebug & 2) != 0 )
      DbgPrint("NtSetSystemPowerState: Bad parameters!\n");
    if ( (PoDebug & 2) != 0 )
      DbgPrint("                       SystemAction: 0x%x\n", SystemAction);
    if ( (PoDebug & 2) != 0 )
      DbgPrint("                       LightestSystemState: 0x%x\n", MinSystemState);
    if ( (PoDebug & 2) != 0 )
      DbgPrint("                       Flags: 0x%x\n", v3);
    return -1073741811;
  }
  if ( SystemAction < PowerActionShutdown && dword_14032E654 >= 11 )
  {
    if ( (PoDebug & 2) != 0 )
      DbgPrint("NtSetSystemPowerState: Bad parameters!\n");
    if ( (PoDebug & 2) != 0 )
      DbgPrint("                       PopAction.DeviceType - %d\n", (unsigned int)dword_14032E654);
    return -1073741811;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( SeSinglePrivilegeCheck(SeShutdownPrivilege, PreviousMode) )
      return ZwSetSystemPowerState(SystemAction, MinSystemState, v3);
    else
      return -1073741727;
  }
  if ( SystemAction == PowerActionShutdown )
    PopReadShutdownPolicy();
  CurrentServerSilo = PsGetCurrentServerSilo();
  v10 = (void *)CurrentServerSilo;
  if ( CurrentServerSilo )
  {
    if ( SystemAction < PowerActionShutdown )
      v11 = -1073741637;
    else
      v11 = PsTerminateServerSilo(CurrentServerSilo);
    PspDereferenceSiloObject(v10);
    return v11;
  }
  if ( SystemAction >= PowerActionShutdown )
    PspShutdownServerSilos();
  v75 = 0;
  memset(v79, 0, sizeof(v79));
  LODWORD(v76) = 0;
  v12 = dword_14032E654;
  v74 = SystemAction;
  if ( dword_14032E654 >= 11 )
    v12 = 5;
  v75 = v3;
  v79[0] = v12 | 0x8000000000LL;
  PopAcquireTransitionLock();
  MmLockPagableSectionByHandle(ExPageLockHandle);
  PopRunMaximumIrpWorkers(v14, v13, v15, v16);
  PopUnlockAfterSleepWorkItem.Parameter = 0LL;
  PopUnlockAfterSleepWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopUnlockAfterSleepWorker;
  PopUnlockAfterSleepWorkItem.List.Flink = 0LL;
  CmSetLazyFlushState(0LL);
  PopNotifyCallbacksPreSleep();
  ExSwapinWorkerThreads(0LL);
  v17 = PoInitializeBroadcast();
  if ( v17 < 0 )
  {
LABEL_31:
    ExQueueWorkItem(&PopUnlockAfterSleepWorkItem, DelayedWorkQueue);
    return v17;
  }
  PopCheckPowerSourceAfterRtcWakeCancel();
  PopAcquirePolicyLock();
  v18 = 1;
  v89 = 1;
  PopFilterCapabilities(&PopCapabilities, &unk_14032E6F8);
  if ( byte_14032E641 )
  {
    if ( byte_14032E641 != 2 )
    {
      if ( (PoDebug & 8) != 0 )
        DbgPrint("NtSetSystemPowerState: already committed\n");
      PopReleasePolicyLock();
      PoClearBroadcast();
      v17 = -1073741791;
      goto LABEL_31;
    }
  }
  else
  {
    PopResetActionDefaults();
  }
  qword_14032E678 = (__int64)qword_14032E1F0;
  byte_14032E641 = 3;
  PopExecutePowerAction((unsigned int)v79, 0, (unsigned int)&v74, MinSystemState, 1);
  PopIgnoreBatteryStatusChange();
  PopCheckResiliencyScenarios();
  PopEnforceResiliencyScenarios((unsigned int *)&v78);
  PopExecuteOnTargetProcessors((__int64)KeActiveProcessors, (__int64)PpmStopIllegalProcessorThrottleLogging, 0LL, 0LL);
  if ( SystemAction == PowerActionShutdownOff )
    LODWORD(qword_14032E644) = 6;
  if ( (unsigned int)(SystemAction - 4) <= 2 && PopHiberInfo && FileObject && (unsigned int)MmZeroPageFileAtShutdown() )
    PopZeroHiberFile(PopHiberInfo);
  Buffer_1 = 0;
  v69 = 0;
  if ( (unsigned int)(SystemAction - 2) <= 1 )
    PoPowerDownActionInProgress = 1;
LABEL_42:
  HiberContext = -1073741536;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v18 )
        v6 = v89;
      else
        PopAcquirePolicyLock();
      if ( !(_DWORD)qword_14032E644 )
      {
        HiberContext = 0;
        goto LABEL_161;
      }
      v21 = PopAction;
      PopAction = 0;
      if ( HiberContext == -1073741536 )
      {
        if ( (v21 & 2) != 0 && dword_14032E64C >= 0 && (dword_14032E64C & 3) != 0 )
        {
          PopGetPolicyWorker(2);
          goto LABEL_161;
        }
        PopActionRetrieveInitialState((_DWORD *)&qword_14032E644 + 1, &v69, &dword_14032E660, &Buffer_1);
        if ( (unsigned int)(qword_14032E644 - 4) <= 2 )
        {
          byte_14032E642 = 1;
          dword_14032E64C = v3;
        }
        HiberContext = 0;
      }
      if ( HiberContext < 0 )
        goto LABEL_161;
      PopReleasePolicyLock();
      v89 = 0;
      v70 = 1;
      v68 = 0;
      v23 = KeAbPreAcquire((ULONG_PTR)&PopSettingLock, 0LL, 0LL, v22);
      v24 = v23;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(1uLL);
      if ( !_interlockedbittestandreset((volatile signed __int32 *)&PopSettingLock, 0) )
        ExpAcquireFastMutexContended((ULONG_PTR)&PopSettingLock, v23);
      if ( v24 )
        *(_BYTE *)(v24 + 26) |= 1u;
      qword_14032EFE8 = (__int64)KeGetCurrentThread();
      dword_14032F010 = CurrentIrql;
      PowerSettingConfiguration = PopFindPowerSettingConfiguration(&GUID_ALLOW_RTC_WAKE, 0xFFFFFFFFLL);
      if ( PowerSettingConfiguration )
      {
        v27 = *(_QWORD *)(PowerSettingConfiguration + 64);
        if ( v27 && *(_DWORD *)(v27 + 4) >= 4u )
          v70 = *(_DWORD *)(v27 + 12);
        v28 = *(_QWORD *)(PowerSettingConfiguration + 72);
        if ( v28 && *(_DWORD *)(v28 + 4) >= 4u )
          v68 = *(_DWORD *)(v28 + 12);
      }
      v29 = dword_14032F010;
      qword_14032EFE8 = 0LL;
      v30 = 1;
      v31 = _InterlockedCompareExchange((volatile signed __int32 *)&PopSettingLock, 1, 0);
      if ( v31 )
        ExpReleaseFastMutexContended((volatile signed __int32 *)&PopSettingLock, v31);
      __writecr8(v29);
      KeAbPostRelease((ULONG_PTR)&PopSettingLock);
      if ( (dword_14032E64C & 0x40000000) != 0 )
      {
        v70 = 0;
        v68 = 0;
      }
      PopInitializePowerPolicySimulate();
      dword_14032E664 = dword_14032E660;
      PopAdvanceSystemPowerState(
        &dword_14032E664,
        ((unsigned int)dword_14032E64C >> 27) & 2,
        HIDWORD(qword_14032E644),
        v69);
      v32 = v3 & 8;
      if ( (v3 & 8) != 0 )
      {
        v33 = dword_14032E660;
        byte_14032E8E0 = 1;
        v34 = 6;
        v30 = 0;
        dword_14032E668 = 5;
      }
      else
      {
        if ( (unsigned __int8)PopFastS4Check() )
        {
          v33 = (unsigned int)dword_14032E660;
          v35 = 6;
          v34 = dword_14032E660;
          dword_14032E668 = 5;
          goto LABEL_76;
        }
        v33 = dword_14032E660;
        v30 = 0;
        dword_14032E668 = dword_14032E660;
        v34 = dword_14032E660;
      }
      v35 = PopPowerStateHandlerLookup[v33];
      if ( v35 > 6 )
        goto LABEL_87;
LABEL_76:
      if ( !qword_14032E468[3 * (int)v35] )
        goto LABEL_87;
      if ( v32 )
      {
        v36 = 6LL;
      }
      else
      {
        if ( byte_14032E642 )
          goto LABEL_82;
        v36 = (unsigned int)v33;
      }
      PopSetSleepMarker(v36);
LABEL_82:
      PopAcquirePolicyLock();
      if ( (PopAction & 6) != 0 )
      {
        v3 = Flags;
        v6 = 1;
        v18 = 1;
        v89 = 1;
        goto LABEL_42;
      }
      PopReleasePolicyLock();
      v37 = Buffer_1;
      LOBYTE(v38) = Buffer_1;
      byte_14032E65C = 3;
      PopDiagTraceKernelQueriesAllowed(v38);
      if ( v37 )
      {
        v39 = PopSetDevicesSystemState();
        HiberContext = v39;
        if ( v39 >= 0 )
          goto LABEL_91;
        if ( v39 != -1073741536 )
        {
LABEL_87:
          LOBYTE(v33) = v30;
          if ( (unsigned __int8)PopFindNextSystemPowerState(v69, v33, &Buffer_1) )
          {
            HiberContext = 0;
            goto LABEL_89;
          }
          v3 = Flags;
          goto LABEL_160;
        }
      }
      if ( HiberContext < 0 )
        goto LABEL_89;
LABEL_91:
      HiberContext = PopAllocateHiberContext();
      if ( HiberContext >= 0 )
        break;
LABEL_89:
      v18 = 0;
      v6 = 1;
      v3 = Flags;
    }
    if ( !byte_14032E642 )
      PopDiagTracePreSleepNotification(
        v34,
        (unsigned int)dword_14032E668,
        (unsigned int)dword_14032E654,
        (unsigned int)dword_14032E658);
    PopEsEnterSleepShutdown();
    PopForceCompleteSleepStudySession(dword_14032E654);
    PopThermalSxEntry();
    if ( Buffer_2 )
    {
      v6 = 1;
    }
    else
    {
      if ( byte_14032E642 )
      {
        v6 = 1;
        if ( RtlLockBootStatusData(&FileHandle) >= 0 )
        {
          v40 = FileHandle;
          Buffer_3 = 1;
          RtlGetSetBootStatusData(FileHandle, 0, RtlBsdItemBootShutdown, &Buffer_3, 1u, 0LL);
          RtlGetSetBootStatusData(v40, 0, RtlBsdItemShutdownBootId, (PVOID)0xFFFFF780000002C4LL, 4u, 0LL);
          RtlUnlockBootStatusData(v40);
        }
      }
      else
      {
        v6 = 1;
      }
      Buffer_2 = 1;
    }
    v3 = Flags;
    PopNotifyTelemetryOsState(qword_14032E644, dword_14032E660, dword_14032E668, Flags, 1);
    PopFlushVolumes(dword_14032E660);
    if ( dword_14032E668 < dword_14032E660 )
      dword_14032E668 = dword_14032E660;
    byte_14032E65C = 2;
    if ( byte_14032E642 )
      break;
    KeMtrrComparisonFailed = 0;
    HiberContext = PopInitSystemSleeperThread(v35, v82);
    if ( HiberContext >= 0 )
    {
      if ( !byte_14032E6E8 )
      {
        ExWakeTimersPause(v19, v45, v46, v47);
        byte_14032E6E8 = 1;
      }
      v48 = MEMORY[0xFFFFF78000000008];
      v49 = *((unsigned int *)PopPolicy + 22);
      if ( (_DWORD)v49
        && dword_14032E660 != 5
        && byte_14032E528
        && byte_14032E536 == 2
        && (dword_14032E64C & 0x40000000) == 0
        && byte_14032E6FE )
      {
        v50 = (void *)(MEMORY[0xFFFFF78000000008] + 10000000 * v49);
      }
      else
      {
        v50 = 0LL;
      }
      memset(&qword_14032E6A0, 0, 0x48uLL);
      dword_14032E698 = 3;
      if ( !byte_14032E8E0 )
      {
        if ( v50 )
        {
          qword_14032E6A0 = (__int64)v50;
          v52 = qword_14032E6B0;
          qword_14032E6A8 = v50;
          qword_14032E6B8 = (__int64)v50;
          NumberOfBytes = (SIZE_T)v50;
          do
          {
            *v52 = -1LL;
            v52 += 3;
          }
          while ( (__int64)v52 < (__int64)&qword_14032E6E0 );
        }
        v53 = qword_14032E6F0;
        if ( qword_14032E6F0 && qword_14032E6F0 < (unsigned __int64)(v48 + 20000000) )
          v53 = v48 + 20000000;
        if ( v70 )
        {
          if ( v70 != 2 || (PopSimulate & 0x10000000) != 0 )
            LOBYTE(v51) = 0;
          else
            v51 = 1;
          if ( (unsigned __int8)ExGetNextWakeTime(v53 + 1, (_DWORD)v50, v51, (unsigned int)&v73, (__int64)&v71) )
          {
            qword_14032E6A0 = (__int64)v73;
            qword_14032E6A8 = v73;
            qword_14032E6B0[0] = (__int64)v71;
          }
        }
        if ( v68 )
        {
          if ( v68 != 2 || (PopSimulate & 0x10000000) != 0 )
            LOBYTE(v51) = 0;
          else
            v51 = 1;
          if ( (unsigned __int8)ExGetNextWakeTime(v53 + 1, (_DWORD)v50, v51, (unsigned int)&v73, (__int64)&v71) )
          {
            qword_14032E6B8 = (__int64)v73;
            NumberOfBytes = (SIZE_T)v73;
            qword_14032E6C8 = (__int64)v71;
          }
        }
      }
      if ( qword_14032E6A0 && qword_14032E6A0 < (unsigned __int64)(v48 + 600000000) )
        qword_14032E6A8 = (PVOID)(v48 + 600000000);
      if ( qword_14032E6B8 && qword_14032E6B8 < (unsigned __int64)(v48 + 600000000) )
        NumberOfBytes = v48 + 600000000;
      qword_14032EB90 = KeQueryPerformanceCounter(0LL).QuadPart;
      LOBYTE(v54) = 1;
      ExUpdateSystemTimeFromCmos(v54, 1LL);
      off_140321780(qword_14032E6A8, NumberOfBytes, v55);
      PopSetDevicesSystemState();
      PopNewWakeInfo();
      v77 = MEMORY[0xFFFFF78000000008];
      LODWORD(v72) = dword_14032E84C;
      KeSetEvent(&Event, 0, 1u);
      KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
      v56 = dword_14032E660;
      v57 = dword_14032E660;
      HiberContext = v85;
      if ( PoResumeFromHibernate )
        v57 = dword_14032E668;
      qword_14032E970 = 0LL;
      HIDWORD(v72) = v57;
      if ( (Flags & 8) != 0 )
        v56 = 6;
      dword_14032E66C = v57;
      PopDiagTracePostSleepNotification(v56, dword_14032E668, v57);
      if ( KeMtrrComparisonFailed )
        PopDiagTraceMtrrError();
      if ( HiberContext < 0 && dword_14032E660 == 5 )
      {
        StringCchPrintfW(&PopHibernationErrorSubstitutionString, 0x80uLL, L"0x%x", (unsigned int)HiberContext);
        RtlInitUnicodeString(&DestinationString, &PopHibernationErrorSubstitutionString);
        IoRaiseInformationalHardError(-1073740783, &DestinationString, 0LL);
        PopDiagTraceHibernateErrorStatus((unsigned int)HiberContext);
      }
LABEL_160:
      v6 = 0;
LABEL_161:
      if ( byte_14032E8E0 )
      {
        qword_14032ED50 = KeQueryPerformanceCounter(0LL).QuadPart;
        dword_14032E8C4 = PopQpcTimeInMs(&qword_14032ED48, &qword_14032ED50);
      }
      if ( HiberContext >= 0 )
      {
        LOBYTE(v19) = 1;
        qword_14032E690 = v77;
        ExUpdateSystemTimeFromCmos(v19, 1LL);
        qword_14032EB98 = KeQueryPerformanceCounter(0LL).QuadPart;
        PfPowerActionNotify(2LL, 0LL, 0LL);
        qword_14032E688 = MEMORY[0xFFFFF78000000008];
      }
      byte_14032E65D = 1;
      PoPowerDownActionInProgress = 0;
      PsIumResumeAfterHibernate();
      if ( qword_14032E678 )
      {
        PfPowerActionNotify(3LL, 0LL, 0LL);
        PopSetDevicesSystemState();
        PfPowerActionNotify(3LL, 1LL, 0LL);
      }
      if ( v71 )
      {
        ExDeleteWakeTimerInfo(v71);
        v71 = 0LL;
      }
      off_140321780(0LL, 0LL, v58);
      PopNotifyTelemetryOsState(qword_14032E644, dword_14032E660, dword_14032E668, v3, 0);
      PopQueueBatteryStatusTimeout();
      PopExecuteOnTargetProcessors(
        (__int64)KeActiveProcessors,
        (__int64)PpmStartIllegalProcessorThrottleLogging,
        0LL,
        0LL);
      if ( v6 )
        PopReleasePolicyLock();
      PoClearBroadcast();
      qword_14032E678 = 0LL;
      PopEsExitSleep();
      PopCurrentPowerStatePrecise(v86);
      v59 = dword_14032E84C;
      PopSpoilEstimatesOnPowerStateTransitionWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopSpoilEstimatesOnPowerStateTransitionWorker;
      PopSpoilEstimatesOnPowerStateTransitionWorkItem.Parameter = 0LL;
      PopSpoilEstimatesOnPowerStateTransitionWorkItem.List.Flink = 0LL;
      ExQueueWorkItem(&PopSpoilEstimatesOnPowerStateTransitionWorkItem, DelayedWorkQueue);
      PopThermalSxExit(v61, v60, v62, v63);
      PopAcquirePolicyLock();
      if ( HiberContext >= 0 )
      {
        PopInitSIdle();
        PopAction = 0;
        if ( (unsigned __int64)dword_14032E698 < 3 )
        {
          qword_14032E6F0 = (__int64)*(&qword_14032E6A8 + 3 * dword_14032E698);
          PopFullWake = 0;
          if ( qword_14032E6B0[3 * dword_14032E698] == -1 )
          {
            qword_14032E644 = 0x500000002LL;
LABEL_178:
            v64 = 0;
            PopAction = 2;
            goto LABEL_182;
          }
          if ( dword_14032E84C == 1 && !v68 )
          {
            HIDWORD(qword_14032E644) = MinSystemState;
            LODWORD(qword_14032E644) = SystemAction;
            goto LABEL_178;
          }
          if ( (_DWORD)v72 == v59 )
            PopCheckPowerSourceAfterRtcWakeSet();
        }
      }
      v64 = 1;
LABEL_182:
      if ( byte_14032E6E8 && v64 )
      {
        ExWakeTimersResume();
        byte_14032E6E8 = 0;
        qword_14032E6F0 = 0LL;
      }
      if ( PoResumeFromHibernate )
      {
        PopBootLoaderTraceProcess();
        PoResumeFromHibernate = 0;
      }
      if ( HIDWORD(v72) == 4 )
        PopDiagTraceFirmwareS3Stats();
      byte_14032E8E0 = 0;
      PopResetActionDefaults();
      byte_14032E641 = 2;
      PopReleasePolicyLock();
      if ( (PopFullWake & 2) != 0 )
        PopSetNotificationWork(1u);
      ExQueueWorkItem(&PopUnlockAfterSleepWorkItem, DelayedWorkQueue);
      PopCheckForWork();
      if ( HiberContext >= 0 )
        PpmPerfReApplyStates();
      dword_14032E654 = 11;
      qword_14032ECE0 = PopCaptureTimeOnProcZero();
      return HiberContext;
    }
    v18 = 0;
  }
  PopFxPrepareDevicesForShutdown(v42, v41, v43, v44);
  IoFreePoDeviceNotifyList((_BYTE *)(qword_14032E678 + 48));
  if ( dword_14032E654 == 2 )
    PopCriticalShutdownInProgress = 1;
  if ( KeGetCurrentThread()->ApcState.Process == PsInitialSystemProcess )
    PopGracefulShutdown(0LL);
  PopShutdownWorkItem.Parameter = 0LL;
  PopShutdownWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopGracefulShutdown;
  PopShutdownWorkItem.List.Flink = 0LL;
  ExQueueWorkItem(&PopShutdownWorkItem, CriticalWorkQueue);
  KeSuspendThread((__int64)KeGetCurrentThread());
  return -1073741077;
}
