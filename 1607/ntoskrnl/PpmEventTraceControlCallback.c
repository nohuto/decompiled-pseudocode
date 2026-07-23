/*
 * XREFs of PpmEventTraceControlCallback @ 0x140581BF8
 * Callers:
 *     <none>
 * Callees:
 *     PpmAcquireLock @ 0x14000A0A8 (PpmAcquireLock.c)
 *     PopExecuteOnTargetProcessors @ 0x14000D0F8 (PopExecuteOnTargetProcessors.c)
 *     PopReleaseRwLock @ 0x14000D858 (PopReleaseRwLock.c)
 *     PopAcquireRwLockShared @ 0x14000DC30 (PopAcquireRwLockShared.c)
 *     KeGetPrcb @ 0x1400D1E98 (KeGetPrcb.c)
 *     PpmReleaseLock @ 0x1400D2574 (PpmReleaseLock.c)
 *     KeEnumerateNextProcessor @ 0x1400D3250 (KeEnumerateNextProcessor.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     PopAcquireRwLockExclusive @ 0x1400F9D28 (PopAcquireRwLockExclusive.c)
 *     PpmEventPlatformVetoRundown @ 0x14020C2AC (PpmEventPlatformVetoRundown.c)
 *     PpmEventProcessorVetoRundown @ 0x14020C540 (PpmEventProcessorVetoRundown.c)
 *     PpmEventTraceLPIState @ 0x14020CC60 (PpmEventTraceLPIState.c)
 *     PpmEventHeteroPolicy @ 0x14056ABF8 (PpmEventHeteroPolicy.c)
 *     PpmEventTraceProfiles @ 0x140578C00 (PpmEventTraceProfiles.c)
 *     PpmInfoTraceProfileSettings @ 0x140672BF0 (PpmInfoTraceProfileSettings.c)
 *     PpmEventStaticPolicyRundown @ 0x140673B6C (PpmEventStaticPolicyRundown.c)
 *     PpmEventTraceAccountingBucketIntervalsRundown @ 0x140673C8C (PpmEventTraceAccountingBucketIntervalsRundown.c)
 *     PpmEventTraceCoordinatedIdleStates @ 0x140673D60 (PpmEventTraceCoordinatedIdleStates.c)
 *     PpmEventTraceParkNodeRundown @ 0x140673FC0 (PpmEventTraceParkNodeRundown.c)
 *     PpmEventTracePlatformIdleAccounting @ 0x1406740A8 (PpmEventTracePlatformIdleAccounting.c)
 *     PpmEventTracePpmProfileStatusRundown @ 0x1406742FC (PpmEventTracePpmProfileStatusRundown.c)
 *     PpmEventTraceProcessorIdle @ 0x140674384 (PpmEventTraceProcessorIdle.c)
 *     PpmEventTraceProcessorPerformance @ 0x1406745C4 (PpmEventTraceProcessorPerformance.c)
 *     PpmEventVetoReasonRundown @ 0x140674910 (PpmEventVetoReasonRundown.c)
 */

void __fastcall PpmEventTraceControlCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword)
{
  char v4; // bl
  __int64 Prcb; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned int i; // edi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rbx
  unsigned __int16 *v29; // [rsp+20h] [rbp-20h] BYREF
  __int64 v30; // [rsp+28h] [rbp-18h]
  __int16 v31; // [rsp+30h] [rbp-10h]
  ULONG v32; // [rsp+68h] [rbp+28h] BYREF

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
  v30 = qword_1403AA618[0];
  v31 = 0;
  v29 = (unsigned __int16 *)KeActiveProcessors;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v32, &v29) )
  {
    Prcb = KeGetPrcb(v32);
    PpmEventTraceProcessorPerformance(Prcb);
  }
  if ( v4 )
  {
    PpmEventTraceLPIState();
    PpmEventStaticPolicyRundown(v7, v6, v8);
    PpmEventHeteroPolicy(1);
  }
  for ( i = 0; i < PpmParkNumNodes; ++i )
    PpmEventTraceParkNodeRundown((char *)PpmParkNodes + 120 * i);
  PopAcquireRwLockExclusive((unsigned __int64 *)&PpmIdlePolicyLock);
  PpmEventTracePpmProfileStatusRundown(v11, v10, v12);
  PpmEventTraceProfiles(1);
  if ( PpmEtwRegistered && EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PROCESSOR_PROFILE_SETTING_RUNDOWN) )
    PpmInfoTraceProfileSettings(v14, v13, v15);
  PopReleaseRwLock(&PpmIdlePolicyLock);
  PpmReleaseLock(&PpmPerfPolicyLock);
  if ( v4 )
  {
    PpmEventTraceAccountingBucketIntervalsRundown(v17, v16, v18);
    PopAcquireRwLockShared(&PpmIdlePolicyLock);
    PpmEventTraceCoordinatedIdleStates(v20, v19, v21);
    PpmEventTracePlatformIdleAccounting(v23, v22, v24);
    PpmEventVetoReasonRundown(v26, v25, v27);
    PpmEventPlatformVetoRundown();
    v30 = qword_1403AA618[0];
    v31 = 0;
    v29 = (unsigned __int16 *)KeActiveProcessors;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v32, &v29) )
    {
      v28 = KeGetPrcb(v32);
      PpmEventProcessorVetoRundown(v28);
      PpmEventTraceProcessorIdle(v28);
    }
    PopExecuteOnTargetProcessors((__int64)KeActiveProcessors, (__int64)PpmEventTraceProcessorIdleAccounting, 0LL, 0LL);
    PopReleaseRwLock(&PpmIdlePolicyLock);
  }
}
