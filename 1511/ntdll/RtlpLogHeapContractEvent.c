/*
 * XREFs of RtlpLogHeapContractEvent @ 0x1800F1650
 * Callers:
 *     RtlpDeCommitFreeBlock @ 0x18001F148 (RtlpDeCommitFreeBlock.c)
 *     RtlpFreeHeap @ 0x180022430 (RtlpFreeHeap.c)
 *     RtlpDecommitBlock @ 0x180052D68 (RtlpDecommitBlock.c)
 * Callees:
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A5C70 (NtTraceEvent.c)
 *     GetUCBytes @ 0x1800F096C (GetUCBytes.c)
 *     RtlpEstimateAllocatedSize @ 0x1800F0D30 (RtlpEstimateAllocatedSize.c)
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
