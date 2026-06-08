/*
 * XREFs of ProcLibTraceControlCallback @ 0x1C00133C0
 * Callers:
 *     <none>
 * Callees:
 *     ProcLibTraceCStateDomainRundown @ 0x1C0001FA0 (ProcLibTraceCStateDomainRundown.c)
 *     ProcLibTracePStateDomainRundown @ 0x1C0002040 (ProcLibTracePStateDomainRundown.c)
 *     ProcLibGetProcessorNumber @ 0x1C0002104 (ProcLibGetProcessorNumber.c)
 *     InitializeEnumerationContext @ 0x1C00061D4 (InitializeEnumerationContext.c)
 *     ResetEnumerationContext @ 0x1C00061FC (ResetEnumerationContext.c)
 *     EnumerateNextDevice @ 0x1C0006210 (EnumerateNextDevice.c)
 *     __security_check_cookie @ 0x1C0006330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00067E0 (_guard_dispatch_icall_nop.c)
 *     ProcLibTraceSummary @ 0x1C0012B50 (ProcLibTraceSummary.c)
 *     ProcLibTraceSummary2 @ 0x1C0012E34 (ProcLibTraceSummary2.c)
 *     ProcLibTraceNoPayloadEvent @ 0x1C001321C (ProcLibTraceNoPayloadEvent.c)
 *     ProcLibTraceProcessorRundown @ 0x1C00137DC (ProcLibTraceProcessorRundown.c)
 *     ProcLibTracePccSummary @ 0x1C00139F0 (ProcLibTracePccSummary.c)
 *     ProcLibTraceBiosPStatesRundown @ 0x1C0013AC8 (ProcLibTraceBiosPStatesRundown.c)
 *     ProcLibTraceBiosCStatesRundown @ 0x1C0013D64 (ProcLibTraceBiosCStatesRundown.c)
 *     ProcLibTraceBiosTStatesRundown @ 0x1C0013F94 (ProcLibTraceBiosTStatesRundown.c)
 *     ProcLibTraceQueryCapabilities @ 0x1C0014208 (ProcLibTraceQueryCapabilities.c)
 *     ProcLibTraceGetPlatformIdleStates @ 0x1C001434C (ProcLibTraceGetPlatformIdleStates.c)
 *     ProcLibTraceGetProcessorIdleStates @ 0x1C00143D8 (ProcLibTraceGetProcessorIdleStates.c)
 *     ProcLibTraceGetProcessorIdleStatesV2 @ 0x1C00145D4 (ProcLibTraceGetProcessorIdleStatesV2.c)
 *     ProcLibTracePepPerfCapabilities @ 0x1C00147C8 (ProcLibTracePepPerfCapabilities.c)
 *     ProcLibTracePlatformIdleStates @ 0x1C00149D4 (ProcLibTracePlatformIdleStates.c)
 *     ProcLibTraceCoordinatedIdleStates @ 0x1C0014CF8 (ProcLibTraceCoordinatedIdleStates.c)
 */

