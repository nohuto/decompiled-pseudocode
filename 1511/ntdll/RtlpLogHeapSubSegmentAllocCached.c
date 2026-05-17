/*
 * XREFs of RtlpLogHeapSubSegmentAllocCached @ 0x1800F1ABC
 * Callers:
 *     RtlpFreeUserBlock @ 0x180023AD4 (RtlpFreeUserBlock.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x180025DE0 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpLowFragHeapFlushCaches @ 0x18004F614 (RtlpLowFragHeapFlushCaches.c)
 * Callees:
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A5C70 (NtTraceEvent.c)
 *     memset @ 0x1800AB900 (memset.c)
 */

__int64 __fastcall RtlpLogHeapSubSegmentAllocCached(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD v9[15]; // [rsp+24h] [rbp-74h] BYREF

  memset(v9, 0, sizeof(v9));
  *(_QWORD *)&v9[7] = a1;
  HIWORD(v9[0]) = 4145;
  *(_QWORD *)&v9[9] = a2;
  *(_QWORD *)&v9[11] = a3;
  *(_QWORD *)&v9[13] = a4;
  return NtTraceEvent();
}
