/*
 * XREFs of NtSetSystemPowerState @ 0x1403CF658
 * Callers:
 *     NtShutdownSystem @ 0x1406AD144 (NtShutdownSystem.c)
 * Callees:
 *     PopSetNotificationWork @ 0x1400085B4 (PopSetNotificationWork.c)
 *     PopGetPolicyWorker @ 0x140008680 (PopGetPolicyWorker.c)
 *     PopCheckForWork @ 0x1400097C4 (PopCheckForWork.c)
 *     KeReleaseGuardedMutex @ 0x14000C5C0 (KeReleaseGuardedMutex.c)
 *     PopExecuteOnTargetProcessors @ 0x14000D0F8 (PopExecuteOnTargetProcessors.c)
 *     PsGetCurrentServerSilo @ 0x1400131A0 (PsGetCurrentServerSilo.c)
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     ExQueueWorkItem @ 0x14005F9DC (ExQueueWorkItem.c)
 *     PsIsHostSilo @ 0x140079FE8 (PsIsHostSilo.c)
 *     StringCchPrintfW @ 0x1400AC770 (StringCchPrintfW.c)
 *     KeSuspendThread @ 0x1400C7748 (KeSuspendThread.c)
 *     PopSetPowerActionState @ 0x140114AF0 (PopSetPowerActionState.c)
 *     ExWakeTimersResume @ 0x140114D10 (ExWakeTimersResume.c)
 *     PopThermalSxExit @ 0x140114DA8 (PopThermalSxExit.c)
 *     ExWakeTimersPause @ 0x140114E9C (ExWakeTimersPause.c)
 *     PopThermalSxEntry @ 0x14012503C (PopThermalSxEntry.c)
 *     PopRunMaximumIrpWorkers @ 0x14012520C (PopRunMaximumIrpWorkers.c)
 *     PopActionRetrieveInitialState @ 0x140126920 (PopActionRetrieveInitialState.c)
 *     PopUmpoSendFlushSleepStudyLoggerNotification @ 0x140126DF8 (PopUmpoSendFlushSleepStudyLoggerNotification.c)
 *     PopCheckPowerSourceAfterRtcWakeCancel @ 0x1401270D4 (PopCheckPowerSourceAfterRtcWakeCancel.c)
 *     PopForceCompleteCsSleepStudySession @ 0x140127178 (PopForceCompleteCsSleepStudySession.c)
 *     PopIgnoreBatteryStatusChange @ 0x1401271AC (PopIgnoreBatteryStatusChange.c)
 *     PsIumResumeAfterHibernate @ 0x140132248 (PsIumResumeAfterHibernate.c)
 *     ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator @ 0x140159800 (ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator.c)
 *     ZwSetSystemPowerState @ 0x14015D4F0 (ZwSetSystemPowerState.c)
 *     ZwUpdateWnfStateData @ 0x14015D930 (ZwUpdateWnfStateData.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     IoRaiseInformationalHardError @ 0x1401C8DE4 (IoRaiseInformationalHardError.c)
 *     PopReadShutdownPolicy @ 0x1401FF1BC (PopReadShutdownPolicy.c)
 *     PopFxPrepareDevicesForShutdown @ 0x1402030F0 (PopFxPrepareDevicesForShutdown.c)
 *     PopCheckPowerSourceAfterRtcWakeSet @ 0x140207300 (PopCheckPowerSourceAfterRtcWakeSet.c)
 *     ExDeleteWakeTimerInfo @ 0x14022DFA0 (ExDeleteWakeTimerInfo.c)
 *     PopAcquirePolicyLock @ 0x1403C87E0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x1403C8828 (PopReleasePolicyLock.c)
 *     ExUpdateSystemTimeFromCmos @ 0x1403C8DA4 (ExUpdateSystemTimeFromCmos.c)
 *     PopCheckpointSystemSleep @ 0x1403CEBA4 (PopCheckpointSystemSleep.c)
 *     PopSetDevicesSystemState @ 0x1403CF5D0 (PopSetDevicesSystemState.c)
 *     PfPowerActionNotify @ 0x1403CFF90 (PfPowerActionNotify.c)
 *     PopQpcTimeInMs @ 0x1403D055C (PopQpcTimeInMs.c)
 *     PopCaptureTimeOnProcZero @ 0x1403D058C (PopCaptureTimeOnProcZero.c)
 *     IoFreePoDeviceNotifyList @ 0x1403D08F8 (IoFreePoDeviceNotifyList.c)
 *     PopDiagTracePostSleepNotification @ 0x1403D09D8 (PopDiagTracePostSleepNotification.c)
 *     PopNewWakeInfo @ 0x1403D0BE4 (PopNewWakeInfo.c)
 *     PopFlushVolumes @ 0x1403D0D4C (PopFlushVolumes.c)
 *     xHalDpMaskLevelTriggeredInterrupts @ 0x1403D6AF0 (xHalDpMaskLevelTriggeredInterrupts.c)
 *     PopGracefulShutdown @ 0x1403DEE20 (PopGracefulShutdown.c)
 *     PopDiagTraceFirmwareS3Stats @ 0x1403DF66C (PopDiagTraceFirmwareS3Stats.c)
 *     PopDiagTraceHibernateErrorStatus @ 0x1403DF838 (PopDiagTraceHibernateErrorStatus.c)
 *     PopDiagTraceMtrrError @ 0x1403DF8C0 (PopDiagTraceMtrrError.c)
 *     ExGetNextWakeTime @ 0x1403DFDD0 (ExGetNextWakeTime.c)
 *     PopFilterCapabilities @ 0x1403F2BB8 (PopFilterCapabilities.c)
 *     PopCheckResiliencyScenarios @ 0x1403F4B28 (PopCheckResiliencyScenarios.c)
 *     PopFindPowerSettingConfiguration @ 0x1403F73FC (PopFindPowerSettingConfiguration.c)
 *     SeSinglePrivilegeCheck @ 0x140412E30 (SeSinglePrivilegeCheck.c)
 *     MmLockPagableSectionByHandle @ 0x1404BFFD0 (MmLockPagableSectionByHandle.c)
 *     ExSwapinWorkerThreads @ 0x14052F230 (ExSwapinWorkerThreads.c)
 *     CmSetLazyFlushState @ 0x14052F358 (CmSetLazyFlushState.c)
 *     PopAllocateHiberContext @ 0x14052FB04 (PopAllocateHiberContext.c)
 *     PopNotifyCallbacksPreSleep @ 0x140530358 (PopNotifyCallbacksPreSleep.c)
 *     PopNotifyTelemetryOsState @ 0x140530AAC (PopNotifyTelemetryOsState.c)
 *     PopExecutePowerAction @ 0x140530CA8 (PopExecutePowerAction.c)
 *     PopSetSleepMarker @ 0x140531BD0 (PopSetSleepMarker.c)
 *     PpmPerfReApplyStates @ 0x140531D54 (PpmPerfReApplyStates.c)
 *     PopBootLoaderTraceProcess @ 0x140531D9C (PopBootLoaderTraceProcess.c)
 *     PopEsExitSleep @ 0x140531E1C (PopEsExitSleep.c)
 *     PoClearBroadcast @ 0x140531E44 (PoClearBroadcast.c)
 *     PopQueueBatteryStatusTimeout @ 0x140531E98 (PopQueueBatteryStatusTimeout.c)
 *     PopInitSystemSleeperThread @ 0x140531EE0 (PopInitSystemSleeperThread.c)
 *     PoInitializeBroadcast @ 0x14053253C (PoInitializeBroadcast.c)
 *     PopEsEnterSleepShutdown @ 0x1405344F8 (PopEsEnterSleepShutdown.c)
 *     PopFastS4Check @ 0x140534800 (PopFastS4Check.c)
 *     PopEnforceResiliencyScenarios @ 0x1405349C4 (PopEnforceResiliencyScenarios.c)
 *     PopDiagTracePreSleepNotification @ 0x140534A60 (PopDiagTracePreSleepNotification.c)
 *     PopDiagTraceKernelQueriesAllowed @ 0x140534C48 (PopDiagTraceKernelQueriesAllowed.c)
 *     PopAdvanceSystemPowerState @ 0x140534CE0 (PopAdvanceSystemPowerState.c)
 *     PopAcquireTransitionLock @ 0x140534EB8 (PopAcquireTransitionLock.c)
 *     RtlGetSetBootStatusData @ 0x140543854 (RtlGetSetBootStatusData.c)
 *     PopInitSIdle @ 0x140545034 (PopInitSIdle.c)
 *     PopInitializePowerPolicySimulate @ 0x140547B88 (PopInitializePowerPolicySimulate.c)
 *     RtlLockBootStatusData @ 0x140547E3C (RtlLockBootStatusData.c)
 *     PopCurrentPowerStatePrecise @ 0x14054816C (PopCurrentPowerStatePrecise.c)
 *     RtlUnlockBootStatusData @ 0x1405482EC (RtlUnlockBootStatusData.c)
 *     PopResetActionDefaults @ 0x140548C14 (PopResetActionDefaults.c)
 *     PopSetShutdownMarker @ 0x140581F80 (PopSetShutdownMarker.c)
 *     MmZeroPageFileAtShutdown @ 0x1406575D8 (MmZeroPageFileAtShutdown.c)
 *     PopFindNextSystemPowerState @ 0x14066A4AC (PopFindNextSystemPowerState.c)
 *     PopZeroHiberFile @ 0x14066E8C0 (PopZeroHiberFile.c)
 *     PsTerminateServerSilo @ 0x14067E25C (PsTerminateServerSilo.c)
 */

