/*
 * XREFs of RtlpLogHeapDecommit @ 0x1800F9284
 * Callers:
 *     RtlpDecommitBlock @ 0x180028CA4 (RtlpDecommitBlock.c)
 *     RtlpHpSegPageRangeDecommit @ 0x1800417F8 (RtlpHpSegPageRangeDecommit.c)
 *     RtlpDeCommitFreeBlock @ 0x18004A800 (RtlpDeCommitFreeBlock.c)
 * Callees:
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A6FD0 (NtTraceEvent.c)
 *     memset @ 0x1800ACCC0 (memset.c)
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
