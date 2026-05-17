/*
 * XREFs of RtlpLogHeapContractEvent @ 0x1800EF6F8
 * Callers:
 *     RtlpDeCommitFreeBlock @ 0x180029048 (RtlpDeCommitFreeBlock.c)
 *     RtlpFreeHeap @ 0x18002C140 (RtlpFreeHeap.c)
 *     RtlpDecommitBlock @ 0x180037624 (RtlpDecommitBlock.c)
 * Callees:
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x180093EE0 (NtTraceEvent.c)
 *     GetUCBytes @ 0x1800EE99C (GetUCBytes.c)
 *     RtlpEstimateAllocatedSize @ 0x1800EED60 (RtlpEstimateAllocatedSize.c)
 */

__int64 __fastcall RtlpLogHeapContractEvent(__int64 a1)
{
  __int64 v3; // [rsp+68h] [rbp+7h] BYREF
  int v4; // [rsp+70h] [rbp+Fh] BYREF
  __int64 v5; // [rsp+74h] [rbp+13h]

  v3 = 0LL;
  v4 = 0;
  v5 = RtlpEstimateAllocatedSize(a1);
  GetUCBytes(a1, &v3, &v4);
  return NtTraceEvent();
}