NTSTATUS __stdcall NtSetSystemPowerState(POWER_ACTION SystemAction, SYSTEM_POWER_STATE MinSystemState, ULONG Flags)
{
  NTSTATUS v3; // edi
  int v4; // r12d
  KPROCESSOR_MODE PreviousMode; // dl
  __int64 CurrentServerSilo; // rbx
  unsigned int v9; // eax
  NTSTATUS HiberContext; // ebx
  char v11; // r14
  unsigned int v12; // r13d
  char v13; // r15
  char v14; // al
  __int64 PowerSettingConfiguration; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  int v18; // r8d
  __int64 v19; // rdx
  int v20; // r12d
  char v21; // r14
  unsigned int v22; // r15d
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  int v29; // eax
  char v30; // al
  __int64 v31; // r15
  __int64 v32; // r13
  __int64 v33; // r8
  __int64 v34; // r12
  __int64 *v35; // rbx
  int v36; // r8d
  unsigned __int64 v37; // rdx
  void *v38; // rcx
  PVOID v39; // r8
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  int v44; // ecx
  int v45; // r8d
  void *v46; // r8
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  int v51; // r14d
  char v52; // al
  __int64 v54; // rdx
  HANDLE v55; // rbx
  __int64 *v56; // rax
  int v57; // ebx
  __int64 v58; // rax
  char Buffer_1; // [rsp+49h] [rbp-BFh] BYREF
  char Buffer_2; // [rsp+4Ah] [rbp-BEh]
  char Buffer_3; // [rsp+4Bh] [rbp-BDh] BYREF
  int v62; // [rsp+4Ch] [rbp-BCh]
  __int64 v63; // [rsp+50h] [rbp-B8h]
  void *v64; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v65; // [rsp+60h] [rbp-A8h] BYREF
  int v66; // [rsp+64h] [rbp-A4h]
  __int64 v67; // [rsp+68h] [rbp-A0h]
  __int64 v68; // [rsp+70h] [rbp-98h] BYREF
  POWER_ACTION v69; // [rsp+78h] [rbp-90h] BYREF
  int v70; // [rsp+7Ch] [rbp-8Ch]
  int v71; // [rsp+80h] [rbp-88h]
  __int64 v72; // [rsp+88h] [rbp-80h] BYREF
  __int64 v73; // [rsp+90h] [rbp-78h]
  HANDLE FileHandle; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v75[3]; // [rsp+A0h] [rbp-68h] BYREF
  UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-50h] BYREF
  char v77[24]; // [rsp+C8h] [rbp-40h] BYREF
  struct _KEVENT Event; // [rsp+E0h] [rbp-28h] BYREF
  char Object[28]; // [rsp+F8h] [rbp-10h] BYREF
  NTSTATUS v80; // [rsp+114h] [rbp+Ch]
  char v81[96]; // [rsp+118h] [rbp+10h] BYREF
  char v85; // [rsp+1A0h] [rbp+98h]

  v3 = 0;
  v66 = 1;
  v72 = 0LL;
  v4 = Flags;
  Buffer_2 = 0;
  LODWORD(v67) = 0;
  v68 = 0LL;
  v64 = 0LL;
  v73 = 0LL;
  v62 = 0;
  if ( (unsigned int)(MinSystemState - 1) > 5
    || (unsigned int)(SystemAction - 1) > 6
    || (Flags & 0xFFFFFE0) != 0
    || dword_1403033B4 >= 15 && SystemAction < PowerActionShutdown )
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
  CurrentServerSilo = PsGetCurrentServerSilo();
  if ( PsIsHostSilo(CurrentServerSilo) )
  {
    if ( SystemAction == PowerActionShutdown )
      PopReadShutdownPolicy();
    v70 = 0;
    memset(v75, 0, sizeof(v75));
    v71 = 0;
    v9 = dword_1403033B4;
    v69 = SystemAction;
    if ( dword_1403033B4 >= 15 )
      v9 = 5;
    v70 = v4;
    v75[0] = v9 | 0x8000000000LL;
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
      v11 = 1;
      v85 = 1;
      PopFilterCapabilities(&PopCapabilities, &unk_140303460);
      if ( !byte_1403033A1 )
      {
        PopResetActionDefaults();
        goto LABEL_14;
      }
      if ( byte_1403033A1 == 2 )
      {
LABEL_14:
        PopSetPowerActionState(3);
        qword_1403033D8 = (__int64)qword_140303330;
        PopExecutePowerAction((unsigned int)v75, 0, (unsigned int)&v69, MinSystemState, 1);
        PopIgnoreBatteryStatusChange();
        PopCheckResiliencyScenarios();
        PopEnforceResiliencyScenarios(&v72);
        PopExecuteOnTargetProcessors(
          (__int64)KeActiveProcessors,
          (__int64)PpmStopIllegalProcessorThrottleLogging,
          0LL,
          0LL);
        if ( SystemAction == PowerActionShutdownOff )
          LODWORD(qword_1403033A4) = 6;
        if ( (unsigned int)(SystemAction - 4) <= 2
          && PopHiberInfo
          && FileObject
          && (unsigned int)MmZeroPageFileAtShutdown() )
        {
          PopZeroHiberFile(PopHiberInfo);
        }
        Buffer_1 = 0;
        v65 = 0;
        v12 = 0;
        if ( (unsigned int)(SystemAction - 2) <= 1 )
          PoPowerDownActionInProgress = 1;
        HiberContext = -1073741536;
        while ( 1 )
        {
          if ( v11 )
          {
            v13 = v85;
          }
          else
          {
            PopAcquirePolicyLock();
            v13 = 1;
          }
          if ( !(_DWORD)qword_1403033A4 )
          {
            HiberContext = 0;
            goto LABEL_76;
          }
          v14 = PopAction;
          PopAction = 0;
          if ( HiberContext == -1073741536 )
          {
            if ( (v14 & 2) != 0 && dword_1403033AC >= 0 && (dword_1403033AC & 3) != 0 )
            {
              PopGetPolicyWorker(2);
              goto LABEL_76;
            }
            PopActionRetrieveInitialState((_DWORD *)&qword_1403033A4 + 1, &v65, &dword_1403033C0, &Buffer_1);
            if ( (unsigned int)(qword_1403033A4 - 4) <= 2 )
            {
              byte_1403033A2 = 1;
              dword_1403033AC = v4;
            }
            v12 = v65;
            HiberContext = 0;
          }
          if ( HiberContext < 0 )
            goto LABEL_76;
          PopReleasePolicyLock();
          v85 = 0;
          LODWORD(v63) = 1;
          v62 = 0;
          ExAcquireFastMutex(&PopSettingLock);
          PowerSettingConfiguration = PopFindPowerSettingConfiguration(&GUID_ALLOW_RTC_WAKE, 0xFFFFFFFFLL);
          if ( PowerSettingConfiguration )
          {
            v16 = *(_QWORD *)(PowerSettingConfiguration + 64);
            if ( v16 && *(_DWORD *)(v16 + 4) >= 4u )
              LODWORD(v63) = *(_DWORD *)(v16 + 12);
            v17 = *(_QWORD *)(PowerSettingConfiguration + 72);
            if ( v17 && *(_DWORD *)(v17 + 4) >= 4u )
              v62 = *(_DWORD *)(v17 + 12);
          }
          KeReleaseGuardedMutex(&PopSettingLock);
          if ( (dword_1403033AC & 0x40000000) != 0 )
          {
            LODWORD(v63) = 0;
            v62 = 0;
          }
          PopInitializePowerPolicySimulate();
          dword_1403033C4 = dword_1403033C0;
          PopAdvanceSystemPowerState(
            &dword_1403033C4,
            ((unsigned int)dword_1403033AC >> 27) & 2,
            HIDWORD(qword_1403033A4),
            v12);
          v18 = v4 & 8;
          if ( (v4 & 8) != 0 )
          {
            v19 = dword_1403033C0;
            v20 = 6;
            byte_140303500 = 1;
            dword_1403033C8 = 5;
          }
          else
          {
            if ( (unsigned __int8)PopFastS4Check() )
            {
              v19 = (unsigned int)dword_1403033C0;
              v22 = 6;
              v20 = dword_1403033C0;
              dword_1403033C8 = 5;
              v21 = 1;
              goto LABEL_41;
            }
            v19 = dword_1403033C0;
            dword_1403033C8 = dword_1403033C0;
            v20 = dword_1403033C0;
          }
          v21 = 0;
          v22 = PopPowerStateHandlerLookup[v19];
          if ( v22 > 6 )
            goto LABEL_138;
LABEL_41:
          if ( !qword_140303DE8[3 * (int)v22] )
            goto LABEL_138;
          if ( v18 )
          {
            v23 = 6LL;
          }
          else
          {
            if ( byte_1403033A2 )
            {
              PopSetShutdownMarker();
              goto LABEL_45;
            }
            v23 = (unsigned int)v19;
          }
          PopSetSleepMarker(v23);
LABEL_45:
          PopAcquirePolicyLock();
          if ( (PopAction & 6) != 0 )
          {
            v11 = 1;
            HiberContext = -1073741536;
            v85 = 1;
            goto LABEL_141;
          }
          PopReleasePolicyLock();
          PopCheckpointSystemSleep(10);
          LOBYTE(v24) = Buffer_1;
          byte_1403033BC = 3;
          PopDiagTraceKernelQueriesAllowed(v24);
          if ( Buffer_1 )
          {
            v29 = PopSetDevicesSystemState(v26, v25, v27, v28);
            HiberContext = v29;
            if ( v29 >= 0 )
              goto LABEL_48;
            if ( v29 != -1073741536 )
            {
LABEL_138:
              LOBYTE(v19) = v21;
              if ( !(unsigned __int8)PopFindNextSystemPowerState(v12, v19, &Buffer_1) )
              {
                v4 = Flags;
                goto LABEL_75;
              }
              HiberContext = 0;
              goto LABEL_140;
            }
          }
          if ( HiberContext >= 0 )
          {
LABEL_48:
            PopCheckpointSystemSleep(13);
            HiberContext = PopAllocateHiberContext();
            if ( HiberContext >= 0 )
            {
              v30 = PopNotifyTelemetryOsState(qword_1403033A4, dword_1403033C0, dword_1403033C8, Flags, 1);
              if ( !byte_1403033A2 )
              {
                PopDiagTracePreSleepNotification(v20, dword_1403033C8, dword_1403033B4, dword_1403033B8, v30);
                PopCheckpointSystemSleep(16);
                PopUmpoSendFlushSleepStudyLoggerNotification();
              }
              PopEsEnterSleepShutdown();
              PopForceCompleteCsSleepStudySession(dword_1403033B4);
              PopThermalSxEntry();
              if ( !Buffer_2 )
              {
                if ( byte_1403033A2 && RtlLockBootStatusData(&FileHandle) >= 0 )
                {
                  v55 = FileHandle;
                  Buffer_3 = 1;
                  RtlGetSetBootStatusData(FileHandle, 0, RtlBsdItemBootShutdown, &Buffer_3, 1u, 0LL);
                  RtlGetSetBootStatusData(v55, 0, RtlBsdItemShutdownBootId, (PVOID)0xFFFFF780000002C4LL, 4u, 0LL);
                  RtlUnlockBootStatusData(v55);
                }
                Buffer_2 = 1;
              }
              PopFlushVolumes((unsigned int)dword_1403033C0);
              if ( dword_1403033C8 < dword_1403033C0 )
                dword_1403033C8 = dword_1403033C0;
              byte_1403033BC = 2;
              if ( byte_1403033A2 )
              {
                PopFxPrepareDevicesForShutdown();
                IoFreePoDeviceNotifyList(qword_1403033D8 + 48);
                if ( dword_1403033B4 == 2 )
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
              HiberContext = PopInitSystemSleeperThread(v22, v77);
              if ( HiberContext >= 0 )
              {
                if ( !byte_140303450 )
                {
                  ExWakeTimersPause();
                  byte_140303450 = 1;
                }
                v31 = 0LL;
                v32 = MEMORY[0xFFFFF78000000008];
                v33 = *((unsigned int *)PopPolicy + 22);
                if ( (_DWORD)v33
                  && dword_1403033C0 != 5
                  && byte_140303EA8
                  && byte_140303EB6 == 2
                  && (dword_1403033AC & 0x40000000) == 0
                  && byte_140303466 )
                {
                  v34 = MEMORY[0xFFFFF78000000008] + 10000000 * v33;
                  v31 = -1LL;
                }
                else if ( byte_140303EB4
                       && dword_1403033C0 == 5
                       && !byte_140303500
                       && qword_1403032E8
                       && dword_1403033B4 == 11 )
                {
                  v31 = -2LL;
                  v34 = qword_1403032E8
                      - 10000000LL * (unsigned int)PopSmartUserPresenceWakeOffset
                      - MEMORY[0xFFFFF78000000014]
                      + MEMORY[0xFFFFF78000000008];
                }
                else
                {
                  v34 = 0LL;
                }
                v35 = &qword_140303408;
                memset(&qword_140303408, 0, 0x48uLL);
                dword_140303400 = 3;
                if ( byte_140303500 || dword_1403033B4 == 14 )
                  goto LABEL_64;
                if ( v34 )
                {
                  do
                  {
                    *v35 = v34;
                    v35 += 3;
                  }
                  while ( (__int64)v35 < (__int64)&unk_140303438 );
                  v56 = qword_140303418;
                  do
                  {
                    *v56 = v31;
                    v56 += 3;
                  }
                  while ( (__int64)v56 < (__int64)&qword_140303448 );
                }
                v57 = qword_140303458;
                if ( qword_140303458 && qword_140303458 < (unsigned __int64)(v32 + 20000000) )
                  v57 = v32 + 20000000;
                if ( !(_DWORD)v63 )
                  goto LABEL_167;
                if ( (_DWORD)v63 != 2 || (LOBYTE(v36) = 1, PopSimulate < 0) )
                  LOBYTE(v36) = 0;
                if ( (unsigned __int8)ExGetNextWakeTime(v57 + 1, v34, v36, (unsigned int)&v68, (__int64)&v64) )
                {
                  v38 = (void *)v68;
                  qword_140303408 = v68;
                  qword_140303418[0] = (__int64)v64;
                }
                else
                {
LABEL_167:
                  v38 = (void *)qword_140303408;
                }
                if ( !v62 )
                {
                  v37 = qword_140303420;
                  goto LABEL_66;
                }
                if ( v62 != 2 || (LOBYTE(v36) = 1, PopSimulate < 0) )
                  LOBYTE(v36) = 0;
                if ( !(unsigned __int8)ExGetNextWakeTime(v57 + 1, v34, v36, (unsigned int)&v68, (__int64)&v64) )
                {
LABEL_64:
                  v37 = qword_140303420;
                  goto LABEL_65;
                }
                v37 = v68;
                qword_140303420 = v68;
                qword_140303430 = (__int64)v64;
LABEL_65:
                v38 = (void *)qword_140303408;
LABEL_66:
                qword_140303410 = v38;
                if ( v38 && (unsigned __int64)v38 < v32 + 600000000 )
                  qword_140303410 = (PVOID)(v32 + 600000000);
                NumberOfBytes = v37;
                if ( v37 && v37 < v32 + 600000000 )
                  NumberOfBytes = v32 + 600000000;
                qword_140303790 = KeQueryPerformanceCounter(0LL).QuadPart;
                ExUpdateSystemTimeFromCmos(1, 1u);
                off_1402F22D0(qword_140303410, NumberOfBytes, v39);
                PopSetDevicesSystemState(v41, v40, v42, v43);
                PopNewWakeInfo();
                v73 = MEMORY[0xFFFFF78000000008];
                v66 = dword_140303D4C;
                KeSetEvent(&Event, 0, 1u);
                KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
                v44 = dword_1403033C0;
                v45 = dword_1403033C0;
                v4 = Flags;
                if ( PoResumeFromHibernate )
                  v45 = dword_1403033C8;
                HiberContext = v80;
                if ( (Flags & 8) != 0 )
                  v44 = 6;
                qword_140303590 = 0LL;
                LODWORD(v67) = v45;
                dword_1403033CC = v45;
                PopDiagTracePostSleepNotification(
                  v44,
                  dword_1403033C8,
                  v45,
                  (_DWORD)qword_140303410,
                  NumberOfBytes,
                  qword_140303418[0],
                  qword_140303430);
                if ( KeMtrrComparisonFailed )
                  PopDiagTraceMtrrError();
                if ( HiberContext < 0 && dword_1403033C0 == 5 )
                {
                  StringCchPrintfW(PopHibernationErrorSubstitutionString, 0x80uLL, L"0x%x", (unsigned int)HiberContext);
                  RtlInitUnicodeString(&DestinationString, PopHibernationErrorSubstitutionString);
                  IoRaiseInformationalHardError(-1073740783, &DestinationString, 0LL);
                  PopDiagTraceHibernateErrorStatus((unsigned int)HiberContext);
                }
LABEL_75:
                v13 = 0;
LABEL_76:
                if ( byte_140303500 )
                {
                  qword_140303970 = KeQueryPerformanceCounter(0LL).QuadPart;
                  dword_1403034E4 = PopQpcTimeInMs(&qword_140303968, &qword_140303970);
                }
                if ( HiberContext >= 0 )
                {
                  qword_1403033F0 = v73;
                  ExUpdateSystemTimeFromCmos(1, 1u);
                  if ( off_1402F2658() )
                    ZwUpdateWnfStateData(&WNF_BOOT_INVALID_TIME_SOURCE, 0LL, 0, 0LL, 0LL, 0, 0);
                  qword_1403037A8 = KeQueryPerformanceCounter(0LL).QuadPart;
                  PfPowerActionNotify(2LL, 0LL, 0LL);
                  qword_1403033E8 = MEMORY[0xFFFFF78000000008];
                }
                byte_1403033BD = 1;
                PoPowerDownActionInProgress = 0;
                PsIumResumeAfterHibernate();
                if ( qword_1403033D8 )
                {
                  PfPowerActionNotify(3LL, 0LL, 0LL);
                  PopSetDevicesSystemState(v48, v47, v49, v50);
                  PfPowerActionNotify(3LL, 1LL, 0LL);
                }
                if ( v64 )
                {
                  ExDeleteWakeTimerInfo(v64);
                  v64 = 0LL;
                }
                off_1402F22D0(0LL, 0LL, v46);
                PopNotifyTelemetryOsState(qword_1403033A4, dword_1403033C0, dword_1403033C8, v4, 0);
                PopQueueBatteryStatusTimeout();
                PopExecuteOnTargetProcessors(
                  (__int64)KeActiveProcessors,
                  (__int64)PpmStartIllegalProcessorThrottleLogging,
                  0LL,
                  0LL);
                if ( v13 )
                  PopReleasePolicyLock();
                PoClearBroadcast();
                qword_1403033D8 = 0LL;
                PopEsExitSleep();
                PopCurrentPowerStatePrecise(v81);
                v51 = dword_140303D4C;
                PopSpoilEstimatesOnPowerStateTransitionWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopSpoilEstimatesOnPowerStateTransitionWorker;
                PopSpoilEstimatesOnPowerStateTransitionWorkItem.Parameter = 0LL;
                PopSpoilEstimatesOnPowerStateTransitionWorkItem.List.Flink = 0LL;
                ExQueueWorkItem(&PopSpoilEstimatesOnPowerStateTransitionWorkItem, DelayedWorkQueue);
                PopThermalSxExit();
                PopAcquirePolicyLock();
                if ( HiberContext >= 0 && (PopInitSIdle(), PopAction = 0, (unsigned __int64)dword_140303400 < 3) )
                {
                  qword_140303458 = (__int64)*(&qword_140303410 + 3 * dword_140303400);
                  v58 = qword_140303418[3 * dword_140303400];
                  PopFullWake = 0;
                  if ( v58 == -1 )
                  {
                    qword_1403033A4 = 0x500000002LL;
                  }
                  else
                  {
                    if ( v58 == -2 )
                    {
                      if ( !qword_1403033F8 )
                        qword_1403033F8 = qword_1403033E8;
                      goto LABEL_90;
                    }
                    if ( dword_140303D4C != 1 )
                    {
                      if ( !v62 && v66 == v51 )
                        PopCheckPowerSourceAfterRtcWakeSet();
                      goto LABEL_90;
                    }
                    if ( v62 )
                      goto LABEL_90;
                    LODWORD(qword_1403033A4) = SystemAction;
                    HIDWORD(qword_1403033A4) = MinSystemState;
                  }
                  v52 = 0;
                  PopAction = 2;
                }
                else
                {
LABEL_90:
                  v52 = 1;
                }
                if ( byte_140303450 && v52 )
                {
                  ExWakeTimersResume();
                  byte_140303450 = 0;
                  qword_140303458 = 0LL;
                }
                if ( PoResumeFromHibernate )
                {
                  PopBootLoaderTraceProcess();
                  PoResumeFromHibernate = 0;
                }
                if ( (_DWORD)v67 == 4 )
                  PopDiagTraceFirmwareS3Stats();
                byte_140303500 = 0;
                PopResetActionDefaults();
                PopSetPowerActionState(2);
                PopReleasePolicyLock();
                if ( (PopFullWake & 2) != 0 )
                  PopSetNotificationWork(1u);
                ExQueueWorkItem(&PopUnlockAfterSleepWorkItem, DelayedWorkQueue);
                PopCheckForWork();
                if ( HiberContext >= 0 )
                  PpmPerfReApplyStates();
                dword_1403033B4 = 15;
                qword_140303900 = PopCaptureTimeOnProcZero();
                return HiberContext;
              }
            }
          }
LABEL_140:
          v11 = 0;
LABEL_141:
          v4 = Flags;
        }
      }
      PopReleasePolicyLock();
      PoClearBroadcast();
      HiberContext = -1073741791;
    }
    ExQueueWorkItem(&PopUnlockAfterSleepWorkItem, DelayedWorkQueue);
    return HiberContext;
  }
  else
  {
    if ( (unsigned int)(SystemAction - 4) > 2 )
      return -1073741637;
    v54 = 3221226219LL;
    if ( SystemAction == PowerActionShutdownReset )
      v54 = 2147483697LL;
    PsTerminateServerSilo(CurrentServerSilo, v54);
    return v3;
  }
}
