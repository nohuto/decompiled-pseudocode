/*
 * XREFs of RtlpWnfETWEventNameSubRundown @ 0x1800C8CD0
 * Callers:
 *     RtlpDecRefWnfNameSubscription @ 0x18000BBE0 (RtlpDecRefWnfNameSubscription.c)
 * Callees:
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x180093EE0 (NtTraceEvent.c)
 */

NTSTATUS __fastcall RtlpWnfETWEventNameSubRundown(__int64 a1, __int64 a2)
{
  _WORD v3[16]; // [rsp+28h] [rbp-40h] BYREF
  __int64 v4; // [rsp+48h] [rbp-20h]
  __int64 v5; // [rsp+50h] [rbp-18h]

  v3[3] = 3364;
  v5 = a2;
  v4 = a1;
  return NtTraceEvent((HANDLE)MEMORY[0x7FFE038E], 0x20402u, 0x10u, v3);
}
