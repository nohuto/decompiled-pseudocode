/*
 * XREFs of RtlpLogHeapDecommit @ 0x1800EF828
 * Callers:
 *     RtlpDeCommitFreeBlock @ 0x180029048 (RtlpDeCommitFreeBlock.c)
 *     RtlpHpSegPageRangeDecommit @ 0x1800370E8 (RtlpHpSegPageRangeDecommit.c)
 *     RtlpDecommitBlock @ 0x180037624 (RtlpDecommitBlock.c)
 * Callees:
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x180093EE0 (NtTraceEvent.c)
 *     memset @ 0x180098540 (memset.c)
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
