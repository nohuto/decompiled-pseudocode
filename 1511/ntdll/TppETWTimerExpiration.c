/*
 * XREFs of TppETWTimerExpiration @ 0x18000228C
 * Callers:
 *     TppSingleTimerExpiration @ 0x18000B6E0 (TppSingleTimerExpiration.c)
 * Callees:
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A5C70 (NtTraceEvent.c)
 */

NTSTATUS __fastcall TppETWTimerExpiration(__int64 a1, __int64 a2)
{
  int v2; // eax
  _WORD v4[16]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v5; // [rsp+40h] [rbp-38h]
  __int64 v6; // [rsp+48h] [rbp-30h]
  __int64 v7; // [rsp+50h] [rbp-28h]
  int v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+5Ch] [rbp-1Ch]

  v4[3] = 7216;
  v5 = *(_QWORD *)(a2 + 320);
  v2 = *(_DWORD *)(a2 + 340);
  v7 = a2;
  v6 = a1;
  v8 = v2;
  v9 = *(_DWORD *)(a2 + 336);
  return NtTraceEvent((HANDLE)MEMORY[0x7FFE0386], 0x402u, 0x20u, v4);
}
