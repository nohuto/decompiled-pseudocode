/*
 * XREFs of EtwpReleaseLoggerContext @ 0x14046D1BC
 * Callers:
 *     EtwpAdjustTraceBuffers @ 0x14009BAD0 (EtwpAdjustTraceBuffers.c)
 *     EtwpRegisterUMGuid @ 0x140435640 (EtwpRegisterUMGuid.c)
 *     EtwpAddRegEntryToGroup @ 0x14046CBFC (EtwpAddRegEntryToGroup.c)
 *     EtwpUpdateEnableMask @ 0x14046D0E0 (EtwpUpdateEnableMask.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x14046D240 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpFlushTrace @ 0x1404B5FCC (EtwpFlushTrace.c)
 *     EtwpRealtimeConnect @ 0x1404B615C (EtwpRealtimeConnect.c)
 *     EtwpRealtimeDisconnectConsumer @ 0x1404B6570 (EtwpRealtimeDisconnectConsumer.c)
 *     EtwpTrackProviderBinary @ 0x1404C015C (EtwpTrackProviderBinary.c)
 *     EtwpUpdateDisallowList @ 0x1404C6270 (EtwpUpdateDisallowList.c)
 *     EtwpStopTrace @ 0x1404CA4D8 (EtwpStopTrace.c)
 *     EtwpLookupLoggerIdByName @ 0x1404CA78C (EtwpLookupLoggerIdByName.c)
 *     EtwpStartLogger @ 0x1404CB420 (EtwpStartLogger.c)
 *     EtwpQueryTrace @ 0x1404CBFCC (EtwpQueryTrace.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x1404CC19C (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpRegisterProvider @ 0x1404CC76C (EtwpRegisterProvider.c)
 *     EtwpEnableGuid @ 0x1404CD4B0 (EtwpEnableGuid.c)
 *     EtwShutdown @ 0x1404F87F0 (EtwShutdown.c)
 *     EtwpProcessThreadImageRundown @ 0x14050074C (EtwpProcessThreadImageRundown.c)
 *     WmiQueryTraceInformation @ 0x140504D90 (WmiQueryTraceInformation.c)
 *     EtwQueryTraceHandleByLoggerName @ 0x140505BCC (EtwQueryTraceHandleByLoggerName.c)
 *     EtwpUpdateTrace @ 0x140545148 (EtwpUpdateTrace.c)
 *     EtwpTracingProvEnableCallback @ 0x14054B854 (EtwpTracingProvEnableCallback.c)
 *     EtwpGetDisallowList @ 0x1406601A0 (EtwpGetDisallowList.c)
 *     EtwpQueryReferenceTime @ 0x1406606E0 (EtwpQueryReferenceTime.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1406627B0 (EtwQueryPerformanceTraceInformation.c)
 *     EtwSetPerformanceTraceInformation @ 0x140662F28 (EtwSetPerformanceTraceInformation.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x140665298 (EtwpCheckLoggerAccessAndDoRundown.c)
 *     EtwpEventTracingCounterSetCallback @ 0x1406A10C4 (EtwpEventTracingCounterSetCallback.c)
 * Callees:
 *     PsDereferenceMonitorContextServerSilo @ 0x1400775C0 (PsDereferenceMonitorContextServerSilo.c)
 *     EtwpGetSiloDriverState @ 0x140077640 (EtwpGetSiloDriverState.c)
 *     KeReleaseMutex @ 0x140087240 (KeReleaseMutex.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1400C33F0 (ExReleaseRundownProtectionCacheAwareEx.c)
 */

void __fastcall EtwpReleaseLoggerContext(__int64 a1, unsigned int *a2, char a3)
{
  __int64 SiloDriverState; // rdi
  __int64 v6; // rbx

  SiloDriverState = 0LL;
  v6 = a1;
  if ( !a1 )
  {
    SiloDriverState = EtwpGetSiloDriverState((PVOID)0xFFFFFFFFFFFFFFFFLL);
    v6 = SiloDriverState;
  }
  if ( a3 )
    KeReleaseMutex((PRKMUTEX)(a2 + 162), 0);
  ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v6 + 8LL * *a2 + 400), 1u);
  if ( SiloDriverState )
    PsDereferenceMonitorContextServerSilo(v6);
}
