/*
 * XREFs of RtlpLogHeapSubSegmentAllocCached @ 0x1800F95AC
 * Callers:
 *     RtlpLowFragHeapAllocFromContext @ 0x1800240C0 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpFreeUserBlock @ 0x180045F48 (RtlpFreeUserBlock.c)
 *     RtlpLowFragHeapFlushCaches @ 0x18004EAD8 (RtlpLowFragHeapFlushCaches.c)
 * Callees:
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A6FD0 (NtTraceEvent.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

__int64 __fastcall RtlpLogHeapSubSegmentAllocCached(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD v9[8]; // [rsp+20h] [rbp-78h] BYREF

  memset(v9, 0, sizeof(v9));
  v9[4] = a1;
  HIWORD(v9[0]) = 4145;
  v9[5] = a2;
  v9[6] = a3;
  v9[7] = a4;
  return NtTraceEvent();
}
