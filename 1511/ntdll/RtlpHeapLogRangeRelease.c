/*
 * XREFs of RtlpHeapLogRangeRelease @ 0x1800F0EC4
 * Callers:
 *     RtlpHpLargeReAlloc @ 0x180001850 (RtlpHpLargeReAlloc.c)
 *     RtlpFreeHeap @ 0x180022430 (RtlpFreeHeap.c)
 *     RtlpHpSegHeapDestroy @ 0x180050600 (RtlpHpSegHeapDestroy.c)
 *     RtlDestroyHeap @ 0x1800590E0 (RtlDestroyHeap.c)
 *     RtlpDestroyHeapSegment @ 0x1800592C8 (RtlpDestroyHeapSegment.c)
 *     RtlpHpLargeFree @ 0x18005A4D4 (RtlpHpLargeFree.c)
 *     RtlpHpLargeAllocationDestroy @ 0x1800F2380 (RtlpHpLargeAllocationDestroy.c)
 * Callees:
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A5C70 (NtTraceEvent.c)
 *     memset @ 0x1800AB900 (memset.c)
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
