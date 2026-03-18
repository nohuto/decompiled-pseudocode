/*
 * XREFs of EtwpReleaseLoggerContext @ 0x140490180
 * Callers:
 *     EtwpAdjustTraceBuffers @ 0x140085490 (EtwpAdjustTraceBuffers.c)
 *     EtwpGetCompressionSettings @ 0x14022AA2C (EtwpGetCompressionSettings.c)
 *     EtwpSetCompressionSettings @ 0x14022AEDC (EtwpSetCompressionSettings.c)
 *     EtwpAddRegEntryToGroup @ 0x14040C87C (EtwpAddRegEntryToGroup.c)
 *     EtwpRegisterUMGuid @ 0x14040E5E0 (EtwpRegisterUMGuid.c)
 *     EtwpQueryTrace @ 0x14048DD54 (EtwpQueryTrace.c)
 *     EtwpEnableGuid @ 0x14048E3D4 (EtwpEnableGuid.c)
 *     EtwpStartLogger @ 0x14048EE94 (EtwpStartLogger.c)
 *     EtwpLookupLoggerIdByName @ 0x14048FA68 (EtwpLookupLoggerIdByName.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x14048FAF0 (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpUpdateEnableMask @ 0x14048FFF8 (EtwpUpdateEnableMask.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1404900BC (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpRegisterProvider @ 0x140492024 (EtwpRegisterProvider.c)
 *     EtwpRealtimeConnect @ 0x14049259C (EtwpRealtimeConnect.c)
 *     EtwpRealtimeDisconnectConsumer @ 0x1404929B0 (EtwpRealtimeDisconnectConsumer.c)
 *     EtwpStopTrace @ 0x140493C50 (EtwpStopTrace.c)
 *     EtwpFlushTrace @ 0x140494D88 (EtwpFlushTrace.c)
 *     EtwpProcessThreadImageRundown @ 0x1404987E4 (EtwpProcessThreadImageRundown.c)
 *     EtwQueryTraceHandleByLoggerName @ 0x1404E4110 (EtwQueryTraceHandleByLoggerName.c)
 *     WmiQueryTraceInformation @ 0x1404E4534 (WmiQueryTraceInformation.c)
 *     EtwpTrackProviderBinary @ 0x1404EC810 (EtwpTrackProviderBinary.c)
 *     EtwpUpdateDisallowList @ 0x14052D49C (EtwpUpdateDisallowList.c)
 *     EtwShutdown @ 0x1405314F0 (EtwShutdown.c)
 *     EtwpUpdateTrace @ 0x14053F1B8 (EtwpUpdateTrace.c)
 *     EtwpTracingProvEnableCallback @ 0x1405817D0 (EtwpTracingProvEnableCallback.c)
 *     EtwpGetDisallowList @ 0x1406A0088 (EtwpGetDisallowList.c)
 *     EtwpQueryReferenceTime @ 0x1406A0664 (EtwpQueryReferenceTime.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1406A3258 (EtwQueryPerformanceTraceInformation.c)
 *     EtwSetPerformanceTraceInformation @ 0x1406A3914 (EtwSetPerformanceTraceInformation.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x1406A6C80 (EtwpCheckLoggerAccessAndDoRundown.c)
 *     EtwpGetSoftRestartInformation @ 0x1406A9C84 (EtwpGetSoftRestartInformation.c)
 *     EtwpKsrCallback @ 0x1406A9D84 (EtwpKsrCallback.c)
 *     EtwpSetSoftRestartInformation @ 0x1406AA708 (EtwpSetSoftRestartInformation.c)
 *     EtwpEventTracingCounterSetCallback @ 0x1406E84EC (EtwpEventTracingCounterSetCallback.c)
 * Callees:
 *     KeReleaseMutex @ 0x140055FE0 (KeReleaseMutex.c)
 */

void __fastcall EtwpReleaseLoggerContext(unsigned int *a1, char a2)
{
  if ( a2 )
    KeReleaseMutex((PRKMUTEX)(a1 + 158), 0);
  ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*((_QWORD *)a1 + 113) + 8LL * *a1 + 400), 1u);
}
