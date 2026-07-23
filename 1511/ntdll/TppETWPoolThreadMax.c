/*
 * XREFs of TppETWPoolThreadMax @ 0x180003818
 * Callers:
 *     TpSetPoolMaxThreads @ 0x180004B00 (TpSetPoolMaxThreads.c)
 * Callees:
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A5C70 (NtTraceEvent.c)
 */

NTSTATUS __fastcall TppETWPoolThreadMax(__int64 a1, int a2)
{
  _BYTE Fields[6]; // [rsp+20h] [rbp-48h] BYREF
  __int16 v4; // [rsp+26h] [rbp-42h]
  __int64 v5; // [rsp+40h] [rbp-28h]
  int v6; // [rsp+48h] [rbp-20h]

  v6 = a2;
  v5 = a1;
  v4 = 7208;
  return NtTraceEvent((HANDLE)MEMORY[0x7FFE0386], 0x20402u, 0xCu, Fields);
}
