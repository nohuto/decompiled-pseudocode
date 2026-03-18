/*
 * XREFs of EtwpAcquireLoggerContextByLoggerId @ 0x140437A78
 * Callers:
 *     EtwpAdjustTraceBuffers @ 0x140016700 (EtwpAdjustTraceBuffers.c)
 *     EtwpAcquireLoggerContext @ 0x14040EDC0 (EtwpAcquireLoggerContext.c)
 *     EtwpRegisterUMGuid @ 0x1404CDCF0 (EtwpRegisterUMGuid.c)
 *     EtwpAddRegEntryToGroup @ 0x1404D1618 (EtwpAddRegEntryToGroup.c)
 *     EtwpUpdateEnableMask @ 0x1404D315C (EtwpUpdateEnableMask.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x1404D41A4 (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpValidateEnableNotification @ 0x1404D5D50 (EtwpValidateEnableNotification.c)
 *     EtwpLookupLoggerIdByName @ 0x1404D630C (EtwpLookupLoggerIdByName.c)
 *     EtwpStartLogger @ 0x1404D66D0 (EtwpStartLogger.c)
 *     EtwpProcessThreadImageRundown @ 0x14054B004 (EtwpProcessThreadImageRundown.c)
 *     EtwpRegisterProvider @ 0x14054C6A8 (EtwpRegisterProvider.c)
 *     EtwpRealtimeConnect @ 0x14054D23C (EtwpRealtimeConnect.c)
 *     EtwpRealtimeDisconnectConsumer @ 0x14054D698 (EtwpRealtimeDisconnectConsumer.c)
 *     EtwpUpdateDisallowList @ 0x1405513E4 (EtwpUpdateDisallowList.c)
 *     WmiQueryTraceInformation @ 0x1405526DC (WmiQueryTraceInformation.c)
 *     EtwpTrackProviderBinary @ 0x140558080 (EtwpTrackProviderBinary.c)
 *     EtwpGetDisallowList @ 0x14055CFB0 (EtwpGetDisallowList.c)
 *     EtwShutdown @ 0x1405674D4 (EtwShutdown.c)
 *     PpmEventTraceControlCallback @ 0x1405C2C9C (PpmEventTraceControlCallback.c)
 *     EtwpQueryReferenceTime @ 0x1406E2A94 (EtwpQueryReferenceTime.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1406E58C8 (EtwQueryPerformanceTraceInformation.c)
 *     EtwSetPerformanceTraceInformation @ 0x1406E6024 (EtwSetPerformanceTraceInformation.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x1406E8394 (EtwpCheckLoggerAccessAndDoRundown.c)
 *     EtwpEventTracingCounterSetCallback @ 0x140721358 (EtwpEventTracingCounterSetCallback.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140006E40 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     PsEqualCurrentServerSilo @ 0x140017D40 (PsEqualCurrentServerSilo.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x14001A6C0 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     EtwpReleaseLoggerContext @ 0x1404D3208 (EtwpReleaseLoggerContext.c)
 */

__int64 __fastcall EtwpAcquireLoggerContextByLoggerId(unsigned int a1, char a2)
{
  __int64 v2; // rbx
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rdx

  v2 = a1;
  if ( a1 >= 0x40 )
    LOBYTE(v4) = 1;
  else
    v4 = WmipLoggerContext[a1];
  if ( (v4 & 1) == 0 )
  {
    v5 = v2;
    if ( ExAcquireRundownProtectionCacheAwareEx((PEX_RUNDOWN_REF_CACHE_AWARE)EtwpLoggerRundown[v2], 1u) )
    {
      if ( (unsigned int)v2 >= 0x40 )
      {
        v6 = 1LL;
      }
      else
      {
        _mm_lfence();
        v6 = WmipLoggerContext[v2];
      }
      if ( (v6 & 1) != 0 || !PsEqualCurrentServerSilo(*(_QWORD *)(v6 + 912)) )
      {
        ExReleaseRundownProtectionCacheAwareEx((PEX_RUNDOWN_REF_CACHE_AWARE)EtwpLoggerRundown[v5], 1u);
      }
      else
      {
        if ( a2 )
          KeWaitForSingleObject((PVOID)(v6 + 648), Executive, 0, 0, 0LL);
        if ( *(_DWORD *)(v6 + 336) )
          return v6;
        LOBYTE(v7) = a2;
        EtwpReleaseLoggerContext(v6, v7);
      }
    }
  }
  return 0LL;
}
