/*
 * XREFs of RtlpLogHeapExtendEvent @ 0x1800EF8B8
 * Callers:
 *     RtlpCreateLowFragHeap @ 0x180004D48 (RtlpCreateLowFragHeap.c)
 *     RtlpAllocateHeap @ 0x180030C30 (RtlpAllocateHeap.c)
 *     RtlpExtendHeap @ 0x1800334C0 (RtlpExtendHeap.c)
 *     RtlpFindAndCommitPages @ 0x180034110 (RtlpFindAndCommitPages.c)
 *     RtlpCommitBlock @ 0x180036FB4 (RtlpCommitBlock.c)
 *     RtlpExtendLowFragHeapSegment @ 0x18006ACE0 (RtlpExtendLowFragHeapSegment.c)
 * Callees:
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x180093EE0 (NtTraceEvent.c)
 *     GetUCBytes @ 0x1800EE99C (GetUCBytes.c)
 *     RtlpEstimateAllocatedSize @ 0x1800EED60 (RtlpEstimateAllocatedSize.c)
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
