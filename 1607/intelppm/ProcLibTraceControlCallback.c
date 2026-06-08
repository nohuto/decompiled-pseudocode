/*
 * XREFs of ProcLibTraceControlCallback @ 0x1C0017DF0
 * Callers:
 *     <none>
 * Callees:
 *     InitializeEnumerationContext @ 0x1C00015A4 (InitializeEnumerationContext.c)
 *     EnumerateNextDevice @ 0x1C0001724 (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x1C0001760 (ResetEnumerationContext.c)
 *     _guard_dispatch_icall_nop @ 0x1C0002A70 (_guard_dispatch_icall_nop.c)
 *     ProcLibTraceCStateDomainRundown @ 0x1C0004198 (ProcLibTraceCStateDomainRundown.c)
 *     ProcLibTracePStateDomainRundown @ 0x1C0004338 (ProcLibTracePStateDomainRundown.c)
 *     ProcLibTraceSummary2 @ 0x1C0015104 (ProcLibTraceSummary2.c)
 *     ProcLibTraceGetPlatformIdleStates @ 0x1C001783C (ProcLibTraceGetPlatformIdleStates.c)
 *     ProcLibTraceBiosCStatesRundown @ 0x1C001A288 (ProcLibTraceBiosCStatesRundown.c)
 *     ProcLibTraceBiosPStatesRundown @ 0x1C001A4B8 (ProcLibTraceBiosPStatesRundown.c)
 *     ProcLibTraceBiosTStatesRundown @ 0x1C001A754 (ProcLibTraceBiosTStatesRundown.c)
 *     ProcLibTraceCoordinatedIdleStates @ 0x1C001AAC4 (ProcLibTraceCoordinatedIdleStates.c)
 *     ProcLibTraceGetProcessorIdleStates @ 0x1C001AE14 (ProcLibTraceGetProcessorIdleStates.c)
 *     ProcLibTraceGetProcessorIdleStatesV2 @ 0x1C001B010 (ProcLibTraceGetProcessorIdleStatesV2.c)
 *     ProcLibTraceNoPayloadEvent @ 0x1C001B21C (ProcLibTraceNoPayloadEvent.c)
 *     ProcLibTracePccSummary @ 0x1C001B274 (ProcLibTracePccSummary.c)
 *     ProcLibTracePepPerfCapabilities @ 0x1C001B34C (ProcLibTracePepPerfCapabilities.c)
 *     ProcLibTracePerfStatesRundown @ 0x1C001B64C (ProcLibTracePerfStatesRundown.c)
 *     ProcLibTracePlatformIdleStates @ 0x1C001B7B8 (ProcLibTracePlatformIdleStates.c)
 *     ProcLibTraceProcessorIds @ 0x1C001BA00 (ProcLibTraceProcessorIds.c)
 *     ProcLibTraceProcessorRundown @ 0x1C001BAE8 (ProcLibTraceProcessorRundown.c)
 *     ProcLibTraceQueryCapabilities @ 0x1C001BCFC (ProcLibTraceQueryCapabilities.c)
 *     ProcLibTraceSummary @ 0x1C001BE40 (ProcLibTraceSummary.c)
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
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rdx
  bool v14; // zf
  void (__fastcall *v15)(PWDF_DRIVER_GLOBALS, __int64); // rax
  __int64 v16; // [rsp+20h] [rbp-38h] BYREF
  __int64 v17[6]; // [rsp+28h] [rbp-30h] BYREF

  if ( ControlCode == 2 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, ULONGLONG))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1C000ECF8,
      0LL,
      MatchAnyKeyword);
    ProcLibTracePccSummary();
    for ( i = (__int64 *)qword_1C000ED38; i != &qword_1C000ED38; i = (__int64 *)*i )
      ProcLibTraceCStateDomainRundown((__int64)i);
    for ( j = (__int64 *)qword_1C000ED18; j != &qword_1C000ED18; j = (__int64 *)*j )
      ProcLibTracePStateDomainRundown((__int64)j);
    v6 = dword_1C000F168;
    if ( (dword_1C000F168 & 0x7F077) != 0 )
    {
      ProcLibTraceNoPayloadEvent(&PPM_ETW_IDLE_STATES_ERRATA_RUNDOWN);
      v6 = dword_1C000F168;
    }
    if ( (v6 & 0x70000000) != 0 )
    {
      ProcLibTraceNoPayloadEvent(&PPM_ETW_PERF_STATES_ERRATA_RUNDOWN);
      v6 = dword_1C000F168;
    }
    if ( (v6 & 0x3300000) != 0 )
    {
      ProcLibTraceNoPayloadEvent(&PPM_ETW_THROTTLE_STATES_ERRATA_RUNDOWN);
      v6 = dword_1C000F168;
    }
    if ( v6 < 0 )
      ProcLibTraceNoPayloadEvent(&PPM_ETW_PCC_ERRATA_RUNDOWN);
    InitializeEnumerationContext((__int64)&qword_1C000ED08, 32, (__int64)v17);
    ProcLibTraceGetPlatformIdleStates(1);
    LOBYTE(v7) = 1;
    ProcLibTracePlatformIdleStates(v7);
    LOBYTE(v8) = 1;
    ProcLibTraceCoordinatedIdleStates(v8);
    ResetEnumerationContext(v17);
    while ( 1 )
    {
      v14 = (unsigned int)EnumerateNextDevice((__int64)v17, &v16) == 0;
      v15 = *(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512);
      if ( !v14 )
        break;
      v15(WdfDriverGlobals, qword_1C000ECF8);
      v9 = v16;
      ProcLibTraceProcessorRundown(v16);
      ProcLibTraceSummary(v9);
      ProcLibTraceSummary2(v9, 1);
      ProcLibTracePerfStatesRundown(v9);
      ProcLibTraceBiosPStatesRundown(v9);
      ProcLibTraceBiosCStatesRundown(v9);
      ProcLibTraceBiosTStatesRundown(v9);
      LOBYTE(v10) = 1;
      ProcLibTraceQueryCapabilities(v9, v10);
      LOBYTE(v11) = 1;
      ProcLibTraceGetProcessorIdleStates(v9, v11);
      LOBYTE(v12) = 1;
      ProcLibTraceGetProcessorIdleStatesV2(v9, v12);
      LOBYTE(v13) = 1;
      ProcLibTracePepPerfCapabilities(v9, v13);
      ProcLibTraceProcessorIds(v9);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
        WdfDriverGlobals,
        qword_1C000ECF8,
        0LL);
    }
    v15(WdfDriverGlobals, qword_1C000ECF8);
  }
}
