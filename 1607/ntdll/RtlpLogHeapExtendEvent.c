/*
 * XREFs of RtlpLogHeapExtendEvent @ 0x1800F9310
 * Callers:
 *     RtlpAllocateHeap @ 0x180025050 (RtlpAllocateHeap.c)
 *     RtlpExtendHeap @ 0x180027780 (RtlpExtendHeap.c)
 *     RtlpFindAndCommitPages @ 0x1800283F0 (RtlpFindAndCommitPages.c)
 *     RtlpCommitBlock @ 0x180028B24 (RtlpCommitBlock.c)
 *     RtlpExtendLowFragHeapSegment @ 0x180028EF0 (RtlpExtendLowFragHeapSegment.c)
 *     RtlpCreateLowFragHeap @ 0x180029C24 (RtlpCreateLowFragHeap.c)
 * Callees:
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A6FD0 (NtTraceEvent.c)
 *     GetUCBytes @ 0x1800F797C (GetUCBytes.c)
 *     RtlpEstimateAllocatedSize @ 0x1800F7D40 (RtlpEstimateAllocatedSize.c)
 */

NTSTATUS __fastcall RtlpLogHeapExtendEvent(__int64 a1, __int64 a2, __int64 a3, __int64 a4, HANDLE TraceHandle)
{
  __int64 UCBytes; // rax
  _BYTE Fields[6]; // [rsp+20h] [rbp-31h] BYREF
  __int16 v9; // [rsp+26h] [rbp-2Bh]
  __int64 v10; // [rsp+40h] [rbp-11h]
  __int64 v11; // [rsp+48h] [rbp-9h]
  __int64 v12; // [rsp+50h] [rbp-1h]
  __int64 v13; // [rsp+58h] [rbp+7h]
  __int64 v14; // [rsp+60h] [rbp+Fh]
  __int64 v15; // [rsp+68h] [rbp+17h] BYREF
  int v16; // [rsp+70h] [rbp+1Fh] BYREF
  __int64 v17; // [rsp+74h] [rbp+23h]

  v15 = 0LL;
  v14 = 0LL;
  v16 = 0;
  v10 = a1;
  v11 = a3;
  v12 = a2;
  v13 = a4;
  v17 = RtlpEstimateAllocatedSize(a1);
  UCBytes = GetUCBytes(a1, &v15, &v16);
  v14 = v15 - *(_QWORD *)(a1 + 632) - UCBytes;
  v9 = 4133;
  return NtTraceEvent(TraceHandle, 0x403u, 0x3Cu, Fields);
}
