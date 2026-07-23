/*
 * XREFs of RtlpTpETWCallbackStop @ 0x180001320
 * Callers:
 *     TppExecuteWaitCallback @ 0x18000B324 (TppExecuteWaitCallback.c)
 *     RtlpTpWaitCallback @ 0x18000BCB0 (RtlpTpWaitCallback.c)
 *     TppWorkpExecuteCallback @ 0x18003AE20 (TppWorkpExecuteCallback.c)
 *     TppAlpcpExecuteCallback @ 0x18003B9F0 (TppAlpcpExecuteCallback.c)
 *     TppIopExecuteCallback @ 0x18003C020 (TppIopExecuteCallback.c)
 *     TppTimerpExecuteCallback @ 0x18003C590 (TppTimerpExecuteCallback.c)
 *     TppSimplepExecuteCallback @ 0x180072360 (TppSimplepExecuteCallback.c)
 *     TppJobpExecuteCallback @ 0x1800782D0 (TppJobpExecuteCallback.c)
 *     RtlpTpWorkCallback @ 0x18007C030 (RtlpTpWorkCallback.c)
 *     RtlpTpTimerCallback @ 0x18007E0E0 (RtlpTpTimerCallback.c)
 *     RtlpTpIoCallback @ 0x1800F5F70 (RtlpTpIoCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x180093EE0 (NtTraceEvent.c)
 */

NTSTATUS __fastcall RtlpTpETWCallbackStop(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
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
  v6[3] = 7203;
  v11 = a5;
  v7 = a1;
  return NtTraceEvent((HANDLE)MEMORY[0x7FFE0386], 0x403u, 0x28u, v6);
}
