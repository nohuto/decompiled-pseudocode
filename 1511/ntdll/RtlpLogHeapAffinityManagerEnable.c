/*
 * XREFs of RtlpLogHeapAffinityManagerEnable @ 0x1800F1450
 * Callers:
 *     RtlpLowFragHeapAllocFromContext @ 0x180025DE0 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpLocalInfoAllocFromCache @ 0x18004F7C8 (RtlpLocalInfoAllocFromCache.c)
 * Callees:
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A5C70 (NtTraceEvent.c)
 *     memset @ 0x1800AB900 (memset.c)
 */

NTSTATUS __fastcall RtlpLogHeapAffinityManagerEnable(__int64 a1, int a2)
{
  _QWORD Fields[6]; // [rsp+20h] [rbp-48h] BYREF

  memset(Fields, 0, 44);
  Fields[4] = a1;
  HIWORD(Fields[0]) = 4150;
  LODWORD(Fields[5]) = a2;
  return NtTraceEvent((HANDLE)MEMORY[0x7FFE0380], 0x20402u, 0xCu, Fields);
}
