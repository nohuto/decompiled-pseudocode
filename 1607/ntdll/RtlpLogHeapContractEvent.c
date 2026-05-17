/*
 * XREFs of RtlpLogHeapContractEvent @ 0x1800F9154
 * Callers:
 *     RtlpDecommitBlock @ 0x180028CB4 (RtlpDecommitBlock.c)
 *     RtlpFreeHeap @ 0x180049370 (RtlpFreeHeap.c)
 *     RtlpDeCommitFreeBlock @ 0x18004A810 (RtlpDeCommitFreeBlock.c)
 * Callees:
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A6FD0 (NtTraceEvent.c)
 *     GetUCBytes @ 0x1800F797C (GetUCBytes.c)
 *     RtlpEstimateAllocatedSize @ 0x1800F7D40 (RtlpEstimateAllocatedSize.c)
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
