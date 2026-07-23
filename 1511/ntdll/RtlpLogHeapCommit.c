/*
 * XREFs of RtlpLogHeapCommit @ 0x1800F15C0
 * Callers:
 *     RtlpHpSegPageRangeCommit @ 0x18001B578 (RtlpHpSegPageRangeCommit.c)
 *     RtlpExtendHeap @ 0x18001E644 (RtlpExtendHeap.c)
 *     RtlpFindAndCommitPages @ 0x18001E8B0 (RtlpFindAndCommitPages.c)
 *     RtlpAllocateHeap @ 0x180027BE0 (RtlpAllocateHeap.c)
 *     RtlpExtendLowFragHeapSegment @ 0x18004F4BC (RtlpExtendLowFragHeapSegment.c)
 *     RtlpCommitBlock @ 0x180052BE8 (RtlpCommitBlock.c)
 *     RtlpCreateLowFragHeap @ 0x180053214 (RtlpCreateLowFragHeap.c)
 *     RtlCreateHeap @ 0x180055310 (RtlCreateHeap.c)
 *     RtlpInitializeHeapSegment @ 0x180057998 (RtlpInitializeHeapSegment.c)
 *     RtlpHpSegSegmentAllocate @ 0x1800593FC (RtlpHpSegSegmentAllocate.c)
 *     RtlpHpSegHeapAllocate @ 0x180059598 (RtlpHpSegHeapAllocate.c)
 * Callees:
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A5C70 (NtTraceEvent.c)
 *     memset @ 0x1800AB900 (memset.c)
 */

NTSTATUS __fastcall RtlpLogHeapCommit(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  _QWORD Fields[8]; // [rsp+20h] [rbp-78h] BYREF

  memset(Fields, 0, sizeof(Fields));
  Fields[4] = a1;
  HIWORD(Fields[0]) = 4147;
  Fields[5] = a2;
  Fields[6] = a3;
  LODWORD(Fields[7]) = a4;
  return NtTraceEvent((HANDLE)MEMORY[0x7FFE0388], 0x20402u, 0x20u, Fields);
}
