/*
 * XREFs of RtlLogStackBackTraceEx @ 0x180054FC8
 * Callers:
 *     RtlpFreeHeap @ 0x180022430 (RtlpFreeHeap.c)
 *     RtlpAllocateHeap @ 0x180027BE0 (RtlpAllocateHeap.c)
 *     RtlInitializeResource @ 0x180054E10 (RtlInitializeResource.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x180054F00 (RtlpAddDebugInfoToCriticalSection.c)
 *     RtlpInitializeHeapSegment @ 0x180057998 (RtlpInitializeHeapSegment.c)
 *     RtlDebugAllocateHeap @ 0x180092580 (RtlDebugAllocateHeap.c)
 *     RtlpAllocateTags @ 0x1800E08D4 (RtlpAllocateTags.c)
 *     RtlLogStackBackTrace @ 0x1800E9260 (RtlLogStackBackTrace.c)
 *     RtlDebugCreateHeap @ 0x1800EED84 (RtlDebugCreateHeap.c)
 *     RtlDebugReAllocateHeap @ 0x1800EF574 (RtlDebugReAllocateHeap.c)
 * Callees:
 *     RtlStdLogStackTrace @ 0x1800E9540 (RtlStdLogStackTrace.c)
 *     RtlStdReleaseStackTrace @ 0x1800E95A0 (RtlStdReleaseStackTrace.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x1800E994C (RtlpStdGetRecordedStackTraceIndex.c)
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
