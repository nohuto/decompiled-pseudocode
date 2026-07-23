/*
 * XREFs of RtlpLogHeapSubSegmentActivate @ 0x1800F949C
 * Callers:
 *     RtlpLowFragHeapAllocFromContext @ 0x1800240B0 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpLocalInfoAllocFromCache @ 0x18004EFA0 (RtlpLocalInfoAllocFromCache.c)
 * Callees:
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A6FD0 (NtTraceEvent.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

NTSTATUS __fastcall RtlpLogHeapSubSegmentActivate(__int64 a1, __int64 a2)
{
  _QWORD Fields[6]; // [rsp+20h] [rbp-48h] BYREF

  memset(Fields, 0, sizeof(Fields));
  Fields[4] = a1;
  HIWORD(Fields[0]) = 4152;
  Fields[5] = a2;
  return NtTraceEvent((HANDLE)MEMORY[0x7FFE0380], 0x20402u, 0x10u, Fields);
}
