/*
 * XREFs of EtwpInitialize @ 0x1407C0848
 * Callers:
 *     EtwInitialize @ 0x140595964 (EtwInitialize.c)
 * Callees:
 *     KiInitializeMutant @ 0x1400756B8 (KiInitializeMutant.c)
 *     KeRegisterBugCheckReasonCallback @ 0x140156464 (KeRegisterBugCheckReasonCallback.c)
 *     ExRegisterCallback @ 0x140158AE8 (ExRegisterCallback.c)
 *     ZwUpdateWnfStateData @ 0x140182610 (ZwUpdateWnfStateData.c)
 *     KeBugCheck @ 0x140182740 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExAllocateCacheAwareRundownProtection @ 0x14040E2E8 (ExAllocateCacheAwareRundownProtection.c)
 *     EtwpUpdateFileInfoDriverState @ 0x14054AE18 (EtwpUpdateFileInfoDriverState.c)
 *     EtwRegister @ 0x14054C680 (EtwRegister.c)
 *     PsRegisterMonitorServerSilo @ 0x1405936B8 (PsRegisterMonitorServerSilo.c)
 *     PsStartMonitorServerSilo @ 0x14059391C (PsStartMonitorServerSilo.c)
 *     EtwInitializeProcessor @ 0x14059597C (EtwInitializeProcessor.c)
 *     WdipSemInitialize @ 0x1405ADC60 (WdipSemInitialize.c)
 *     TraceLoggingRegisterEx @ 0x1405BCF34 (TraceLoggingRegisterEx.c)
 *     EtwpInitializeProviderTraits @ 0x1405C2B50 (EtwpInitializeProviderTraits.c)
 *     EtwpInitializeStackLookasideList @ 0x1405C2C40 (EtwpInitializeStackLookasideList.c)
 *     EtwpInitializeRegistration @ 0x1407DF408 (EtwpInitializeRegistration.c)
 *     EtwpTraceSystemInitialization @ 0x1407E549C (EtwpTraceSystemInitialization.c)
 *     EtwpReadConfigParameters @ 0x1407E694C (EtwpReadConfigParameters.c)
 *     PerfDiagInitialize @ 0x1407E6FFC (PerfDiagInitialize.c)
 *     EtwpInitializeRealTimeConnection @ 0x1407E8274 (EtwpInitializeRealTimeConnection.c)
 *     EtwpInitializeSecurity @ 0x1407E8324 (EtwpInitializeSecurity.c)
 */

