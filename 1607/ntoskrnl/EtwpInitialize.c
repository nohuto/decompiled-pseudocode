/*
 * XREFs of EtwpInitialize @ 0x1407A0D3C
 * Callers:
 *     EtwInitialize @ 0x1405531AC (EtwInitialize.c)
 * Callees:
 *     KsrGetFirmwareInformation_0 @ 0x140001288 (KsrGetFirmwareInformation_0.c)
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     KeInitializeTimer2 @ 0x14007DDC8 (KeInitializeTimer2.c)
 *     KiInitializeMutant @ 0x140087474 (KiInitializeMutant.c)
 *     KeGetPrcb @ 0x1400D1E98 (KeGetPrcb.c)
 *     KeRegisterBugCheckReasonCallback @ 0x14012E220 (KeRegisterBugCheckReasonCallback.c)
 *     ExRegisterCallback @ 0x1401302A4 (ExRegisterCallback.c)
 *     TlgRegisterAggregateProviderEx @ 0x140149B64 (TlgRegisterAggregateProviderEx.c)
 *     ZwUpdateWnfStateData @ 0x14015D930 (ZwUpdateWnfStateData.c)
 *     KeBugCheck @ 0x14015DA60 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     EtwpUpdateFileInfoDriverState @ 0x140496D14 (EtwpUpdateFileInfoDriverState.c)
 *     ExCreateCallback @ 0x1404CCE20 (ExCreateCallback.c)
 *     TraceLoggingRegisterEx @ 0x140546ED4 (TraceLoggingRegisterEx.c)
 *     EtwRegister @ 0x14054A484 (EtwRegister.c)
 *     EtwInitializeProcessor @ 0x1405531DC (EtwInitializeProcessor.c)
 *     EtwInitializeSiloState @ 0x140563728 (EtwInitializeSiloState.c)
 *     WdipSemInitialize @ 0x140564C14 (WdipSemInitialize.c)
 *     EtwpInitializeProviderTraits @ 0x140581988 (EtwpInitializeProviderTraits.c)
 *     EtwpInitializeStackLookasideList @ 0x140581BB8 (EtwpInitializeStackLookasideList.c)
 *     EtwpInitializeRealTimeConnection @ 0x1407A2280 (EtwpInitializeRealTimeConnection.c)
 *     EtwpInitializeRegistration @ 0x1407A2330 (EtwpInitializeRegistration.c)
 *     EtwpTraceSystemInitialization @ 0x1407A9CCC (EtwpTraceSystemInitialization.c)
 *     EtwpReadConfigParameters @ 0x1407BAF90 (EtwpReadConfigParameters.c)
 *     PerfDiagInitialize @ 0x1407BBA24 (PerfDiagInitialize.c)
 *     EtwpInitializeSecurity @ 0x1407BC7EC (EtwpInitializeSecurity.c)
 */

