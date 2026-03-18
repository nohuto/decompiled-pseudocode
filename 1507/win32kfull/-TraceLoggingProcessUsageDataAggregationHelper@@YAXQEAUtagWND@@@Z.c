/*
 * XREFs of ?TraceLoggingProcessUsageDataAggregationHelper@@YAXQEAUtagWND@@@Z @ 0x1C0080104
 * Callers:
 *     xxxActivateThisWindow @ 0x1C007F264 (xxxActivateThisWindow.c)
 * Callees:
 *     IsShellProcess @ 0x1C0080B7C (IsShellProcess.c)
 *     ?TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z @ 0x1C0081088 (-TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z.c)
 */

void __fastcall TraceLoggingProcessUsageDataAggregationHelper(struct tagWND *const a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  const char *ProcessImageFileName; // rax

  if ( gptiCurrent )
  {
    v2 = *(_QWORD *)(gptiCurrent + 384LL);
    if ( v2 )
    {
      if ( !(unsigned int)IsShellProcess(v2) && *(_DWORD *)(v3 + 992) )
      {
        if ( !*(_DWORD *)(v3 + 904) )
        {
          ProcessImageFileName = (const char *)PsGetProcessImageFileName(*(_QWORD *)v3);
          strncpy((char *)(*(_QWORD *)(gptiCurrent + 384LL) + 908LL), ProcessImageFileName, 0x10uLL);
          *(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 924LL) = (unsigned int)PsGetThreadProcessId((PETHREAD)*gptiCurrent);
          *(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 956LL) &= ~1u;
          *(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 956LL) &= ~2u;
          *(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 956LL) &= ~4u;
          *(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 952LL) = 0;
          *(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 948LL) = 0;
        }
        TraceLoggingProcessMonitorInfoUpdateHelper(a1, 0);
        ++*(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 904LL);
      }
    }
  }
}
