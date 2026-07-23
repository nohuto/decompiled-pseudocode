/*
 * XREFs of TppETWCallbackDequeue @ 0x1800013B0
 * Callers:
 *     TppWorkpExecuteCallback @ 0x180020640 (TppWorkpExecuteCallback.c)
 *     TppTimerpExecuteCallback @ 0x18003AE90 (TppTimerpExecuteCallback.c)
 *     TppSimplepExecuteCallback @ 0x180081160 (TppSimplepExecuteCallback.c)
 *     TppExecuteWaitTimerCallback @ 0x180087BB0 (TppExecuteWaitTimerCallback.c)
 *     TppWorkUnposted @ 0x1800FE2B0 (TppWorkUnposted.c)
 * Callees:
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A6FD0 (NtTraceEvent.c)
 */

NTSTATUS __fastcall TppETWCallbackDequeue(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _WORD v6[16]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v7; // [rsp+40h] [rbp-48h]
  __int64 v8; // [rsp+48h] [rbp-40h]
  __int64 v9; // [rsp+50h] [rbp-38h]
  __int64 v10; // [rsp+58h] [rbp-30h]
  __int64 v11; // [rsp+60h] [rbp-28h]

  v8 = a2;
  v9 = a3;
  v10 = a4;
  v6[3] = 7201;
  v11 = a5;
  v7 = a1;
  return NtTraceEvent((HANDLE)MEMORY[0x7FFE0386], 0x403u, 0x28u, v6);
}
