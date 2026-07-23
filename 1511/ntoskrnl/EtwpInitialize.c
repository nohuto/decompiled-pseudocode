/*
 * XREFs of EtwpInitialize @ 0x140757334
 * Callers:
 *     EtwInitialize @ 0x14052554C (EtwInitialize.c)
 * Callees:
 *     KiInitializeMutant @ 0x14007CCC0 (KiInitializeMutant.c)
 *     KeInitializeTimer2 @ 0x140093234 (KeInitializeTimer2.c)
 *     KeGetPrcb @ 0x14009DB9C (KeGetPrcb.c)
 *     KeRegisterBugCheckReasonCallback @ 0x140123974 (KeRegisterBugCheckReasonCallback.c)
 *     ExRegisterCallback @ 0x14012577C (ExRegisterCallback.c)
 *     ZwUpdateWnfStateData @ 0x140153CA0 (ZwUpdateWnfStateData.c)
 *     KeBugCheck @ 0x140153DB0 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     EtwpUpdateFileInfoDriverState @ 0x1404B86A4 (EtwpUpdateFileInfoDriverState.c)
 *     EtwRegister @ 0x1404CC744 (EtwRegister.c)
 *     EtwpInitializeStackLookasideList @ 0x140524484 (EtwpInitializeStackLookasideList.c)
 *     EtwpInitializeProviderTraits @ 0x1405244A8 (EtwpInitializeProviderTraits.c)
 *     TraceLoggingRegisterEx @ 0x14052451C (TraceLoggingRegisterEx.c)
 *     EtwInitializeProcessor @ 0x140525564 (EtwInitializeProcessor.c)
 *     PsRegisterMonitorServerSilo @ 0x140526694 (PsRegisterMonitorServerSilo.c)
 *     PsStartMonitorServerSilo @ 0x1405268B8 (PsStartMonitorServerSilo.c)
 *     WdipSemInitialize @ 0x14053279C (WdipSemInitialize.c)
 *     EtwpInitializeSecurity @ 0x1407556CC (EtwpInitializeSecurity.c)
 *     EtwpReadConfigParameters @ 0x140755760 (EtwpReadConfigParameters.c)
 *     EtwpTraceSystemInitialization @ 0x140755A0C (EtwpTraceSystemInitialization.c)
 *     PerfDiagInitialize @ 0x140755CA0 (PerfDiagInitialize.c)
 *     EtwpInitializeRealTimeConnection @ 0x14075B5BC (EtwpInitializeRealTimeConnection.c)
 *     EtwpInitializeRegistration @ 0x14075B66C (EtwpInitializeRegistration.c)
 */

void __fastcall EtwpInitialize(int a1)
{
  unsigned __int8 CurrentIrql; // cl
  __int64 v2; // rdx
  LARGE_INTEGER v3; // rax
  NTSTATUS v4; // eax
  __int64 v5; // r8
  __int64 v6; // rcx
  _WORD *v7; // rdi
  ULONG v8; // ebx
  __int64 Prcb; // rax
  int v10; // eax
  __int64 v11; // r8
  __int64 v12; // r8
  _QWORD v13[6]; // [rsp+40h] [rbp-38h] BYREF

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
    v6 = 9LL;
    v7 = (_WORD *)0xFFFFF78000000380LL;
    v8 = 0;
    while ( v6 )
    {
      *v7++ = 0;
      --v6;
    }
    if ( (_DWORD)KeNumberProcessors_0 )
    {
      do
      {
        Prcb = KeGetPrcb(v8);
        v10 = EtwInitializeProcessor(Prcb);
        if ( v10 < 0 )
          KeBugCheckEx(0x11Du, 2uLL, v10, v8, 0LL);
        ++v8;
      }
      while ( v8 < (unsigned int)KeNumberProcessors_0 );
    }
    LOBYTE(v5) = 1;
    KiInitializeMutant((__int64)&EtwpGroupMaskMutex, 0LL, v5);
    LOBYTE(v11) = 1;
    KiInitializeMutant((__int64)&EtwpStartTraceMutex, 0LL, v11);
    LOBYTE(v12) = 1;
    KiInitializeMutant((__int64)&EtwpCrimsonMaskMutex, 0LL, v12);
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
    KeInitializeTimer2((__int64)EtwpMemInfoTimer, (__int64)EtwpLogMemInfoTimerCallback, 0LL, 8);
    EtwpInitializeProviderTraits();
    if ( !ExRegisterCallback((PCALLBACK_OBJECT)ExCbPowerState, (PCALLBACK_FUNCTION)EtwpPowerStateCallback, 0LL) )
      KeBugCheck(0x11Du);
    memset(v13, 0, sizeof(v13));
    LODWORD(v13[0]) = __PAIR32__(WORD1(v13[0]), 1) & 0xFFFEFFFF;
    v13[1] = EtwpServerSiloCreateNotify;
    v13[2] = EtwpServerSiloTerminateNotify;
    PsRegisterMonitorServerSilo(0LL, L"NTOS_ETW", (__int64)v13, &EtwSiloMonitor);
    PsStartMonitorServerSilo(EtwSiloMonitor);
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
    TraceLoggingRegisterEx(&stru_1402D1AD0, 0LL, 0LL);
    EtwRegister(&PsProvGuid, (PETWENABLECALLBACK)EtwpCrimsonProvEnableCallback, (PVOID)1, &EtwpPsProvRegHandle);
    TraceLoggingRegisterEx(
      &stru_1402D1A00,
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
    EtwpInitialized = 1;
    ZwUpdateWnfStateData(&WNF_ETW_SUBSYSTEM_INITIALIZED, 0LL, 0, 0LL, 0LL, 0, 0);
    ZwUpdateWnfStateData(&WNF_ETW_SUBSYSTEM_INITIALIZED, 0LL, 0, 0LL, 0LL, 0, 0);
    EtwpTraceSystemInitialization();
  }
}
