/*
 * XREFs of NtSetSystemPowerState @ 0x1403A3E04
 * Callers:
 *     NtShutdownSystem @ 0x14066C7A0 (NtShutdownSystem.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     KeSuspendThread @ 0x140030E48 (KeSuspendThread.c)
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     PsGetCurrentServerSilo @ 0x1400436F0 (PsGetCurrentServerSilo.c)
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140079E5C (PsIsCurrentThreadInServerSilo.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     PopSetNotificationWork @ 0x140097574 (PopSetNotificationWork.c)
 *     PopGetPolicyWorker @ 0x1400975A0 (PopGetPolicyWorker.c)
 *     PopExecuteOnTargetProcessors @ 0x14009C4F0 (PopExecuteOnTargetProcessors.c)
 *     StringCchPrintfW @ 0x1400EE06C (StringCchPrintfW.c)
 *     PopCheckForWork @ 0x1400FF0E8 (PopCheckForWork.c)
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
 *     PopRunMaximumIrpWorkers @ 0x140119E0C (PopRunMaximumIrpWorkers.c)
 *     PopCheckPowerSourceAfterRtcWakeCancel @ 0x140119F04 (PopCheckPowerSourceAfterRtcWakeCancel.c)
 *     PopIgnoreBatteryStatusChange @ 0x140119F3C (PopIgnoreBatteryStatusChange.c)
 *     PopEnforceResiliencyScenarios @ 0x140119F5C (PopEnforceResiliencyScenarios.c)
 *     PopActionRetrieveInitialState @ 0x140119F98 (PopActionRetrieveInitialState.c)
 *     PopForceCompleteSleepStudySession @ 0x14011A0AC (PopForceCompleteSleepStudySession.c)
 *     PopThermalSxEntry @ 0x14011A0E0 (PopThermalSxEntry.c)
 *     ExWakeTimersPause @ 0x14011A2B0 (ExWakeTimersPause.c)
 *     ExWakeTimersResume @ 0x14011AA08 (ExWakeTimersResume.c)
 *     PopThermalSxExit @ 0x14011AAA0 (PopThermalSxExit.c)
 *     PsIumResumeAfterHibernate @ 0x140126F10 (PsIumResumeAfterHibernate.c)
 *     ZwSetSystemPowerState @ 0x140153860 (ZwSetSystemPowerState.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     IoRaiseInformationalHardError @ 0x1401BB0F8 (IoRaiseInformationalHardError.c)
 *     PopReadShutdownPolicy @ 0x1401E6A10 (PopReadShutdownPolicy.c)
 *     PopFxPrepareDevicesForShutdown @ 0x1401EA8EC (PopFxPrepareDevicesForShutdown.c)
 *     PopCheckPowerSourceAfterRtcWakeSet @ 0x1401EE9C8 (PopCheckPowerSourceAfterRtcWakeSet.c)
 *     ExDeleteWakeTimerInfo @ 0x140214504 (ExDeleteWakeTimerInfo.c)
 *     PopAcquirePolicyLock @ 0x14039C560 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x14039CE60 (PopReleasePolicyLock.c)
 *     PopFlushVolumes @ 0x1403A39C4 (PopFlushVolumes.c)
 *     PfPowerActionNotify @ 0x1403A46FC (PfPowerActionNotify.c)
 *     PopSetDevicesSystemState @ 0x1403A492C (PopSetDevicesSystemState.c)
 *     PopQpcTimeInMs @ 0x1403A5880 (PopQpcTimeInMs.c)
 *     PopCaptureTimeOnProcZero @ 0x1403A58B0 (PopCaptureTimeOnProcZero.c)
 *     PopNewWakeInfo @ 0x1403A5AF0 (PopNewWakeInfo.c)
 *     IoFreePoDeviceNotifyList @ 0x1403A5CA4 (IoFreePoDeviceNotifyList.c)
 *     PopDiagTracePostSleepNotification @ 0x1403A5D84 (PopDiagTracePostSleepNotification.c)
 *     ExUpdateSystemTimeFromCmos @ 0x1403A6728 (ExUpdateSystemTimeFromCmos.c)
 *     xHalDpMaskLevelTriggeredInterrupts @ 0x1403AAAA4 (xHalDpMaskLevelTriggeredInterrupts.c)
 *     PopGracefulShutdown @ 0x1403B2154 (PopGracefulShutdown.c)
 *     PopDiagTraceFirmwareS3Stats @ 0x1403B2980 (PopDiagTraceFirmwareS3Stats.c)
 *     PopDiagTraceHibernateErrorStatus @ 0x1403B2B4C (PopDiagTraceHibernateErrorStatus.c)
 *     PopDiagTraceMtrrError @ 0x1403B2BD4 (PopDiagTraceMtrrError.c)
 *     ExGetNextWakeTime @ 0x1403B3094 (ExGetNextWakeTime.c)
 *     PopFindPowerSettingConfiguration @ 0x1404493B4 (PopFindPowerSettingConfiguration.c)
 *     PopCheckResiliencyScenarios @ 0x14045680C (PopCheckResiliencyScenarios.c)
 *     PopFilterCapabilities @ 0x140457EB8 (PopFilterCapabilities.c)
 *     SeSinglePrivilegeCheck @ 0x140471360 (SeSinglePrivilegeCheck.c)
 *     MmLockPagableSectionByHandle @ 0x1404B6838 (MmLockPagableSectionByHandle.c)
 *     ExSwapinWorkerThreads @ 0x1404F5C2C (ExSwapinWorkerThreads.c)
 *     CmSetLazyFlushState @ 0x1404F5D54 (CmSetLazyFlushState.c)
 *     PopAllocateHiberContext @ 0x1404F64C8 (PopAllocateHiberContext.c)
 *     PopAcquireTransitionLock @ 0x1404F6A8C (PopAcquireTransitionLock.c)
 *     PopNotifyCallbacksPreSleep @ 0x1404F6AB4 (PopNotifyCallbacksPreSleep.c)
 *     PoInitializeBroadcast @ 0x1404F6AFC (PoInitializeBroadcast.c)
 *     PopExecutePowerAction @ 0x1404F6DC0 (PopExecutePowerAction.c)
 *     PopFastS4Check @ 0x1404F71A8 (PopFastS4Check.c)
 *     PopAdvanceSystemPowerState @ 0x1404F71B8 (PopAdvanceSystemPowerState.c)
 *     PopDiagTraceKernelQueriesAllowed @ 0x1404F7218 (PopDiagTraceKernelQueriesAllowed.c)
 *     PopDiagTracePreSleepNotification @ 0x1404F72B0 (PopDiagTracePreSleepNotification.c)
 *     PopEsEnterSleepShutdown @ 0x1404F7350 (PopEsEnterSleepShutdown.c)
 *     PopInitSystemSleeperThread @ 0x1404F7478 (PopInitSystemSleeperThread.c)
 *     PopNotifyTelemetryOsState @ 0x1404F7EB8 (PopNotifyTelemetryOsState.c)
 *     PopSetSleepMarker @ 0x1404F899C (PopSetSleepMarker.c)
 *     PpmPerfReApplyStates @ 0x1404F8CB0 (PpmPerfReApplyStates.c)
 *     PopBootLoaderTraceProcess @ 0x1404F8D10 (PopBootLoaderTraceProcess.c)
 *     PopEsExitSleep @ 0x1404F8D74 (PopEsExitSleep.c)
 *     PoClearBroadcast @ 0x1404F8D9C (PoClearBroadcast.c)
 *     PopQueueBatteryStatusTimeout @ 0x1404F8DF0 (PopQueueBatteryStatusTimeout.c)
 *     PopCurrentPowerStatePrecise @ 0x1404F9FFC (PopCurrentPowerStatePrecise.c)
 *     PopInitSIdle @ 0x14050A84C (PopInitSIdle.c)
 *     RtlGetSetBootStatusData @ 0x14050BC64 (RtlGetSetBootStatusData.c)
 *     PopInitializePowerPolicySimulate @ 0x14050C9F8 (PopInitializePowerPolicySimulate.c)
 *     RtlLockBootStatusData @ 0x14050CBEC (RtlLockBootStatusData.c)
 *     RtlUnlockBootStatusData @ 0x14050CE8C (RtlUnlockBootStatusData.c)
 *     PopResetActionDefaults @ 0x14050D0B0 (PopResetActionDefaults.c)
 *     MmZeroPageFileAtShutdown @ 0x140620FD4 (MmZeroPageFileAtShutdown.c)
 *     PopFindNextSystemPowerState @ 0x140632160 (PopFindNextSystemPowerState.c)
 *     PopZeroHiberFile @ 0x140636434 (PopZeroHiberFile.c)
 *     PsTerminateServerSilo @ 0x14063FD38 (PsTerminateServerSilo.c)
 */

