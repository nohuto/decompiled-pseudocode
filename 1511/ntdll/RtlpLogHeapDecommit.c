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

NTSTATUS __fastcall RtlpLogHeapDecommit(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  _QWORD Fields[8]; // [rsp+20h] [rbp-78h] BYREF

  memset(Fields, 0, sizeof(Fields));
  Fields[4] = a1;
  HIWORD(Fields[0]) = 4148;
  Fields[5] = a2;
  Fields[6] = a3;
  LODWORD(Fields[7]) = a4;
  return NtTraceEvent((HANDLE)MEMORY[0x7FFE0388], 0x20402u, 0x20u, Fields);
}
