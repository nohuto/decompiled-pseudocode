/*
 * XREFs of ?TraceLoggingProcessUsageDataAggregationHelper@@YAXQEAUtagWND@@@Z @ 0x1C008F76C
 * Callers:
 *     xxxActivateThisWindow @ 0x1C008E8B8 (xxxActivateThisWindow.c)
 * Callees:
 *     IsShellProcess @ 0x1C00738DC (IsShellProcess.c)
 *     ?TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z @ 0x1C0091A7C (-TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z.c)
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
      if ( !(unsigned int)IsShellProcess(v2) && *(_DWORD *)(v3 + 976) )
      {
        if ( !*(_DWORD *)(v3 + 888) )
        {
          *(_DWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 908LL) = (unsigned int)PsGetThreadProcessId((PETHREAD)*gptiCurrent);
          *(_DWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 940LL) &= ~1u;
          *(_DWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 940LL) &= ~2u;
          *(_DWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 940LL) &= ~4u;
          *(_DWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 936LL) = 0;
          *(_DWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 932LL) = 0;
        }
        TraceLoggingProcessMonitorInfoUpdateHelper(a1, 0);
        ++*(_DWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 888LL);
      }
    }
  }
}