void __fastcall EtwpInitialize(int a1)
{
  unsigned __int8 CurrentIrql; // cl
  __int64 v2; // rdx
  LARGE_INTEGER v3; // rax
  int v4; // eax
  __int64 v5; // rcx
  _WORD *v6; // rdi
  ULONG i; // edi
  __int64 Prcb; // rax
  int v9; // eax
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-48h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-38h] BYREF

  if ( a1 )
  {
    if ( a1 == 1 )
      EtwpUpdateFileInfoDriverState(&PerfGlobalGroupMask, &PerfGlobalGroupMask, 1, 0);
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v2 = KeBootTimeBias;
    EtwpRefTimeSystem = MEMORY[0xFFFFF78000000014];
    v3 = KeBootTime;
    __writecr8(CurrentIrql);
    EtwpBootTime = v3.QuadPart - v2;
    EtwpRefTimePerfCounter = KeQueryPerformanceCounter(0LL).QuadPart;
    EtwpRefTimeCycle = __rdtsc();
    v4 = EtwpInitializeSecurity();
    if ( v4 < 0 )
      KeBugCheckEx(0x11Du, 1uLL, v4, 0LL, 0LL);
    v5 = 9LL;
    v6 = (_WORD *)0xFFFFF78000000380LL;
    while ( v5 )
    {
      *v6++ = 0;
      --v5;
    }
    for ( i = 0; i < (unsigned int)KeNumberProcessors_0; ++i )
    {
      Prcb = KeGetPrcb(i);
      v9 = EtwInitializeProcessor(Prcb);
      if ( v9 < 0 )
        KeBugCheckEx(0x11Du, 2uLL, v9, i, 0LL);
    }
    KiInitializeMutant((__int64)&EtwpGroupMaskMutex, 0, 1);
    KiInitializeMutant((__int64)&EtwpStartTraceMutex, 0, 1);
    KiInitializeMutant((__int64)&EtwpCrimsonMaskMutex, 0, 1);
    EtwpSecurityLock = 0LL;
    EtwpInitializeStackLookasideList();
    EtwpReadConfigParameters();
    EtwpInitializeRegistration();
    EtwpInitializeRealTimeConnection();
    EtwCPUSpeedInMHz = *(_DWORD *)(KeGetPrcb(0) + 1524);
    KeQueryPerformanceCounter(&EtwPerfFreq);
    EtwpAdjustBuffersWorkItem.List.Flink = 0LL;
    EtwpAdjustBuffersWorkItem.WorkerRoutine = (void (__fastcall *)(void *))EtwpAdjustTraceBuffers;
    EtwpAdjustBuffersWorkItem.Parameter = &EtwpBufferAdjustmentActive;
    EtwpBufferAdjustmentCount = 8;
    KeInitializeTimer2((__int64)&EtwpMemInfoTimer, (__int64)EtwpLogMemInfoTimerCallback, 0LL, 8);
    EtwpInitializeProviderTraits();
    if ( !ExRegisterCallback((PCALLBACK_OBJECT)ExCbPowerState, (PCALLBACK_FUNCTION)EtwpPowerStateCallback, 0LL) )
      KeBugCheck(0x11Du);
    EtwpLoggerSaveEvent = 0LL;
    if ( (int)KsrGetFirmwareInformation_0() >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"\\Callback\\SoftRestart");
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 80;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ExCreateCallback(&EtwpKsrCallbackObject, &ObjectAttributes, 0, 1u) >= 0 )
        ExRegisterCallback(EtwpKsrCallbackObject, (PCALLBACK_FUNCTION)EtwpKsrCallback, 0LL);
    }
    if ( (int)EtwInitializeSiloState(0LL) < 0 )
      KeBugCheck(0x11Du);
    EtwpBugCheckCallback.State = 0;
    KeRegisterBugCheckReasonCallback(
      &EtwpBugCheckCallback,
      (PKBUGCHECK_REASON_CALLBACK_ROUTINE)EtwpBugCheckMultiPartCallback,
      KbCallbackSecondaryMultiPartDumpData,
      (PUCHAR)&EtwpComponentName);
    EtwRegister(
      &EventTracingProvGuid,
      (PETWENABLECALLBACK)EtwpTracingProvEnableCallback,
      0LL,
      &EtwpEventTracingProvRegHandle);
    WdipSemInitialize();
    PerfDiagInitialize();
    EtwRegister(&KernelProvGuid, (PETWENABLECALLBACK)EtwpKernelProvEnableCallback, 0LL, &EtwKernelProvRegHandle);
    TraceLoggingRegisterEx(&stru_1402F3680, 0LL, 0LL);
    EtwRegister(&PsProvGuid, (PETWENABLECALLBACK)EtwpCrimsonProvEnableCallback, (PVOID)1, &EtwpPsProvRegHandle);
    TlgRegisterAggregateProviderEx(
      &stru_1402F3640,
      (TLG_PENABLECALLBACK)EtwpTraceLoggingProvEnableCallback,
      &PsProvTraceLoggingGuid);
    EtwRegister(&NetProvGuid, (PETWENABLECALLBACK)EtwpCrimsonProvEnableCallback, (PVOID)0x10000, &EtwpNetProvRegHandle);
    EtwRegister(&DiskProvGuid, (PETWENABLECALLBACK)EtwpCrimsonProvEnableCallback, (PVOID)0x100, &EtwpDiskProvRegHandle);
    EtwRegister(
      &FileProvGuid,
      (PETWENABLECALLBACK)EtwpCrimsonProvEnableCallback,
      (PVOID)0x2000000,
      &EtwpFileProvRegHandle);
    EtwRegister(&RegistryProvGuid, (PETWENABLECALLBACK)EtwpRegTraceEnableCallback, 0LL, &EtwpRegTraceHandle);
    EtwRegister(
      &MemoryProvGuid,
      (PETWENABLECALLBACK)EtwpCrimsonProvEnableCallback,
      (PVOID)0x20000001,
      &EtwpMemoryProvRegHandle);
    EtwRegister(&MS_Windows_Kernel_AppCompat_Provider, 0LL, 0LL, &EtwAppCompatProvRegHandle);
    EtwRegister(&KernelAuditApiCallsGuid, 0LL, 0LL, &EtwApiCallsProvRegHandle);
    EtwRegister(&CVEAuditProviderGuid, 0LL, 0LL, &EtwCVEAuditProvRegHandle);
    EtwRegister(&SecurityMitigationsProviderGuid, 0LL, 0LL, &EtwSecurityMitigationsRegHandle);
    EtwRegister(&ThreatIntProviderGuid, 0LL, 0LL, &EtwThreatIntProvRegHandle);
    EtwpInitialized = 1;
    ZwUpdateWnfStateData(&WNF_ETW_SUBSYSTEM_INITIALIZED, 0LL, 0, 0LL, 0LL, 0, 0);
    ZwUpdateWnfStateData(&WNF_ETW_SUBSYSTEM_INITIALIZED, 0LL, 0, 0LL, 0LL, 0, 0);
    EtwpTraceSystemInitialization();
  }
}
