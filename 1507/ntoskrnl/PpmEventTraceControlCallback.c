/*
 * XREFs of PpmEventTraceControlCallback @ 0x1405C2C9C
 * Callers:
 *     <none>
 * Callees:
 *     PopExecuteOnTargetProcessors @ 0x140013958 (PopExecuteOnTargetProcessors.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     PpmReleaseLock @ 0x1400E70D0 (PpmReleaseLock.c)
 *     EtwEventEnabled @ 0x1400EA070 (EtwEventEnabled.c)
 *     PpmAcquireLock @ 0x1400ED5A0 (PpmAcquireLock.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     PpmEventPlatformVetoRundown @ 0x140240E64 (PpmEventPlatformVetoRundown.c)
 *     PpmEventProcessorVetoRundown @ 0x1402410EC (PpmEventProcessorVetoRundown.c)
 *     PpmEventTraceLPIState @ 0x1402417F0 (PpmEventTraceLPIState.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140437A78 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x1404D3208 (EtwpReleaseLoggerContext.c)
 *     PpmEventTraceProfiles @ 0x1405BA370 (PpmEventTraceProfiles.c)
 *     PpmInfoTraceProfileSettings @ 0x1406BAA50 (PpmInfoTraceProfileSettings.c)
 *     PpmEventStaticPolicyRundown @ 0x1406BBBF8 (PpmEventStaticPolicyRundown.c)
 *     PpmEventTraceAccountingBucketIntervalsRundown @ 0x1406BBD18 (PpmEventTraceAccountingBucketIntervalsRundown.c)
 *     PpmEventTraceCoordinatedIdleStates @ 0x1406BBDEC (PpmEventTraceCoordinatedIdleStates.c)
 *     PpmEventTraceParkNodeRundown @ 0x1406BC04C (PpmEventTraceParkNodeRundown.c)
 *     PpmEventTracePlatformIdleAccounting @ 0x1406BC134 (PpmEventTracePlatformIdleAccounting.c)
 *     PpmEventTracePpmProfileStatusRundown @ 0x1406BC388 (PpmEventTracePpmProfileStatusRundown.c)
 *     PpmEventTraceProcessorIdle @ 0x1406BC410 (PpmEventTraceProcessorIdle.c)
 *     PpmEventTraceProcessorPerformance @ 0x1406BC650 (PpmEventTraceProcessorPerformance.c)
 *     PpmEventVetoReasonRundown @ 0x1406BC90C (PpmEventVetoReasonRundown.c)
 *     EtwpEventWriteTemplateSession @ 0x1406E6B70 (EtwpEventWriteTemplateSession.c)
 */

