/*
 * XREFs of EtwpAcquireLoggerContextByLoggerId @ 0x14046D240
 * Callers:
 *     EtwpAdjustTraceBuffers @ 0x14009BAD0 (EtwpAdjustTraceBuffers.c)
 *     EtwpRegisterUMGuid @ 0x140435640 (EtwpRegisterUMGuid.c)
 *     EtwpAddRegEntryToGroup @ 0x14046CBFC (EtwpAddRegEntryToGroup.c)
 *     EtwpUpdateEnableMask @ 0x14046D0E0 (EtwpUpdateEnableMask.c)
 *     EtwpRealtimeConnect @ 0x1404B615C (EtwpRealtimeConnect.c)
 *     EtwpRealtimeDisconnectConsumer @ 0x1404B6570 (EtwpRealtimeDisconnectConsumer.c)
 *     EtwpTrackProviderBinary @ 0x1404C015C (EtwpTrackProviderBinary.c)
 *     EtwpUpdateDisallowList @ 0x1404C6270 (EtwpUpdateDisallowList.c)
 *     EtwpLookupLoggerIdByName @ 0x1404CA78C (EtwpLookupLoggerIdByName.c)
 *     EtwpStartLogger @ 0x1404CB420 (EtwpStartLogger.c)
 *     EtwpAcquireLoggerContext @ 0x1404CC0A0 (EtwpAcquireLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x1404CC19C (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpRegisterProvider @ 0x1404CC76C (EtwpRegisterProvider.c)
 *     EtwpValidateEnableNotification @ 0x1404CE7A0 (EtwpValidateEnableNotification.c)
 *     EtwShutdown @ 0x1404F87F0 (EtwShutdown.c)
 *     EtwpProcessThreadImageRundown @ 0x14050074C (EtwpProcessThreadImageRundown.c)
 *     WmiQueryTraceInformation @ 0x140504D90 (WmiQueryTraceInformation.c)
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
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1400C33F0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x1400FB0F0 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     EtwpReleaseLoggerContext @ 0x14046D1BC (EtwpReleaseLoggerContext.c)
 */

unsigned int *__fastcall EtwpAcquireLoggerContextByLoggerId(__int64 a1, unsigned int a2, char a3)
{
  __int64 SiloDriverState; // rsi
  __int64 v4; // rbx
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rbp
  unsigned int *v9; // rbx

  SiloDriverState = 0LL;
  v4 = a2;
  v6 = a1;
  if ( !a1 )
  {
    SiloDriverState = EtwpGetSiloDriverState((PVOID)0xFFFFFFFFFFFFFFFFLL);
    v6 = SiloDriverState;
  }
  if ( (unsigned int)v4 >= 0x40 )
    LOBYTE(v7) = 1;
  else
    v7 = *(_QWORD *)(v6 + 8 * v4 + 912);
  if ( (v7 & 1) != 0 )
    goto LABEL_16;
  v8 = v4;
  if ( !ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v6 + 8 * v4 + 400), 1u) )
    goto LABEL_16;
  if ( (unsigned int)v4 >= 0x40 )
  {
    v9 = (unsigned int *)1;
  }
  else
  {
    _mm_lfence();
    v9 = *(unsigned int **)(v6 + 8 * v4 + 912);
  }
  if ( ((unsigned __int8)v9 & 1) != 0 )
  {
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v6 + 8 * v8 + 400), 1u);
LABEL_16:
    v9 = 0LL;
    goto LABEL_13;
  }
  if ( a3 )
    KeWaitForSingleObject(v9 + 162, Executive, 0, 0, 0LL);
  if ( !v9[84] )
  {
    EtwpReleaseLoggerContext(v6, v9, a3);
    goto LABEL_16;
  }
LABEL_13:
  if ( SiloDriverState )
    PsDereferenceMonitorContextServerSilo(SiloDriverState);
  return v9;
}
