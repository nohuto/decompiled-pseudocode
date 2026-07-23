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