void __fastcall ProcLibTraceControlCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword)
{
  __int64 *i; // rbx
  __int64 *j; // rbx
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  _QWORD *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rsi
  _BYTE *PoolWithTag; // rdi
  unsigned int v14; // ecx
  __int64 k; // r9
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rdx
  unsigned int v23; // [rsp+30h] [rbp-61h] BYREF
  struct _PROCESSOR_NUMBER v24; // [rsp+34h] [rbp-5Dh] BYREF
  struct _PROCESSOR_NUMBER v25; // [rsp+38h] [rbp-59h] BYREF
  _QWORD *v26; // [rsp+40h] [rbp-51h] BYREF
  __int64 v27[5]; // [rsp+48h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp-21h] BYREF
  unsigned __int8 *p_Number; // [rsp+80h] [rbp-11h]
  int v30; // [rsp+88h] [rbp-9h]
  int v31; // [rsp+8Ch] [rbp-5h]
  unsigned int *v32; // [rsp+90h] [rbp-1h]
  int v33; // [rsp+98h] [rbp+7h]
  int v34; // [rsp+9Ch] [rbp+Bh]
  _QWORD *v35; // [rsp+A0h] [rbp+Fh]
  int v36; // [rsp+A8h] [rbp+17h]
  int v37; // [rsp+ACh] [rbp+1Bh]
  _QWORD *v38; // [rsp+B0h] [rbp+1Fh]
  int v39; // [rsp+B8h] [rbp+27h]
  int v40; // [rsp+BCh] [rbp+2Bh]

  if ( ControlCode == 2 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, ULONGLONG))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1C00093A8,
      0LL,
      MatchAnyKeyword);
    ProcLibTracePccSummary();
    for ( i = (__int64 *)qword_1C00093E8; i != &qword_1C00093E8; i = (__int64 *)*i )
      ProcLibTraceCStateDomainRundown((__int64)i);
    for ( j = (__int64 *)qword_1C00093C8; j != &qword_1C00093C8; j = (__int64 *)*j )
      ProcLibTracePStateDomainRundown((__int64)j);
    v6 = dword_1C0009818;
    if ( (dword_1C0009818 & 0x7F077) != 0 )
    {
      ProcLibTraceNoPayloadEvent(&PPM_ETW_IDLE_STATES_ERRATA_RUNDOWN);
      v6 = dword_1C0009818;
    }
    if ( (v6 & 0x70000000) != 0 )
    {
      ProcLibTraceNoPayloadEvent(&PPM_ETW_PERF_STATES_ERRATA_RUNDOWN);
      v6 = dword_1C0009818;
    }
    if ( (v6 & 0x3300000) != 0 )
    {
      ProcLibTraceNoPayloadEvent(&PPM_ETW_THROTTLE_STATES_ERRATA_RUNDOWN);
      v6 = dword_1C0009818;
    }
    if ( v6 < 0 )
      ProcLibTraceNoPayloadEvent(&PPM_ETW_PCC_ERRATA_RUNDOWN);
    InitializeEnumerationContext((__int64)&qword_1C00093B8, 32, (__int64)v27);
    LOBYTE(v7) = 1;
    ProcLibTraceGetPlatformIdleStates(v7);
    LOBYTE(v8) = 1;
    ProcLibTracePlatformIdleStates(v8);
    LOBYTE(v9) = 1;
    ProcLibTraceCoordinatedIdleStates(v9);
    ResetEnumerationContext(v27);
    while ( !(unsigned int)EnumerateNextDevice((__int64)v27, &v26) )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
        WdfDriverGlobals,
        qword_1C00093A8);
      v10 = v26;
      ProcLibTraceProcessorRundown(v26);
      ProcLibTraceSummary(v10);
      ProcLibTraceSummary2((__int64)v10, 1);
      if ( EtwEventEnabled(ProcLibEtwHandle, &PPM_ETW_PERF_STATES_RUNDOWN) )
      {
        if ( (int)ProcLibGetProcessorNumber((__int64)v10, &v24) >= 0 )
        {
          v11 = v10[25];
          if ( v11 )
          {
            v12 = *(_QWORD *)(v11 + 24);
            v23 = *(_DWORD *)(v12 + 56);
            PoolWithTag = ExAllocatePoolWithTag(PagedPool, 6LL * v23, 0x72637250u);
            if ( PoolWithTag )
            {
              v14 = v23;
              for ( k = 0LL; (unsigned int)k < v23; v14 = v23 )
              {
                v16 = 3 * k;
                v17 = 32LL * (unsigned int)k;
                k = (unsigned int)(k + 1);
                v18 = *(_QWORD *)(v12 + 48) + v17;
                *(_DWORD *)&PoolWithTag[2 * v16] = *(_DWORD *)(v18 + 16);
                PoolWithTag[2 * v16 + 4] = *(_BYTE *)(v18 + 24);
                PoolWithTag[2 * v16 + 5] = *(_BYTE *)(v18 + 25);
              }
              UserData.Reserved = 0;
              v31 = 0;
              v34 = 0;
              v37 = 0;
              UserData.Ptr = (unsigned __int64)&v24;
              p_Number = &v24.Number;
              v32 = &v23;
              v36 = 6 * v14;
              UserData.Size = 2;
              v30 = 1;
              v33 = 4;
              v35 = PoolWithTag;
              EtwWrite(ProcLibEtwHandle, &PPM_ETW_PERF_STATES_RUNDOWN, 0LL, 4u, &UserData);
              ExFreePoolWithTag(PoolWithTag, 0x72637250u);
            }
          }
        }
      }
      ProcLibTraceBiosPStatesRundown(v10);
      ProcLibTraceBiosCStatesRundown(v10);
      ProcLibTraceBiosTStatesRundown(v10);
      LOBYTE(v19) = 1;
      ProcLibTraceQueryCapabilities(v10, v19);
      LOBYTE(v20) = 1;
      ProcLibTraceGetProcessorIdleStates(v10, v20);
      LOBYTE(v21) = 1;
      ProcLibTraceGetProcessorIdleStatesV2(v10, v21);
      LOBYTE(v22) = 1;
      ProcLibTracePepPerfCapabilities(v10, v22);
      if ( EtwEventEnabled(ProcLibEtwHandle, &PPM_ETW_PROCESSOR_ID_RUNDOWN) )
      {
        if ( (int)ProcLibGetProcessorNumber((__int64)v10, &v25) >= 0 )
        {
          UserData.Reserved = 0;
          v31 = 0;
          v34 = 0;
          v37 = 0;
          v40 = 0;
          UserData.Ptr = (unsigned __int64)&v25;
          p_Number = &v25.Number;
          v32 = (unsigned int *)v10 + 13;
          v35 = v10 + 6;
          v38 = v10 + 7;
          UserData.Size = 2;
          v30 = 1;
          v33 = 4;
          v36 = 4;
          v39 = 4;
          EtwWrite(ProcLibEtwHandle, &PPM_ETW_PROCESSOR_ID_RUNDOWN, 0LL, 5u, &UserData);
        }
      }
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
        WdfDriverGlobals,
        qword_1C00093A8,
        0LL);
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      qword_1C00093A8);
  }
}
