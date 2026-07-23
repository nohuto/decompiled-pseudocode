/*
 * XREFs of RtlpHeapLogRangeReserve @ 0x1800F7F14
 * Callers:
 *     RtlpAllocateHeap @ 0x180025050 (RtlpAllocateHeap.c)
 *     RtlpExtendHeap @ 0x180027780 (RtlpExtendHeap.c)
 *     RtlpHpLargeAlloc @ 0x18004F76C (RtlpHpLargeAlloc.c)
 *     RtlpHpSegSegmentAllocate @ 0x18007FB80 (RtlpHpSegSegmentAllocate.c)
 * Callees:
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A6FD0 (NtTraceEvent.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

NTSTATUS __fastcall RtlpHeapLogRangeReserve(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD Fields[7]; // [rsp+20h] [rbp-58h] BYREF

  memset(Fields, 0, sizeof(Fields));
  Fields[4] = a1;
  HIWORD(Fields[0]) = 614;
  Fields[5] = a2;
  Fields[6] = a3;
  return NtTraceEvent((HANDLE)MEMORY[0x7FFE0388], 0x20402u, 0x18u, Fields);
}
