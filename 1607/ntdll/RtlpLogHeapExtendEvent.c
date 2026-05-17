/*
 * XREFs of RtlpLogHeapExtendEvent @ 0x1800F9310
 * Callers:
 *     RtlpAllocateHeap @ 0x180025060 (RtlpAllocateHeap.c)
 *     RtlpExtendHeap @ 0x180027790 (RtlpExtendHeap.c)
 *     RtlpFindAndCommitPages @ 0x180028400 (RtlpFindAndCommitPages.c)
 *     RtlpCommitBlock @ 0x180028B34 (RtlpCommitBlock.c)
 *     RtlpExtendLowFragHeapSegment @ 0x180028F00 (RtlpExtendLowFragHeapSegment.c)
 *     RtlpCreateLowFragHeap @ 0x180029C34 (RtlpCreateLowFragHeap.c)
 * Callees:
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A6FD0 (NtTraceEvent.c)
 *     GetUCBytes @ 0x1800F797C (GetUCBytes.c)
 *     RtlpEstimateAllocatedSize @ 0x1800F7D40 (RtlpEstimateAllocatedSize.c)
 */

__int64 __fastcall RtlpLogHeapExtendEvent(__int64 a1)
{
  __int64 v3; // [rsp+68h] [rbp+17h] BYREF
  int v4; // [rsp+70h] [rbp+1Fh] BYREF
  __int64 v5; // [rsp+74h] [rbp+23h]

  v3 = 0LL;
  v4 = 0;
  v5 = RtlpEstimateAllocatedSize(a1);
  GetUCBytes(a1, &v3, &v4);
  return NtTraceEvent();
}
