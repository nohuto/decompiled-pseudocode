/*
 * XREFs of TppETWTimerCancelNtTimer @ 0x180003B74
 * Callers:
 *     TppUpdateSubQueueTimer @ 0x18000B484 (TppUpdateSubQueueTimer.c)
 * Callees:
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A5C70 (NtTraceEvent.c)
 */

NTSTATUS __fastcall TppETWTimerCancelNtTimer(__int64 a1)
{
  _BYTE Fields[6]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v3; // [rsp+26h] [rbp-32h]
  __int64 v4; // [rsp+40h] [rbp-18h]

  v4 = a1;
  v3 = 7213;
  return NtTraceEvent((HANDLE)MEMORY[0x7FFE0386], 0x402u, 0xFFFFFFE4, Fields);
}
