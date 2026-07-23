/*
 * XREFs of TppETWTimerSetNtTimer @ 0x180001B7C
 * Callers:
 *     TppTimerQueueExpiration @ 0x18000AC60 (TppTimerQueueExpiration.c)
 *     TppUpdateSubQueueTimer @ 0x18000B484 (TppUpdateSubQueueTimer.c)
 * Callees:
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A5C70 (NtTraceEvent.c)
 */

NTSTATUS __fastcall TppETWTimerSetNtTimer(__int64 a1, __int64 a2, int a3)
{
  _WORD v4[16]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v5; // [rsp+40h] [rbp-28h]
  __int64 v6; // [rsp+48h] [rbp-20h]
  int v7; // [rsp+50h] [rbp-18h]

  v4[3] = 7212;
  v5 = a2;
  v7 = a3;
  v6 = a1;
  return NtTraceEvent((HANDLE)MEMORY[0x7FFE0386], 0x402u, 0x14u, v4);
}
