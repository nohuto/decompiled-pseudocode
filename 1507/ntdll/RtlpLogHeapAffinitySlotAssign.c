/*
 * XREFs of RtlpLogHeapAffinitySlotAssign @ 0x1800EF57C
 * Callers:
 *     RtlpSetSegmentInfo @ 0x180072200 (RtlpSetSegmentInfo.c)
 * Callees:
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x180093EE0 (NtTraceEvent.c)
 *     memset @ 0x180098540 (memset.c)
 */

__int64 __fastcall RtlpLogHeapAffinitySlotAssign(__int64 a1, __int64 a2, int a3)
{
  _DWORD v7[12]; // [rsp+24h] [rbp-54h] BYREF

  memset(v7, 0, sizeof(v7));
  *(_QWORD *)&v7[7] = a1;
  HIWORD(v7[0]) = 4153;
  *(_QWORD *)&v7[9] = a2;
  v7[11] = a3;
  return NtTraceEvent();
}