NTSTATUS __stdcall NtSetSystemPowerState(POWER_ACTION SystemAction, SYSTEM_POWER_STATE MinSystemState, ULONG Flags)
{
  NTSTATUS v3; // edi
  int v4; // r12d
  KPROCESSOR_MODE PreviousMode; // dl
  unsigned int v8; // eax
  NTSTATUS HiberContext; // ebx
  char v10; // r14
  __int64 v11; // rcx
  unsigned int v12; // r13d
  char v13; // r15
  char v14; // al
  __int64 PowerSettingConfiguration; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  int v18; // r8d
  __int64 v19; // rdx
  unsigned int v20; // r12d
  char v21; // r14
  unsigned int v22; // r15d
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // r14
  __int64 v27; // r13
  __int64 v28; // r8
  __int64 v29; // r12
  __int64 *v30; // rbx
  int v31; // r8d
  unsigned __int64 v32; // rcx
  __int64 v33; // rcx
  PVOID v34; // r8
  int v35; // ecx
  int v36; // r8d
  void *v37; // r8
  int v38; // r14d
  char v39; // al
  __int64 v40; // rdx
  _QWORD *CurrentServerSilo; // rax
  __int64 v43; // rdx
  void *v44; // rbx
  HANDLE v45; // rbx
  __int64 *v46; // rax
  int v47; // ebx
  __int64 v48; // rax
  char Buffer_1; // [rsp+49h] [rbp-BFh] BYREF
  char Buffer_2; // [rsp+4Ah] [rbp-BEh]
  char Buffer_3; // [rsp+4Bh] [rbp-BDh] BYREF
  int v52; // [rsp+4Ch] [rbp-BCh]
  __int64 v53; // [rsp+50h] [rbp-B8h]
  void *v54; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v55; // [rsp+60h] [rbp-A8h] BYREF
  int v56; // [rsp+64h] [rbp-A4h]
  __int64 v57; // [rsp+68h] [rbp-A0h]
  __int64 v58; // [rsp+70h] [rbp-98h] BYREF
  POWER_ACTION v59; // [rsp+78h] [rbp-90h] BYREF
  int v60; // [rsp+7Ch] [rbp-8Ch]
  int v61; // [rsp+80h] [rbp-88h]
  __int64 v62; // [rsp+88h] [rbp-80h]
  __int64 v63; // [rsp+90h] [rbp-78h] BYREF
  _QWORD v64[3]; // [rsp+98h] [rbp-70h] BYREF
  HANDLE FileHandle; // [rsp+B0h] [rbp-58h] BYREF
  UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-50h] BYREF
  char v67[24]; // [rsp+C8h] [rbp-40h] BYREF
  struct _KEVENT Event; // [rsp+E0h] [rbp-28h] BYREF
  char Object[28]; // [rsp+F8h] [rbp-10h] BYREF
  NTSTATUS v70; // [rsp+114h] [rbp+Ch]
  char v71[96]; // [rsp+118h] [rbp+10h] BYREF
  char v75; // [rsp+1A0h] [rbp+98h]

  v3 = 0;
  LODWORD(v57) = 1;
  v63 = 0LL;
  v4 = Flags;
  Buffer_2 = 0;
  v56 = 0;
  v58 = 0LL;
  v54 = 0LL;
  v62 = 0LL;
  v52 = 0;
  if ( (unsigned int)(MinSystemState - 1) > 5
    || (unsigned int)(SystemAction - 1) > 6
    || (Flags & 0xFFFFFF0) != 0
    || dword_1402DE094 >= 13 && SystemAction < PowerActionShutdown )
  {
    return -1073741811;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( SeSinglePrivilegeCheck(SeShutdownPrivilege, PreviousMode) )
      return ZwSetSystemPowerState(SystemAction, MinSystemState, v4);
    else
      return -1073741727;
  }
  if ( PsIsCurrentThreadInServerSilo() )
  {
    if ( (unsigned int)(SystemAction - 4) > 2 )
      return -1073741637;
    CurrentServerSilo = PsGetCurrentServerSilo();
    v43 = 3221226219LL;
    v44 = CurrentServerSilo;
    if ( SystemAction == PowerActionShutdownReset )
      v43 = 2147483697LL;
    PsTerminateServerSilo(CurrentServerSilo, v43);
    if ( v44 )
      ObfDereferenceObject(v44);
    return v3;
  }
  else
  {
    if ( SystemAction == PowerActionShutdown )
      PopReadShutdownPolicy();
    v60 = 0;
    memset(v64, 0, sizeof(v64));
    v61 = 0;
    v8 = dword_1402DE094;
    v59 = SystemAction;
    if ( dword_1402DE094 >= 13 )
      v8 = 5;
    v60 = v4;
    v64[0] = v8 | 0x8000000000LL;
    PopAcquireTransitionLock();
    MmLockPagableSectionByHandle(ExPageLockHandle);
    PopRunMaximumIrpWorkers();
    PopUnlockAfterSleepWorkItem.Parameter = 0LL;
    PopUnlockAfterSleepWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopUnlockAfterSleepWorker;
    PopUnlockAfterSleepWorkItem.List.Flink = 0LL;
    CmSetLazyFlushState(0LL);
    PopNotifyCallbacksPreSleep();
    ExSwapinWorkerThreads(0LL);
    HiberContext = PoInitializeBroadcast();
    if ( HiberContext >= 0 )
    {
      PopCheckPowerSourceAfterRtcWakeCancel();
      PopAcquirePolicyLock();
      v10 = 1;
      v75 = 1;
      PopFilterCapabilities(&PopCapabilities, &unk_1402DE140);
      if ( !byte_1402DE081 )
      {
        PopResetActionDefaults();
        goto LABEL_14;
      }
      if ( byte_1402DE081 == 2 )
      {
LABEL_14:
        qword_1402DE0B8 = (__int64)qword_1402DDC10;
        byte_1402DE081 = 3;
        PopExecutePowerAction((unsigned int)v64, 0, (unsigned int)&v59, MinSystemState, 1);
        PopIgnoreBatteryStatusChange();
        PopCheckResiliencyScenarios();
        PopEnforceResiliencyScenarios((unsigned int *)&v63);
        PopExecuteOnTargetProcessors(
          (__int64)KeActiveProcessors,
          (__int64)PpmStopIllegalProcessorThrottleLogging,
          0LL,
          0LL);
        if ( SystemAction == PowerActionShutdownOff )
          LODWORD(qword_1402DE084) = 6;
        if ( (unsigned int)(SystemAction - 4) <= 2
          && PopHiberInfo
          && FileObject
          && (unsigned int)MmZeroPageFileAtShutdown() )
        {
          PopZeroHiberFile(PopHiberInfo);
        }
        Buffer_1 = 0;
        v55 = 0;
        v12 = 0;
        if ( (unsigned int)(SystemAction - 2) <= 1 )
          PoPowerDownActionInProgress = 1;
        HiberContext = -1073741536;
        while ( 1 )
        {
          if ( v10 )
          {
            v13 = v75;
          }
          else
          {
            PopAcquirePolicyLock();
            v13 = 1;
          }
          if ( !(_DWORD)qword_1402DE084 )
          {
            HiberContext = 0;
            goto LABEL_75;
          }
          v14 = PopAction;
          PopAction = 0;
          if ( HiberContext == -1073741536 )
          {
            if ( (v14 & 2) != 0 && dword_1402DE08C >= 0 && (dword_1402DE08C & 3) != 0 )
            {
              PopGetPolicyWorker(2);
              goto LABEL_75;
            }
            PopActionRetrieveInitialState((_DWORD *)&qword_1402DE084 + 1, &v55, &dword_1402DE0A0, &Buffer_1);
            if ( (unsigned int)(qword_1402DE084 - 4) <= 2 )
            {
              byte_1402DE082 = 1;
              dword_1402DE08C = v4;
            }
            v12 = v55;
            HiberContext = 0;
          }
          if ( HiberContext < 0 )
            goto LABEL_75;
          PopReleasePolicyLock();
          v75 = 0;
          LODWORD(v53) = 1;
          v52 = 0;
          ExAcquireFastMutex(&PopSettingLock);
          PowerSettingConfiguration = PopFindPowerSettingConfiguration(&GUID_ALLOW_RTC_WAKE, 0xFFFFFFFFLL);
          if ( PowerSettingConfiguration )
          {
            v16 = *(_QWORD *)(PowerSettingConfiguration + 64);
            if ( v16 && *(_DWORD *)(v16 + 4) >= 4u )
              LODWORD(v53) = *(_DWORD *)(v16 + 12);
            v17 = *(_QWORD *)(PowerSettingConfiguration + 72);
            if ( v17 && *(_DWORD *)(v17 + 4) >= 4u )
              v52 = *(_DWORD *)(v17 + 12);
          }
          KeReleaseGuardedMutex(&PopSettingLock);
          if ( (dword_1402DE08C & 0x40000000) != 0 )
          {
            LODWORD(v53) = 0;
            v52 = 0;
          }
          PopInitializePowerPolicySimulate();
          dword_1402DE0A4 = dword_1402DE0A0;
          PopAdvanceSystemPowerState(
            &dword_1402DE0A4,
            ((unsigned int)dword_1402DE08C >> 27) & 2,
            HIDWORD(qword_1402DE084),
            v12);
          v18 = v4 & 8;
          if ( (v4 & 8) != 0 )
          {
            v19 = dword_1402DE0A0;
            v20 = 6;
            byte_1402DE320 = 1;
            dword_1402DE0A8 = 5;
          }
          else
          {
            if ( (unsigned __int8)PopFastS4Check() )
            {
              v19 = (unsigned int)dword_1402DE0A0;
              v22 = 6;
              v20 = dword_1402DE0A0;
              dword_1402DE0A8 = 5;
              v21 = 1;
              goto LABEL_41;
            }
            v19 = dword_1402DE0A0;
            dword_1402DE0A8 = dword_1402DE0A0;
            v20 = dword_1402DE0A0;
          }
          v21 = 0;
          v22 = PopPowerStateHandlerLookup[v19];
          if ( v22 > 6 )
            goto LABEL_136;
LABEL_41:
          if ( !qword_1402DDEA8[3 * (int)v22] )
            goto LABEL_136;
          if ( v18 )
          {
            v23 = 6LL;
LABEL_44:
            PopSetSleepMarker(v23);
            goto LABEL_45;
          }
          if ( !byte_1402DE082 )
          {
            v23 = (unsigned int)v19;
            goto LABEL_44;
          }
LABEL_45:
          PopAcquirePolicyLock();
          if ( (PopAction & 6) != 0 )
          {
            v10 = 1;
            HiberContext = -1073741536;
            v75 = 1;
            goto LABEL_138;
          }
          PopReleasePolicyLock();
          LOBYTE(v24) = Buffer_1;
          byte_1402DE09C = 3;
          PopDiagTraceKernelQueriesAllowed(v24);
          if ( !Buffer_1 )
            goto LABEL_131;
          v25 = PopSetDevicesSystemState();
          HiberContext = v25;
          if ( v25 >= 0 )
            goto LABEL_48;
          if ( v25 != -1073741536 )
          {
LABEL_136:
            LOBYTE(v19) = v21;
            if ( !(unsigned __int8)PopFindNextSystemPowerState(v12, v19, &Buffer_1) )
            {
              v4 = Flags;
              goto LABEL_74;
            }
            HiberContext = 0;
            v10 = 0;
LABEL_138:
            v4 = Flags;
          }
          else
          {
LABEL_131:
            if ( HiberContext < 0 )
            {
LABEL_132:
              v10 = 0;
              goto LABEL_138;
            }
LABEL_48:
            HiberContext = PopAllocateHiberContext();
            if ( HiberContext < 0 )
              goto LABEL_132;
            if ( !byte_1402DE082 )
              PopDiagTracePreSleepNotification(
                v20,
                (unsigned int)dword_1402DE0A8,
                (unsigned int)dword_1402DE094,
                (unsigned int)dword_1402DE098);
            PopEsEnterSleepShutdown();
            PopForceCompleteSleepStudySession(dword_1402DE094);
            PopThermalSxEntry();
            if ( !Buffer_2 )
            {
              if ( byte_1402DE082 && RtlLockBootStatusData(&FileHandle) >= 0 )
              {
                v45 = FileHandle;
                Buffer_3 = 1;
                RtlGetSetBootStatusData(FileHandle, 0, RtlBsdItemBootShutdown, &Buffer_3, 1u, 0LL);
                RtlGetSetBootStatusData(v45, 0, RtlBsdItemShutdownBootId, (PVOID)0xFFFFF780000002C4LL, 4u, 0LL);
                RtlUnlockBootStatusData(v45);
              }
              Buffer_2 = 1;
            }
            v4 = Flags;
            PopNotifyTelemetryOsState(qword_1402DE084, dword_1402DE0A0, dword_1402DE0A8, Flags, 1);
            PopFlushVolumes(dword_1402DE0A0);
            if ( dword_1402DE0A8 < dword_1402DE0A0 )
              dword_1402DE0A8 = dword_1402DE0A0;
            byte_1402DE09C = 2;
            if ( byte_1402DE082 )
            {
              PopFxPrepareDevicesForShutdown();
              IoFreePoDeviceNotifyList(qword_1402DE0B8 + 48);
              if ( dword_1402DE094 == 2 )
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
            KeMtrrComparisonFailed = 0;
            HiberContext = PopInitSystemSleeperThread(v22, v67);
            if ( HiberContext >= 0 )
            {
              if ( !byte_1402DE130 )
              {
                ExWakeTimersPause();
                byte_1402DE130 = 1;
              }
              v26 = 0LL;
              v27 = MEMORY[0xFFFFF78000000008];
              v28 = *((unsigned int *)PopPolicy + 22);
              if ( (_DWORD)v28
                && dword_1402DE0A0 != 5
                && byte_1402DDF68
                && byte_1402DDF76 == 2
                && (dword_1402DE08C & 0x40000000) == 0
                && byte_1402DE146 )
              {
                v29 = MEMORY[0xFFFFF78000000008] + 10000000 * v28;
                v26 = -1LL;
              }
              else if ( byte_1402DDF74
                     && dword_1402DE0A0 == 5
                     && !byte_1402DE320
                     && qword_1402DEAE8
                     && dword_1402DE094 == 11 )
              {
                v26 = -2LL;
                v29 = qword_1402DEAE8
                    - 10000000LL * (unsigned int)PopSmartUserPresenceWakeOffset
                    - MEMORY[0xFFFFF78000000014]
                    + MEMORY[0xFFFFF78000000008];
              }
              else
              {
                v29 = 0LL;
              }
              v30 = &qword_1402DE0E8;
              memset(&qword_1402DE0E8, 0, 0x48uLL);
              dword_1402DE0E0 = 3;
              if ( byte_1402DE320 )
                goto LABEL_64;
              if ( v29 )
              {
                do
                {
                  *v30 = v29;
                  v30 += 3;
                }
                while ( (__int64)v30 < (__int64)&unk_1402DE118 );
                v46 = qword_1402DE0F8;
                do
                {
                  *v46 = v26;
                  v46 += 3;
                }
                while ( (__int64)v46 < (__int64)&qword_1402DE128 );
              }
              v47 = qword_1402DE138;
              if ( qword_1402DE138 && qword_1402DE138 < (unsigned __int64)(v27 + 20000000) )
                v47 = v27 + 20000000;
              if ( (_DWORD)v53 )
              {
                if ( (_DWORD)v53 != 2 || (LOBYTE(v31) = 1, (PopSimulate & 0x10000000) != 0) )
                  LOBYTE(v31) = 0;
                if ( (unsigned __int8)ExGetNextWakeTime(v47 + 1, v29, v31, (unsigned int)&v58, (__int64)&v54) )
                {
                  qword_1402DE0E8 = v58;
                  qword_1402DE0F8[0] = (__int64)v54;
                }
              }
              if ( !v52 )
                goto LABEL_64;
              if ( v52 != 2 || (LOBYTE(v31) = 1, (PopSimulate & 0x10000000) != 0) )
                LOBYTE(v31) = 0;
              if ( (unsigned __int8)ExGetNextWakeTime(v47 + 1, v29, v31, (unsigned int)&v58, (__int64)&v54) )
              {
                v32 = v58;
                qword_1402DE100 = v58;
                qword_1402DE110 = (__int64)v54;
              }
              else
              {
LABEL_64:
                v32 = qword_1402DE100;
              }
              qword_1402DE0F0 = (PVOID)qword_1402DE0E8;
              if ( qword_1402DE0E8 && qword_1402DE0E8 < (unsigned __int64)(v27 + 600000000) )
                qword_1402DE0F0 = (PVOID)(v27 + 600000000);
              NumberOfBytes = v32;
              if ( v32 && v32 < v27 + 600000000 )
                NumberOfBytes = v27 + 600000000;
              qword_1402DE5D0 = KeQueryPerformanceCounter(0LL).QuadPart;
              LOBYTE(v33) = 1;
              ExUpdateSystemTimeFromCmos(v33);
              off_1402D2630(qword_1402DE0F0, NumberOfBytes, v34);
              PopSetDevicesSystemState();
              PopNewWakeInfo();
              v62 = MEMORY[0xFFFFF78000000008];
              LODWORD(v57) = dword_1402DE28C;
              KeSetEvent(&Event, 0, 1u);
              KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
              v35 = dword_1402DE0A0;
              v36 = dword_1402DE0A0;
              v4 = Flags;
              if ( PoResumeFromHibernate )
                v36 = dword_1402DE0A8;
              HiberContext = v70;
              qword_1402DE3B0 = 0LL;
              if ( (Flags & 8) != 0 )
                v35 = 6;
              v56 = v36;
              dword_1402DE0AC = v36;
              PopDiagTracePostSleepNotification(
                v35,
                dword_1402DE0A8,
                v36,
                (_DWORD)qword_1402DE0F0,
                NumberOfBytes,
                qword_1402DE0F8[0],
                qword_1402DE110);
              if ( KeMtrrComparisonFailed )
                PopDiagTraceMtrrError();
              if ( HiberContext < 0 && dword_1402DE0A0 == 5 )
              {
                StringCchPrintfW(PopHibernationErrorSubstitutionString, 0x80uLL, L"0x%x", (unsigned int)HiberContext);
                RtlInitUnicodeString(&DestinationString, PopHibernationErrorSubstitutionString);
                IoRaiseInformationalHardError(-1073740783, &DestinationString, 0LL);
                PopDiagTraceHibernateErrorStatus((unsigned int)HiberContext);
              }
LABEL_74:
              v13 = 0;
LABEL_75:
              if ( byte_1402DE320 )
              {
                qword_1402DE790 = KeQueryPerformanceCounter(0LL).QuadPart;
                dword_1402DE304 = PopQpcTimeInMs(&qword_1402DE788, &qword_1402DE790);
              }
              if ( HiberContext >= 0 )
              {
                LOBYTE(v11) = 1;
                qword_1402DE0D0 = v62;
                ExUpdateSystemTimeFromCmos(v11);
                qword_1402DE5D8 = KeQueryPerformanceCounter(0LL).QuadPart;
                PfPowerActionNotify(2LL, 0LL, 0LL);
                qword_1402DE0C8 = MEMORY[0xFFFFF78000000008];
              }
              byte_1402DE09D = 1;
              PoPowerDownActionInProgress = 0;
              PsIumResumeAfterHibernate();
              if ( qword_1402DE0B8 )
              {
                PfPowerActionNotify(3LL, 0LL, 0LL);
                PopSetDevicesSystemState();
                PfPowerActionNotify(3LL, 1LL, 0LL);
              }
              if ( v54 )
              {
                ExDeleteWakeTimerInfo(v54);
                v54 = 0LL;
              }
              off_1402D2630(0LL, 0LL, v37);
              PopNotifyTelemetryOsState(qword_1402DE084, dword_1402DE0A0, dword_1402DE0A8, v4, 0);
              PopQueueBatteryStatusTimeout();
              PopExecuteOnTargetProcessors(
                (__int64)KeActiveProcessors,
                (__int64)PpmStartIllegalProcessorThrottleLogging,
                0LL,
                0LL);
              if ( v13 )
                PopReleasePolicyLock();
              PoClearBroadcast();
              qword_1402DE0B8 = 0LL;
              PopEsExitSleep();
              PopCurrentPowerStatePrecise(v71);
              v38 = dword_1402DE28C;
              PopSpoilEstimatesOnPowerStateTransitionWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopSpoilEstimatesOnPowerStateTransitionWorker;
              PopSpoilEstimatesOnPowerStateTransitionWorkItem.Parameter = 0LL;
              PopSpoilEstimatesOnPowerStateTransitionWorkItem.List.Flink = 0LL;
              ExQueueWorkItem(&PopSpoilEstimatesOnPowerStateTransitionWorkItem, DelayedWorkQueue);
              PopThermalSxExit();
              PopAcquirePolicyLock();
              if ( HiberContext >= 0 && (PopInitSIdle(), PopAction = 0, (unsigned __int64)dword_1402DE0E0 < 3) )
              {
                qword_1402DE138 = (__int64)*(&qword_1402DE0F0 + 3 * dword_1402DE0E0);
                v48 = qword_1402DE0F8[3 * dword_1402DE0E0];
                PopFullWake = 0;
                if ( v48 == -1 )
                {
                  qword_1402DE084 = 0x500000002LL;
                }
                else
                {
                  if ( v48 == -2 )
                  {
                    if ( !qword_1402DE0D8 )
                      qword_1402DE0D8 = qword_1402DE0C8;
                    goto LABEL_87;
                  }
                  if ( dword_1402DE28C != 1 )
                  {
                    if ( !v52 && (_DWORD)v57 == v38 )
                      PopCheckPowerSourceAfterRtcWakeSet();
                    goto LABEL_87;
                  }
                  if ( v52 )
                    goto LABEL_87;
                  LODWORD(qword_1402DE084) = SystemAction;
                  HIDWORD(qword_1402DE084) = MinSystemState;
                }
                v39 = 0;
                PopAction = 2;
              }
              else
              {
LABEL_87:
                v39 = 1;
              }
              if ( byte_1402DE130 && v39 )
              {
                ExWakeTimersResume();
                byte_1402DE130 = 0;
                qword_1402DE138 = 0LL;
              }
              if ( PoResumeFromHibernate )
              {
                PopBootLoaderTraceProcess();
                PoResumeFromHibernate = 0;
              }
              if ( v56 == 4 )
                PopDiagTraceFirmwareS3Stats();
              byte_1402DE320 = 0;
              PopResetActionDefaults();
              byte_1402DE081 = 2;
              PopReleasePolicyLock();
              if ( (PopFullWake & 2) != 0 )
                PopSetNotificationWork(1u, v40);
              ExQueueWorkItem(&PopUnlockAfterSleepWorkItem, DelayedWorkQueue);
              PopCheckForWork();
              if ( HiberContext >= 0 )
                PpmPerfReApplyStates();
              dword_1402DE094 = 13;
              qword_1402DE720 = PopCaptureTimeOnProcZero();
              return HiberContext;
            }
            v10 = 0;
          }
        }
      }
      PopReleasePolicyLock();
      PoClearBroadcast();
      HiberContext = -1073741791;
    }
    ExQueueWorkItem(&PopUnlockAfterSleepWorkItem, DelayedWorkQueue);
    return HiberContext;
  }
}
