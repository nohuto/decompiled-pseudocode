/*
 * XREFs of NtSetSystemPowerState @ 0x1403CF658
 * Callers:
 *     NtShutdownSystem @ 0x1406AD00C (NtShutdownSystem.c)
 * Callees:
 *     PopSetNotificationWork @ 0x140008A40 (PopSetNotificationWork.c)
 *     PopGetPolicyWorker @ 0x140008B0C (PopGetPolicyWorker.c)
 *     PopCheckForWork @ 0x140009C44 (PopCheckForWork.c)
 *     KeReleaseGuardedMutex @ 0x14000CA40 (KeReleaseGuardedMutex.c)
 *     PopExecuteOnTargetProcessors @ 0x14000D578 (PopExecuteOnTargetProcessors.c)
 *     PsGetCurrentServerSilo @ 0x140013620 (PsGetCurrentServerSilo.c)
 *     ExAcquireFastMutex @ 0x14002D0A0 (ExAcquireFastMutex.c)
 *     RtlInitUnicodeString @ 0x14002DC60 (RtlInitUnicodeString.c)
 *     KeSetEvent @ 0x1400562D0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14005C880 (KeWaitForSingleObject.c)
 *     ExQueueWorkItem @ 0x14005FE5C (ExQueueWorkItem.c)
 *     PsIsHostSilo @ 0x140079F68 (PsIsHostSilo.c)
 *     StringCchPrintfW @ 0x1400AE208 (StringCchPrintfW.c)
 *     KeSuspendThread @ 0x1400C98A8 (KeSuspendThread.c)
 *     PopSetPowerActionState @ 0x140114580 (PopSetPowerActionState.c)
 *     ExWakeTimersResume @ 0x1401147A0 (ExWakeTimersResume.c)
 *     PopThermalSxExit @ 0x140114838 (PopThermalSxExit.c)
 *     ExWakeTimersPause @ 0x14011492C (ExWakeTimersPause.c)
 *     PopThermalSxEntry @ 0x140124ACC (PopThermalSxEntry.c)
 *     PopRunMaximumIrpWorkers @ 0x140124C9C (PopRunMaximumIrpWorkers.c)
 *     PopActionRetrieveInitialState @ 0x1401263B0 (PopActionRetrieveInitialState.c)
 *     PopUmpoSendFlushSleepStudyLoggerNotification @ 0x140126888 (PopUmpoSendFlushSleepStudyLoggerNotification.c)
 *     PopCheckPowerSourceAfterRtcWakeCancel @ 0x140126B64 (PopCheckPowerSourceAfterRtcWakeCancel.c)
 *     PopForceCompleteCsSleepStudySession @ 0x140126C08 (PopForceCompleteCsSleepStudySession.c)
 *     PopIgnoreBatteryStatusChange @ 0x140126C3C (PopIgnoreBatteryStatusChange.c)
 *     PsIumResumeAfterHibernate @ 0x140131CD8 (PsIumResumeAfterHibernate.c)
 *     ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator @ 0x140159290 (ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator.c)
 *     ZwSetSystemPowerState @ 0x14015CF80 (ZwSetSystemPowerState.c)
 *     ZwUpdateWnfStateData @ 0x14015D3C0 (ZwUpdateWnfStateData.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     IoRaiseInformationalHardError @ 0x1401C8F44 (IoRaiseInformationalHardError.c)
 *     PopReadShutdownPolicy @ 0x1401FF390 (PopReadShutdownPolicy.c)
 *     PopFxPrepareDevicesForShutdown @ 0x1402032C4 (PopFxPrepareDevicesForShutdown.c)
 *     PopCheckPowerSourceAfterRtcWakeSet @ 0x1402074D4 (PopCheckPowerSourceAfterRtcWakeSet.c)
 *     ExDeleteWakeTimerInfo @ 0x14022E174 (ExDeleteWakeTimerInfo.c)
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
 *     PopFilterCapabilities @ 0x1403F3CF4 (PopFilterCapabilities.c)
 *     PopCheckResiliencyScenarios @ 0x1403F5C64 (PopCheckResiliencyScenarios.c)
 *     PopFindPowerSettingConfiguration @ 0x1403F853C (PopFindPowerSettingConfiguration.c)
 *     SeSinglePrivilegeCheck @ 0x140413F70 (SeSinglePrivilegeCheck.c)
 *     MmLockPagableSectionByHandle @ 0x1404DC9CC (MmLockPagableSectionByHandle.c)
 *     ExSwapinWorkerThreads @ 0x14052ECF0 (ExSwapinWorkerThreads.c)
 *     CmSetLazyFlushState @ 0x14052EE18 (CmSetLazyFlushState.c)
 *     PopAllocateHiberContext @ 0x14052F5C4 (PopAllocateHiberContext.c)
 *     PopNotifyCallbacksPreSleep @ 0x14052FE18 (PopNotifyCallbacksPreSleep.c)
 *     PopNotifyTelemetryOsState @ 0x14053056C (PopNotifyTelemetryOsState.c)
 *     PopExecutePowerAction @ 0x140530768 (PopExecutePowerAction.c)
 *     PopSetSleepMarker @ 0x140531690 (PopSetSleepMarker.c)
 *     PpmPerfReApplyStates @ 0x140531814 (PpmPerfReApplyStates.c)
 *     PopBootLoaderTraceProcess @ 0x14053185C (PopBootLoaderTraceProcess.c)
 *     PopEsExitSleep @ 0x1405318DC (PopEsExitSleep.c)
 *     PoClearBroadcast @ 0x140531904 (PoClearBroadcast.c)
 *     PopQueueBatteryStatusTimeout @ 0x140531958 (PopQueueBatteryStatusTimeout.c)
 *     PopInitSystemSleeperThread @ 0x1405319A0 (PopInitSystemSleeperThread.c)
 *     PoInitializeBroadcast @ 0x140531FFC (PoInitializeBroadcast.c)
 *     PopEsEnterSleepShutdown @ 0x140533FB8 (PopEsEnterSleepShutdown.c)
 *     PopFastS4Check @ 0x1405342C0 (PopFastS4Check.c)
 *     PopEnforceResiliencyScenarios @ 0x140534484 (PopEnforceResiliencyScenarios.c)
 *     PopDiagTracePreSleepNotification @ 0x140534520 (PopDiagTracePreSleepNotification.c)
 *     PopDiagTraceKernelQueriesAllowed @ 0x140534708 (PopDiagTraceKernelQueriesAllowed.c)
 *     PopAdvanceSystemPowerState @ 0x1405347A0 (PopAdvanceSystemPowerState.c)
 *     PopAcquireTransitionLock @ 0x140534978 (PopAcquireTransitionLock.c)
 *     RtlGetSetBootStatusData @ 0x140543314 (RtlGetSetBootStatusData.c)
 *     PopInitSIdle @ 0x140544AF4 (PopInitSIdle.c)
 *     PopInitializePowerPolicySimulate @ 0x140547648 (PopInitializePowerPolicySimulate.c)
 *     RtlLockBootStatusData @ 0x1405478FC (RtlLockBootStatusData.c)
 *     PopCurrentPowerStatePrecise @ 0x140547C2C (PopCurrentPowerStatePrecise.c)
 *     RtlUnlockBootStatusData @ 0x140547DAC (RtlUnlockBootStatusData.c)
 *     PopResetActionDefaults @ 0x1405486D4 (PopResetActionDefaults.c)
 *     PopSetShutdownMarker @ 0x140581AD0 (PopSetShutdownMarker.c)
 *     MmZeroPageFileAtShutdown @ 0x1406574F4 (MmZeroPageFileAtShutdown.c)
 *     PopFindNextSystemPowerState @ 0x14066A3C8 (PopFindNextSystemPowerState.c)
 *     PopZeroHiberFile @ 0x14066E7DC (PopZeroHiberFile.c)
 *     PsTerminateServerSilo @ 0x14067E178 (PsTerminateServerSilo.c)
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
    || dword_140303474 >= 15 && SystemAction < PowerActionShutdown )
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
    v9 = dword_140303474;
    v69 = SystemAction;
    if ( dword_140303474 >= 15 )
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
      PopFilterCapabilities(&PopCapabilities, &unk_140303520);
      if ( !byte_140303461 )
      {
        PopResetActionDefaults();
        goto LABEL_14;
      }
      if ( byte_140303461 == 2 )
      {
LABEL_14:
        PopSetPowerActionState(3);
        qword_140303498 = (__int64)qword_1403033F0;
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
          LODWORD(qword_140303464) = 6;
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
          if ( !(_DWORD)qword_140303464 )
          {
            HiberContext = 0;
            goto LABEL_76;
          }
          v14 = PopAction;
          PopAction = 0;
          if ( HiberContext == -1073741536 )
          {
            if ( (v14 & 2) != 0 && dword_14030346C >= 0 && (dword_14030346C & 3) != 0 )
            {
              PopGetPolicyWorker(2);
              goto LABEL_76;
            }
            PopActionRetrieveInitialState((_DWORD *)&qword_140303464 + 1, &v65, &dword_140303480, &Buffer_1);
            if ( (unsigned int)(qword_140303464 - 4) <= 2 )
            {
              byte_140303462 = 1;
              dword_14030346C = v4;
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
          if ( (dword_14030346C & 0x40000000) != 0 )
          {
            LODWORD(v63) = 0;
            v62 = 0;
          }
          PopInitializePowerPolicySimulate();
          dword_140303484 = dword_140303480;
          PopAdvanceSystemPowerState(
            &dword_140303484,
            ((unsigned int)dword_14030346C >> 27) & 2,
            HIDWORD(qword_140303464),
            v12);
          v18 = v4 & 8;
          if ( (v4 & 8) != 0 )
          {
            v19 = dword_140303480;
            v20 = 6;
            byte_1403035C0 = 1;
            dword_140303488 = 5;
          }
          else
          {
            if ( (unsigned __int8)PopFastS4Check() )
            {
              v19 = (unsigned int)dword_140303480;
              v22 = 6;
              v20 = dword_140303480;
              dword_140303488 = 5;
              v21 = 1;
              goto LABEL_41;
            }
            v19 = dword_140303480;
            dword_140303488 = dword_140303480;
            v20 = dword_140303480;
          }
          v21 = 0;
          v22 = PopPowerStateHandlerLookup[v19];
          if ( v22 > 6 )
            goto LABEL_138;
LABEL_41:
          if ( !qword_140303EA8[3 * (int)v22] )
            goto LABEL_138;
          if ( v18 )
          {
            v23 = 6LL;
          }
          else
          {
            if ( byte_140303462 )
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
          byte_14030347C = 3;
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
              v30 = PopNotifyTelemetryOsState(qword_140303464, dword_140303480, dword_140303488, Flags, 1);
              if ( !byte_140303462 )
              {
                PopDiagTracePreSleepNotification(v20, dword_140303488, dword_140303474, dword_140303478, v30);
                PopCheckpointSystemSleep(16);
                PopUmpoSendFlushSleepStudyLoggerNotification();
              }
              PopEsEnterSleepShutdown();
              PopForceCompleteCsSleepStudySession(dword_140303474);
              PopThermalSxEntry();
              if ( !Buffer_2 )
              {
                if ( byte_140303462 && RtlLockBootStatusData(&FileHandle) >= 0 )
                {
                  v55 = FileHandle;
                  Buffer_3 = 1;
                  RtlGetSetBootStatusData(FileHandle, 0, RtlBsdItemBootShutdown, &Buffer_3, 1u, 0LL);
                  RtlGetSetBootStatusData(v55, 0, RtlBsdItemShutdownBootId, (PVOID)0xFFFFF780000002C4LL, 4u, 0LL);
                  RtlUnlockBootStatusData(v55);
                }
                Buffer_2 = 1;
              }
              PopFlushVolumes((unsigned int)dword_140303480);
              if ( dword_140303488 < dword_140303480 )
                dword_140303488 = dword_140303480;
              byte_14030347C = 2;
              if ( byte_140303462 )
              {
                PopFxPrepareDevicesForShutdown();
                IoFreePoDeviceNotifyList(qword_140303498 + 48);
                if ( dword_140303474 == 2 )
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
                if ( !byte_140303510 )
                {
                  ExWakeTimersPause();
                  byte_140303510 = 1;
                }
                v31 = 0LL;
                v32 = MEMORY[0xFFFFF78000000008];
                v33 = *((unsigned int *)PopPolicy + 22);
                if ( (_DWORD)v33
                  && dword_140303480 != 5
                  && byte_140303F68
                  && byte_140303F76 == 2
                  && (dword_14030346C & 0x40000000) == 0
                  && byte_140303526 )
                {
                  v34 = MEMORY[0xFFFFF78000000008] + 10000000 * v33;
                  v31 = -1LL;
                }
                else if ( byte_140303F74
                       && dword_140303480 == 5
                       && !byte_1403035C0
                       && qword_1403033A8
                       && dword_140303474 == 11 )
                {
                  v31 = -2LL;
                  v34 = qword_1403033A8
                      - 10000000LL * (unsigned int)PopSmartUserPresenceWakeOffset
                      - MEMORY[0xFFFFF78000000014]
                      + MEMORY[0xFFFFF78000000008];
                }
                else
                {
                  v34 = 0LL;
                }
                v35 = &qword_1403034C8;
                memset(&qword_1403034C8, 0, 0x48uLL);
                dword_1403034C0 = 3;
                if ( byte_1403035C0 || dword_140303474 == 14 )
                  goto LABEL_64;
                if ( v34 )
                {
                  do
                  {
                    *v35 = v34;
                    v35 += 3;
                  }
                  while ( (__int64)v35 < (__int64)&unk_1403034F8 );
                  v56 = qword_1403034D8;
                  do
                  {
                    *v56 = v31;
                    v56 += 3;
                  }
                  while ( (__int64)v56 < (__int64)&qword_140303508 );
                }
                v57 = qword_140303518;
                if ( qword_140303518 && qword_140303518 < (unsigned __int64)(v32 + 20000000) )
                  v57 = v32 + 20000000;
                if ( !(_DWORD)v63 )
                  goto LABEL_167;
                if ( (_DWORD)v63 != 2 || (LOBYTE(v36) = 1, PopSimulate < 0) )
                  LOBYTE(v36) = 0;
                if ( (unsigned __int8)ExGetNextWakeTime(v57 + 1, v34, v36, (unsigned int)&v68, (__int64)&v64) )
                {
                  v38 = (void *)v68;
                  qword_1403034C8 = v68;
                  qword_1403034D8[0] = (__int64)v64;
                }
                else
                {
LABEL_167:
                  v38 = (void *)qword_1403034C8;
                }
                if ( !v62 )
                {
                  v37 = qword_1403034E0;
                  goto LABEL_66;
                }
                if ( v62 != 2 || (LOBYTE(v36) = 1, PopSimulate < 0) )
                  LOBYTE(v36) = 0;
                if ( !(unsigned __int8)ExGetNextWakeTime(v57 + 1, v34, v36, (unsigned int)&v68, (__int64)&v64) )
                {
LABEL_64:
                  v37 = qword_1403034E0;
                  goto LABEL_65;
                }
                v37 = v68;
                qword_1403034E0 = v68;
                qword_1403034F0 = (__int64)v64;
LABEL_65:
                v38 = (void *)qword_1403034C8;
LABEL_66:
                qword_1403034D0 = v38;
                if ( v38 && (unsigned __int64)v38 < v32 + 600000000 )
                  qword_1403034D0 = (PVOID)(v32 + 600000000);
                NumberOfBytes = v37;
                if ( v37 && v37 < v32 + 600000000 )
                  NumberOfBytes = v32 + 600000000;
                qword_140303850 = KeQueryPerformanceCounter(0LL).QuadPart;
                ExUpdateSystemTimeFromCmos(1, 1u);
                off_1402F22D0(qword_1403034D0, NumberOfBytes, v39);
                PopSetDevicesSystemState(v41, v40, v42, v43);
                PopNewWakeInfo();
                v73 = MEMORY[0xFFFFF78000000008];
                v66 = dword_140303E0C;
                KeSetEvent(&Event, 0, 1u);
                KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
                v44 = dword_140303480;
                v45 = dword_140303480;
                v4 = Flags;
                if ( PoResumeFromHibernate )
                  v45 = dword_140303488;
                HiberContext = v80;
                if ( (Flags & 8) != 0 )
                  v44 = 6;
                qword_140303650 = 0LL;
                LODWORD(v67) = v45;
                dword_14030348C = v45;
                PopDiagTracePostSleepNotification(
                  v44,
                  dword_140303488,
                  v45,
                  (_DWORD)qword_1403034D0,
                  NumberOfBytes,
                  qword_1403034D8[0],
                  qword_1403034F0);
                if ( KeMtrrComparisonFailed )
                  PopDiagTraceMtrrError();
                if ( HiberContext < 0 && dword_140303480 == 5 )
                {
                  StringCchPrintfW(PopHibernationErrorSubstitutionString, 0x80uLL, L"0x%x", (unsigned int)HiberContext);
                  RtlInitUnicodeString(&DestinationString, PopHibernationErrorSubstitutionString);
                  IoRaiseInformationalHardError(-1073740783, &DestinationString, 0LL);
                  PopDiagTraceHibernateErrorStatus((unsigned int)HiberContext);
                }
LABEL_75:
                v13 = 0;
LABEL_76:
                if ( byte_1403035C0 )
                {
                  qword_140303A30 = KeQueryPerformanceCounter(0LL).QuadPart;
                  dword_1403035A4 = PopQpcTimeInMs(&qword_140303A28, &qword_140303A30);
                }
                if ( HiberContext >= 0 )
                {
                  qword_1403034B0 = v73;
                  ExUpdateSystemTimeFromCmos(1, 1u);
                  if ( off_1402F2658() )
                    ZwUpdateWnfStateData((__int64)&WNF_BOOT_INVALID_TIME_SOURCE, 0LL, 0LL);
                  qword_140303868 = KeQueryPerformanceCounter(0LL).QuadPart;
                  PfPowerActionNotify(2LL, 0LL, 0LL);
                  qword_1403034A8 = MEMORY[0xFFFFF78000000008];
                }
                byte_14030347D = 1;
                PoPowerDownActionInProgress = 0;
                PsIumResumeAfterHibernate();
                if ( qword_140303498 )
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
                PopNotifyTelemetryOsState(qword_140303464, dword_140303480, dword_140303488, v4, 0);
                PopQueueBatteryStatusTimeout();
                PopExecuteOnTargetProcessors(
                  (__int64)KeActiveProcessors,
                  (__int64)PpmStartIllegalProcessorThrottleLogging,
                  0LL,
                  0LL);
                if ( v13 )
                  PopReleasePolicyLock();
                PoClearBroadcast();
                qword_140303498 = 0LL;
                PopEsExitSleep();
                PopCurrentPowerStatePrecise(v81);
                v51 = dword_140303E0C;
                PopSpoilEstimatesOnPowerStateTransitionWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopSpoilEstimatesOnPowerStateTransitionWorker;
                PopSpoilEstimatesOnPowerStateTransitionWorkItem.Parameter = 0LL;
                PopSpoilEstimatesOnPowerStateTransitionWorkItem.List.Flink = 0LL;
                ExQueueWorkItem(&PopSpoilEstimatesOnPowerStateTransitionWorkItem, DelayedWorkQueue);
                PopThermalSxExit();
                PopAcquirePolicyLock();
                if ( HiberContext >= 0 && (PopInitSIdle(), PopAction = 0, (unsigned __int64)dword_1403034C0 < 3) )
                {
                  qword_140303518 = (__int64)*(&qword_1403034D0 + 3 * dword_1403034C0);
                  v58 = qword_1403034D8[3 * dword_1403034C0];
                  PopFullWake = 0;
                  if ( v58 == -1 )
                  {
                    qword_140303464 = 0x500000002LL;
                  }
                  else
                  {
                    if ( v58 == -2 )
                    {
                      if ( !qword_1403034B8 )
                        qword_1403034B8 = qword_1403034A8;
                      goto LABEL_90;
                    }
                    if ( dword_140303E0C != 1 )
                    {
                      if ( !v62 && v66 == v51 )
                        PopCheckPowerSourceAfterRtcWakeSet();
                      goto LABEL_90;
                    }
                    if ( v62 )
                      goto LABEL_90;
                    LODWORD(qword_140303464) = SystemAction;
                    HIDWORD(qword_140303464) = MinSystemState;
                  }
                  v52 = 0;
                  PopAction = 2;
                }
                else
                {
LABEL_90:
                  v52 = 1;
                }
                if ( byte_140303510 && v52 )
                {
                  ExWakeTimersResume();
                  byte_140303510 = 0;
                  qword_140303518 = 0LL;
                }
                if ( PoResumeFromHibernate )
                {
                  PopBootLoaderTraceProcess();
                  PoResumeFromHibernate = 0;
                }
                if ( (_DWORD)v67 == 4 )
                  PopDiagTraceFirmwareS3Stats();
                byte_1403035C0 = 0;
                PopResetActionDefaults();
                PopSetPowerActionState(2);
                PopReleasePolicyLock();
                if ( (PopFullWake & 2) != 0 )
                  PopSetNotificationWork(1u);
                ExQueueWorkItem(&PopUnlockAfterSleepWorkItem, DelayedWorkQueue);
                PopCheckForWork();
                if ( HiberContext >= 0 )
                  PpmPerfReApplyStates();
                dword_140303474 = 15;
                qword_1403039C0 = PopCaptureTimeOnProcZero();
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
