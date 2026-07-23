/*
 * XREFs of EtwpReleaseLoggerContext @ 0x140490C10
 * Callers:
 *     EtwpAdjustTraceBuffers @ 0x140086D7C (EtwpAdjustTraceBuffers.c)
 *     EtwpGetCompressionSettings @ 0x14022A858 (EtwpGetCompressionSettings.c)
 *     EtwpSetCompressionSettings @ 0x14022AD08 (EtwpSetCompressionSettings.c)
 *     EtwpAddRegEntryToGroup @ 0x14040B73C (EtwpAddRegEntryToGroup.c)
 *     EtwpRegisterUMGuid @ 0x14040D4A0 (EtwpRegisterUMGuid.c)
 *     EtwpQueryTrace @ 0x14048E7E4 (EtwpQueryTrace.c)
 *     EtwpEnableGuid @ 0x14048EE64 (EtwpEnableGuid.c)
 *     EtwpStartLogger @ 0x14048F924 (EtwpStartLogger.c)
 *     EtwpLookupLoggerIdByName @ 0x1404904F8 (EtwpLookupLoggerIdByName.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x140490580 (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpUpdateEnableMask @ 0x140490A88 (EtwpUpdateEnableMask.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140490B4C (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpRegisterProvider @ 0x140492AB4 (EtwpRegisterProvider.c)
 *     EtwpRealtimeConnect @ 0x14049302C (EtwpRealtimeConnect.c)
 *     EtwpRealtimeDisconnectConsumer @ 0x140493440 (EtwpRealtimeDisconnectConsumer.c)
 *     EtwpStopTrace @ 0x1404946E0 (EtwpStopTrace.c)
 *     EtwpFlushTrace @ 0x140495818 (EtwpFlushTrace.c)
 *     EtwpProcessThreadImageRundown @ 0x140499274 (EtwpProcessThreadImageRundown.c)
 *     EtwQueryTraceHandleByLoggerName @ 0x1404C6DC8 (EtwQueryTraceHandleByLoggerName.c)
 *     WmiQueryTraceInformation @ 0x1404C71EC (WmiQueryTraceInformation.c)
 *     EtwpTrackProviderBinary @ 0x1404CE898 (EtwpTrackProviderBinary.c)
 *     EtwpUpdateDisallowList @ 0x14052D9DC (EtwpUpdateDisallowList.c)
 *     EtwShutdown @ 0x140531A30 (EtwShutdown.c)
 *     EtwpUpdateTrace @ 0x14053F6F8 (EtwpUpdateTrace.c)
 *     EtwpTracingProvEnableCallback @ 0x140581C7C (EtwpTracingProvEnableCallback.c)
 *     EtwpGetDisallowList @ 0x1406A01C0 (EtwpGetDisallowList.c)
 *     EtwpQueryReferenceTime @ 0x1406A079C (EtwpQueryReferenceTime.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1406A3390 (EtwQueryPerformanceTraceInformation.c)
 *     EtwSetPerformanceTraceInformation @ 0x1406A3A4C (EtwSetPerformanceTraceInformation.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x1406A6DB8 (EtwpCheckLoggerAccessAndDoRundown.c)
 *     EtwpGetSoftRestartInformation @ 0x1406A9DBC (EtwpGetSoftRestartInformation.c)
 *     EtwpKsrCallback @ 0x1406A9EBC (EtwpKsrCallback.c)
 *     EtwpSetSoftRestartInformation @ 0x1406AA840 (EtwpSetSoftRestartInformation.c)
 *     EtwpEventTracingCounterSetCallback @ 0x1406E8624 (EtwpEventTracingCounterSetCallback.c)
 * Callees:
 *     KeReleaseMutex @ 0x140055B60 (KeReleaseMutex.c)
 */

void __fastcall EtwpReleaseLoggerContext(unsigned int *a1, char a2)
{
  if ( a2 )
    KeReleaseMutex((PRKMUTEX)(a1 + 158), 0);
  ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*((_QWORD *)a1 + 113) + 8LL * *a1 + 400), 1u);
}
