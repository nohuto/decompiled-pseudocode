/*
 * XREFs of RtlpLogHeapReuseThresholdActivate @ 0x1800F191C
 * Callers:
 *     RtlpIsSubSegmentReuseable @ 0x1800238C0 (RtlpIsSubSegmentReuseable.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x180025DE0 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpIsSubSegmentReuseThresholdExceeded @ 0x18004F5A8 (RtlpIsSubSegmentReuseThresholdExceeded.c)
 * Callees:
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A5C70 (NtTraceEvent.c)
 *     memset @ 0x1800AB900 (memset.c)
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
