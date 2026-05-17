/*
 * XREFs of RtlpLogHeapCommit @ 0x1800EF668
 * Callers:
 *     RtlpHpSegSegmentAllocate @ 0x1800039A8 (RtlpHpSegSegmentAllocate.c)
 *     RtlpHpSegHeapAllocate @ 0x180003BE8 (RtlpHpSegHeapAllocate.c)
 *     RtlpCreateLowFragHeap @ 0x180004D48 (RtlpCreateLowFragHeap.c)
 *     RtlCreateHeap @ 0x180005330 (RtlCreateHeap.c)
 *     RtlpInitializeHeapSegment @ 0x180007164 (RtlpInitializeHeapSegment.c)
 *     RtlpAllocateHeap @ 0x180030C30 (RtlpAllocateHeap.c)
 *     RtlpExtendHeap @ 0x1800334C0 (RtlpExtendHeap.c)
 *     RtlpFindAndCommitPages @ 0x180034110 (RtlpFindAndCommitPages.c)
 *     RtlpCommitBlock @ 0x180036FB4 (RtlpCommitBlock.c)
 *     RtlpHpSegLfhVsCommit @ 0x180037280 (RtlpHpSegLfhVsCommit.c)
 *     RtlpExtendLowFragHeapSegment @ 0x18006ACE0 (RtlpExtendLowFragHeapSegment.c)
 *     RtlpHpSegPageRangeCommit @ 0x1800704D4 (RtlpHpSegPageRangeCommit.c)
 * Callees:
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x180093EE0 (NtTraceEvent.c)
 *     memset @ 0x180098540 (memset.c)
 */

__int64 __fastcall RtlpLogHeapCommit(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  _DWORD v9[15]; // [rsp+24h] [rbp-74h] BYREF

  memset(v9, 0, sizeof(v9));
  *(_QWORD *)&v9[7] = a1;
  HIWORD(v9[0]) = 4147;
  *(_QWORD *)&v9[9] = a2;
  *(_QWORD *)&v9[11] = a3;
  v9[13] = a4;
  return NtTraceEvent();
}
