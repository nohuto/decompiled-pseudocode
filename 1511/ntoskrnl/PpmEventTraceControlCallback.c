/*
 * XREFs of PpmEventTraceControlCallback @ 0x14054B8EC
 * Callers:
 *     <none>
 * Callees:
 *     EtwEventEnabled @ 0x140074DA0 (EtwEventEnabled.c)
 *     PpmReleaseLock @ 0x140097098 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x140097354 (PpmAcquireLock.c)
 *     PopAcquireRwLockExclusive @ 0x140098DC8 (PopAcquireRwLockExclusive.c)
 *     PopExecuteOnTargetProcessors @ 0x14009C4F0 (PopExecuteOnTargetProcessors.c)
 *     KeEnumerateNextProcessor @ 0x14009C650 (KeEnumerateNextProcessor.c)
 *     PopReleaseRwLock @ 0x14009D768 (PopReleaseRwLock.c)
 *     PopAcquireRwLockShared @ 0x14009DB3C (PopAcquireRwLockShared.c)
 *     KeGetPrcb @ 0x14009DB9C (KeGetPrcb.c)
 *     PpmEventPlatformVetoRundown @ 0x1401F2340 (PpmEventPlatformVetoRundown.c)
 *     PpmEventProcessorVetoRundown @ 0x1401F25D4 (PpmEventProcessorVetoRundown.c)
 *     PpmEventTraceLPIState @ 0x1401F2CF4 (PpmEventTraceLPIState.c)
 *     PpmEventTraceProfiles @ 0x140544114 (PpmEventTraceProfiles.c)
 *     PpmInfoTraceProfileSettings @ 0x14063A988 (PpmInfoTraceProfileSettings.c)
 *     PpmEventStaticPolicyRundown @ 0x14063ABF0 (PpmEventStaticPolicyRundown.c)
 *     PpmEventTraceAccountingBucketIntervalsRundown @ 0x14063AD10 (PpmEventTraceAccountingBucketIntervalsRundown.c)
 *     PpmEventTraceCoordinatedIdleStates @ 0x14063ADE4 (PpmEventTraceCoordinatedIdleStates.c)
 *     PpmEventTraceParkNodeRundown @ 0x14063B044 (PpmEventTraceParkNodeRundown.c)
 *     PpmEventTracePlatformIdleAccounting @ 0x14063B12C (PpmEventTracePlatformIdleAccounting.c)
 *     PpmEventTracePpmProfileStatusRundown @ 0x14063B380 (PpmEventTracePpmProfileStatusRundown.c)
 *     PpmEventTraceProcessorIdle @ 0x14063B408 (PpmEventTraceProcessorIdle.c)
 *     PpmEventTraceProcessorPerformance @ 0x14063B648 (PpmEventTraceProcessorPerformance.c)
 *     PpmEventVetoReasonRundown @ 0x14063B904 (PpmEventVetoReasonRundown.c)
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
  v30 = qword_1403825B8[0];
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
  }
  for ( i = 0; i < PpmParkNumNodes; ++i )
    PpmEventTraceParkNodeRundown((char *)PpmParkNodes + 120 * i);
  PopAcquireRwLockExclusive((__int64)&PpmIdlePolicyLock);
  PpmEventTracePpmProfileStatusRundown(v11, v10, v12);
  PpmEventTraceProfiles(1);
  if ( PpmEtwRegistered && EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PROCESSOR_PROFILE_SETTING_RUNDOWN) )
    PpmInfoTraceProfileSettings(v14, v13, v15);
  PopReleaseRwLock((signed __int64 *)&PpmIdlePolicyLock);
  PpmReleaseLock(&PpmPerfPolicyLock);
  if ( v4 )
  {
    PpmEventTraceAccountingBucketIntervalsRundown(v17, v16, v18);
    PopAcquireRwLockShared((volatile signed __int64 *)&PpmIdlePolicyLock);
    PpmEventTraceCoordinatedIdleStates(v20, v19, v21);
    PpmEventTracePlatformIdleAccounting(v23, v22, v24);
    PpmEventVetoReasonRundown(v26, v25, v27);
    PpmEventPlatformVetoRundown();
    v30 = qword_1403825B8[0];
    v31 = 0;
    v29 = (unsigned __int16 *)KeActiveProcessors;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v32, &v29) )
    {
      v28 = KeGetPrcb(v32);
      PpmEventProcessorVetoRundown(v28);
      PpmEventTraceProcessorIdle(v28);
    }
    PopExecuteOnTargetProcessors((__int64)KeActiveProcessors, (__int64)PpmEventTraceProcessorIdleAccounting, 0LL, 0LL);
    PopReleaseRwLock((signed __int64 *)&PpmIdlePolicyLock);
  }
}
