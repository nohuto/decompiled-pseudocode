/*
 * XREFs of RtlpLogHeapAllocateEvent @ 0x1800EF604
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x18002ED90 (RtlpAllocateHeapInternal.c)
 *     RtlpHpAllocateHeap @ 0x1800589AC (RtlpHpAllocateHeap.c)
 * Callees:
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x180093EE0 (NtTraceEvent.c)
 */

NTSTATUS __fastcall RtlpLogHeapAllocateEvent(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  _WORD v5[16]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v6; // [rsp+40h] [rbp-38h]
  __int64 v7; // [rsp+48h] [rbp-30h]
  __int64 v8; // [rsp+50h] [rbp-28h]
  int v9; // [rsp+58h] [rbp-20h]

  v7 = a3;
  v8 = a2;
  v9 = a4;
  v6 = a1;
  v5[3] = 4129;
  return NtTraceEvent((HANDLE)MEMORY[0x7FFE0380], 0x20402u, 0x1Cu, v5);
}
