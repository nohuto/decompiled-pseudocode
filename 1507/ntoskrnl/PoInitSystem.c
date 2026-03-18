/*
 * XREFs of PoInitSystem @ 0x1407D2D24
 * Callers:
 *     IoInitSystemPreDrivers @ 0x1407C116C (IoInitSystemPreDrivers.c)
 *     Phase1InitializationIoReady @ 0x1407D05E0 (Phase1InitializationIoReady.c)
 *     Phase1InitializationDiscard @ 0x1407D146C (Phase1InitializationDiscard.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x1400155B0 (ExInitializeResourceLite.c)
 *     KeSetCoalescableTimer @ 0x1400662B0 (KeSetCoalescableTimer.c)
 *     KiInitializeMutant @ 0x1400756B8 (KiInitializeMutant.c)
 *     PpmReleaseLock @ 0x1400E70D0 (PpmReleaseLock.c)
 *     PoFxSendSystemLatencyUpdate @ 0x1400ED21C (PoFxSendSystemLatencyUpdate.c)
 *     PpmAcquireLock @ 0x1400ED5A0 (PpmAcquireLock.c)
 *     ExInitializeNPagedLookasideList @ 0x140137DA8 (ExInitializeNPagedLookasideList.c)
 *     PopInitilizeAcDcSettings @ 0x14015F24C (PopInitilizeAcDcSettings.c)
 *     PopCheckPowerSourceAfterRtcWakeInitialize @ 0x1401630C0 (PopCheckPowerSourceAfterRtcWakeInitialize.c)
 *     PopComputeCounterShifts @ 0x140163518 (PopComputeCounterShifts.c)
 *     PpmInitIllegalThrottleLogging @ 0x14016CEB8 (PpmInitIllegalThrottleLogging.c)
 *     IoAddTriageDumpDataBlock @ 0x14016F790 (IoAddTriageDumpDataBlock.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     PopDiagTraceAbnormalReset @ 0x14023D570 (PopDiagTraceAbnormalReset.c)
 *     PopReleasePolicyLock @ 0x1403EB86C (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1403EB8DC (PopAcquirePolicyLock.c)
 *     EtwRegister @ 0x14054C680 (EtwRegister.c)
 *     PopUpdateConsoleDisplayState @ 0x140583A58 (PopUpdateConsoleDisplayState.c)
 *     PopInitializePowerPolicySimulate @ 0x140583C84 (PopInitializePowerPolicySimulate.c)
 *     PopResetActionDefaults @ 0x140584484 (PopResetActionDefaults.c)
 *     PopResetCurrentPolicies @ 0x1405996E0 (PopResetCurrentPolicies.c)
 *     PopIdleInitAoAcDozeS4Timer @ 0x140599DD4 (PopIdleInitAoAcDozeS4Timer.c)
 *     PopSetupHighPerfPowerRequest @ 0x140599E20 (PopSetupHighPerfPowerRequest.c)
 *     PpmEnableWmiInterface @ 0x140599EB0 (PpmEnableWmiInterface.c)
 *     PopSetupAudioEventNotification @ 0x140599F2C (PopSetupAudioEventNotification.c)
 *     PopInitializeTimer @ 0x140599FC0 (PopInitializeTimer.c)
 *     PopSetupFullScrenVideoNotification @ 0x14059A00C (PopSetupFullScrenVideoNotification.c)
 *     PopThermalHandlePreviousShutdown @ 0x14059A040 (PopThermalHandlePreviousShutdown.c)
 *     PpmIdleRegisterDefaultStates @ 0x14059A25C (PpmIdleRegisterDefaultStates.c)
 *     PpmCheckInitProcessors @ 0x1405AFF04 (PpmCheckInitProcessors.c)
 *     PopInitializeHeteroProcessors @ 0x1405B0EA0 (PopInitializeHeteroProcessors.c)
 *     PopLogSleepDisabled @ 0x1405B227C (PopLogSleepDisabled.c)
 *     KeRegisterProcessorChangeCallback @ 0x1405B8714 (KeRegisterProcessorChangeCallback.c)
 *     PopDefaultPolicy @ 0x1405C19C0 (PopDefaultPolicy.c)
 *     PopCheckSkipTick @ 0x1405C27F4 (PopCheckSkipTick.c)
 *     IopDmaOverrideConflict @ 0x1405C73A4 (IopDmaOverrideConflict.c)
 *     PopDiagTraceSkipTick @ 0x1406B9C4C (PopDiagTraceSkipTick.c)
 *     PopInitializeAdpm @ 0x1407D0518 (PopInitializeAdpm.c)
 *     PopThermalInit @ 0x1407D0568 (PopThermalInit.c)
 *     PopCoalescingInitialize @ 0x1407D977C (PopCoalescingInitialize.c)
 *     PopInitializePowerSettingCallbacks @ 0x1407E0AD0 (PopInitializePowerSettingCallbacks.c)
 *     PpmInitHeteroPolicy @ 0x1407E0FAC (PpmInitHeteroPolicy.c)
 *     PpmInitPolicyConfiguration @ 0x1407E18E0 (PpmInitPolicyConfiguration.c)
 *     PpmInitIdlePolicy @ 0x1407E21B8 (PpmInitIdlePolicy.c)
 *     PoFxInitPowerManagement @ 0x1407E2C8C (PoFxInitPowerManagement.c)
 *     PopDiagInitialize @ 0x1407E37EC (PopDiagInitialize.c)
 *     PopUmpoInitializeChannel @ 0x1407E46C0 (PopUmpoInitializeChannel.c)
 *     PopPowerRequestInit @ 0x1407E52C4 (PopPowerRequestInit.c)
 *     PopBatteryInit @ 0x1407E5890 (PopBatteryInit.c)
 *     PopFanReportBootStartDevices @ 0x1407E5C5C (PopFanReportBootStartDevices.c)
 *     PpmCheckInit @ 0x1407E5D74 (PpmCheckInit.c)
 *     PopUmpoInitializeMonitorChannel @ 0x1407E6004 (PopUmpoInitializeMonitorChannel.c)
 *     PopInitializeIrpWorkers @ 0x1407E6434 (PopInitializeIrpWorkers.c)
 *     PpmPerfInitialize @ 0x1407E687C (PpmPerfInitialize.c)
 *     PopInitializePowerSettings @ 0x1407E7764 (PopInitializePowerSettings.c)
 *     PpmInitCoreParkingPolicy @ 0x1407E7B4C (PpmInitCoreParkingPolicy.c)
 *     PopCheckForUpgradeInProgress @ 0x1407E7BD4 (PopCheckForUpgradeInProgress.c)
 *     PopEsInit @ 0x1407E7D84 (PopEsInit.c)
 *     PopWakeSourceInit @ 0x1407E8098 (PopWakeSourceInit.c)
 *     PopTriggerDiagTraceAoAcCapability @ 0x1407E8564 (PopTriggerDiagTraceAoAcCapability.c)
 *     PopInitShutdownList @ 0x1407E85F4 (PopInitShutdownList.c)
 *     PopCheckShutdownMarker @ 0x1407E8B40 (PopCheckShutdownMarker.c)
 *     PoFxRegisterDebugger @ 0x1407E8DD4 (PoFxRegisterDebugger.c)
 *     PopPdcCsCheckSystemVolumeDevice @ 0x1407E9120 (PopPdcCsCheckSystemVolumeDevice.c)
 */

