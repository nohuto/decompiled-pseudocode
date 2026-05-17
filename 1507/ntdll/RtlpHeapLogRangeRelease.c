/*
 * XREFs of RtlpHeapLogRangeRelease @ 0x1800EEF6C
 * Callers:
 *     RtlDestroyHeap @ 0x180004920 (RtlDestroyHeap.c)
 *     RtlpDestroyHeapSegment @ 0x180007A98 (RtlpDestroyHeapSegment.c)
 *     RtlpHpSegHeapDestroy @ 0x180008328 (RtlpHpSegHeapDestroy.c)
 *     RtlpFreeHeap @ 0x18002C140 (RtlpFreeHeap.c)
 *     RtlpHpLargeReAlloc @ 0x180058360 (RtlpHpLargeReAlloc.c)
 *     RtlpHpLargeFree @ 0x1800585DC (RtlpHpLargeFree.c)
 *     RtlpHpLargeAllocationDestroy @ 0x1800F0430 (RtlpHpLargeAllocationDestroy.c)
 * Callees:
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x180093EE0 (NtTraceEvent.c)
 *     memset @ 0x180098540 (memset.c)
 */

__int64 __fastcall RtlpHeapLogRangeRelease(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD v7[13]; // [rsp+24h] [rbp-54h] BYREF

  memset(v7, 0, sizeof(v7));
  *(_QWORD *)&v7[7] = a1;
  HIWORD(v7[0]) = 615;
  *(_QWORD *)&v7[9] = a2;
  *(_QWORD *)&v7[11] = a3;
  return NtTraceEvent();
}
