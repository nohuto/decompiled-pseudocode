/*
 * XREFs of EtwpAcquireLoggerContextByLoggerId @ 0x1404900BC
 * Callers:
 *     EtwpAdjustTraceBuffers @ 0x140085490 (EtwpAdjustTraceBuffers.c)
 *     EtwpGetCompressionSettings @ 0x14022AA2C (EtwpGetCompressionSettings.c)
 *     EtwpSetCompressionSettings @ 0x14022AEDC (EtwpSetCompressionSettings.c)
 *     EtwpAddRegEntryToGroup @ 0x14040C87C (EtwpAddRegEntryToGroup.c)
 *     EtwpRegisterUMGuid @ 0x14040E5E0 (EtwpRegisterUMGuid.c)
 *     EtwpAcquireLoggerContext @ 0x14048DE30 (EtwpAcquireLoggerContext.c)
 *     EtwpValidateEnableNotification @ 0x14048ED80 (EtwpValidateEnableNotification.c)
 *     EtwpStartLogger @ 0x14048EE94 (EtwpStartLogger.c)
 *     EtwpLookupLoggerIdByName @ 0x14048FA68 (EtwpLookupLoggerIdByName.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x14048FAF0 (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpUpdateEnableMask @ 0x14048FFF8 (EtwpUpdateEnableMask.c)
 *     EtwpRegisterProvider @ 0x140492024 (EtwpRegisterProvider.c)
 *     EtwpRealtimeConnect @ 0x14049259C (EtwpRealtimeConnect.c)
 *     EtwpRealtimeDisconnectConsumer @ 0x1404929B0 (EtwpRealtimeDisconnectConsumer.c)
 *     EtwpProcessThreadImageRundown @ 0x1404987E4 (EtwpProcessThreadImageRundown.c)
 *     WmiQueryTraceInformation @ 0x1404E4534 (WmiQueryTraceInformation.c)
 *     EtwpTrackProviderBinary @ 0x1404EC810 (EtwpTrackProviderBinary.c)
 *     EtwpUpdateDisallowList @ 0x14052D49C (EtwpUpdateDisallowList.c)
 *     EtwShutdown @ 0x1405314F0 (EtwShutdown.c)
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
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140006B90 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140007280 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     KeWaitForSingleObject @ 0x14005C880 (KeWaitForSingleObject.c)
 *     EtwpReleaseLoggerContext @ 0x140490180 (EtwpReleaseLoggerContext.c)
 */

__int64 __fastcall EtwpAcquireLoggerContextByLoggerId(__int64 a1, unsigned int a2, char a3)
{
  __int64 v3; // rbx
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rbx

  v3 = a2;
  if ( a2 >= 0x40 )
    LOBYTE(v6) = 1;
  else
    v6 = *(_QWORD *)(a1 + 8LL * a2 + 912);
  if ( (v6 & 1) != 0 )
    return 0LL;
  v7 = a2;
  if ( !ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 8LL * a2 + 400), 1u) )
    return 0LL;
  if ( (unsigned int)v3 >= 0x40 )
  {
    v9 = 1LL;
  }
  else
  {
    _mm_lfence();
    v9 = *(_QWORD *)(a1 + 8 * v3 + 912);
  }
  if ( (v9 & 1) != 0 )
  {
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 8 * v7 + 400), 1u);
    return 0LL;
  }
  if ( a3 )
    KeWaitForSingleObject((PVOID)(v9 + 632), Executive, 0, 0, 0LL);
  if ( !*(_DWORD *)(v9 + 320) )
  {
    LOBYTE(v8) = a3;
    EtwpReleaseLoggerContext(v9, v8);
    return 0LL;
  }
  return v9;
}
