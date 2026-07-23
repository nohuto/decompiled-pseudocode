/*
 * XREFs of TppETWTimerSet @ 0x180001BDC
 * Callers:
 *     TppSetTimer @ 0x18000B34C (TppSetTimer.c)
 * Callees:
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A5C70 (NtTraceEvent.c)
 */

NTSTATUS __fastcall TppETWTimerSet(__int64 a1, __int64 a2)
{
  int v2; // eax
  _WORD v4[16]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v5; // [rsp+40h] [rbp-48h]
  __int64 v6; // [rsp+48h] [rbp-40h]
  __int64 v7; // [rsp+50h] [rbp-38h]
  int v8; // [rsp+58h] [rbp-30h]
  int v9; // [rsp+5Ch] [rbp-2Ch]
  int v10; // [rsp+60h] [rbp-28h]

  v4[3] = 7210;
  v5 = *(_QWORD *)(a2 + 320);
  v2 = *(_DWORD *)(a2 + 340);
  v7 = a2;
  v6 = a1;
  v8 = v2;
  v9 = *(_DWORD *)(a2 + 336);
  v10 = (*(unsigned __int8 *)(a2 + 346) >> 1) & 1;
  return NtTraceEvent((HANDLE)MEMORY[0x7FFE0386], 0x20402u, 0x24u, v4);
}
