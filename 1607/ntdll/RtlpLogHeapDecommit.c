/*
 * XREFs of RtlpLogHeapDecommit @ 0x1800F9284
 * Callers:
 *     RtlpDecommitBlock @ 0x180028CB4 (RtlpDecommitBlock.c)
 *     RtlpHpSegPageRangeDecommit @ 0x180041808 (RtlpHpSegPageRangeDecommit.c)
 *     RtlpDeCommitFreeBlock @ 0x18004A810 (RtlpDeCommitFreeBlock.c)
 * Callees:
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A6FD0 (NtTraceEvent.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

__int64 __fastcall RtlpLogHeapDecommit(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  _QWORD v9[8]; // [rsp+20h] [rbp-78h] BYREF

  memset(v9, 0, sizeof(v9));
  v9[4] = a1;
  HIWORD(v9[0]) = 4148;
  v9[5] = a2;
  v9[6] = a3;
  LODWORD(v9[7]) = a4;
  return NtTraceEvent();
}
