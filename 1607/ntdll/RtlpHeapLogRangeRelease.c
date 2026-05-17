/*
 * XREFs of RtlpHeapLogRangeRelease @ 0x1800F7E90
 * Callers:
 *     RtlpFreeHeap @ 0x180049370 (RtlpFreeHeap.c)
 *     RtlpHpLargeFree @ 0x18004F630 (RtlpHpLargeFree.c)
 *     RtlpHpLargeReAlloc @ 0x180051838 (RtlpHpLargeReAlloc.c)
 *     RtlDestroyHeap @ 0x180052060 (RtlDestroyHeap.c)
 *     RtlpDestroyHeapSegment @ 0x180052264 (RtlpDestroyHeapSegment.c)
 *     RtlpHpSegHeapDestroy @ 0x180052528 (RtlpHpSegHeapDestroy.c)
 *     RtlpHpLargeAllocationDestroy @ 0x1800FBEA4 (RtlpHpLargeAllocationDestroy.c)
 * Callees:
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A6FD0 (NtTraceEvent.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

__int64 __fastcall RtlpHeapLogRangeRelease(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD v7[7]; // [rsp+20h] [rbp-58h] BYREF

  memset(v7, 0, sizeof(v7));
  v7[4] = a1;
  HIWORD(v7[0]) = 615;
  v7[5] = a2;
  v7[6] = a3;
  return NtTraceEvent();
}
