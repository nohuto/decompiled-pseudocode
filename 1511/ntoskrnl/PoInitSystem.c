/*
 * XREFs of PoInitSystem @ 0x1407655F0
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140757B24 (IoInitSystemPreDrivers.c)
 *     Phase1InitializationIoReady @ 0x140763CC8 (Phase1InitializationIoReady.c)
 *     Phase1InitializationDiscard @ 0x1407645E8 (Phase1InitializationDiscard.c)
 * Callees:
 *     KiInitializeMutant @ 0x14007CCC0 (KiInitializeMutant.c)
 *     KeSetCoalescableTimer @ 0x140091250 (KeSetCoalescableTimer.c)
 *     PpmReleaseLock @ 0x140097098 (PpmReleaseLock.c)
 *     PoFxSendSystemLatencyUpdate @ 0x1400970CC (PoFxSendSystemLatencyUpdate.c)
 *     PpmAcquireLock @ 0x140097354 (PpmAcquireLock.c)
 *     ExInitializeResourceLite @ 0x14009E260 (ExInitializeResourceLite.c)
 *     ExInitializeNPagedLookasideList @ 0x140105A8C (ExInitializeNPagedLookasideList.c)
 *     PopCheckPowerSourceAfterRtcWakeInitialize @ 0x1401367D8 (PopCheckPowerSourceAfterRtcWakeInitialize.c)
 *     PopInitilizeAcDcSettings @ 0x140136C9C (PopInitilizeAcDcSettings.c)
 *     PopComputeCounterShifts @ 0x140136DC0 (PopComputeCounterShifts.c)
 *     PpmInitIllegalThrottleLogging @ 0x140136FA4 (PpmInitIllegalThrottleLogging.c)
 *     IoAddTriageDumpDataBlock @ 0x1401417B4 (IoAddTriageDumpDataBlock.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     PopDiagTraceAbnormalReset @ 0x1401EEEF8 (PopDiagTraceAbnormalReset.c)
 *     PopAcquirePolicyLock @ 0x14039C560 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x14039CE60 (PopReleasePolicyLock.c)
 *     EtwRegister @ 0x1404CC744 (EtwRegister.c)
 *     PopUpdateConsoleDisplayState @ 0x14050C75C (PopUpdateConsoleDisplayState.c)
 *     PopInitializePowerPolicySimulate @ 0x14050C9F8 (PopInitializePowerPolicySimulate.c)
 *     PopEsWorkItemSchedule @ 0x14050CF68 (PopEsWorkItemSchedule.c)
 *     PopResetActionDefaults @ 0x14050D0B0 (PopResetActionDefaults.c)
 *     PopInitializeTimer @ 0x14052F670 (PopInitializeTimer.c)
 *     PpmIdleRegisterDefaultStates @ 0x14052FDF4 (PpmIdleRegisterDefaultStates.c)
 *     PopThermalHandlePreviousShutdown @ 0x140530008 (PopThermalHandlePreviousShutdown.c)
 *     PopSetupUserPresencePredictionNotification @ 0x1405300A4 (PopSetupUserPresencePredictionNotification.c)
 *     PopSetupFullScrenVideoNotification @ 0x1405300D8 (PopSetupFullScrenVideoNotification.c)
 *     PopSetupAudioEventNotification @ 0x14053010C (PopSetupAudioEventNotification.c)
 *     PopIdleInitAoAcDozeS4Timer @ 0x1405309F0 (PopIdleInitAoAcDozeS4Timer.c)
 *     PpmEnableWmiInterface @ 0x140530A5C (PpmEnableWmiInterface.c)
 *     PopSetupHighPerfPowerRequest @ 0x140530ABC (PopSetupHighPerfPowerRequest.c)
 *     PopCheckSkipTick @ 0x140530B7C (PopCheckSkipTick.c)
 *     KeRegisterProcessorChangeCallback @ 0x140530BBC (KeRegisterProcessorChangeCallback.c)
 *     PpmCheckInitProcessors @ 0x140536E6C (PpmCheckInitProcessors.c)
 *     PopInitializeHeteroProcessors @ 0x140537684 (PopInitializeHeteroProcessors.c)
 *     PopLogSleepDisabled @ 0x14053D3AC (PopLogSleepDisabled.c)
 *     PopResetCurrentPolicies @ 0x14053E130 (PopResetCurrentPolicies.c)
 *     PopDefaultPolicy @ 0x14054A3A4 (PopDefaultPolicy.c)
 *     IopDmaOverrideConflict @ 0x14054F5A0 (IopDmaOverrideConflict.c)
 *     PopDiagTraceSkipTick @ 0x140639B58 (PopDiagTraceSkipTick.c)
 *     PopDiagInitialize @ 0x1407558FC (PopDiagInitialize.c)
 *     PopPowerRequestInit @ 0x14075B800 (PopPowerRequestInit.c)
 *     PopInitializePowerSettingCallbacks @ 0x140762C20 (PopInitializePowerSettingCallbacks.c)
 *     PopThermalInit @ 0x140762D90 (PopThermalInit.c)
 *     PopCoalescingInitialize @ 0x140765FF0 (PopCoalescingInitialize.c)
 *     PopInitializeAdpm @ 0x140766084 (PopInitializeAdpm.c)
 *     PopCheckForUpgradeInProgress @ 0x1407660D4 (PopCheckForUpgradeInProgress.c)
 *     PopCheckShutdownMarker @ 0x1407661AC (PopCheckShutdownMarker.c)
 *     PopFanReportBootStartDevices @ 0x14076620C (PopFanReportBootStartDevices.c)
 *     PopTriggerDiagTraceAoAcCapability @ 0x140766250 (PopTriggerDiagTraceAoAcCapability.c)
 *     PopPdcCsCheckSystemVolumeDevice @ 0x1407662E0 (PopPdcCsCheckSystemVolumeDevice.c)
 *     PoFxRegisterDebugger @ 0x140766334 (PoFxRegisterDebugger.c)
 *     PopInitializeHighPerfPowerRequest @ 0x1407663AC (PopInitializeHighPerfPowerRequest.c)
 *     PpmInitHeteroPolicy @ 0x14076BF20 (PpmInitHeteroPolicy.c)
 *     PpmInitPolicyConfiguration @ 0x14076C6CC (PpmInitPolicyConfiguration.c)
 *     PpmInitIdlePolicy @ 0x14076CF38 (PpmInitIdlePolicy.c)
 *     PoFxInitPowerManagement @ 0x14076E46C (PoFxInitPowerManagement.c)
 *     PopUmpoInitializeChannel @ 0x14076F050 (PopUmpoInitializeChannel.c)
 *     PopBatteryInit @ 0x14076FD1C (PopBatteryInit.c)
 *     PopUmpoInitializeMonitorChannel @ 0x14076FF8C (PopUmpoInitializeMonitorChannel.c)
 *     PopInitializeIrpWorkers @ 0x140770504 (PopInitializeIrpWorkers.c)
 *     PpmPerfInitialize @ 0x140770928 (PpmPerfInitialize.c)
 *     PopInitializePowerSettings @ 0x140770F9C (PopInitializePowerSettings.c)
 *     PpmCheckInit @ 0x140771348 (PpmCheckInit.c)
 *     PpmInitCoreParkingPolicy @ 0x14077157C (PpmInitCoreParkingPolicy.c)
 *     PopWakeSourceInit @ 0x1407719EC (PopWakeSourceInit.c)
 *     PopInitShutdownList @ 0x140771B58 (PopInitShutdownList.c)
 */

