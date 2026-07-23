/*
 * XREFs of RtlpLogHeapSubSegmentActivate @ 0x1800EFA4C
 * Callers:
 *     RtlpLocalInfoAllocFromCache @ 0x180008CE4 (RtlpLocalInfoAllocFromCache.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x18002F190 (RtlpLowFragHeapAllocFromContext.c)
 * Callees:
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x180093EE0 (NtTraceEvent.c)
 *     memset @ 0x180098540 (memset.c)
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
