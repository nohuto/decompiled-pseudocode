/*
 * XREFs of RtlLogStackBackTraceEx @ 0x18002B1F8
 * Callers:
 *     RtlpAllocateHeap @ 0x180025050 (RtlpAllocateHeap.c)
 *     RtlInitializeResource @ 0x18002B040 (RtlInitializeResource.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x18002B130 (RtlpAddDebugInfoToCriticalSection.c)
 *     RtlpFreeHeap @ 0x180049360 (RtlpFreeHeap.c)
 *     RtlpInitializeHeapSegment @ 0x18004CCBC (RtlpInitializeHeapSegment.c)
 *     RtlDebugAllocateHeap @ 0x1800917C4 (RtlDebugAllocateHeap.c)
 *     RtlpAllocateTags @ 0x1800E9AF4 (RtlpAllocateTags.c)
 *     RtlLogStackBackTrace @ 0x1800F2570 (RtlLogStackBackTrace.c)
 *     RtlDebugCreateHeap @ 0x1800FA2A0 (RtlDebugCreateHeap.c)
 *     RtlDebugReAllocateHeap @ 0x1800FAA84 (RtlDebugReAllocateHeap.c)
 * Callees:
 *     RtlStdLogStackTrace @ 0x1800F2850 (RtlStdLogStackTrace.c)
 *     RtlStdReleaseStackTrace @ 0x1800F28B0 (RtlStdReleaseStackTrace.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x1800F2C5C (RtlpStdGetRecordedStackTraceIndex.c)
 */

__int64 __fastcall RtlLogStackBackTraceEx(unsigned int a1)
{
  __int64 v1; // rbx
  __int64 v3; // rax
  __int64 v4; // rsi
  unsigned int RecordedStackTraceIndex; // edi

  v1 = RtlpStackTraceDatabase;
  if ( !RtlpStackTraceDatabase )
    return 0LL;
  v3 = RtlStdLogStackTrace(RtlpStackTraceDatabase, a1);
  v4 = v3;
  if ( v3 )
  {
    RecordedStackTraceIndex = RtlpStdGetRecordedStackTraceIndex(v1, v3);
    if ( !RecordedStackTraceIndex )
      RtlStdReleaseStackTrace(v1, v4);
  }
  else
  {
    return 0;
  }
  return RecordedStackTraceIndex;
}
