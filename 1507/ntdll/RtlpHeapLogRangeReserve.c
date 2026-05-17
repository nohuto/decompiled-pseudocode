/*
 * XREFs of RtlpHeapLogRangeReserve @ 0x1800EEFF4
 * Callers:
 *     RtlpHpSegSegmentAllocate @ 0x1800039A8 (RtlpHpSegSegmentAllocate.c)
 *     RtlpAllocateHeap @ 0x180030C30 (RtlpAllocateHeap.c)
 *     RtlpExtendHeap @ 0x1800334C0 (RtlpExtendHeap.c)
 *     RtlpHpLargeAlloc @ 0x1800586E4 (RtlpHpLargeAlloc.c)
 * Callees:
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x180093EE0 (NtTraceEvent.c)
 *     memset @ 0x180098540 (memset.c)
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
