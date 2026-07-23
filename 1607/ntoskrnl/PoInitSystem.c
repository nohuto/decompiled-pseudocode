/*
 * XREFs of PoInitSystem @ 0x140795530
 * Callers:
 *     Phase1InitializationIoReady @ 0x1407934EC (Phase1InitializationIoReady.c)
 *     Phase1InitializationDiscard @ 0x140794438 (Phase1InitializationDiscard.c)
 *     IoInitSystemPreDrivers @ 0x14079EDEC (IoInitSystemPreDrivers.c)
 * Callees:
 *     PoFxSendSystemLatencyUpdate @ 0x140009E20 (PoFxSendSystemLatencyUpdate.c)
 *     PpmAcquireLock @ 0x14000A0A8 (PpmAcquireLock.c)
 *     ExInitializeResourceLite @ 0x14000E840 (ExInitializeResourceLite.c)
 *     KiInitializeMutant @ 0x140087474 (KiInitializeMutant.c)
 *     PpmReleaseLock @ 0x1400D2574 (PpmReleaseLock.c)
 *     KeSetCoalescableTimer @ 0x1400EDA80 (KeSetCoalescableTimer.c)
 *     ExInitializeNPagedLookasideList @ 0x140111160 (ExInitializeNPagedLookasideList.c)
 *     HviIsAnyHypervisorPresent @ 0x1401317AC (HviIsAnyHypervisorPresent.c)
 *     PopComputeCounterShifts @ 0x14013A04C (PopComputeCounterShifts.c)
 *     PopInitilizeAcDcSettings @ 0x14013A0EC (PopInitilizeAcDcSettings.c)
 *     PpmInitIllegalThrottleLogging @ 0x140148094 (PpmInitIllegalThrottleLogging.c)
 *     PopCheckPowerSourceAfterRtcWakeInitialize @ 0x140149E60 (PopCheckPowerSourceAfterRtcWakeInitialize.c)
 *     IoAddTriageDumpDataBlock @ 0x14014B924 (IoAddTriageDumpDataBlock.c)
 *     ZwUpdateWnfStateData @ 0x14015D930 (ZwUpdateWnfStateData.c)
 *     PopDiagTraceAbnormalReset @ 0x140207854 (PopDiagTraceAbnormalReset.c)
 *     PopAcquirePolicyLock @ 0x1403C87E0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x1403C8828 (PopReleasePolicyLock.c)
 *     PoRegisterPowerSettingCallback @ 0x1403F1CFC (PoRegisterPowerSettingCallback.c)
 *     RtlIsMultiSessionSku @ 0x1404E674C (RtlIsMultiSessionSku.c)
 *     PopEsWorkItemSchedule @ 0x140544660 (PopEsWorkItemSchedule.c)
 *     PopInitializePowerPolicySimulate @ 0x140547B88 (PopInitializePowerPolicySimulate.c)
 *     PopUpdateConsoleDisplayState @ 0x140547D14 (PopUpdateConsoleDisplayState.c)
 *     RtlLockBootStatusData @ 0x140547E3C (RtlLockBootStatusData.c)
 *     RtlUnlockBootStatusData @ 0x1405482EC (RtlUnlockBootStatusData.c)
 *     PopResetActionDefaults @ 0x140548C14 (PopResetActionDefaults.c)
 *     EtwRegister @ 0x14054A484 (EtwRegister.c)
 *     PopLogSleepDisabled @ 0x14054CF98 (PopLogSleepDisabled.c)
 *     PpmIdleRegisterDefaultStates @ 0x14054EE80 (PpmIdleRegisterDefaultStates.c)
 *     EmpProviderRegister @ 0x14055474C (EmpProviderRegister.c)
 *     PpmCheckInitProcessors @ 0x14056A310 (PpmCheckInitProcessors.c)
 *     PopInitializeHeteroProcessors @ 0x14056AAC4 (PopInitializeHeteroProcessors.c)
 *     PopResetCurrentPolicies @ 0x14056E44C (PopResetCurrentPolicies.c)
 *     PopIdleInitAoAcDozeS4Timer @ 0x14056FA98 (PopIdleInitAoAcDozeS4Timer.c)
 *     PpmEnableWmiInterface @ 0x140576F28 (PpmEnableWmiInterface.c)
 *     KeRegisterProcessorChangeCallback @ 0x1405785A4 (KeRegisterProcessorChangeCallback.c)
 *     PopInitializeTimer @ 0x14057A7BC (PopInitializeTimer.c)
 *     PopDefaultPolicy @ 0x14057FDCC (PopDefaultPolicy.c)
 *     TtmInit @ 0x1405801D4 (TtmInit.c)
 *     PopSetupAudioEventNotification @ 0x1405803D0 (PopSetupAudioEventNotification.c)
 *     PopThermalHandlePreviousShutdown @ 0x140580FE8 (PopThermalHandlePreviousShutdown.c)
 *     PopUpdateBackgroundCoolingStatus @ 0x1405815F0 (PopUpdateBackgroundCoolingStatus.c)
 *     PopSetupFullScrenVideoNotification @ 0x1405818E4 (PopSetupFullScrenVideoNotification.c)
 *     PopSetupUserPresencePredictionNotification @ 0x140581918 (PopSetupUserPresencePredictionNotification.c)
 *     PopSetupHighPerfPowerRequest @ 0x140581AE8 (PopSetupHighPerfPowerRequest.c)
 *     PopCheckSkipTick @ 0x140581B3C (PopCheckSkipTick.c)
 *     IopDmaOverrideConflict @ 0x140581DF8 (IopDmaOverrideConflict.c)
 *     PopDiagTraceSkipTick @ 0x140671B84 (PopDiagTraceSkipTick.c)
 *     PopInitializePowerSettings @ 0x140793708 (PopInitializePowerSettings.c)
 *     PopDeepSleepInitialize @ 0x1407954E4 (PopDeepSleepInitialize.c)
 *     PopNetInitialize @ 0x140795FD0 (PopNetInitialize.c)
 *     PopDiagInitialize @ 0x1407A91B0 (PopDiagInitialize.c)
 *     PoFxRegisterDebugger @ 0x1407B21AC (PoFxRegisterDebugger.c)
 *     PopCoalescingInitialize @ 0x1407B2BF4 (PopCoalescingInitialize.c)
 *     PpmInitHeteroPolicy @ 0x1407B6538 (PpmInitHeteroPolicy.c)
 *     PopInitializePowerSettingCallbacks @ 0x1407B65A4 (PopInitializePowerSettingCallbacks.c)
 *     PpmInitPolicyConfiguration @ 0x1407B6F10 (PpmInitPolicyConfiguration.c)
 *     PpmInitIdlePolicy @ 0x1407B7B48 (PpmInitIdlePolicy.c)
 *     PopThermalInit @ 0x1407B8060 (PopThermalInit.c)
 *     PoFxInitPowerManagement @ 0x1407B8408 (PoFxInitPowerManagement.c)
 *     PopUmpoInitializeChannel @ 0x1407B93C4 (PopUmpoInitializeChannel.c)
 *     PopBatteryInit @ 0x1407B99E0 (PopBatteryInit.c)
 *     PopPowerRequestInit @ 0x1407BA2C4 (PopPowerRequestInit.c)
 *     PopUmpoInitializeMonitorChannel @ 0x1407BA6CC (PopUmpoInitializeMonitorChannel.c)
 *     PopCheckAndClearBootError @ 0x1407BA920 (PopCheckAndClearBootError.c)
 *     PopCheckShutdownMarker @ 0x1407BA97C (PopCheckShutdownMarker.c)
 *     PopInitializeIrpWorkers @ 0x1407BB170 (PopInitializeIrpWorkers.c)
 *     PpmPerfInitialize @ 0x1407BB66C (PpmPerfInitialize.c)
 *     PopInitializeAdpm @ 0x1407BBC1C (PopInitializeAdpm.c)
 *     PopInitializeHighPerfPowerRequest @ 0x1407BBC6C (PopInitializeHighPerfPowerRequest.c)
 *     PpmCheckInit @ 0x1407BBF8C (PpmCheckInit.c)
 *     PpmInitCoreParkingPolicy @ 0x1407BC280 (PpmInitCoreParkingPolicy.c)
 *     PopCheckForUpgradeInProgress @ 0x1407BC308 (PopCheckForUpgradeInProgress.c)
 *     PopWakeSourceInit @ 0x1407BC6A4 (PopWakeSourceInit.c)
 *     PopTriggerDiagTraceAoAcCapability @ 0x1407BC90C (PopTriggerDiagTraceAoAcCapability.c)
 *     PopInitShutdownList @ 0x1407BCA08 (PopInitShutdownList.c)
 *     PopFanReportBootStartDevices @ 0x1407BD198 (PopFanReportBootStartDevices.c)
 *     PopPdcCsCheckSystemVolumeDevice @ 0x1407BD360 (PopPdcCsCheckSystemVolumeDevice.c)
 */

