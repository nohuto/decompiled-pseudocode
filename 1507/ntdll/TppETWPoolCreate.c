/*
 * XREFs of TppETWPoolCreate @ 0x180002E58
 * Callers:
 *     TpAllocPoolInternal @ 0x18007B968 (TpAllocPoolInternal.c)
 * Callees:
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x180093EE0 (NtTraceEvent.c)
 */

__int64 __fastcall TppETWPoolCreate(__int64 a1)
{
  _BYTE v2[6]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v3; // [rsp+26h] [rbp-32h]
  __int64 v4; // [rsp+40h] [rbp-18h]

  v4 = a1;
  v3 = 7205;
  return NtTraceEvent(MEMORY[0x7FFE0386], 132098LL, 8LL, v2);
}
