/*
 * XREFs of EtwpReleaseLoggerContext @ 0x1404D3208
 * Callers:
 *     EtwpAdjustTraceBuffers @ 0x140016700 (EtwpAdjustTraceBuffers.c)
 *     EtwpStopTrace @ 0x14040EAB0 (EtwpStopTrace.c)
 *     EtwpQueryTrace @ 0x14040ECC0 (EtwpQueryTrace.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140437A78 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpRegisterUMGuid @ 0x1404CDCF0 (EtwpRegisterUMGuid.c)
 *     EtwpAddRegEntryToGroup @ 0x1404D1618 (EtwpAddRegEntryToGroup.c)
 *     EtwpUpdateEnableMask @ 0x1404D315C (EtwpUpdateEnableMask.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x1404D41A4 (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpEnableGuid @ 0x1404D4AD0 (EtwpEnableGuid.c)
 *     EtwpLookupLoggerIdByName @ 0x1404D630C (EtwpLookupLoggerIdByName.c)
 *     EtwpStartLogger @ 0x1404D66D0 (EtwpStartLogger.c)
 *     EtwpProcessThreadImageRundown @ 0x14054B004 (EtwpProcessThreadImageRundown.c)
 *     EtwpRegisterProvider @ 0x14054C6A8 (EtwpRegisterProvider.c)
 *     EtwpFlushTrace @ 0x14054D090 (EtwpFlushTrace.c)
 *     EtwpRealtimeConnect @ 0x14054D23C (EtwpRealtimeConnect.c)
 *     EtwpRealtimeDisconnectConsumer @ 0x14054D698 (EtwpRealtimeDisconnectConsumer.c)
 *     EtwpUpdateDisallowList @ 0x1405513E4 (EtwpUpdateDisallowList.c)
 *     EtwQueryTraceHandleByLoggerName @ 0x1405522A8 (EtwQueryTraceHandleByLoggerName.c)
 *     WmiQueryTraceInformation @ 0x1405526DC (WmiQueryTraceInformation.c)
 *     EtwpTrackProviderBinary @ 0x140558080 (EtwpTrackProviderBinary.c)
 *     EtwpGetDisallowList @ 0x14055CFB0 (EtwpGetDisallowList.c)
 *     EtwShutdown @ 0x1405674D4 (EtwShutdown.c)
 *     PpmEventTraceControlCallback @ 0x1405C2C9C (PpmEventTraceControlCallback.c)
 *     EtwpUpdateTrace @ 0x1405C48A0 (EtwpUpdateTrace.c)
 *     EtwpQueryReferenceTime @ 0x1406E2A94 (EtwpQueryReferenceTime.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1406E58C8 (EtwQueryPerformanceTraceInformation.c)
 *     EtwSetPerformanceTraceInformation @ 0x1406E6024 (EtwSetPerformanceTraceInformation.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x1406E8394 (EtwpCheckLoggerAccessAndDoRundown.c)
 *     EtwpEventTracingCounterSetCallback @ 0x140721358 (EtwpEventTracingCounterSetCallback.c)
 * Callees:
 *     KeReleaseMutex @ 0x14004BE50 (KeReleaseMutex.c)
 */

void __fastcall EtwpReleaseLoggerContext(unsigned int *a1, char a2)
{
  if ( a2 )
    KeReleaseMutex((PRKMUTEX)(a1 + 162), 0);
  ExReleaseRundownProtectionCacheAwareEx((PEX_RUNDOWN_REF_CACHE_AWARE)EtwpLoggerRundown[*a1], 1u);
}
