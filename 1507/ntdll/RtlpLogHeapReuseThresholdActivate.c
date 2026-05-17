/*
 * XREFs of RtlpLogHeapReuseThresholdActivate @ 0x1800EF9C4
 * Callers:
 *     RtlpIsSubSegmentReuseThresholdExceeded @ 0x180009460 (RtlpIsSubSegmentReuseThresholdExceeded.c)
 *     RtlpIsSubSegmentReuseable @ 0x18002D980 (RtlpIsSubSegmentReuseable.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x18002F190 (RtlpLowFragHeapAllocFromContext.c)
 * Callees:
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x180093EE0 (NtTraceEvent.c)
 *     memset @ 0x180098540 (memset.c)
 */

__int64 __fastcall RtlpLogHeapReuseThresholdActivate(__int64 a1, __int64 a2, int a3)
{
  _DWORD v7[12]; // [rsp+24h] [rbp-54h] BYREF

  memset(v7, 0, sizeof(v7));
  *(_QWORD *)&v7[7] = a1;
  HIWORD(v7[0]) = 4154;
  *(_QWORD *)&v7[9] = a2;
  v7[11] = a3;
  return NtTraceEvent();
}
