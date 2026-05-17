/*
 * XREFs of RtlpLogHeapDecommit @ 0x1800F1780
 * Callers:
 *     RtlpHpSegPageRangeDecommit @ 0x18001A808 (RtlpHpSegPageRangeDecommit.c)
 *     RtlpDeCommitFreeBlock @ 0x18001F148 (RtlpDeCommitFreeBlock.c)
 *     RtlpDecommitBlock @ 0x180052D68 (RtlpDecommitBlock.c)
 * Callees:
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A5C70 (NtTraceEvent.c)
 *     memset @ 0x1800AB900 (memset.c)
 */

__int64 __fastcall RtlpLogHeapDecommit(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  _DWORD v9[15]; // [rsp+24h] [rbp-74h] BYREF

  memset(v9, 0, sizeof(v9));
  *(_QWORD *)&v9[7] = a1;
  HIWORD(v9[0]) = 4148;
  *(_QWORD *)&v9[9] = a2;
  *(_QWORD *)&v9[11] = a3;
  v9[13] = a4;
  return NtTraceEvent();
}
