/*
 * XREFs of TppETWTimerExpirationEnd @ 0x180002678
 * Callers:
 *     TppTimerQueueExpiration @ 0x18000AC60 (TppTimerQueueExpiration.c)
 * Callees:
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A5C70 (NtTraceEvent.c)
 */

__int64 __fastcall TppETWTimerExpirationEnd(__int64 a1)
{
  _BYTE v2[6]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v3; // [rsp+26h] [rbp-32h]
  __int64 v4; // [rsp+40h] [rbp-18h]

  v4 = a1;
  v3 = 7215;
  return NtTraceEvent(MEMORY[0x7FFE0386], 1026LL, 8LL, v2);
}
