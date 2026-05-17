/*
 * XREFs of RtlpLogHeapAffinitySlotAssign @ 0x1800F8FE4
 * Callers:
 *     RtlpSetSegmentInfo @ 0x180051A50 (RtlpSetSegmentInfo.c)
 * Callees:
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A6FD0 (NtTraceEvent.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

__int64 __fastcall RtlpLogHeapAffinitySlotAssign(__int64 a1, __int64 a2, int a3)
{
  _QWORD v7[7]; // [rsp+20h] [rbp-58h] BYREF

  memset(v7, 0, 0x34uLL);
  v7[4] = a1;
  HIWORD(v7[0]) = 4153;
  v7[5] = a2;
  LODWORD(v7[6]) = a3;
  return NtTraceEvent();
}
