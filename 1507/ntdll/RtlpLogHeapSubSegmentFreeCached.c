/*
 * XREFs of RtlpLogHeapSubSegmentFreeCached @ 0x1800EFC84
 * Callers:
 *     RtlpFreeUserBlock @ 0x18002A230 (RtlpFreeUserBlock.c)
 * Callees:
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x180093EE0 (NtTraceEvent.c)
 *     memset @ 0x180098540 (memset.c)
 */

NTSTATUS __fastcall RtlpLogHeapSubSegmentFreeCached(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD Fields[8]; // [rsp+20h] [rbp-78h] BYREF

  memset(Fields, 0, sizeof(Fields));
  Fields[4] = a1;
  HIWORD(Fields[0]) = 4146;
  Fields[5] = a2;
  Fields[6] = a3;
  Fields[7] = a4;
  return NtTraceEvent((HANDLE)MEMORY[0x7FFE0380], 0x20402u, 0x20u, Fields);
}