char __fastcall PoInitSystem(int a1, __int64 a2)
{
  char v2; // di
  __int64 v6; // r8
  unsigned int v7; // ecx
  unsigned __int8 v13; // bl
  unsigned __int8 v14; // si
  char v15; // bl
  LARGE_INTEGER PerformanceFrequency; // [rsp+40h] [rbp-68h] BYREF
  _BYTE v17[20]; // [rsp+48h] [rbp-60h] BYREF
  int v18; // [rsp+5Ch] [rbp-4Ch]
  int v19; // [rsp+60h] [rbp-48h]
  int v20; // [rsp+64h] [rbp-44h]
  int v21; // [rsp+68h] [rbp-40h]
  int v22; // [rsp+6Ch] [rbp-3Ch]

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
    qword_1402DE598 = (__int64)&PopIrpList;
    PopIrpList = (__int64)&PopIrpList;
    qword_1402DDC88 = (__int64)&PopInrushIrpList;
    PopInrushIrpList = (__int64)&PopInrushIrpList;
    PopIrpLock = 0LL;
    ExInitializeNPagedLookasideList(&PopIrpDataLookaside, 0LL, 0LL, 0x200u, 0xF8uLL, 0x72496F50u, 0);
    LOBYTE(v6) = 1;
    KiInitializeMutant((__int64)&PopWdiTimerMutex, 0LL, v6);
    *(_QWORD *)&PopWdiTimer.Header.Lock = 8LL;
    PopWdiCurrentScenario = (__int64)&NullGuid;
    PopWdiTimer.Header.WaitListHead.Blink = &PopWdiTimer.Header.WaitListHead;
    PopWdiTimer.Header.WaitListHead.Flink = &PopWdiTimer.Header.WaitListHead;
    PopWdiTimerDpc.DeferredRoutine = (PKDEFERRED_ROUTINE)PopWdiTimerCallback;
    qword_1402DD4B0 = (__int64)PopWdiTimerWorkerThread;
    PopWdiCurrentScenarioInstanceId = 0;
    PopWdiTimer.DueTime.QuadPart = 0LL;
    *(_QWORD *)&PopWdiTimer.Processor = 0LL;
    PopWdiTimerTimeoutValue.QuadPart = -50000000LL;
    PopWdiTimerDpc.TargetInfoAsUlong = 275;
    PopWdiTimerDpc.DeferredContext = 0LL;
    PopWdiTimerDpc.DpcData = 0LL;
    PopWdiTimerDpc.ProcessorHistory = 0LL;
    qword_1402DD4B8 = 0LL;
    PopWdiTimerWorker = 0LL;
    PopMonitorOffDueToSleep = 0;
    PpmCheckInit();
    if ( (int)PopInitializeIrpWorkers() < 0 )
      return v2;
    PopIrpSerialLock = 0LL;
    qword_1402DDCA8 = 0LL;
    qword_1402DDCF8 = (__int64)&qword_1402DDCF0;
    qword_1402DDCF0 = (__int64)&qword_1402DDCF0;
    qword_1402DDCC8 = (__int64)&PopIrpSerialList;
    PopIrpSerialList = (__int64)&PopIrpSerialList;
    qword_1402DDD18 = (__int64)&PopRequestedIrps;
    PopRequestedIrps = (__int64)&PopRequestedIrps;
    PopTransitionLock.Header.WaitListHead.Blink = &PopTransitionLock.Header.WaitListHead;
    PopTransitionLock.Header.WaitListHead.Flink = &PopTransitionLock.Header.WaitListHead;
    qword_1402DE578 = (__int64)&PowerStateDisableReasonListHead;
    PowerStateDisableReasonListHead = (__int64)&PowerStateDisableReasonListHead;
    PopDisableSleepMutex.Event.Header.WaitListHead.Blink = &PopDisableSleepMutex.Event.Header.WaitListHead;
    PopDisableSleepMutex.Event.Header.WaitListHead.Flink = &PopDisableSleepMutex.Event.Header.WaitListHead;
    qword_1402DF4E8 = (__int64)&PopDisableSleepList;
    PopDisableSleepList = (__int64)&PopDisableSleepList;
    PpmIdlePolicyLock = 0LL;
    PpmIdleVetoLock = 0LL;
    PpmParkStateLock = 0LL;
    qword_140305B08 = 0LL;
    LOWORD(dword_1402DDCE8) = 1;
    BYTE2(dword_1402DDCE8) = 6;
    dword_1402DDCEC = 1;
    PopIrpSerialListLength = 0;
    PopInrushPending = 0;
    PopInrushIrpPointer = 0LL;
    PopInrushIrpReferenceCount = 0;
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
    v7 = PopIdleScanInterval;
    qword_1402DDD48 = (__int64)&PopIdleDetectList;
    PopIdleDetectList = (__int64)&PopIdleDetectList;
    PopDopeGlobalLock = 0LL;
    if ( PopIdleScanInterval )
    {
      if ( PopIdleScanInterval == -1 )
      {
        v7 = 30;
        PopIdleScanInterval = 30;
      }
      else if ( (unsigned int)PopIdleScanInterval > 0x12C )
      {
        v7 = 300;
        PopIdleScanInterval = 300;
      }
      PopIdleBackgroundIgnoreCount = (v7 + 59) / v7;
      PopBackgroundTaskIgnoreCount = (v7 + 179) / v7;
    }
    PopWorkerSpinLock = 0LL;
    PopPolicyWorker.WorkerRoutine = (void (__fastcall *)(void *))PopPolicyWorkerThread;
    PopPolicyWorker.Parameter = (void *)0x80000000LL;
    PopPolicyWorker.List.Flink = 0LL;
    PopWorkerStatus = -1;
    ExInitializeResourceLite(&PopPolicyLock);
    PopAwaymodeLock = 0LL;
    PopVolumeLock.Event.Header.WaitListHead.Blink = &PopVolumeLock.Event.Header.WaitListHead;
    PopVolumeLock.Event.Header.WaitListHead.Flink = &PopVolumeLock.Event.Header.WaitListHead;
    PopVolumeLock.Count = 1;
    PopPowerSettingCallbackReturned.Header.WaitListHead.Blink = &PopPowerSettingCallbackReturned.Header.WaitListHead;
    PopPowerSettingCallbackReturned.Header.WaitListHead.Flink = &PopPowerSettingCallbackReturned.Header.WaitListHead;
    qword_1402DDE18 = (__int64)&PopVolumeDevices;
    PopVolumeDevices = (__int64)&PopVolumeDevices;
    qword_1402DDE08 = (__int64)&PopSwitches;
    PopSwitches = (__int64)&PopSwitches;
    qword_1402DDE38 = (__int64)&PopFans;
    PopFans = (__int64)&PopFans;
    PopVolumeLock.Owner = 0LL;
    PopVolumeLock.Contention = 0;
    LOWORD(PopVolumeLock.Event.Header.Lock) = 1;
    PopVolumeLock.Event.Header.Size = 6;
    PopVolumeLock.Event.Header.SignalState = 0;
    LOWORD(PopPowerSettingCallbackReturned.Header.Lock) = 0;
    PopPowerSettingCallbackReturned.Header.Size = 6;
    PopPowerSettingCallbackReturned.Header.SignalState = 0;
    qword_1402DDE28 = (__int64)&PopThermal;
    PopThermal = (__int64)&PopThermal;
    IoAddTriageDumpDataBlock((int)&PopThermal, 16);
    qword_1402DDE48 = (__int64)&PopActionWaiters;
    PopActionWaiters = (__int64)&PopActionWaiters;
    PopResetActionDefaults();
    PopPolicy = dword_1402DE1A4;
    PopDefaultPolicy(dword_1402DE1A4);
    LODWORD(PopAdminPolicy) = 2;
    *(_QWORD *)((char *)&PopAdminPolicy + 4) = 5LL;
    HIDWORD(PopAdminPolicy) = -1;
    qword_1402DDE70 = 0xFFFFFFFF00000000uLL;
    PopFullWake = 1;
    PopCoolingMode = 0;
    dword_140305B00 = -1;
    dword_140305B04 = 2;
    PpmInitPolicyConfiguration();
    PpmInitIdlePolicy();
    PpmPerfInitialize();
    PpmInitCoreParkingPolicy();
    PpmInitHeteroPolicy();
    PpmIdleRegisterDefaultStates();
    PopInitializePowerSettings();
    PopInitilizeAcDcSettings();
    PopPolicyDeviceLock = 0LL;
    qword_1402DE848 = 0LL;
    PopBatteryInit();
    PopFanLock = 0LL;
    qword_1402DE868 = 0LL;
    PopThermalInit();
    PopCoolingExtensionLock = 0LL;
    qword_1402DE9C8 = 0LL;
    qword_1402DE9B8 = (__int64)&PopCoolingExtensionList;
    PopCoolingExtensionList = (__int64)&PopCoolingExtensionList;
    qword_1402DDF08 = (__int64)PopShutdownHandler;
    dword_1402DDF00 = 4;
    byte_1402DDF04 = 0;
    PopWakeSourceInit();
    *(_QWORD *)&PpmWmiIdleAccountingTimer.Header.Lock = 8LL;
    PpmWmiIdleAccountingTimer.Header.WaitListHead.Blink = &PpmWmiIdleAccountingTimer.Header.WaitListHead;
    PpmWmiIdleAccountingTimer.Header.WaitListHead.Flink = &PpmWmiIdleAccountingTimer.Header.WaitListHead;
    qword_1402DD178 = (__int64)PpmWmiIdleAccountingProcedure;
    PopAwayModeUserPresenceTimer.Header.WaitListHead.Blink = &PopAwayModeUserPresenceTimer.Header.WaitListHead;
    PopAwayModeUserPresenceTimer.Header.WaitListHead.Flink = &PopAwayModeUserPresenceTimer.Header.WaitListHead;
    PopUserPresentCompletedEvent.Header.WaitListHead.Blink = &PopUserPresentCompletedEvent.Header.WaitListHead;
    PopUserPresentCompletedEvent.Header.WaitListHead.Flink = &PopUserPresentCompletedEvent.Header.WaitListHead;
    *(_QWORD *)&PopAwayModeUserPresenceTimer.Header.Lock = 8LL;
    qword_1402DEFD8 = (__int64)&qword_1402DEFD0;
    qword_1402DEFD0 = (__int64)&qword_1402DEFD0;
    PpmWmiIdleAccountingTimer.DueTime.QuadPart = 0LL;
    *(_QWORD *)&PpmWmiIdleAccountingTimer.Processor = 0LL;
    PpmWmiIdleAccountingDpc = 275;
    qword_1402DD180 = 0LL;
    qword_1402DD198 = 0LL;
    qword_1402DD170 = 0LL;
    PopUserPresentSetStatus = 0;
    PopAwayModeUserPresenceTimer.DueTime.QuadPart = 0LL;
    *(_QWORD *)&PopAwayModeUserPresenceTimer.Processor = 0LL;
    LOWORD(PopUserPresentCompletedEvent.Header.Lock) = 1;
    PopUserPresentCompletedEvent.Header.Size = 6;
    PopUserPresentCompletedEvent.Header.SignalState = 0;
    word_1402DEFC8 = 1;
    byte_1402DEFCA = 6;
    dword_1402DEFCC = 1;
    PoFxInitPowerManagement();
    dword_1402DE2AC = 0;
    qword_1402DE2B0 = 100LL;
    qword_1402DE2B8 = 100LL;
    dword_1402DE2C0 = 100;
  }
  if ( a1 == 1 )
  {
    _RAX = 1LL;
    __asm { cpuid }
    v19 = _RAX;
    v20 = _RBX;
    v21 = _RCX;
    v22 = _RDX;
    if ( (_RCX & 0x80000000) != 0 )
    {
      PpmExitLatencyCheckEnabled = 0;
      PpmExitLatencySamplingPercentage = 0;
    }
    PopUmpoInitializeChannel();
    PopUmpoInitializeMonitorChannel();
    PopPdcDeviceListLock = 0LL;
    qword_1402DD978 = (__int64)&PopPdcDeviceList;
    PopPdcDeviceList = (__int64)&PopPdcDeviceList;
    qword_1402DD098 = 0LL;
    PopEsWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopEsWorker;
    PopEsLock = 0LL;
    PopEsWorkItem.Parameter = 0LL;
    PopEsWorkItem.List.Flink = 0LL;
    PopEsWorkItemSchedule(1);
    PopInitializePowerSettingCallbacks();
    if ( (int)PopPowerRequestInit() < 0 || (int)PopInitializeHighPerfPowerRequest() < 0 )
      return v2;
    PopCheckPowerSourceAfterRtcWakeInitialize();
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
    PopInitializeHeteroProcessors();
    if ( PpmPerfArtificialDomainSetting != -1 )
      PpmPerfArtificialDomainEnabled = PpmPerfArtificialDomainSetting != 0;
    PpmIdleRegisterDefaultStates();
    PpmCheckInitProcessors(0);
    PpmAcquireLock(&PopFxSystemLatencyLock);
    PoFxSendSystemLatencyUpdate();
    PpmReleaseLock((__int64 *)&PopFxSystemLatencyLock);
    PopPdcCsCheckSystemVolumeDevice();
  }
  if ( a1 == 3 )
  {
    if ( (int)PopDiagInitialize() < 0 )
      return v2;
    PopTriggerDiagTraceAoAcCapability();
    PopFanReportBootStartDevices();
    v13 = 1;
    v14 = 1;
    if ( PopSkipTickPolicy )
    {
      if ( PopSkipTickPolicy == 1 )
      {
        v14 = 0;
        if ( (int)HalGetInterruptTargetInformation(2LL, 0LL, v17) >= 0 )
        {
          PopApicMode = v18;
          v13 = !PopCheckSkipTick();
        }
      }
      else
      {
        v13 = 0;
      }
    }
    PoDisableSkipTick = v13;
    if ( v13 || v14 )
      PopDiagTraceSkipTick(v13, v14);
    PpmInitIllegalThrottleLogging();
    PopCheckShutdownMarker(a2);
    if ( off_1402D2940() || (unsigned int)(PoOffCrashConfigTable - 1) <= 1 && DWORD1(PoOffCrashConfigTable) )
      PopDiagTraceAbnormalReset(SDWORD1(PoOffCrashConfigTable));
    PopAcquirePolicyLock();
    PopCheckForUpgradeInProgress();
    if ( InitIsWinPEMode )
      PopLogSleepDisabled(16, 15, 0LL, 0LL);
    if ( byte_1402DDF74 )
      PopLogSleepDisabled(17, 7, 0LL, 0LL);
    PopInitializePowerPolicySimulate();
    if ( (PopSimulate & 1) != 0 )
    {
      byte_1402DDF7E = 1;
      *(_QWORD *)&xmmword_1402DDF80 = 0x19000000064LL;
      *((_QWORD *)&xmmword_1402DDF80 + 1) = 0xFFFF0000000ALL;
      LODWORD(qword_1402DDFA0) = 4;
      dword_1402DDFA8 = 2;
    }
    if ( (PopSimulate & 2) != 0 )
    {
      PopCapabilities = 16843009;
      word_1402DDF64 = 257;
      byte_1402DDF66 = 1;
      unk_1402DDF71 = 257;
    }
    PopResetCurrentPolicies();
    PopInitializeAdpm();
    PopInitilizeAcDcSettings();
    PopUpdateConsoleDisplayState(1);
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
    if ( (*(_DWORD *)(KeLoaderBlock_0 + 264) & 8) != 0 )
      PopFirmwareProtection = 1;
    PopCoalescingInitialize();
    if ( PopPlatformAoAc )
    {
      v15 = PopDripsWatchdogAction;
      if ( (unsigned int)(PopPlatformAoAcOverride - 1) <= 0xFFFFFFFD )
      {
        if ( (PopDripsWatchdogAction & 0x10) != 0 )
          v15 = PopDripsWatchdogAction | 2;
        else
          v15 = PopDripsWatchdogAction & 0xFD;
      }
      ExInitializeResourceLite(&stru_140306E78);
      byte_140306E14 = v15;
      PopDripsWatchdog = PopDripsWatchdogTimeout;
      PopInitializeTimer(
        (__int64)dword_140306EE0,
        (__int64)PopDripsWatchdogTimerCallbackRoutine,
        (__int64)&PopDripsWatchdog,
        (__int64)PopDripsWatchdogWorkerRoutine,
        (__int64)&PopDripsWatchdog);
    }
    PopSetupAudioEventNotification();
    PopSetupFullScrenVideoNotification();
    PopSetupUserPresencePredictionNotification();
    PopThermalHandlePreviousShutdown();
  }
  return 1;
}
