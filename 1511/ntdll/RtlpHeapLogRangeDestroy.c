/*
 * XREFs of RtlpHeapLogRangeDestroy @ 0x1800F0E50
 * Callers:
 *     RtlpHpSegHeapDestroy @ 0x180050600 (RtlpHpSegHeapDestroy.c)
 *     RtlDestroyHeap @ 0x1800590E0 (RtlDestroyHeap.c)
 * Callees:
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A5C70 (NtTraceEvent.c)
 *     memset @ 0x1800AB900 (memset.c)
 */

NTSTATUS __fastcall RtlpHeapLogRangeDestroy(__int64 a1)
{
  _QWORD Fields[5]; // [rsp+20h] [rbp-38h] BYREF

  memset(Fields, 0, sizeof(Fields));
  Fields[4] = a1;
  HIWORD(Fields[0]) = 616;
  return NtTraceEvent((HANDLE)MEMORY[0x7FFE0388], 0x20402u, 8u, Fields);
}