void __fastcall EtwpInitialize(int a1)
{
  unsigned __int8 CurrentIrql; // cl
  __int64 v2; // rdx
  LARGE_INTEGER v3; // rax
  unsigned int v4; // edi
  __int64 v5; // rsi
  PEX_RUNDOWN_REF_CACHE_AWARE CacheAwareRundownProtection; // rax
  int v7; // eax
  _WORD *v8; // rdi
  __int64 i; // rcx
  unsigned int j; // edi
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rdx
  _QWORD v14[6]; // [rsp+40h] [rbp-48h] BYREF

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
    v4 = 0;
    v5 = 0LL;
    do
    {
      WmipLoggerContext[v5] = 1LL;
      CacheAwareRundownProtection = ExAllocateCacheAwareRundownProtection(NonPagedPoolNx, 0x63777445u);
      EtwpLoggerRundown[v5] = (__int64)CacheAwareRundownProtection;
      if ( !CacheAwareRundownProtection )
        KeBugCheckEx(0x11Du, 8uLL, v4, 0LL, 0LL);
      ++v4;
      ++v5;
    }
    while ( v4 < 0x40 );
    v7 = EtwpInitializeSecurity();
    if ( v7 < 0 )
      KeBugCheckEx(0x11Du, 1uLL, v7, 0LL, 0LL);
    v8 = (_WORD *)0xFFFFF78000000380LL;
    for ( i = 9LL; i; --i )
      *v8++ = 0;
    for ( j = 0; j < (unsigned int)KeNumberProcessors_0; ++j )
    {
      if ( j >= (unsigned int)KeNumberProcessors_0 )
        v11 = 0LL;
      else
        v11 = KiProcessorBlock[j];
      v12 = EtwInitializeProcessor(v11);
      if ( v12 < 0 )
        KeBugCheckEx(0x11Du, 2uLL, v12, j, 0LL);
    }
    KiInitializeMutant((__int64)&EtwpGroupMaskMutex, 0, 1);
    KiInitializeMutant((__int64)&EtwpStartTraceMutex, 0, 1);
    KiInitializeMutant((__int64)&EtwpCrimsonMaskMutex, 0, 1);
    EtwpSecurityLock = 0LL;
    EtwpInitializeStackLookasideList();
    EtwpReadConfigParameters();
    EtwpInitializeRegistration();
    EtwpInitializeRealTimeConnection();
    v13 = 0LL;
    if ( (_DWORD)KeNumberProcessors_0 )
      v13 = KiProcessorBlock[0];
    EtwCPUSpeedInMHz = *(_DWORD *)(v13 + 1524);
    KeQueryPerformanceCounter(&EtwPerfFreq);
    *(_QWORD *)&EtwpMemInfoTimer.Header.Lock = 9LL;
    EtwpAdjustBuffersWorkItem.WorkerRoutine = (void (__fastcall *)(void *))EtwpAdjustTraceBuffers;
    EtwpAdjustBuffersWorkItem.Parameter = &EtwpBufferAdjustmentActive;
    EtwpMemInfoTimer.Header.WaitListHead.Blink = &EtwpMemInfoTimer.Header.WaitListHead;
    EtwpMemInfoTimer.Header.WaitListHead.Flink = &EtwpMemInfoTimer.Header.WaitListHead;
    qword_140327518 = (__int64)EtwpLogMemInfoDpc;
    EtwpBufferAdjustmentCount = 8;
    EtwpAdjustBuffersWorkItem.List.Flink = 0LL;
    EtwpMemInfoTimer.DueTime.QuadPart = 0LL;
    *(_QWORD *)&EtwpMemInfoTimer.Processor = 0LL;
    EtwpMemInfoDpc = 275;
    qword_140327520 = 0LL;
    qword_140327538 = 0LL;
    qword_140327510 = 0LL;
    EtwpInitializeProviderTraits();
    EtwRegister(
      &EventTracingProvGuid,
      (PETWENABLECALLBACK)EtwpTracingProvEnableCallback,
      0LL,
      &EtwpEventTracingProvRegHandle);
    if ( !ExRegisterCallback((PCALLBACK_OBJECT)ExCbPowerState, (PCALLBACK_FUNCTION)EtwpPowerStateCallback, 0LL) )
      KeBugCheck(0x11Du);
    EtwpBugCheckCallback.State = 0;
    KeRegisterBugCheckReasonCallback(
      &EtwpBugCheckCallback,
      (PKBUGCHECK_REASON_CALLBACK_ROUTINE)EtwpBugCheckMultiPartCallback,
      KbCallbackSecondaryMultiPartDumpData,
      (PUCHAR)&EtwpComponentName);
    memset(v14, 0, sizeof(v14));
    WORD1(v14[0]) |= 1u;
    v14[1] = EtwpServerSiloCreateNotify;
    LOWORD(v14[0]) = 1;
    v14[2] = EtwpServerSiloTerminateNotify;
    v14[5] = AlpcMessageDeleteProcedure;
    PsRegisterMonitorServerSilo(0LL, L"NTOS_ETW", (__int64)v14, &EtwSiloMonitor);
    PsStartMonitorServerSilo(EtwSiloMonitor);
    WdipSemInitialize();
    PerfDiagInitialize();
    EtwRegister(&KernelProvGuid, (PETWENABLECALLBACK)EtwpKernelProvEnableCallback, 0LL, &EtwKernelProvRegHandle);
    TraceLoggingRegisterEx(&stru_140320BE0, 0LL, 0LL);
    EtwRegister(&PsProvGuid, (PETWENABLECALLBACK)EtwpCrimsonProvEnableCallback, (PVOID)1, &EtwpPsProvRegHandle);
    TraceLoggingRegisterEx(
      &stru_140320BA0,
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
    EtwRegister(&SecurityMitigationsProviderGuid, 0LL, 0LL, &EtwSecurityMitigationsRegHandle);
    EtwpInitialized = 1;
    ZwUpdateWnfStateData(&WNF_ETW_SUBSYSTEM_INITIALIZED, 0LL, 0, 0LL, 0LL, 0, 0);
    ZwUpdateWnfStateData(&WNF_ETW_SUBSYSTEM_INITIALIZED, 0LL, 0, 0LL, 0LL, 0, 0);
    EtwpTraceSystemInitialization();
  }
}
