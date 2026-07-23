/*
 * XREFs of RtlpHeapLogRangeDestroy @ 0x1800EEEF8
 * Callers:
 *     RtlDestroyHeap @ 0x180004920 (RtlDestroyHeap.c)
 *     RtlpHpSegHeapDestroy @ 0x180008328 (RtlpHpSegHeapDestroy.c)
 * Callees:
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x180093EE0 (NtTraceEvent.c)
 *     memset @ 0x180098540 (memset.c)
 */

NTSTATUS __fastcall RtlpHeapLogRangeDestroy(__int64 a1)
{
  _QWORD Fields[5]; // [rsp+20h] [rbp-38h] BYREF

  memset(Fields, 0, sizeof(Fields));
  Fields[4] = a1;
  HIWORD(Fields[0]) = 616;
  return NtTraceEvent((HANDLE)MEMORY[0x7FFE0388], 0x20402u, 8u, Fields);
}
