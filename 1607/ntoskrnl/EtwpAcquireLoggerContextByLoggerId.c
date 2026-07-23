/*
 * XREFs of EtwpAcquireLoggerContextByLoggerId @ 0x140490B4C
 * Callers:
 *     EtwpAdjustTraceBuffers @ 0x140086D7C (EtwpAdjustTraceBuffers.c)
 *     EtwpGetCompressionSettings @ 0x14022A858 (EtwpGetCompressionSettings.c)
 *     EtwpSetCompressionSettings @ 0x14022AD08 (EtwpSetCompressionSettings.c)
 *     EtwpAddRegEntryToGroup @ 0x14040B73C (EtwpAddRegEntryToGroup.c)
 *     EtwpRegisterUMGuid @ 0x14040D4A0 (EtwpRegisterUMGuid.c)
 *     EtwpAcquireLoggerContext @ 0x14048E8C0 (EtwpAcquireLoggerContext.c)
 *     EtwpValidateEnableNotification @ 0x14048F810 (EtwpValidateEnableNotification.c)
 *     EtwpStartLogger @ 0x14048F924 (EtwpStartLogger.c)
 *     EtwpLookupLoggerIdByName @ 0x1404904F8 (EtwpLookupLoggerIdByName.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x140490580 (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpUpdateEnableMask @ 0x140490A88 (EtwpUpdateEnableMask.c)
 *     EtwpRegisterProvider @ 0x140492AB4 (EtwpRegisterProvider.c)
 *     EtwpRealtimeConnect @ 0x14049302C (EtwpRealtimeConnect.c)
 *     EtwpRealtimeDisconnectConsumer @ 0x140493440 (EtwpRealtimeDisconnectConsumer.c)
 *     EtwpProcessThreadImageRundown @ 0x140499274 (EtwpProcessThreadImageRundown.c)
 *     WmiQueryTraceInformation @ 0x1404C71EC (WmiQueryTraceInformation.c)
 *     EtwpTrackProviderBinary @ 0x1404CE898 (EtwpTrackProviderBinary.c)
 *     EtwpUpdateDisallowList @ 0x14052D9DC (EtwpUpdateDisallowList.c)
 *     EtwShutdown @ 0x140531A30 (EtwShutdown.c)
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
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140006D00 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1400073F0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     EtwpReleaseLoggerContext @ 0x140490C10 (EtwpReleaseLoggerContext.c)
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
