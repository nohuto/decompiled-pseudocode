/*
 * XREFs of RtlpHeapLogRangeDestroy @ 0x1800F7E20
 * Callers:
 *     RtlDestroyHeap @ 0x180052050 (RtlDestroyHeap.c)
 *     RtlpHpSegHeapDestroy @ 0x180052518 (RtlpHpSegHeapDestroy.c)
 * Callees:
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A6FD0 (NtTraceEvent.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

NTSTATUS __fastcall RtlpHeapLogRangeDestroy(__int64 a1)
{
  _QWORD Fields[5]; // [rsp+20h] [rbp-38h] BYREF

  memset(Fields, 0, sizeof(Fields));
  Fields[4] = a1;
  HIWORD(Fields[0]) = 616;
  return NtTraceEvent((HANDLE)MEMORY[0x7FFE0388], 0x20402u, 8u, Fields);
}
