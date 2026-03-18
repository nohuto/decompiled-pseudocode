/*
 * XREFs of PpmPerfSnapUtility @ 0x1400A6F10
 * Callers:
 *     PpmPerfAction @ 0x1400A6090 (PpmPerfAction.c)
 *     PpmCheckSnapAllUtility @ 0x1400A6B90 (PpmCheckSnapAllUtility.c)
 * Callees:
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     PpmSnapPerformanceAccumulation @ 0x1400A7330 (PpmSnapPerformanceAccumulation.c)
 *     KeGetCurrentProcessorNumberEx @ 0x140101D50 (KeGetCurrentProcessorNumberEx.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     PopDiagTraceIllegalProcessorThrottle @ 0x14023E474 (PopDiagTraceIllegalProcessorThrottle.c)
 */

char __fastcall PpmPerfSnapUtility(struct _KPRCB *a1)
{
  _PROC_PERF_CHECK *PerfCheck; // r15
  bool v3; // bp
  char result; // al
  char *p_TempSnap; // rbx
  char *p_Snap; // rsi
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  unsigned int LatestPerformancePercent; // r11d
  int v15; // eax
  __int64 v16; // rbp
  __int64 v17; // rcx
  __int64 v18; // rcx
  unsigned __int8 *TaggedThreadPercent; // r9
  unsigned __int64 *TaggedThreadCycles; // r8
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rdx
  _PROC_PERF_CONSTRAINT *PerfConstraint; // r8
  unsigned int v26; // eax
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rax
  _PROC_PERF_DOMAIN *Domain; // rbx
  void (__fastcall *GetFFHThrottleState)(unsigned __int64 *); // rax
  unsigned int v31; // ecx
  ULONG CurrentProcessorNumber; // eax
  bool v33; // [rsp+30h] [rbp-98h]
  __int16 Group; // [rsp+34h] [rbp-94h] BYREF
  int v35; // [rsp+38h] [rbp-90h]
  unsigned __int64 v36; // [rsp+40h] [rbp-88h] BYREF
  unsigned int v37; // [rsp+48h] [rbp-80h] BYREF
  unsigned __int64 v38; // [rsp+58h] [rbp-70h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-68h] BYREF
  unsigned __int8 *p_GroupIndex; // [rsp+70h] [rbp-58h]
  __int64 v41; // [rsp+78h] [rbp-50h]
  unsigned int *v42; // [rsp+80h] [rbp-48h]
  __int64 v43; // [rsp+88h] [rbp-40h]

  PerfCheck = a1->PowerState.PerfCheck;
  v3 = a1 != KeGetCurrentPrcb();
  v33 = v3;
  if ( !PerfCheck )
    return 1;
  p_TempSnap = (char *)&PerfCheck->TempSnap;
  p_Snap = (char *)&PerfCheck->Snap;
  result = PpmSnapPerformanceAccumulation((int)a1, 0, v3, 1, &PerfCheck->TempSnap);
  if ( result )
  {
    v7 = *(_QWORD *)p_TempSnap - *(_QWORD *)p_Snap;
    v8 = PerfCheck->TempSnap.Active - PerfCheck->Snap.Active;
    if ( *(_QWORD *)p_TempSnap <= *(_QWORD *)p_Snap || v8 > v7 && v3 )
    {
      return 0;
    }
    else
    {
      v9 = PerfCheck->TempSnap.Active - PerfCheck->Snap.Active;
      v10 = PerfCheck->TempSnap.CyclesAffinitized - PerfCheck->Snap.CyclesAffinitized;
      v11 = PerfCheck->TempSnap.CyclesActive - PerfCheck->Snap.CyclesActive;
      if ( !v8 )
        v9 = 1LL;
      v12 = (PerfCheck->TempSnap.PerformanceScaledActive - PerfCheck->Snap.PerformanceScaledActive) / v9;
      v13 = PerfCheck->TempSnap.CyclesActive - PerfCheck->Snap.CyclesActive;
      LatestPerformancePercent = v12;
      v38 = v12;
      if ( !v11 )
        v13 = 1LL;
      v15 = (unsigned __int8)(100 * v10 / v13);
      if ( (unsigned __int8)v15 > 0x64u )
        v15 = 100;
      v35 = v15;
      if ( !LatestPerformancePercent )
      {
        LatestPerformancePercent = a1->PowerState.LatestPerformancePercent;
        v38 = LatestPerformancePercent;
      }
      v16 = 2LL;
      if ( LatestPerformancePercent != a1->PowerState.LatestPerformancePercent )
      {
        v37 = LatestPerformancePercent;
        if ( PpmEtwRegistered )
        {
          if ( PpmEtwHandle )
          {
            if ( (v17 = *(_QWORD *)(PpmEtwHandle + 32), *(_DWORD *)(v17 + 80))
              && (unsigned __int8)(*(_BYTE *)(v17 + 84) - 1) > 2u
              && *(char *)(v17 + 96) < 0
              && (*(_QWORD *)(v17 + 104) & 0x80LL) == *(_QWORD *)(v17 + 104)
              || *(_BYTE *)(PpmEtwHandle + 100)
              && (v18 = *(_QWORD *)(PpmEtwHandle + 40), *(_DWORD *)(v18 + 80))
              && (unsigned __int8)(*(_BYTE *)(v18 + 84) - 1) > 2u
              && *(char *)(v18 + 96) < 0
              && (*(_QWORD *)(v18 + 104) & 0x80LL) == *(_QWORD *)(v18 + 104) )
            {
              Group = a1->Group;
              *(_QWORD *)&UserData.Size = 2LL;
              UserData.Ptr = (ULONGLONG)&Group;
              v41 = 1LL;
              p_GroupIndex = &a1->GroupIndex;
              v43 = 4LL;
              v42 = &v37;
              EtwWrite(PpmEtwHandle, &PPM_ETW_DELIVERED_PERF_CHANGE, 0LL, 3u, &UserData);
              LatestPerformancePercent = v38;
            }
          }
        }
      }
      TaggedThreadPercent = PerfCheck->TaggedThreadPercent;
      TaggedThreadCycles = PerfCheck->Snap.TaggedThreadCycles;
      do
      {
        v21 = v11;
        v22 = *(unsigned __int64 *)((char *)TaggedThreadCycles + p_TempSnap - p_Snap) - *TaggedThreadCycles;
        if ( !v11 )
          v21 = 1LL;
        v23 = 100 * v22 / v21;
        v24 = 100 * v22 % v21;
        if ( (unsigned __int8)v23 > 0x64u )
          LOBYTE(v23) = 100;
        *TaggedThreadPercent = v23;
        ++TaggedThreadCycles;
        ++TaggedThreadPercent;
        --v16;
      }
      while ( v16 );
      PerfConstraint = a1->PowerState.PerfConstraint;
      v26 = v35;
      a1->PowerState.LatestPerformancePercent = LatestPerformancePercent;
      a1->PowerState.LatestAffinitizedPercent = v26;
      if ( PerfConstraint )
      {
        v27 = v8;
        if ( !v8 )
          v27 = 1LL;
        v28 = (PerfCheck->TempSnap.FrequencyScaledActive - PerfCheck->Snap.FrequencyScaledActive) / v27;
        v24 = (PerfCheck->TempSnap.FrequencyScaledActive - PerfCheck->Snap.FrequencyScaledActive) % v27;
        if ( !(_DWORD)v28 )
          LODWORD(v28) = PerfConstraint->LatestFrequencyPercent;
        PerfConstraint->LatestFrequencyPercent = v28;
      }
      *(_OWORD *)p_Snap = *(_OWORD *)p_TempSnap;
      *(_OWORD *)&PerfCheck->Snap.Stall = *(_OWORD *)&PerfCheck->TempSnap.Stall;
      *(_OWORD *)&PerfCheck->Snap.PerformanceScaledActive = *(_OWORD *)&PerfCheck->TempSnap.PerformanceScaledActive;
      *(_OWORD *)&PerfCheck->Snap.CyclesActive = *(_OWORD *)&PerfCheck->TempSnap.CyclesActive;
      *(_OWORD *)PerfCheck->Snap.TaggedThreadCycles = *(_OWORD *)PerfCheck->TempSnap.TaggedThreadCycles;
      a1->PowerState.ActiveTime += v8;
      a1->PowerState.TotalTime += v7;
      if ( !v33 )
      {
        Domain = a1->PowerState.Domain;
        if ( PopProcessorThrottleLogInterval )
        {
          if ( Domain )
          {
            GetFFHThrottleState = Domain->GetFFHThrottleState;
            if ( GetFFHThrottleState )
            {
              if ( a1->PowerState.FFHThrottleStateInfo.EnableLogging )
              {
                ((void (__fastcall *)(unsigned __int64 *, unsigned __int64, _PROC_PERF_CONSTRAINT *, unsigned __int8 *))GetFFHThrottleState)(
                  &v36,
                  v24,
                  PerfConstraint,
                  TaggedThreadPercent);
                if ( Domain->SelectedPercent >= Domain->MinPerfPercent )
                {
                  if ( a1->PowerState.FFHThrottleStateInfo.Initialized )
                  {
                    if ( a1->PowerState.FFHThrottleStateInfo.LastValue != v36 )
                    {
                      v31 = a1->PowerState.FFHThrottleStateInfo.MismatchCount + 1;
                      a1->PowerState.FFHThrottleStateInfo.MismatchCount = v31;
                      if ( !(v31 % PopProcessorThrottleLogInterval) || v31 == 1 )
                      {
                        CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(0LL);
                        PopDiagTraceIllegalProcessorThrottle(
                          CurrentProcessorNumber,
                          v36,
                          &a1->PowerState.FFHThrottleStateInfo.LastLogTickCount);
                      }
                    }
                  }
                  else
                  {
                    a1->PowerState.FFHThrottleStateInfo.Initialized = 1;
                  }
                }
                else
                {
                  a1->PowerState.FFHThrottleStateInfo.Initialized = 0;
                }
                a1->PowerState.FFHThrottleStateInfo.LastValue = v36;
              }
            }
          }
        }
      }
      return 1;
    }
  }
  return result;
}
