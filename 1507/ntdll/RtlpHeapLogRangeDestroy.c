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

__int64 __fastcall RtlpHeapLogRangeDestroy(__int64 a1)
{
  _DWORD v3[9]; // [rsp+24h] [rbp-34h] BYREF

  memset(v3, 0, sizeof(v3));
  *(_QWORD *)&v3[7] = a1;
  HIWORD(v3[0]) = 616;
  return NtTraceEvent();
}
