/*
 * XREFs of RtlpHeapLogRangeReserve @ 0x1800F0F4C
 * Callers:
 *     RtlpExtendHeap @ 0x18001E644 (RtlpExtendHeap.c)
 *     RtlpAllocateHeap @ 0x180027BE0 (RtlpAllocateHeap.c)
 *     RtlpHpSegSegmentAllocate @ 0x1800593FC (RtlpHpSegSegmentAllocate.c)
 *     RtlpHpLargeAlloc @ 0x18005A614 (RtlpHpLargeAlloc.c)
 * Callees:
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A5C70 (NtTraceEvent.c)
 *     memset @ 0x1800AB900 (memset.c)
 */

__int64 __fastcall RtlpHeapLogRangeReserve(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD v7[13]; // [rsp+24h] [rbp-54h] BYREF

  memset(v7, 0, sizeof(v7));
  *(_QWORD *)&v7[7] = a1;
  HIWORD(v7[0]) = 614;
  *(_QWORD *)&v7[9] = a2;
  *(_QWORD *)&v7[11] = a3;
  return NtTraceEvent();
}
