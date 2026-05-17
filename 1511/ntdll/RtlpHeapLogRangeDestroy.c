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

__int64 __fastcall RtlpHeapLogRangeDestroy(__int64 a1)
{
  _DWORD v3[9]; // [rsp+24h] [rbp-34h] BYREF

  memset(v3, 0, sizeof(v3));
  *(_QWORD *)&v3[7] = a1;
  HIWORD(v3[0]) = 616;
  return NtTraceEvent();
}
