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

NTSTATUS __fastcall RtlpLogHeapReuseThresholdActivate(__int64 a1, __int64 a2, int a3)
{
  _QWORD Fields[7]; // [rsp+20h] [rbp-58h] BYREF

  memset(Fields, 0, 52);
  Fields[4] = a1;
  HIWORD(Fields[0]) = 4154;
  Fields[5] = a2;
  LODWORD(Fields[6]) = a3;
  return NtTraceEvent((HANDLE)MEMORY[0x7FFE0380], 0x20402u, 0x14u, Fields);
}
