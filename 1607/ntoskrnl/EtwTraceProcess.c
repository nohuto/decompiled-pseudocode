/*
 * XREFs of EtwTraceProcess @ 0x14045C3DC
 * Callers:
 *     PspExitProcess @ 0x14045F434 (PspExitProcess.c)
 *     PspInsertThread @ 0x1404F9B40 (PspInsertThread.c)
 * Callees:
 *     IoSetThreadHardErrorMode @ 0x140074D38 (IoSetThreadHardErrorMode.c)
 *     TraceLoggingProviderEnabled @ 0x14010CF00 (TraceLoggingProviderEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     EtwpEnumerateAddressSpace @ 0x140429D0C (EtwpEnumerateAddressSpace.c)
 *     EtwpWriteProcessEvent @ 0x14045C5C0 (EtwpWriteProcessEvent.c)
 *     EtwpWriteAppStateChangeSummary @ 0x14054AF18 (EtwpWriteAppStateChangeSummary.c)
 *     EtwpAppStateChangeSummaryShouldLogCommandLine @ 0x14054C304 (EtwpAppStateChangeSummaryShouldLogCommandLine.c)
 *     EtwpInitStateChangeInfo @ 0x14054C3D4 (EtwpInitStateChangeInfo.c)
 *     EtwpWriteProcessStarted @ 0x14054CC84 (EtwpWriteProcessStarted.c)
 *     EtwpWriteAppStateChange @ 0x14054CE4C (EtwpWriteAppStateChange.c)
 *     EtwpLogProcessPerfCtrs @ 0x1406A251C (EtwpLogProcessPerfCtrs.c)
 */

void __fastcall EtwTraceProcess(ULONG_PTR BugCheckParameter1, __int16 a2)
{
  unsigned __int64 v2; // rbp
  char v5; // al
  BOOLEAN v6; // bl
  UCHAR v7; // dl
  void *v8; // rbx
  void *v9; // rcx
  char v10; // [rsp+70h] [rbp+0h] BYREF

  v2 = (unsigned __int64)&v10 & 0xFFFFFFFFFFFFFFC0uLL;
  if ( a2 == 770 )
  {
    v5 = PerfGlobalGroupMask;
    if ( (PerfGlobalGroupMask & 0xC004) != 0 )
    {
      v6 = IoSetThreadHardErrorMode(0);
      EtwpEnumerateAddressSpace(BugCheckParameter1, 0LL, (__int64)&PerfGlobalGroupMask);
      IoSetThreadHardErrorMode(v6);
      v5 = PerfGlobalGroupMask;
    }
    if ( (v5 & 8) != 0 )
      EtwpLogProcessPerfCtrs(BugCheckParameter1);
  }
  EtwpWriteProcessEvent(BugCheckParameter1, v2 + 8, v2 + 24);
  v8 = *(void **)(((unsigned __int64)&v10 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
  if ( a2 == 769 && TraceLoggingProviderEnabled(&stru_1402F3640, v7, 0x600000000003uLL) )
  {
    EtwpWriteProcessStarted(
      BugCheckParameter1,
      (unsigned __int64)&v10 & 0xFFFFFFFFFFFFFFC0uLL,
      v2 + 128,
      v2 + 8,
      (__int64)v8);
    EtwpInitStateChangeInfo(BugCheckParameter1, v2 + 32);
    *(_WORD *)(((unsigned __int64)&v10 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = 0;
    EtwpWriteAppStateChange(v2 + 32);
    if ( !(unsigned __int8)EtwpAppStateChangeSummaryShouldLogCommandLine(BugCheckParameter1) )
      *(_WORD *)(((unsigned __int64)&v10 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0;
    EtwpWriteAppStateChangeSummary(
      BugCheckParameter1,
      v2 + 32,
      0,
      v2 + 128,
      (unsigned __int64)&v10 & 0xFFFFFFFFFFFFFFC0uLL,
      v2 + 8);
  }
  v9 = *(void **)(((unsigned __int64)&v10 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
}
