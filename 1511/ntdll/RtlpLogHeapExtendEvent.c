/*
 * XREFs of RtlpLogHeapExtendEvent @ 0x1800F1810
 * Callers:
 *     RtlpExtendHeap @ 0x18001E644 (RtlpExtendHeap.c)
 *     RtlpFindAndCommitPages @ 0x18001E8B0 (RtlpFindAndCommitPages.c)
 *     RtlpAllocateHeap @ 0x180027BE0 (RtlpAllocateHeap.c)
 *     RtlpExtendLowFragHeapSegment @ 0x18004F4BC (RtlpExtendLowFragHeapSegment.c)
 *     RtlpCommitBlock @ 0x180052BE8 (RtlpCommitBlock.c)
 *     RtlpCreateLowFragHeap @ 0x180053214 (RtlpCreateLowFragHeap.c)
 * Callees:
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A5C70 (NtTraceEvent.c)
 *     GetUCBytes @ 0x1800F096C (GetUCBytes.c)
 *     RtlpEstimateAllocatedSize @ 0x1800F0D30 (RtlpEstimateAllocatedSize.c)
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