char __fastcall PoInitSystem(int a1, __int64 a2)
{
  char v2; // di
  unsigned int v6; // ecx
  unsigned __int8 v7; // bl
  unsigned __int8 v8; // si
  HANDLE v9; // rbx
  char v10; // bl
  __int64 v11; // [rsp+40h] [rbp-48h] BYREF
  _BYTE v12[20]; // [rsp+48h] [rbp-40h] BYREF
  int v13; // [rsp+5Ch] [rbp-2Ch]
  int Buffer; // [rsp+90h] [rbp+8h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+A0h] [rbp+18h] BYREF
  HANDLE FileHandle; // [rsp+A8h] [rbp+20h] BYREF

  v2 = 0;
  PopOsInitPhase = a1;
  if ( !a1 )
  {
    KeQueryPerformanceCounter(&PerformanceFrequency);
    PopQpcFrequency = PerformanceFrequency.QuadPart;
    PopComputeCounterShifts(
      PerformanceFrequency.QuadPart,
      &PpmPerformanceDistributionShift,
      &PpmPerformanceCounterShift);
    PopComputeCounterShifts(0x989680uLL, &PpmHvPerformanceDistributionShift, &PpmHvPerformanceCounterShift);
    qword_1403039F8 = (__int64)&PopIrpList;
    PopIrpList = (__int64)&PopIrpList;
    qword_140303A18 = (__int64)&PopInrushIrpList;
    PopInrushIrpList = (__int64)&PopInrushIrpList;
    PopIrpLock = 0LL;
    ExInitializeNPagedLookasideList(&PopIrpDataLookaside, 0LL, 0LL, 0x200u, 0xF8uLL, 0x72496F50u, 0);
    PopBsdUpdateLock = 0LL;
    qword_140304CE8 = 0LL;
    KiInitializeMutant((__int64)&PopWdiTimerMutex, 0, 1);
    PopWdiTimer = 8LL;
    PopWdiCurrentScenario = (__int64)&NullGuid;
    qword_1403029F0 = (__int64)&qword_1403029E8;
    qword_1403029E8 = (__int64)&qword_1403029E8;
    qword_140302A58 = (__int64)PopWdiTimerCallback;
    qword_140302A90 = (__int64)PopWdiTimerWorkerThread;
    PopWdiCurrentScenarioInstanceId = 0;
    qword_1403029F8 = 0LL;
    qword_140302A18 = 0LL;
    PopWdiTimerTimeoutValue = -50000000LL;
    PopWdiTimerDpc = 275;
    qword_140302A60 = 0LL;
    qword_140302A78 = 0LL;
    qword_140302A50 = 0LL;
    qword_140302A98 = 0LL;
    PopWdiTimerWorker = 0LL;
    PopMonitorOffDueToSleep = 0;
    PpmCheckInit();
    if ( (int)PopInitializeIrpWorkers() < 0 )
      return v2;
    PopIrpSerialLock = 0LL;
    qword_140303A38 = 0LL;
    Object.Header.WaitListHead.Blink = &Object.Header.WaitListHead;
    Object.Header.WaitListHead.Flink = &Object.Header.WaitListHead;
    qword_140303A98 = (__int64)&PopIrpSerialList;
    PopIrpSerialList = (__int64)&PopIrpSerialList;
    qword_140303A88 = (__int64)&PopRequestedIrps;
    PopRequestedIrps = (__int64)&PopRequestedIrps;
    PopTransitionLock.Header.WaitListHead.Blink = &PopTransitionLock.Header.WaitListHead;
    PopTransitionLock.Header.WaitListHead.Flink = &PopTransitionLock.Header.WaitListHead;
    qword_140303AB8 = (__int64)&PowerStateDisableReasonListHead;
    PowerStateDisableReasonListHead = (__int64)&PowerStateDisableReasonListHead;
    PopDisableSleepMutex.Event.Header.WaitListHead.Blink = &PopDisableSleepMutex.Event.Header.WaitListHead;
    PopDisableSleepMutex.Event.Header.WaitListHead.Flink = &PopDisableSleepMutex.Event.Header.WaitListHead;
    qword_140304AA8 = (__int64)&PopDisableSleepList;
    PopDisableSleepList = (__int64)&PopDisableSleepList;
    PpmIdlePolicyLock = 0LL;
    PpmIdleVetoLock = 0LL;
    PpmParkStateLock = 0LL;
    qword_140328988 = 0LL;
    LOWORD(Object.Header.Lock) = 1;
    Object.Header.Size = 6;
    Object.Header.SignalState = 1;
    PopWorkerLock = 0LL;
    LOWORD(PopTransitionLock.Header.Lock) = 1;
    PopTransitionLock.Header.Size = 6;
    PopTransitionLock.Header.SignalState = 1;
    PopDisableSleepMutex.Count = 1;
    PopDisableSleepMutex.Owner = 0LL;
    PopDisableSleepMutex.Contention = 0;
    LOWORD(PopDisableSleepMutex.Event.Header.Lock) = 1;
    PopDisableSleepMutex.Event.Header.Size = 6;
    PopDisableSleepMutex.Event.Header.SignalState = 0;
    PopInitShutdownList();
    v6 = PopIdleScanInterval;
    qword_140303AC8 = (__int64)&PopIdleDetectList;
    PopIdleDetectList = (__int64)&PopIdleDetectList;
    PopDopeGlobalLock = 0LL;
    if ( PopIdleScanInterval )
    {
      if ( PopIdleScanInterval == -1 )
      {
        v6 = 30;
        PopIdleScanInterval = 30;
      }
      else if ( (unsigned int)PopIdleScanInterval > 0x12C )
      {
        v6 = 300;
        PopIdleScanInterval = 300;
      }
      PopIdleBackgroundIgnoreCount = (v6 + 59) / v6;
      PopBackgroundTaskIgnoreCount = (v6 + 179) / v6;
    }
    PopWorkerSpinLock = 0LL;
    PopPolicyWorker.WorkerRoutine = (void (__fastcall *)(void *))PopPolicyWorkerThread;
    PopPolicyWorker.List.Flink = 0LL;
    PopPolicyWorker.Parameter = (void *)0x80000000LL;
    PopWorkerStatus = -1;
    ExInitializeResourceLite(&PopPolicyLock);
    PopAwaymodeLock = 0LL;
    PopVolumeLock.Event.Header.WaitListHead.Blink = &PopVolumeLock.Event.Header.WaitListHead;
    PopVolumeLock.Event.Header.WaitListHead.Flink = &PopVolumeLock.Event.Header.WaitListHead;
    PopVolumeLock.Count = 1;
    PopPowerSettingCallbackReturned.Header.WaitListHead.Blink = &PopPowerSettingCallbackReturned.Header.WaitListHead;
    PopPowerSettingCallbackReturned.Header.WaitListHead.Flink = &PopPowerSettingCallbackReturned.Header.WaitListHead;
    qword_140303C18 = (__int64)&PopVolumeDevices;
    PopVolumeDevices = (__int64)&PopVolumeDevices;
    qword_140303C08 = (__int64)&PopSwitches;
    PopSwitches = (__int64)&PopSwitches;
    qword_140303C38 = (__int64)&PopFans;
    PopFans = (__int64)&PopFans;
    PopVolumeLock.Owner = 0LL;
    PopVolumeLock.Contention = 0;
    LOWORD(PopVolumeLock.Event.Header.Lock) = 1;
    PopVolumeLock.Event.Header.Size = 6;
    PopVolumeLock.Event.Header.SignalState = 0;
    LOWORD(PopPowerSettingCallbackReturned.Header.Lock) = 0;
    PopPowerSettingCallbackReturned.Header.Size = 6;
    PopPowerSettingCallbackReturned.Header.SignalState = 0;
    qword_140303C28 = (__int64)&PopThermal;
    PopThermal = (__int64)&PopThermal;
    IoAddTriageDumpDataBlock((int)&PopThermal, 16);
    qword_140303C48 = (__int64)&PopActionWaiters;
    PopActionWaiters = (__int64)&PopActionWaiters;
    PopResetActionDefaults();
    PopPolicy = dword_140303C64;
    PopDefaultPolicy(dword_140303C64);
    LODWORD(PopAdminPolicy) = 2;
    *(_QWORD *)((char *)&PopAdminPolicy + 4) = 5LL;
    HIDWORD(PopAdminPolicy) = -1;
    qword_140303DD0 = 0xFFFFFFFF00000000uLL;
    PopFullWake = 1;
    PopCoolingMode = 0;
    dword_140328980 = -1;
    dword_140328984 = 2;
    PpmInitPolicyConfiguration();
    PpmInitIdlePolicy();
    PpmPerfInitialize();
    PpmInitCoreParkingPolicy();
    PpmInitHeteroPolicy();
    PpmIdleRegisterDefaultStates();
    PopDeepSleepInitialize(0);
    PopInitializePowerSettings();
    PopInitilizeAcDcSettings();
    PopPolicyDeviceLock = 0LL;
    qword_140303F18 = 0LL;
    PopBatteryInit();
    PopFanLock = 0LL;
    qword_140303F38 = 0LL;
    PopThermalInit();
    PopCoolingExtensionLock = 0LL;
    qword_1403031D8 = 0LL;
    qword_1403031C8 = (__int64)&PopCoolingExtensionList;
    PopCoolingExtensionList = (__int64)&PopCoolingExtensionList;
    dword_140303E40 = 4;
    byte_140303E44 = 0;
    qword_140303E48 = (__int64)PopShutdownHandler;
    PopWakeSourceInit();
    *(_QWORD *)&PpmWmiIdleAccountingTimer.Header.Lock = 8LL;
    PpmWmiIdleAccountingTimer.Header.WaitListHead.Blink = &PpmWmiIdleAccountingTimer.Header.WaitListHead;
    PpmWmiIdleAccountingTimer.Header.WaitListHead.Flink = &PpmWmiIdleAccountingTimer.Header.WaitListHead;
    qword_140302758 = (__int64)PpmWmiIdleAccountingProcedure;
    qword_140341560 = (__int64)&qword_140341558;
    qword_140341558 = (__int64)&qword_140341558;
    PopUserPresentCompletedEvent.Header.WaitListHead.Blink = &PopUserPresentCompletedEvent.Header.WaitListHead;
    PopUserPresentCompletedEvent.Header.WaitListHead.Flink = &PopUserPresentCompletedEvent.Header.WaitListHead;
    PopAwayModeUserPresenceTimer = 8LL;
    qword_140304598 = (__int64)&qword_140304590;
    qword_140304590 = (__int64)&qword_140304590;
    PpmWmiIdleAccountingTimer.DueTime.QuadPart = 0LL;
    *(_QWORD *)&PpmWmiIdleAccountingTimer.Processor = 0LL;
    PpmWmiIdleAccountingDpc = 275;
    qword_140302760 = 0LL;
    qword_140302778 = 0LL;
    qword_140302750 = 0LL;
    PopUserPresentSetStatus = 0;
    qword_140341568 = 0LL;
    qword_140341588 = 0LL;
    LOWORD(PopUserPresentCompletedEvent.Header.Lock) = 1;
    PopUserPresentCompletedEvent.Header.Size = 6;
    PopUserPresentCompletedEvent.Header.SignalState = 0;
    word_140304588 = 1;
    byte_14030458A = 6;
    dword_14030458C = 1;
    PoFxInitPowerManagement();
    dword_140303D6C = 0;
    qword_140303D70 = 100LL;
    qword_140303D78 = 100LL;
    dword_140303D80 = 100;
    PopNetInitialize(0LL);
  }
  if ( a1 == 1 )
  {
    if ( HviIsAnyHypervisorPresent() )
    {
      PpmExitLatencyCheckEnabled = 0;
      PpmExitLatencySamplingPercentage = 0;
    }
    PopUmpoInitializeChannel();
    PopUmpoInitializeMonitorChannel();
    PopPdcDeviceListLock = 0LL;
    qword_140302518 = 0LL;
    PopEsLock = 0LL;
    PopEsWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopEsWorker;
    PopEsWorkItem.Parameter = 0LL;
    PopEsWorkItem.List.Flink = 0LL;
    PopEsWorkItemSchedule(1);
    PopInitializePowerSettingCallbacks();
    if ( (int)PopPowerRequestInit() < 0 || (int)PopInitializeHighPerfPowerRequest() < 0 )
      return v2;
    PopCheckPowerSourceAfterRtcWakeInitialize();
    PopWatchdogLock = 0LL;
    qword_1403024E8 = (__int64)&PopWatchdogList;
    PopWatchdogList = (__int64)&PopWatchdogList;
  }
  if ( a1 == 2 )
  {
    PoFxRegisterDebugger();
    HalReportResourceUsage(1LL);
    if ( EtwRegister(&BATTERY_ETW_PROVIDER, (PETWENABLECALLBACK)PopBatteryEtwCallback, 0LL, &PopBatteryEtwHandle) >= 0 )
      PopBatteryEtwRegistered = 1;
    if ( EtwRegister(&PPM_ETW_PROVIDER, (PETWENABLECALLBACK)PpmEventTraceControlCallback, 0LL, &PpmEtwHandle) < 0 )
      return v2;
    PpmEtwRegistered = 1;
    KeRegisterProcessorChangeCallback((PPROCESSOR_CALLBACK_FUNCTION)PopNewProcessorCallback, 0LL, 0);
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
    PopInitializeHeteroProcessors();
    PpmReleaseLock(&PpmPerfPolicyLock);
    if ( PpmPerfArtificialDomainSetting != -1 )
      PpmPerfArtificialDomainEnabled = PpmPerfArtificialDomainSetting != 0;
    PpmIdleRegisterDefaultStates();
    PpmCheckInitProcessors(0);
    PpmAcquireLock(&PopFxSystemLatencyLock);
    PoFxSendSystemLatencyUpdate();
    PpmReleaseLock((__int64 *)&PopFxSystemLatencyLock);
    PopPdcCsCheckSystemVolumeDevice();
    PopUpdateBackgroundCoolingStatus(0);
  }
  if ( a1 != 3 )
    return 1;
  if ( (int)EmpProviderRegister(0LL, (__int64)&PopEmEntry, 1u, (__int64)&PopEmCallback, 1u, &v11) >= 0
    && (int)PopDiagInitialize() >= 0 )
  {
    PopTriggerDiagTraceAoAcCapability();
    PopFanReportBootStartDevices();
    v7 = 1;
    v8 = 1;
    if ( PopSkipTickPolicy )
    {
      if ( PopSkipTickPolicy == 1 )
      {
        v8 = 0;
        if ( (int)HalGetInterruptTargetInformation(2LL, 0LL, v12) >= 0 )
        {
          PopApicMode = v13;
          v7 = !PopCheckSkipTick();
        }
      }
      else
      {
        v7 = 0;
      }
    }
    PoDisableSkipTick = v7;
    if ( v7 || v8 )
      PopDiagTraceSkipTick(v7, v8);
    PpmInitIllegalThrottleLogging();
    if ( RtlLockBootStatusData(&FileHandle) >= 0 )
    {
      v9 = FileHandle;
      PopCheckShutdownMarker(a2, FileHandle);
      PopCheckAndClearBootError(v9);
      RtlUnlockBootStatusData(v9);
    }
    if ( off_1402F25E0() || (unsigned int)(PoOffCrashConfigTable - 1) <= 1 && DWORD1(PoOffCrashConfigTable) )
      PopDiagTraceAbnormalReset(SDWORD1(PoOffCrashConfigTable));
    PopAcquirePolicyLock();
    PopCheckForUpgradeInProgress();
    if ( InitIsWinPEMode )
      PopLogSleepDisabled(16, 15, 0LL, 0LL);
    if ( byte_140303EB4 )
      PopLogSleepDisabled(17, 7, 0LL, 0LL);
    PopDeepSleepInitialize(3);
    PopInitializePowerPolicySimulate();
    if ( (PopSimulate & 1) != 0 )
    {
      byte_140303EBE = 1;
      *(_QWORD *)&xmmword_140303EC0 = 0x19000000064LL;
      *((_QWORD *)&xmmword_140303EC0 + 1) = 0xFFFF0000000ALL;
      LODWORD(qword_140303EE0) = 4;
      dword_140303EE8 = 2;
    }
    if ( (PopSimulate & 2) != 0 )
    {
      PopCapabilities = 16843009;
      word_140303EA4 = 257;
      byte_140303EA6 = 1;
      unk_140303EB1 = 257;
    }
    PopResetCurrentPolicies();
    PopInitializeAdpm();
    if ( RtlIsMultiSessionSku() && PopPlatformAoAc )
    {
      PoRegisterPowerSettingCallback(
        0LL,
        &GUID_ACDC_POWER_SOURCE,
        (PPOWER_SETTING_CALLBACK)PopBackgroundActivityPolicyCallback,
        0LL,
        0LL);
      PoRegisterPowerSettingCallback(
        0LL,
        &GUID_LOW_POWER_EPOCH,
        (PPOWER_SETTING_CALLBACK)PopBackgroundActivityPolicyCallback,
        0LL,
        0LL);
    }
    PopInitilizeAcDcSettings();
    Buffer = 1;
    PopUpdateConsoleDisplayState(1);
    ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_VISIBLE_STATE, &Buffer, 4u, 0LL, 0LL, 0, 0);
    PopNetInitialize(3LL);
    PopReleasePolicyLock();
    *(_QWORD *)&PopIdleScanTimer.Header.Lock = 8LL;
    PopIdleScanDpc.DeferredRoutine = (PKDEFERRED_ROUTINE)PopCheckForIdleness;
    PopIdleScanTimer.Header.WaitListHead.Blink = &PopIdleScanTimer.Header.WaitListHead;
    PopIdleScanTimer.Header.WaitListHead.Flink = &PopIdleScanTimer.Header.WaitListHead;
    PopIdleScanDpc.TargetInfoAsUlong = 275;
    PopIdleScanDpc.DeferredContext = 0LL;
    PopIdleScanDpc.DpcData = 0LL;
    PopIdleScanDpc.ProcessorHistory = 0LL;
    PopIdleScanTimer.DueTime.QuadPart = 0LL;
    *(_QWORD *)&PopIdleScanTimer.Processor = 0LL;
    PopIdleInitAoAcDozeS4Timer();
    if ( PopIdleScanInterval )
      KeSetCoalescableTimer(
        &PopIdleScanTimer,
        (LARGE_INTEGER)(-10000000LL * (unsigned int)PopIdleScanInterval),
        1000 * PopIdleScanInterval,
        0x3E8u,
        &PopIdleScanDpc);
    PopHiberLoaderScratchPages = *(_DWORD *)(*(_QWORD *)(a2 + 240) + 168LL);
    PopSetupHighPerfPowerRequest();
    PpmEnableWmiInterface();
    PopAcquirePolicyLock();
    PopCoalescingInitialize();
    PopReleasePolicyLock();
    if ( PopPlatformAoAc )
    {
      v10 = PopDripsWatchdogAction;
      if ( (unsigned int)(PopPlatformAoAcOverride - 1) <= 0xFFFFFFFD )
      {
        if ( (PopDripsWatchdogAction & 0x10) != 0 )
          v10 = PopDripsWatchdogAction | 2;
        else
          v10 = PopDripsWatchdogAction & 0xFD;
      }
      ExInitializeResourceLite(&stru_140329BD8);
      byte_140329B74 = v10;
      PopDripsWatchdog = PopDripsWatchdogTimeout;
      PopInitializeTimer(
        (__int64)&unk_140329C40,
        (__int64)PopDripsWatchdogTimerCallbackRoutine,
        (__int64)&PopDripsWatchdog,
        (__int64)PopDripsWatchdogWorkerRoutine,
        (__int64)&PopDripsWatchdog,
        8);
    }
    PopSetupAudioEventNotification();
    PopSetupFullScrenVideoNotification();
    PopSetupUserPresencePredictionNotification();
    PopThermalHandlePreviousShutdown();
    TtmInit();
    return 1;
  }
  return v2;
}
