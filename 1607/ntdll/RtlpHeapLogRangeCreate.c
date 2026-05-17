/*
 * XREFs of RtlpHeapLogRangeCreate @ 0x1800F7DA0
 * Callers:
 *     RtlCreateHeap @ 0x18002BA20 (RtlCreateHeap.c)
 *     RtlpHpSegHeapCreate @ 0x18007F470 (RtlpHpSegHeapCreate.c)
 * Callees:
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A6FD0 (NtTraceEvent.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

__int64 __fastcall RtlpHeapLogRangeCreate(__int64 a1, __int64 a2, int a3)
{
  _QWORD v7[7]; // [rsp+20h] [rbp-58h] BYREF

  memset(v7, 0, sizeof(v7));
  v7[4] = a1;
  HIWORD(v7[0]) = 613;
  v7[5] = a2;
  LODWORD(v7[6]) = a3;
  return NtTraceEvent();
}
