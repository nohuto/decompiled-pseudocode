/*
 * XREFs of EtwpGetSiloDriverState @ 0x140077640
 * Callers:
 *     NtTraceEvent @ 0x1400741D0 (NtTraceEvent.c)
 *     EtwpAdjustTraceBuffers @ 0x14009BAD0 (EtwpAdjustTraceBuffers.c)
 *     EtwpEventWriteFull @ 0x14009E960 (EtwpEventWriteFull.c)
 *     EtwpTraceMessageVa @ 0x14009F660 (EtwpTraceMessageVa.c)
 *     EtwTraceEvent @ 0x14012EE88 (EtwTraceEvent.c)
 *     EtwWriteKMSecurityEvent @ 0x14013B1E0 (EtwWriteKMSecurityEvent.c)
 *     EtwpFailLogging @ 0x14020D250 (EtwpFailLogging.c)
 *     EtwSendTraceBuffer @ 0x14020D638 (EtwSendTraceBuffer.c)
 *     EtwTraceRaw @ 0x14020D7A8 (EtwTraceRaw.c)
 *     EtwGetProcessorBuffer @ 0x14020FA98 (EtwGetProcessorBuffer.c)
 *     EtwpWriteUserEvent @ 0x14041BFD0 (EtwpWriteUserEvent.c)
 *     EtwpUnreferenceGuidEntry @ 0x140435D70 (EtwpUnreferenceGuidEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x140435E90 (EtwpFindGuidEntryByGuid.c)
 *     EtwpAddRegEntryToGroup @ 0x14046CBFC (EtwpAddRegEntryToGroup.c)
 *     EtwpUpdateEnableMask @ 0x14046D0E0 (EtwpUpdateEnableMask.c)
 *     EtwpReleaseLoggerContext @ 0x14046D1BC (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x14046D240 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpFreeLoggerContext @ 0x14049D5B0 (EtwpFreeLoggerContext.c)
 *     EtwpUpdateKernelGroupMasks @ 0x1404B8124 (EtwpUpdateKernelGroupMasks.c)
 *     EtwpTrackProviderBinary @ 0x1404C015C (EtwpTrackProviderBinary.c)
 *     EtwpStopLoggerInstance @ 0x1404C989C (EtwpStopLoggerInstance.c)
 *     EtwpStartTrace @ 0x1404CA194 (EtwpStartTrace.c)
 *     EtwpStopTrace @ 0x1404CA4D8 (EtwpStopTrace.c)
 *     EtwpLookupLoggerIdByName @ 0x1404CA78C (EtwpLookupLoggerIdByName.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x1404CC19C (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpGetNextGuidEntry @ 0x1404CCE6C (EtwpGetNextGuidEntry.c)
 *     EtwpAddGuidEntry @ 0x1404CED18 (EtwpAddGuidEntry.c)
 *     EtwShutdown @ 0x1404F87F0 (EtwShutdown.c)
 *     WmiQueryTraceInformation @ 0x140504D90 (WmiQueryTraceInformation.c)
 *     PerfDiagpRestartCKCL @ 0x1405086B0 (PerfDiagpRestartCKCL.c)
 *     EtwpInitializeAutoLoggers @ 0x140526F0C (EtwpInitializeAutoLoggers.c)
 *     EtwpEnableAutoLoggerProviders @ 0x140527308 (EtwpEnableAutoLoggerProviders.c)
 *     EtwpRegisterSecurityProvider @ 0x14054B668 (EtwpRegisterSecurityProvider.c)
 *     EtwpTracingProvEnableCallback @ 0x14054B854 (EtwpTracingProvEnableCallback.c)
 *     EtwpGetDisallowList @ 0x1406601A0 (EtwpGetDisallowList.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1406627B0 (EtwQueryPerformanceTraceInformation.c)
 *     EtwSetPerformanceTraceInformation @ 0x140662F28 (EtwSetPerformanceTraceInformation.c)
 *     EtwpEventTracingCounterSetCallback @ 0x1406A10C4 (EtwpEventTracingCounterSetCallback.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObfReferenceObjectWithTag @ 0x140042AE0 (ObfReferenceObjectWithTag.c)
 *     PspGetJobSilo @ 0x1400776E8 (PspGetJobSilo.c)
 *     PspGetServerSiloForSilo @ 0x140077710 (PspGetServerSiloForSilo.c)
 *     PsGetMonitorContextServerSilo @ 0x1400C82E0 (PsGetMonitorContextServerSilo.c)
 */

__int64 __fastcall EtwpGetSiloDriverState(PVOID Object)
{
  PVOID v1; // rbx
  char v2; // di
  struct _KTHREAD *CurrentThread; // rax
  __int64 JobSilo; // rax
  void *ServerSiloForSilo; // rax
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v1 = Object;
  if ( KeGetCurrentIrql() >= 2u )
    goto LABEL_5;
  if ( Object == (PVOID)-1LL )
  {
    CurrentThread = KeGetCurrentThread();
    if ( *(_QWORD *)&CurrentThread[1].WaitBlockFill11[160] == -3LL )
      JobSilo = PspGetJobSilo(CurrentThread->Process[1].Affinity.Bitmap[16]);
    else
      JobSilo = *(_QWORD *)&CurrentThread[1].WaitBlockFill11[160];
    ServerSiloForSilo = (void *)PspGetServerSiloForSilo(JobSilo);
    v1 = ServerSiloForSilo;
    if ( ServerSiloForSilo )
      ObfReferenceObjectWithTag(ServerSiloForSilo, 0x746C6644u);
    v2 = 1;
  }
  else
  {
    v2 = 0;
  }
  if ( v1 )
  {
    PsGetMonitorContextServerSilo(EtwSiloMonitor, v1, &v7);
    if ( v2 )
      ObfDereferenceObject(v1);
    return v7;
  }
  else
  {
LABEL_5:
    _InterlockedIncrement((volatile signed __int32 *)(EtwpSiloState - 104));
    return EtwpSiloState;
  }
}
