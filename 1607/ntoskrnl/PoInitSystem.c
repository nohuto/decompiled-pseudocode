/*
 * XREFs of PoInitSystem @ 0x140795530
 * Callers:
 *     Phase1InitializationIoReady @ 0x1407934EC (Phase1InitializationIoReady.c)
 *     Phase1InitializationDiscard @ 0x140794438 (Phase1InitializationDiscard.c)
 *     IoInitSystemPreDrivers @ 0x14079EDEC (IoInitSystemPreDrivers.c)
 * Callees:
 *     PoFxSendSystemLatencyUpdate @ 0x14000A2A0 (PoFxSendSystemLatencyUpdate.c)
 *     PpmAcquireLock @ 0x14000A528 (PpmAcquireLock.c)
 *     ExInitializeResourceLite @ 0x14000ECC0 (ExInitializeResourceLite.c)
 *     KiInitializeMutant @ 0x140085B84 (KiInitializeMutant.c)
 *     PpmReleaseLock @ 0x1400D46D4 (PpmReleaseLock.c)
 *     KeSetCoalescableTimer @ 0x1400EFC00 (KeSetCoalescableTimer.c)
 *     ExInitializeNPagedLookasideList @ 0x140110BFC (ExInitializeNPagedLookasideList.c)
 *     HviIsAnyHypervisorPresent @ 0x14013123C (HviIsAnyHypervisorPresent.c)
 *     PopComputeCounterShifts @ 0x140139ADC (PopComputeCounterShifts.c)
 *     PopInitilizeAcDcSettings @ 0x140139B7C (PopInitilizeAcDcSettings.c)
 *     PpmInitIllegalThrottleLogging @ 0x140147B24 (PpmInitIllegalThrottleLogging.c)
 *     PopCheckPowerSourceAfterRtcWakeInitialize @ 0x1401498F0 (PopCheckPowerSourceAfterRtcWakeInitialize.c)
 *     IoAddTriageDumpDataBlock @ 0x14014B3B4 (IoAddTriageDumpDataBlock.c)
 *     ZwUpdateWnfStateData @ 0x14015D3C0 (ZwUpdateWnfStateData.c)
 *     PopDiagTraceAbnormalReset @ 0x140207A28 (PopDiagTraceAbnormalReset.c)
 *     PopAcquirePolicyLock @ 0x1403C87E0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x1403C8828 (PopReleasePolicyLock.c)
 *     PoRegisterPowerSettingCallback @ 0x1403F2E38 (PoRegisterPowerSettingCallback.c)
 *     RtlIsMultiSessionSku @ 0x1405037BC (RtlIsMultiSessionSku.c)
 *     PopEsWorkItemSchedule @ 0x140544120 (PopEsWorkItemSchedule.c)
 *     PopInitializePowerPolicySimulate @ 0x140547648 (PopInitializePowerPolicySimulate.c)
 *     PopUpdateConsoleDisplayState @ 0x1405477D4 (PopUpdateConsoleDisplayState.c)
 *     RtlLockBootStatusData @ 0x1405478FC (RtlLockBootStatusData.c)
 *     RtlUnlockBootStatusData @ 0x140547DAC (RtlUnlockBootStatusData.c)
 *     PopResetActionDefaults @ 0x1405486D4 (PopResetActionDefaults.c)
 *     EtwRegister @ 0x140549F44 (EtwRegister.c)
 *     PopLogSleepDisabled @ 0x14054CA58 (PopLogSleepDisabled.c)
 *     PpmIdleRegisterDefaultStates @ 0x14054EAE0 (PpmIdleRegisterDefaultStates.c)
 *     EmpProviderRegister @ 0x14055420C (EmpProviderRegister.c)
 *     PpmCheckInitProcessors @ 0x140569DD0 (PpmCheckInitProcessors.c)
 *     PopInitializeHeteroProcessors @ 0x14056A584 (PopInitializeHeteroProcessors.c)
 *     PopResetCurrentPolicies @ 0x14056DF0C (PopResetCurrentPolicies.c)
 *     PopIdleInitAoAcDozeS4Timer @ 0x14056F558 (PopIdleInitAoAcDozeS4Timer.c)
 *     PpmEnableWmiInterface @ 0x1405769E8 (PpmEnableWmiInterface.c)
 *     KeRegisterProcessorChangeCallback @ 0x140578064 (KeRegisterProcessorChangeCallback.c)
 *     PopInitializeTimer @ 0x14057A27C (PopInitializeTimer.c)
 *     PopDefaultPolicy @ 0x14057F920 (PopDefaultPolicy.c)
 *     TtmInit @ 0x14057FD28 (TtmInit.c)
 *     PopSetupAudioEventNotification @ 0x14057FF24 (PopSetupAudioEventNotification.c)
 *     PopThermalHandlePreviousShutdown @ 0x140580B3C (PopThermalHandlePreviousShutdown.c)
 *     PopUpdateBackgroundCoolingStatus @ 0x140581144 (PopUpdateBackgroundCoolingStatus.c)
 *     PopSetupFullScrenVideoNotification @ 0x140581438 (PopSetupFullScrenVideoNotification.c)
 *     PopSetupUserPresencePredictionNotification @ 0x14058146C (PopSetupUserPresencePredictionNotification.c)
 *     PopSetupHighPerfPowerRequest @ 0x14058163C (PopSetupHighPerfPowerRequest.c)
 *     PopCheckSkipTick @ 0x140581690 (PopCheckSkipTick.c)
 *     IopDmaOverrideConflict @ 0x140581948 (IopDmaOverrideConflict.c)
 *     PopDiagTraceSkipTick @ 0x140671AA0 (PopDiagTraceSkipTick.c)
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
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  char v13; // bl
  __int64 v14; // [rsp+40h] [rbp-48h] BYREF
  _BYTE v15[20]; // [rsp+48h] [rbp-40h] BYREF
  int v16; // [rsp+5Ch] [rbp-2Ch]
  int v17; // [rsp+90h] [rbp+8h] BYREF
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
    qword_140303AB8 = (__int64)&PopIrpList;
    PopIrpList = (__int64)&PopIrpList;
    qword_140303AD8 = (__int64)&PopInrushIrpList;
    PopInrushIrpList = (__int64)&PopInrushIrpList;
    PopIrpLock = 0LL;
    ExInitializeNPagedLookasideList(&PopIrpDataLookaside, 0LL, 0LL, 0x200u, 0xF8uLL, 0x72496F50u, 0);
    PopBsdUpdateLock = 0LL;
    qword_140304CA8 = 0LL;
    KiInitializeMutant((__int64)&PopWdiTimerMutex, 0, 1);
    PopWdiTimer = 8LL;
    PopWdiCurrentScenario = (__int64)&NullGuid;
    qword_140302990 = (__int64)&qword_140302988;
    qword_140302988 = (__int64)&qword_140302988;
    qword_1403029F8 = (__int64)PopWdiTimerCallback;
    qword_140302A30 = (__int64)PopWdiTimerWorkerThread;
    PopWdiCurrentScenarioInstanceId = 0;
    qword_140302998 = 0LL;
    qword_1403029B8 = 0LL;
    PopWdiTimerTimeoutValue = -50000000LL;
    PopWdiTimerDpc = 275;
    qword_140302A00 = 0LL;
    qword_140302A18 = 0LL;
    qword_1403029F0 = 0LL;
    qword_140302A38 = 0LL;
    PopWdiTimerWorker = 0LL;
    PopMonitorOffDueToSleep = 0;
    PpmCheckInit();
    if ( (int)PopInitializeIrpWorkers() < 0 )
      return v2;
    PopIrpSerialLock = 0LL;
    qword_140303AE8 = 0LL;
    Object.Header.WaitListHead.Blink = &Object.Header.WaitListHead;
    Object.Header.WaitListHead.Flink = &Object.Header.WaitListHead;
    qword_140303B58 = (__int64)&PopIrpSerialList;
    PopIrpSerialList = (__int64)&PopIrpSerialList;
    qword_140303B48 = (__int64)&PopRequestedIrps;
    PopRequestedIrps = (__int64)&PopRequestedIrps;
    PopTransitionLock.Header.WaitListHead.Blink = &PopTransitionLock.Header.WaitListHead;
    PopTransitionLock.Header.WaitListHead.Flink = &PopTransitionLock.Header.WaitListHead;
    qword_140303B78 = (__int64)&PowerStateDisableReasonListHead;
    PowerStateDisableReasonListHead = (__int64)&PowerStateDisableReasonListHead;
    PopDisableSleepMutex.Event.Header.WaitListHead.Blink = &PopDisableSleepMutex.Event.Header.WaitListHead;
    PopDisableSleepMutex.Event.Header.WaitListHead.Flink = &PopDisableSleepMutex.Event.Header.WaitListHead;
    qword_140304A88 = (__int64)&PopDisableSleepList;
    PopDisableSleepList = (__int64)&PopDisableSleepList;
    PpmIdlePolicyLock = 0LL;
    PpmIdleVetoLock = 0LL;
    PpmParkStateLock = 0LL;
    qword_140328948 = 0LL;
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
    qword_140303B88 = (__int64)&PopIdleDetectList;
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
    qword_140303CD8 = (__int64)&PopVolumeDevices;
    PopVolumeDevices = (__int64)&PopVolumeDevices;
    qword_140303CC8 = (__int64)&PopSwitches;
    PopSwitches = (__int64)&PopSwitches;
    qword_140303CF8 = (__int64)&PopFans;
    PopFans = (__int64)&PopFans;
    PopVolumeLock.Owner = 0LL;
    PopVolumeLock.Contention = 0;
    LOWORD(PopVolumeLock.Event.Header.Lock) = 1;
    PopVolumeLock.Event.Header.Size = 6;
    PopVolumeLock.Event.Header.SignalState = 0;
    LOWORD(PopPowerSettingCallbackReturned.Header.Lock) = 0;
    PopPowerSettingCallbackReturned.Header.Size = 6;
    PopPowerSettingCallbackReturned.Header.SignalState = 0;
    qword_140303CE8 = (__int64)&PopThermal;
    PopThermal = (__int64)&PopThermal;
    IoAddTriageDumpDataBlock((int)&PopThermal, 16);
    qword_140303D08 = (__int64)&PopActionWaiters;
    PopActionWaiters = (__int64)&PopActionWaiters;
    PopResetActionDefaults();
    PopPolicy = dword_140303D24;
    PopDefaultPolicy(dword_140303D24);
    LODWORD(PopAdminPolicy) = 2;
    *(_QWORD *)((char *)&PopAdminPolicy + 4) = 5LL;
    HIDWORD(PopAdminPolicy) = -1;
    qword_140303E90 = 0xFFFFFFFF00000000uLL;
    PopFullWake = 1;
    PopCoolingMode = 0;
    dword_140328940 = -1;
    dword_140328944 = 2;
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
    qword_140303FD8 = 0LL;
    PopBatteryInit();
    PopFanLock = 0LL;
    qword_140303FF8 = 0LL;
    PopThermalInit();
    PopCoolingExtensionLock = 0LL;
    qword_140303288 = 0LL;
    qword_140303278 = (__int64)&PopCoolingExtensionList;
    PopCoolingExtensionList = (__int64)&PopCoolingExtensionList;
    dword_140303F00 = 4;
    byte_140303F04 = 0;
    qword_140303F08 = (__int64)PopShutdownHandler;
    PopWakeSourceInit();
    *(_QWORD *)&PpmWmiIdleAccountingTimer.Header.Lock = 8LL;
    PpmWmiIdleAccountingTimer.Header.WaitListHead.Blink = &PpmWmiIdleAccountingTimer.Header.WaitListHead;
    PpmWmiIdleAccountingTimer.Header.WaitListHead.Flink = &PpmWmiIdleAccountingTimer.Header.WaitListHead;
    qword_1403026F8 = (__int64)PpmWmiIdleAccountingProcedure;
    qword_140341520 = (__int64)&qword_140341518;
    qword_140341518 = (__int64)&qword_140341518;
    PopUserPresentCompletedEvent.Header.WaitListHead.Blink = &PopUserPresentCompletedEvent.Header.WaitListHead;
    PopUserPresentCompletedEvent.Header.WaitListHead.Flink = &PopUserPresentCompletedEvent.Header.WaitListHead;
    PopAwayModeUserPresenceTimer = 8LL;
    qword_140304A18 = (__int64)&qword_140304A10;
    qword_140304A10 = (__int64)&qword_140304A10;
    PpmWmiIdleAccountingTimer.DueTime.QuadPart = 0LL;
    *(_QWORD *)&PpmWmiIdleAccountingTimer.Processor = 0LL;
    PpmWmiIdleAccountingDpc = 275;
    qword_140302700 = 0LL;
    qword_140302718 = 0LL;
    qword_1403026F0 = 0LL;
    PopUserPresentSetStatus = 0;
    qword_140341528 = 0LL;
    qword_140341548 = 0LL;
    LOWORD(PopUserPresentCompletedEvent.Header.Lock) = 1;
    PopUserPresentCompletedEvent.Header.Size = 6;
    PopUserPresentCompletedEvent.Header.SignalState = 0;
    word_140304A08 = 1;
    byte_140304A0A = 6;
    dword_140304A0C = 1;
    PoFxInitPowerManagement();
    dword_140303E2C = 0;
    qword_140303E30 = 100LL;
    qword_140303E38 = 100LL;
    dword_140303E40 = 100;
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
    qword_1403024F8 = 0LL;
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
    qword_1403024C8 = (__int64)&PopWatchdogList;
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
  if ( (int)EmpProviderRegister(0LL, (__int64)&PopEmEntry, 1u, (__int64)&PopEmCallback, 1u, &v14) >= 0
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
        if ( (int)HalGetInterruptTargetInformation(2LL, 0LL, v15) >= 0 )
        {
          PopApicMode = v16;
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
    if ( byte_140303F74 )
      PopLogSleepDisabled(17, 7, 0LL, 0LL);
    PopDeepSleepInitialize(3);
    PopInitializePowerPolicySimulate();
    if ( (PopSimulate & 1) != 0 )
    {
      byte_140303F7E = 1;
      *(_QWORD *)&xmmword_140303F80 = 0x19000000064LL;
      *((_QWORD *)&xmmword_140303F80 + 1) = 0xFFFF0000000ALL;
      LODWORD(qword_140303FA0) = 4;
      dword_140303FA8 = 2;
    }
    if ( (PopSimulate & 2) != 0 )
    {
      PopCapabilities = 16843009;
      word_140303F64 = 257;
      byte_140303F66 = 1;
      unk_140303F71 = 257;
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
    v17 = 1;
    PopUpdateConsoleDisplayState(1);
    ZwUpdateWnfStateData((__int64)&WNF_PO_PRIMARY_DISPLAY_VISIBLE_STATE, (__int64)&v17, 4LL);
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
    PopCoalescingInitialize(v11, v10, v12);
    PopReleasePolicyLock();
    if ( PopPlatformAoAc )
    {
      v13 = PopDripsWatchdogAction;
      if ( (unsigned int)(PopPlatformAoAcOverride - 1) <= 0xFFFFFFFD )
      {
        if ( (PopDripsWatchdogAction & 0x10) != 0 )
          v13 = PopDripsWatchdogAction | 2;
        else
          v13 = PopDripsWatchdogAction & 0xFD;
      }
      ExInitializeResourceLite(&stru_140329B98);
      byte_140329B34 = v13;
      PopDripsWatchdog = PopDripsWatchdogTimeout;
      PopInitializeTimer(
        (__int64)&unk_140329C00,
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