char __fastcall PoInitSystem(int a1, __int64 a2)
{
  char v2; // di
  unsigned int v6; // ecx
  unsigned __int8 v12; // bl
  unsigned __int8 v13; // si
  char v14; // bl
  LARGE_INTEGER PerformanceFrequency; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v16[20]; // [rsp+48h] [rbp-50h] BYREF
  int v17; // [rsp+5Ch] [rbp-3Ch]
  int v18; // [rsp+60h] [rbp-38h]
  int v19; // [rsp+64h] [rbp-34h]
  int v20; // [rsp+68h] [rbp-30h]
  int v21; // [rsp+6Ch] [rbp-2Ch]

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
    qword_14032EB68 = (__int64)&PopIrpList;
    PopIrpList = (__int64)&PopIrpList;
    qword_14032E268 = (__int64)&PopInrushIrpList;
    PopInrushIrpList = (__int64)&PopInrushIrpList;
    PopIrpLock = 0LL;
    ExInitializeNPagedLookasideList(&PopIrpDataLookaside, 0LL, 0LL, 0x200u, 0xF8uLL, 0x72496F50u, 0);
    KiInitializeMutant((__int64)&PopWdiTimerMutex, 0, 1);
    PopWdiTimer = 8LL;
    PopWdiCurrentScenario = (__int64)&NullGuid;
    qword_14032D930 = (__int64)&qword_14032D928;
    qword_14032D928 = (__int64)&qword_14032D928;
    qword_14032D978 = (__int64)PopWdiTimerCallback;
    qword_14032D9B0 = (__int64)PopWdiTimerWorkerThread;
    PopWdiCurrentScenarioInstanceId = 0;
    qword_14032D938 = 0LL;
    qword_14032D958 = 0LL;
    PopWdiTimerTimeoutValue = -50000000LL;
    PopWdiTimerDpc = 275;
    qword_14032D980 = 0LL;
    qword_14032D998 = 0LL;
    qword_14032D970 = 0LL;
    qword_14032D9B8 = 0LL;
    PopWdiTimerWorker = 0LL;
    PopMonitorOffDueToSleep = 0;
    PpmCheckInit();
    if ( (int)PopInitializeIrpWorkers() < 0 )
      return v2;
    PopIrpSerialLock = 0LL;
    qword_14032E288 = 0LL;
    qword_14032E2B8 = (__int64)&qword_14032E2B0;
    qword_14032E2B0 = (__int64)&qword_14032E2B0;
    qword_14032E298 = (__int64)&PopIrpSerialList;
    PopIrpSerialList = (__int64)&PopIrpSerialList;
    qword_14032E2D8 = (__int64)&PopRequestedIrps;
    PopRequestedIrps = (__int64)&PopRequestedIrps;
    PopTransitionLock.Header.WaitListHead.Blink = &PopTransitionLock.Header.WaitListHead;
    PopTransitionLock.Header.WaitListHead.Flink = &PopTransitionLock.Header.WaitListHead;
    qword_14032EB38 = (__int64)&PowerStateDisableReasonListHead;
    PowerStateDisableReasonListHead = (__int64)&PowerStateDisableReasonListHead;
    qword_14032F788 = (__int64)&qword_14032F780;
    qword_14032F780 = (__int64)&qword_14032F780;
    qword_14032F7A8 = (__int64)&PopDisableSleepList;
    PopDisableSleepList = (__int64)&PopDisableSleepList;
    PpmIdlePolicyLock = 0LL;
    PpmIdleVetoLock = 0LL;
    LOWORD(dword_14032E2A8) = 1;
    BYTE2(dword_14032E2A8) = 6;
    dword_14032E2AC = 1;
    PopIrpSerialListLength = 0;
    PopInrushPending = 0;
    PopInrushIrpPointer = 0LL;
    PopInrushIrpReferenceCount = 0;
    PopWorkerLock = 0LL;
    LOWORD(PopTransitionLock.Header.Lock) = 1;
    PopTransitionLock.Header.Size = 6;
    PopTransitionLock.Header.SignalState = 1;
    LODWORD(PopDisableSleepMutex) = 1;
    qword_14032F768 = 0LL;
    dword_14032F770 = 0;
    word_14032F778 = 1;
    byte_14032F77A = 6;
    dword_14032F77C = 0;
    PopInitShutdownList();
    v6 = PopIdleScanInterval;
    qword_14032E308 = (__int64)&PopIdleDetectList;
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
    PopPolicyWorker.Parameter = (void *)0x80000000LL;
    PopPolicyWorker.List.Flink = 0LL;
    PopWorkerStatus = -1;
    ExInitializeResourceLite(&PopPolicyLock);
    PopAwaymodeLock = 0LL;
    qword_14032E628 = (__int64)&qword_14032E620;
    qword_14032E620 = (__int64)&qword_14032E620;
    LODWORD(PopVolumeLock) = 1;
    PopPowerSettingCallbackReturned.Header.WaitListHead.Blink = &PopPowerSettingCallbackReturned.Header.WaitListHead;
    PopPowerSettingCallbackReturned.Header.WaitListHead.Flink = &PopPowerSettingCallbackReturned.Header.WaitListHead;
    qword_14032E3D8 = (__int64)&PopVolumeDevices;
    PopVolumeDevices = (__int64)&PopVolumeDevices;
    qword_14032E3C8 = (__int64)&PopSwitches;
    PopSwitches = (__int64)&PopSwitches;
    qword_14032E3F8 = (__int64)&PopFans;
    PopFans = (__int64)&PopFans;
    qword_14032E608 = 0LL;
    dword_14032E610 = 0;
    word_14032E618 = 1;
    byte_14032E61A = 6;
    dword_14032E61C = 0;
    LOWORD(PopPowerSettingCallbackReturned.Header.Lock) = 0;
    PopPowerSettingCallbackReturned.Header.Size = 6;
    PopPowerSettingCallbackReturned.Header.SignalState = 0;
    qword_14032E3E8 = (__int64)&PopThermal;
    PopThermal = (__int64)&PopThermal;
    IoAddTriageDumpDataBlock((int)&PopThermal, 16);
    qword_14032E408 = (__int64)&PopActionWaiters;
    PopActionWaiters = (__int64)&PopActionWaiters;
    PopResetActionDefaults();
    PopPolicy = dword_14032E764;
    PopDefaultPolicy(dword_14032E764);
    LODWORD(PopAdminPolicy) = 2;
    *(_QWORD *)((char *)&PopAdminPolicy + 4) = 5LL;
    HIDWORD(PopAdminPolicy) = -1;
    qword_14032E430 = 0xFFFFFFFF00000000uLL;
    PopFullWake = 1;
    PopCoolingMode = 0;
    dword_140353880 = -1;
    PpmInitPolicyConfiguration();
    PpmInitIdlePolicy();
    PpmPerfInitialize();
    PpmInitCoreParkingPolicy();
    PpmInitHeteroPolicy();
    PpmIdleRegisterDefaultStates();
    PopInitializePowerSettings();
    PopInitilizeAcDcSettings();
    PopPolicyDeviceLock = 0LL;
    qword_14032DF48 = 0LL;
    PopBatteryInit();
    PopFanLock = 0LL;
    qword_14032DF38 = 0LL;
    PopThermalInit();
    PopCoolingExtensionLock = 0LL;
    qword_14032E0A8 = 0LL;
    qword_14032E0B8 = (__int64)&PopCoolingExtensionList;
    PopCoolingExtensionList = (__int64)&PopCoolingExtensionList;
    qword_14032E4C8 = (__int64)PopShutdownHandler;
    dword_14032E4C0 = 4;
    byte_14032E4C4 = 0;
    PopWakeSourceInit();
    *(_QWORD *)&PpmWmiIdleAccountingTimer.Header.Lock = 8LL;
    PopAwayModeUserPresenceTimer = 8LL;
    PpmWmiIdleAccountingTimer.Header.WaitListHead.Blink = &PpmWmiIdleAccountingTimer.Header.WaitListHead;
    PpmWmiIdleAccountingTimer.Header.WaitListHead.Flink = &PpmWmiIdleAccountingTimer.Header.WaitListHead;
    qword_14032D578 = (__int64)PpmWmiIdleAccountingProcedure;
    qword_14036C8C0 = (__int64)&qword_14036C8B8;
    qword_14036C8B8 = (__int64)&qword_14036C8B8;
    PopUserPresentCompletedEvent.Header.WaitListHead.Blink = &PopUserPresentCompletedEvent.Header.WaitListHead;
    PopUserPresentCompletedEvent.Header.WaitListHead.Flink = &PopUserPresentCompletedEvent.Header.WaitListHead;
    qword_14032F738 = (__int64)&qword_14032F730;
    qword_14032F730 = (__int64)&qword_14032F730;
    PpmWmiIdleAccountingTimer.DueTime.QuadPart = 0LL;
    *(_QWORD *)&PpmWmiIdleAccountingTimer.Processor = 0LL;
    PpmWmiIdleAccountingDpc = 275;
    qword_14032D580 = 0LL;
    qword_14032D598 = 0LL;
    qword_14032D570 = 0LL;
    PopUserPresentSetStatus = 0;
    qword_14036C8C8 = 0LL;
    qword_14036C8E8 = 0LL;
    LOWORD(PopUserPresentCompletedEvent.Header.Lock) = 1;
    PopUserPresentCompletedEvent.Header.Size = 6;
    PopUserPresentCompletedEvent.Header.SignalState = 0;
    word_14032F728 = 1;
    byte_14032F72A = 6;
    dword_14032F72C = 1;
    PoFxInitPowerManagement();
    dword_14032E86C = 0;
    qword_14032E870 = 100LL;
    qword_14032E878 = 100LL;
    dword_14032E880 = 100;
  }
  if ( a1 != 1 )
    goto LABEL_3;
  _RAX = 1LL;
  __asm { cpuid }
  v18 = _RAX;
  v19 = _RBX;
  v20 = _RCX;
  v21 = _RDX;
  if ( (_RCX & 0x80000000) != 0 )
  {
    PpmExitLatencyCheckEnabled = 0;
    PpmExitLatencySamplingPercentage = 0;
  }
  PopUmpoInitializeChannel();
  PopUmpoInitializeMonitorChannel();
  PopPdcDeviceListLock = 0LL;
  qword_14032DD18 = (__int64)&PopPdcDeviceList;
  PopPdcDeviceList = (__int64)&PopPdcDeviceList;
  PopEsInit();
  PopInitializePowerSettingCallbacks();
  if ( (int)PopPowerRequestInit() >= 0 )
  {
LABEL_3:
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
      PpmAcquireLock((struct _KTHREAD **)&PopFxSystemLatencyLock);
      PoFxSendSystemLatencyUpdate();
      PpmReleaseLock(&PopFxSystemLatencyLock);
      PopPdcCsCheckSystemVolumeDevice();
    }
    if ( a1 == 3 )
    {
      if ( (int)PopDiagInitialize() < 0 )
        return v2;
      PopTriggerDiagTraceAoAcCapability();
      PopFanReportBootStartDevices();
      v12 = 1;
      v13 = 1;
      if ( PopSkipTickPolicy )
      {
        if ( PopSkipTickPolicy == 1 )
        {
          v13 = 0;
          if ( (int)HalGetInterruptTargetInformation(2LL, 0LL, v16) >= 0 )
          {
            PopApicMode = v17;
            v12 = !PopCheckSkipTick();
          }
        }
        else
        {
          v12 = 0;
        }
      }
      PoDisableSkipTick = v12;
      if ( v12 || v13 )
        PopDiagTraceSkipTick(v12, v13);
      PpmInitIllegalThrottleLogging();
      PopCheckShutdownMarker(a2);
      if ( off_140321A90() || (unsigned int)(PoOffCrashConfigTable - 1) <= 1 && DWORD1(PoOffCrashConfigTable) )
        PopDiagTraceAbnormalReset(SDWORD1(PoOffCrashConfigTable));
      PopAcquirePolicyLock();
      PopCheckForUpgradeInProgress();
      if ( InitIsWinPEMode )
        PopLogSleepDisabled(16, 15, 0LL, 0LL);
      if ( byte_14032E534 )
        PopLogSleepDisabled(17, 7, 0LL, 0LL);
      PopInitializePowerPolicySimulate();
      if ( (PopSimulate & 1) != 0 )
      {
        byte_14032E53E = 1;
        *(_QWORD *)&xmmword_14032E540 = 0x19000000064LL;
        *((_QWORD *)&xmmword_14032E540 + 1) = 0xFFFF0000000ALL;
        LODWORD(qword_14032E560) = 4;
        dword_14032E568 = 2;
      }
      if ( (PopSimulate & 2) != 0 )
      {
        PopCapabilities = 16843009;
        word_14032E524 = 257;
        byte_14032E526 = 1;
        unk_14032E531 = 257;
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
        v14 = PopDripsWatchdogAction;
        if ( (unsigned int)(PopPlatformAoAcOverride - 1) <= 0xFFFFFFFD )
        {
          if ( (PopDripsWatchdogAction & 0x10) != 0 )
            v14 = PopDripsWatchdogAction | 2;
          else
            v14 = PopDripsWatchdogAction & 0xFD;
        }
        ExInitializeResourceLite(&stru_140357168);
        byte_140357114 = v14;
        PopDripsWatchdog = PopDripsWatchdogTimeout;
        PopInitializeTimer(
          (__int64)&unk_1403571D0,
          (__int64)PopDripsWatchdogTimerCallbackRoutine,
          (__int64)&PopDripsWatchdog,
          (__int64)PopDripsWatchdogWorkerRoutine,
          (__int64)&PopDripsWatchdog);
      }
      PopSetupAudioEventNotification();
      PopCheckPowerSourceAfterRtcWakeInitialize();
      PopSetupFullScrenVideoNotification();
      PopThermalHandlePreviousShutdown();
    }
    return 1;
  }
  return v2;
}
