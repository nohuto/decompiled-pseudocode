/*
 * XREFs of RtlpLogHeapAffinitySlotAssign @ 0x1800F8FE4
 * Callers:
 *     RtlpSetSegmentInfo @ 0x180051A40 (RtlpSetSegmentInfo.c)
 * Callees:
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A6FD0 (NtTraceEvent.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

NTSTATUS __fastcall RtlpLogHeapAffinitySlotAssign(__int64 a1, __int64 a2, int a3)
{
  _QWORD Fields[7]; // [rsp+20h] [rbp-58h] BYREF

  memset(Fields, 0, 0x34uLL);
  Fields[4] = a1;
  HIWORD(Fields[0]) = 4153;
  Fields[5] = a2;
  LODWORD(Fields[6]) = a3;
  return NtTraceEvent((HANDLE)MEMORY[0x7FFE0380], 0x20402u, 0x14u, Fields);
}
