/*
 * XREFs of RtlpLogHeapReuseThresholdActivate @ 0x1800F941C
 * Callers:
 *     RtlpLowFragHeapAllocFromContext @ 0x1800240B0 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpIsSubSegmentReuseable @ 0x1800460D4 (RtlpIsSubSegmentReuseable.c)
 *     RtlpIsSubSegmentReuseThresholdExceeded @ 0x18004F4A4 (RtlpIsSubSegmentReuseThresholdExceeded.c)
 * Callees:
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A6FD0 (NtTraceEvent.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

NTSTATUS __fastcall RtlpLogHeapReuseThresholdActivate(__int64 a1, __int64 a2, int a3)
{
  _QWORD Fields[7]; // [rsp+20h] [rbp-58h] BYREF

  memset(Fields, 0, 0x34uLL);
  Fields[4] = a1;
  HIWORD(Fields[0]) = 4154;
  Fields[5] = a2;
  LODWORD(Fields[6]) = a3;
  return NtTraceEvent((HANDLE)MEMORY[0x7FFE0380], 0x20402u, 0x14u, Fields);
}
