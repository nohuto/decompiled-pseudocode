/*
 * XREFs of TppETWTimerExpirationBegin @ 0x180002488
 * Callers:
 *     TppTimerQueueExpiration @ 0x18003C880 (TppTimerQueueExpiration.c)
 * Callees:
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A6FD0 (NtTraceEvent.c)
 */

__int64 __fastcall TppETWTimerExpirationBegin(__int64 a1)
{
  _BYTE v2[6]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v3; // [rsp+26h] [rbp-32h]
  __int64 v4; // [rsp+40h] [rbp-18h]

  v4 = a1;
  v3 = 7214;
  return NtTraceEvent(MEMORY[0x7FFE0386], 1026LL, 8LL, v2);
}
