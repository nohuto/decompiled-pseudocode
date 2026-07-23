/*
 * XREFs of RtlpHeapLogRangeRelease @ 0x1800F7E90
 * Callers:
 *     RtlpFreeHeap @ 0x180049360 (RtlpFreeHeap.c)
 *     RtlpHpLargeFree @ 0x18004F620 (RtlpHpLargeFree.c)
 *     RtlpHpLargeReAlloc @ 0x180051828 (RtlpHpLargeReAlloc.c)
 *     RtlDestroyHeap @ 0x180052050 (RtlDestroyHeap.c)
 *     RtlpDestroyHeapSegment @ 0x180052254 (RtlpDestroyHeapSegment.c)
 *     RtlpHpSegHeapDestroy @ 0x180052518 (RtlpHpSegHeapDestroy.c)
 *     RtlpHpLargeAllocationDestroy @ 0x1800FBEA4 (RtlpHpLargeAllocationDestroy.c)
 * Callees:
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A6FD0 (NtTraceEvent.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

NTSTATUS __fastcall RtlpHeapLogRangeRelease(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD Fields[7]; // [rsp+20h] [rbp-58h] BYREF

  memset(Fields, 0, sizeof(Fields));
  Fields[4] = a1;
  HIWORD(Fields[0]) = 615;
  Fields[5] = a2;
  Fields[6] = a3;
  return NtTraceEvent((HANDLE)MEMORY[0x7FFE0388], 0x20402u, 0x18u, Fields);
}
