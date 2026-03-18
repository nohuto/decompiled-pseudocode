/*
 * XREFs of _TlgCreateSz @ 0x1C007C2B8
 * Callers:
 *     ?TraceLoggingShowWindowDPIAwarenessEvent@@YAXQEAUtagWND@@@Z @ 0x1C007BF90 (-TraceLoggingShowWindowDPIAwarenessEvent@@YAXQEAUtagWND@@@Z.c)
 *     ?TraceLoggingProcessUsageOnTerminationEvent@@YAXQEAUtagPROCESSINFO@@@Z @ 0x1C007C348 (-TraceLoggingProcessUsageOnTerminationEvent@@YAXQEAUtagPROCESSINFO@@@Z.c)
 *     ?TraceLoggingNewWindowPosToHandleDPIChangeEvent@@YAXQEAUtagWND@@HHHH@Z @ 0x1C0224368 (-TraceLoggingNewWindowPosToHandleDPIChangeEvent@@YAXQEAUtagWND@@HHHH@Z.c)
 *     ?TraceLoggingStubInvalidParamEvent@@YAXIKPEAD@Z @ 0x1C0224CBC (-TraceLoggingStubInvalidParamEvent@@YAXIKPEAD@Z.c)
 *     ?TraceLoggingTouchInjection@@YAXHHHK@Z @ 0x1C0224DC8 (-TraceLoggingTouchInjection@@YAXHHHK@Z.c)
 * Callees:
 *     <none>
 */

void __stdcall TlgCreateSz(PEVENT_DATA_DESCRIPTOR pDesc, LPCSTR psz)
{
  __int64 v2; // rax
  LPCSTR v3; // r8

  LODWORD(v2) = 0;
  v3 = (LPCSTR)qword_1C01603C0;
  if ( psz )
  {
    v3 = psz;
    v2 = -1LL;
    do
      ++v2;
    while ( psz[v2] );
  }
  pDesc->Reserved = 0;
  pDesc->Size = v2 + 1;
  pDesc->Ptr = (ULONGLONG)v3;
}
