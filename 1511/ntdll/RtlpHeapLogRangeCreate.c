/*
 * XREFs of RtlpHeapLogRangeCreate @ 0x1800F0DC8
 * Callers:
 *     RtlCreateHeap @ 0x180055310 (RtlCreateHeap.c)
 *     RtlpHpSegHeapCreate @ 0x1800598B0 (RtlpHpSegHeapCreate.c)
 * Callees:
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A5C70 (NtTraceEvent.c)
 *     memset @ 0x1800AB900 (memset.c)
 */

__int64 __fastcall RtlpHeapLogRangeCreate(__int64 a1, __int64 a2, int a3)
{
  _DWORD v7[13]; // [rsp+24h] [rbp-54h] BYREF

  memset(v7, 0, sizeof(v7));
  *(_QWORD *)&v7[7] = a1;
  HIWORD(v7[0]) = 613;
  *(_QWORD *)&v7[9] = a2;
  v7[11] = a3;
  return NtTraceEvent();
}
