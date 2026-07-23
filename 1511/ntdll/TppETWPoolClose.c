/*
 * XREFs of TppETWPoolClose @ 0x1800F5794
 * Callers:
 *     TpReleasePool @ 0x18007F4C0 (TpReleasePool.c)
 * Callees:
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A5C70 (NtTraceEvent.c)
 */

NTSTATUS __fastcall TppETWPoolClose(__int64 a1)
{
  _BYTE Fields[6]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v3; // [rsp+26h] [rbp-32h]
  __int64 v4; // [rsp+40h] [rbp-18h]

  v4 = a1;
  v3 = 7206;
  return NtTraceEvent((HANDLE)MEMORY[0x7FFE0386], 0x402u, 8u, Fields);
}
