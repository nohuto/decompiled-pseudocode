/*
 * XREFs of PpmPerfSnapUtility @ 0x1400D7020
 * Callers:
 *     PpmPerfAction @ 0x1400D6560 (PpmPerfAction.c)
 *     PpmCheckSnapAllUtility @ 0x1400D6CA0 (PpmCheckSnapAllUtility.c)
 * Callees:
 *     PpmConvertTime @ 0x14000DBE4 (PpmConvertTime.c)
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwpLevelKeywordEnabled @ 0x1400D6090 (EtwpLevelKeywordEnabled.c)
 *     PpmSnapPerformanceAccumulation @ 0x1400D7430 (PpmSnapPerformanceAccumulation.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     PopDiagTraceIllegalProcessorThrottle @ 0x140208C90 (PopDiagTraceIllegalProcessorThrottle.c)
 */

char __fastcall PpmPerfSnapUtility(struct _KPRCB *a1)
{
  _PROC_PERF_CHECK *PerfCheck; // r14
  bool v3; // bp
  char *p_Snap; // rsi
  char *p_TempSnap; // rdi
  char result; // al
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  unsigned int LatestPerformancePercent; // r8d
  __int64 v15; // rbp
  unsigned __int8 *TaggedThreadPercent; // r10
  unsigned __int64 *TaggedThreadCycles; // r8
  unsigned __int64 v18; // r9
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rdx
  _PROC_PERF_CONSTRAINT *PerfConstraint; // r8
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rax
  _PROC_PERF_DOMAIN *Domain; // rdi
  void (__fastcall *GetFFHThrottleState)(unsigned __int64 *); // rax
  __int64 v27; // rcx
  __int64 v28; // rcx
  bool v29; // [rsp+30h] [rbp-B8h]
  __int16 Group; // [rsp+34h] [rbp-B4h] BYREF
  unsigned int v31; // [rsp+38h] [rbp-B0h]
  unsigned int v32; // [rsp+40h] [rbp-A8h] BYREF
  unsigned __int64 v33; // [rsp+48h] [rbp-A0h] BYREF
  unsigned __int64 v34; // [rsp+50h] [rbp-98h]
  unsigned __int64 v35; // [rsp+60h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp-78h] BYREF
  unsigned __int8 *p_GroupIndex; // [rsp+80h] [rbp-68h]
  __int64 v38; // [rsp+88h] [rbp-60h]
  unsigned int *v39; // [rsp+90h] [rbp-58h]
  __int64 v40; // [rsp+98h] [rbp-50h]
  unsigned __int64 *v41; // [rsp+A0h] [rbp-48h]
  __int64 v42; // [rsp+A8h] [rbp-40h]

  PerfCheck = a1->PowerState.PerfCheck;
  v3 = a1 != KeGetCurrentPrcb();
  v29 = v3;
  if ( !PerfCheck )
    return 1;
  p_Snap = (char *)&PerfCheck->Snap;
  p_TempSnap = (char *)&PerfCheck->TempSnap;
  result = PpmSnapPerformanceAccumulation((int)a1, 0, v3, 1, &PerfCheck->TempSnap);
  if ( result )
  {
    v7 = *(_QWORD *)p_TempSnap - *(_QWORD *)p_Snap;
    v8 = PerfCheck->TempSnap.Active - PerfCheck->Snap.Active;
    if ( *(_QWORD *)p_TempSnap <= *(_QWORD *)p_Snap || v8 > v7 && v3 )
      return 0;
    v9 = PerfCheck->TempSnap.Active - PerfCheck->Snap.Active;
    v10 = PerfCheck->TempSnap.CyclesAffinitized - PerfCheck->Snap.CyclesAffinitized;
    v11 = PerfCheck->TempSnap.CyclesActive - PerfCheck->Snap.CyclesActive;
    if ( !v8 )
      v9 = 1LL;
    v12 = (PerfCheck->TempSnap.PerformanceScaledActive - PerfCheck->Snap.PerformanceScaledActive) / v9;
    v13 = PerfCheck->TempSnap.CyclesActive - PerfCheck->Snap.CyclesActive;
    LatestPerformancePercent = v12;
    v34 = v12;
    if ( !v11 )
      v13 = 1LL;
    v31 = (unsigned __int8)(100 * v10 / v13);
    if ( v31 > 0x64 )
      v31 = 100;
    if ( !(_DWORD)v12 )
    {
      LatestPerformancePercent = a1->PowerState.LatestPerformancePercent;
      v34 = LatestPerformancePercent;
    }
    v15 = 2LL;
    if ( LatestPerformancePercent != a1->PowerState.LatestPerformancePercent )
    {
      v32 = LatestPerformancePercent;
      if ( PpmEtwRegistered )
      {
        if ( PpmEtwHandle )
        {
          if ( (v27 = *(_QWORD *)(PpmEtwHandle + 32), *(_DWORD *)(v27 + 80))
            && (unsigned __int8)(*(_BYTE *)(v27 + 84) - 1) > 2u
            && *(char *)(v27 + 96) < 0
            && (*(_QWORD *)(v27 + 104) & 0x80LL) == *(_QWORD *)(v27 + 104)
            || *(_BYTE *)(PpmEtwHandle + 101)
            && EtwpLevelKeywordEnabled(*(_QWORD *)(PpmEtwHandle + 40) + 80LL, 4u, 128LL) )
          {
            Group = a1->Group;
            v35 = PpmConvertTime(v7, PopQpcFrequency, 0xF4240uLL);
            *(_QWORD *)&UserData.Size = 2LL;
            UserData.Ptr = (ULONGLONG)&Group;
            v38 = 1LL;
            p_GroupIndex = &a1->GroupIndex;
            v39 = &v32;
            v41 = &v35;
            v40 = 4LL;
            v42 = 8LL;
            EtwWrite(PpmEtwHandle, &PPM_ETW_DELIVERED_PERF_CHANGE, 0LL, 4u, &UserData);
          }
        }
      }
    }
    TaggedThreadPercent = PerfCheck->TaggedThreadPercent;
    TaggedThreadCycles = PerfCheck->Snap.TaggedThreadCycles;
    do
    {
      v18 = v11;
      v19 = *(unsigned __int64 *)((char *)TaggedThreadCycles + p_TempSnap - p_Snap) - *TaggedThreadCycles;
      if ( !v11 )
        v18 = 1LL;
      v20 = 100 * v19 / v18;
      v21 = 100 * v19 % v18;
      if ( (unsigned __int8)v20 > 0x64u )
        LOBYTE(v20) = 100;
      *TaggedThreadPercent = v20;
      ++TaggedThreadCycles;
      ++TaggedThreadPercent;
      --v15;
    }
    while ( v15 );
    PerfConstraint = a1->PowerState.PerfConstraint;
    a1->PowerState.LatestPerformancePercent = v34;
    a1->PowerState.LatestAffinitizedPercent = v31;
    if ( PerfConstraint )
    {
      v23 = v8;
      if ( !v8 )
        v23 = 1LL;
      v24 = (PerfCheck->TempSnap.FrequencyScaledActive - PerfCheck->Snap.FrequencyScaledActive) / v23;
      v21 = (PerfCheck->TempSnap.FrequencyScaledActive - PerfCheck->Snap.FrequencyScaledActive) % v23;
      if ( !(_DWORD)v24 )
        LODWORD(v24) = PerfConstraint->LatestFrequencyPercent;
      PerfConstraint->LatestFrequencyPercent = v24;
    }
    *(_OWORD *)p_Snap = *(_OWORD *)p_TempSnap;
    *(_OWORD *)&PerfCheck->Snap.Stall = *(_OWORD *)&PerfCheck->TempSnap.Stall;
    *(_OWORD *)&PerfCheck->Snap.PerformanceScaledActive = *(_OWORD *)&PerfCheck->TempSnap.PerformanceScaledActive;
    *(_OWORD *)&PerfCheck->Snap.CyclesActive = *(_OWORD *)&PerfCheck->TempSnap.CyclesActive;
    *(_OWORD *)PerfCheck->Snap.TaggedThreadCycles = *(_OWORD *)PerfCheck->TempSnap.TaggedThreadCycles;
    a1->PowerState.ActiveTime += v8;
    a1->PowerState.TotalTime += v7;
    if ( v29 )
      return 1;
    Domain = a1->PowerState.Domain;
    if ( !PopProcessorThrottleLogInterval )
      return 1;
    if ( !Domain )
      return 1;
    GetFFHThrottleState = Domain->GetFFHThrottleState;
    if ( !GetFFHThrottleState || !a1->PowerState.FFHThrottleStateInfo.EnableLogging )
      return 1;
    ((void (__fastcall *)(unsigned __int64 *, unsigned __int64))GetFFHThrottleState)(&v33, v21);
    if ( Domain->SelectedPercent < Domain->MinPerfPercent )
    {
      a1->PowerState.FFHThrottleStateInfo.Initialized = 0;
    }
    else
    {
      if ( !a1->PowerState.FFHThrottleStateInfo.Initialized )
      {
        a1->PowerState.FFHThrottleStateInfo.LastValue = v33;
        a1->PowerState.FFHThrottleStateInfo.Initialized = 1;
        return 1;
      }
      if ( a1->PowerState.FFHThrottleStateInfo.LastValue != v33 )
      {
        v28 = a1->PowerState.FFHThrottleStateInfo.MismatchCount + 1;
        a1->PowerState.FFHThrottleStateInfo.MismatchCount = v28;
        if ( !((unsigned int)v28 % PopProcessorThrottleLogInterval) || (_DWORD)v28 == 1 )
        {
          LODWORD(v28) = KeGetPcr()->Prcb.Number;
          PopDiagTraceIllegalProcessorThrottle(v28, v33, &a1->PowerState.FFHThrottleStateInfo.LastLogTickCount);
        }
      }
    }
    a1->PowerState.FFHThrottleStateInfo.LastValue = v33;
    return 1;
  }
  return result;
}
