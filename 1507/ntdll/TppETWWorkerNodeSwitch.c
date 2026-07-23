/*
 * XREFs of TppETWWorkerNodeSwitch @ 0x1800F5E48
 * Callers:
 *     TppWorkerThread @ 0x180039390 (TppWorkerThread.c)
 * Callees:
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x180093EE0 (NtTraceEvent.c)
 */

NTSTATUS __fastcall TppETWWorkerNodeSwitch(__int64 a1, unsigned int a2, unsigned int a3, __int16 a4, __int16 a5)
{
  __int64 v5; // r10
  __int64 v6; // rdx
  _WORD v8[16]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v9; // [rsp+40h] [rbp-38h]
  int v10; // [rsp+48h] [rbp-30h]
  unsigned int v11; // [rsp+4Ch] [rbp-2Ch]
  __int16 v12; // [rsp+50h] [rbp-28h]
  __int16 v13; // [rsp+52h] [rbp-26h]
  int v14; // [rsp+54h] [rbp-24h]
  int v15; // [rsp+58h] [rbp-20h]

  v5 = a2;
  v6 = *(_QWORD *)(a1 + 40);
  v8[3] = 7209;
  v11 = a3;
  v12 = a4;
  v9 = a1;
  v10 = v5;
  v13 = a5;
  v14 = *(_DWORD *)(v6 + 4 * v5);
  v15 = *(_DWORD *)(v6 + 4LL * a3);
  return NtTraceEvent((HANDLE)MEMORY[0x7FFE0386], 0x402u, 0x1Cu, v8);
}