void __fastcall PpmEventTraceControlCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword)
{
  char v4; // si
  __int64 v5; // r9
  unsigned __int64 v6; // rbx
  unsigned __int16 i; // di
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  unsigned int j; // ebx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v13; // rax
  __int64 v14; // r9
  signed __int8 v15; // cf
  __int64 v16; // rbx
  __int64 v17; // rdx
  signed __int64 v18; // rcx
  ULONG_PTR v19; // rtt
  struct _KTHREAD *v20; // rdx
  __int16 v21; // ax
  struct _KTHREAD *v22; // rax
  __int64 v23; // r9
  __int64 v24; // rbx
  __int64 v25; // r9
  unsigned __int64 v26; // rdi
  unsigned __int16 k; // bx
  unsigned __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rsi
  __int64 v31; // rdx
  signed __int64 v32; // rcx
  ULONG_PTR v33; // rtt
  struct _KTHREAD *v34; // rcx
  __int16 v35; // ax

  if ( ControlCode == 2 )
  {
    v4 = 1;
  }
  else
  {
    if ( ControlCode )
      return;
    v4 = 0;
  }
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  v6 = qword_1403D15E8[0];
  for ( i = 0; ; v6 = *(_QWORD *)&KeActiveProcessors[2 * i + 2] )
  {
    while ( v6 )
    {
      _BitScanForward64(&v8, v6);
      v6 &= ~(1LL << v8);
      v9 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * i + (unsigned __int8)v8];
      if ( (unsigned int)v9 >= (unsigned int)KeNumberProcessors_0 )
        v10 = 0LL;
      else
        v10 = KiProcessorBlock[v9];
      PpmEventTraceProcessorPerformance(v10);
    }
    if ( ++i >= (unsigned int)LOWORD(KeActiveProcessors[0]) )
      break;
  }
  if ( v4 )
  {
    PpmEventTraceLPIState();
    PpmEventStaticPolicyRundown();
  }
  for ( j = 0; j < PpmParkNumNodes; ++j )
    PpmEventTraceParkNodeRundown((char *)PpmParkNodes + 120 * j);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v13 = KeAbPreAcquire((ULONG_PTR)&PpmIdlePolicyLock, 0LL, 0LL, v5);
  v15 = _interlockedbittestandset64((volatile signed __int32 *)&PpmIdlePolicyLock, 0LL);
  v16 = v13;
  if ( v15 )
    ExfAcquirePushLockExclusiveEx(&PpmIdlePolicyLock, v13, (ULONG_PTR)&PpmIdlePolicyLock, v14);
  if ( v16 )
    *(_BYTE *)(v16 + 26) |= 1u;
  qword_14032E288 = (__int64)KeGetCurrentThread();
  PpmEventTracePpmProfileStatusRundown();
  PpmEventTraceProfiles(1);
  if ( PpmEtwRegistered && EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PROCESSOR_PROFILE_SETTING_RUNDOWN) )
    PpmInfoTraceProfileSettings();
  if ( qword_14032E288 )
    qword_14032E288 = 0LL;
  _m_prefetchw(&PpmIdlePolicyLock);
  v18 = PpmIdlePolicyLock - 16;
  if ( (PpmIdlePolicyLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v18 = 0LL;
  if ( (PpmIdlePolicyLock & 2) != 0
    || (v19 = PpmIdlePolicyLock,
        v19 != _InterlockedCompareExchange64((volatile signed __int64 *)&PpmIdlePolicyLock, v18, PpmIdlePolicyLock)) )
  {
    ExfReleasePushLock(&PpmIdlePolicyLock, v17);
  }
  KeAbPostRelease((ULONG_PTR)&PpmIdlePolicyLock);
  v20 = KeGetCurrentThread();
  v21 = v20->KernelApcDisable + 1;
  v20->KernelApcDisable = v21;
  if ( !v21
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v20->ApcState.ApcListHead[0].Flink != &v20->152
    && !v20->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  PpmReleaseLock(&PpmPerfPolicyLock);
  if ( v4 )
  {
    PpmEventTraceAccountingBucketIntervalsRundown();
    v22 = KeGetCurrentThread();
    --v22->KernelApcDisable;
    v24 = KeAbPreAcquire((ULONG_PTR)&PpmIdlePolicyLock, 0LL, 0LL, v23);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PpmIdlePolicyLock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(&PpmIdlePolicyLock, v24, (ULONG_PTR)&PpmIdlePolicyLock, v25);
    if ( v24 )
      *(_BYTE *)(v24 + 26) |= 1u;
    PpmEventTraceCoordinatedIdleStates();
    PpmEventTracePlatformIdleAccounting();
    PpmEventVetoReasonRundown();
    PpmEventPlatformVetoRundown();
    v26 = qword_1403D15E8[0];
    for ( k = 0; ; v26 = *(_QWORD *)&KeActiveProcessors[2 * k + 2] )
    {
      while ( v26 )
      {
        _BitScanForward64(&v28, v26);
        v26 &= ~(1LL << v28);
        v29 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * k + (unsigned __int8)v28];
        if ( (unsigned int)v29 >= (unsigned int)KeNumberProcessors_0 )
          v30 = 0LL;
        else
          v30 = KiProcessorBlock[v29];
        PpmEventProcessorVetoRundown(v30);
        PpmEventTraceProcessorIdle(v30);
      }
      if ( ++k >= (unsigned int)LOWORD(KeActiveProcessors[0]) )
        break;
    }
    PopExecuteOnTargetProcessors((__int64)KeActiveProcessors, (__int64)PpmEventTraceProcessorIdleAccounting, 0LL, 0LL);
    if ( qword_14032E288 )
      qword_14032E288 = 0LL;
    _m_prefetchw(&PpmIdlePolicyLock);
    v32 = PpmIdlePolicyLock - 16;
    if ( (PpmIdlePolicyLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v32 = 0LL;
    if ( (PpmIdlePolicyLock & 2) != 0
      || (v33 = PpmIdlePolicyLock,
          v33 != _InterlockedCompareExchange64((volatile signed __int64 *)&PpmIdlePolicyLock, v32, PpmIdlePolicyLock)) )
    {
      ExfReleasePushLock(&PpmIdlePolicyLock, v31);
    }
    KeAbPostRelease((ULONG_PTR)&PpmIdlePolicyLock);
    v34 = KeGetCurrentThread();
    v35 = v34->KernelApcDisable + 1;
    v34->KernelApcDisable = v35;
    if ( !v35
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v34->ApcState.ApcListHead[0].Flink != &v34->152
      && !v34->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
}
