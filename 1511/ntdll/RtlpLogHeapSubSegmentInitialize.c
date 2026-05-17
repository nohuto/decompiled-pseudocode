/*
 * XREFs of RtlpLogHeapSubSegmentInitialize @ 0x1800F1C6C
 * Callers:
 *     RtlpSubSegmentInitialize @ 0x180029DF0 (RtlpSubSegmentInitialize.c)
 *     RtlpSubSegmentDebugInitialize @ 0x1800F2544 (RtlpSubSegmentDebugInitialize.c)
 * Callees:
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A5C70 (NtTraceEvent.c)
 *     memset @ 0x1800AB900 (memset.c)
 */

__int64 __fastcall RtlpLogHeapSubSegmentInitialize(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  _DWORD v10[16]; // [rsp+24h] [rbp-84h] BYREF

  memset(v10, 0, sizeof(v10));
  *(_QWORD *)&v10[7] = a1;
  HIWORD(v10[0]) = 4149;
  v10[15] = a5;
  *(_QWORD *)&v10[9] = a2;
  *(_QWORD *)&v10[11] = a3;
  *(_QWORD *)&v10[13] = a4;
  return NtTraceEvent();
}
