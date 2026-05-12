/*
 * XREFs of StorpRegisterTraceLogging @ 0x1C004C914
 * Callers:
 *     RaInitializeDriver @ 0x1C004CBF0 (RaInitializeDriver.c)
 * Callees:
 *     StorpInitializePerfTelemetry @ 0x1C000AE68 (StorpInitializePerfTelemetry.c)
 *     _TlgWrite @ 0x1C000F63C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C000F6DC (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0012DB0 (__security_check_cookie.c)
 *     TraceLoggingRegisterEx @ 0x1C0050C58 (TraceLoggingRegisterEx.c)
 */

char __fastcall StorpRegisterTraceLogging(const struct _TlgProvider_t *a1, ETWENABLECALLBACK *a2, void *a3)
{
  TLG_STATUS v3; // eax
  const struct _TlgProvider_t *v4; // rcx
  const GUID *v5; // r8
  const GUID *v6; // r9
  __int64 v8; // [rsp+30h] [rbp-59h] BYREF
  __int64 v9; // [rsp+38h] [rbp-51h] BYREF
  __int64 v10; // [rsp+40h] [rbp-49h] BYREF
  __int64 v11; // [rsp+48h] [rbp-41h] BYREF
  __int64 v12; // [rsp+50h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-29h] BYREF
  __int64 *v14; // [rsp+80h] [rbp-9h]
  int v15; // [rsp+88h] [rbp-1h]
  int v16; // [rsp+8Ch] [rbp+3h]
  __int64 *v17; // [rsp+90h] [rbp+7h]
  int v18; // [rsp+98h] [rbp+Fh]
  int v19; // [rsp+9Ch] [rbp+13h]
  __int64 *v20; // [rsp+A0h] [rbp+17h]
  int v21; // [rsp+A8h] [rbp+1Fh]
  int v22; // [rsp+ACh] [rbp+23h]
  __int64 *v23; // [rsp+B0h] [rbp+27h]
  int v24; // [rsp+B8h] [rbp+2Fh]
  int v25; // [rsp+BCh] [rbp+33h]
  __int64 *v26; // [rsp+C0h] [rbp+37h]
  int v27; // [rsp+C8h] [rbp+3Fh]
  int v28; // [rsp+CCh] [rbp+43h]

  if ( g_StorpTraceLoggingPerformanceEnabled )
    StorpInitializePerfTelemetry();
  v3 = TraceLoggingRegisterEx(a1, a2, a3);
  if ( v3 >= 0 )
  {
    g_StorpTraceLoggingInitialized = 1;
    if ( (unsigned int)dword_1C0044050 > 5 && TlgKeywordOn(v4, 0x400000000000uLL) )
    {
      v11 = -1LL;
      v16 = 0;
      v19 = 0;
      v22 = 0;
      v25 = 0;
      v28 = 0;
      v14 = &v12;
      v17 = &v10;
      v20 = &v8;
      v23 = &v9;
      v26 = &v11;
      v12 = 1000000LL;
      v10 = 10000000LL;
      v8 = 100000000LL;
      v9 = 300000000LL;
      v15 = 8;
      v18 = 8;
      v21 = 8;
      v24 = 8;
      v27 = 8;
      TlgWrite((TraceLoggingHProvider)8, &unk_1C003DAE0, v5, v6, 7u, &pData);
    }
    KeInitializeTimer(&g_StorpTraceLoggingDailyTimer);
    KeInitializeDpc(
      &g_StorpTraceLoggingDailyTimerDpc,
      (PKDEFERRED_ROUTINE)StorpTraceLoggingTelemetryTimerDpcRoutine,
      0LL);
    KeSetCoalescableTimer(
      &g_StorpTraceLoggingDailyTimer,
      (LARGE_INTEGER)-864000000000LL,
      0,
      0xDBBA0u,
      &g_StorpTraceLoggingDailyTimerDpc);
    KeInitializeTimer(&g_StorpTraceLoggingHierarchicalResetTimer);
    KeInitializeDpc(
      &g_StorpTraceLoggingHierarchicalResetTimerDpc,
      (PKDEFERRED_ROUTINE)StorpTraceLoggingTelemetryTimerDpcRoutine,
      0LL);
    LOBYTE(v3) = KeSetCoalescableTimer(
                   &g_StorpTraceLoggingHierarchicalResetTimer,
                   (LARGE_INTEGER)-138000000000LL,
                   0,
                   0x493E0u,
                   &g_StorpTraceLoggingHierarchicalResetTimerDpc);
    if ( g_StorpTraceLoggingPerformanceEnabled || g_StorpTraceLoggingErrorDataEnabled )
    {
      KeInitializeTimer(&g_StorpTraceLoggingPerformanceTimer);
      KeInitializeDpc(
        &g_StorpTraceLoggingPerformanceTimerDpc,
        (PKDEFERRED_ROUTINE)StorpTraceLoggingTelemetryTimerDpcRoutine,
        0LL);
      LOBYTE(v3) = KeSetCoalescableTimer(
                     &g_StorpTraceLoggingPerformanceTimer,
                     (LARGE_INTEGER)-36000000000LL,
                     0,
                     0x493E0u,
                     &g_StorpTraceLoggingPerformanceTimerDpc);
    }
  }
  return v3;
}
