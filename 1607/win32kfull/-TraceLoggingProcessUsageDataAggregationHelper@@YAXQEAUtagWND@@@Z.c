/*
 * XREFs of ?TraceLoggingProcessUsageDataAggregationHelper@@YAXQEAUtagWND@@@Z @ 0x1C0099858
 * Callers:
 *     xxxActivateThisWindow @ 0x1C009BBAC (xxxActivateThisWindow.c)
 * Callees:
 *     IsShellProcess @ 0x1C009B064 (IsShellProcess.c)
 *     ?TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z @ 0x1C00AEEB4 (-TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z.c)
 */

void __fastcall TraceLoggingProcessUsageDataAggregationHelper(struct tagWND *const a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  if ( gptiCurrent )
  {
    v2 = *(_QWORD *)(gptiCurrent + 376LL);
    if ( v2 )
    {
      if ( !(unsigned int)IsShellProcess(v2) && *(_DWORD *)(v3 + 968) )
      {
        if ( !*(_DWORD *)(v3 + 880) )
        {
          *(_DWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 900LL) = (unsigned int)PsGetThreadProcessId((PETHREAD)*gptiCurrent);
          *(_DWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 932LL) &= ~1u;
          *(_DWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 932LL) &= ~2u;
          *(_DWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 932LL) &= ~4u;
          *(_DWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 928LL) = 0;
          *(_DWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 924LL) = 0;
        }
        TraceLoggingProcessMonitorInfoUpdateHelper(a1, 0);
        ++*(_DWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 880LL);
      }
    }
  }
}
