/*
 * XREFs of RtlLogStackBackTraceEx @ 0x180007878
 * Callers:
 *     RtlpInitializeHeapSegment @ 0x180007164 (RtlpInitializeHeapSegment.c)
 *     RtlInitializeResource @ 0x1800076C0 (RtlInitializeResource.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x1800077B0 (RtlpAddDebugInfoToCriticalSection.c)
 *     RtlpFreeHeap @ 0x18002C140 (RtlpFreeHeap.c)
 *     RtlpAllocateHeap @ 0x180030C30 (RtlpAllocateHeap.c)
 *     RtlpAllocateTags @ 0x1800D8890 (RtlpAllocateTags.c)
 *     RtlLogStackBackTrace @ 0x1800E4700 (RtlLogStackBackTrace.c)
 *     RtlDebugAllocateHeap @ 0x1800EBDCC (RtlDebugAllocateHeap.c)
 *     RtlDebugCreateHeap @ 0x1800EC2EC (RtlDebugCreateHeap.c)
 *     RtlDebugReAllocateHeap @ 0x1800ECDE8 (RtlDebugReAllocateHeap.c)
 * Callees:
 *     RtlStdLogStackTrace @ 0x1800E49E0 (RtlStdLogStackTrace.c)
 *     RtlStdReleaseStackTrace @ 0x1800E4A40 (RtlStdReleaseStackTrace.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x1800E4DEC (RtlpStdGetRecordedStackTraceIndex.c)
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
