/*
 * XREFs of RtlpTpETWCallbackStop @ 0x1800012F8
 * Callers:
 *     RtlpTpWaitCallback @ 0x180005F50 (RtlpTpWaitCallback.c)
 *     TppSimplepExecuteCallback @ 0x180006730 (TppSimplepExecuteCallback.c)
 *     RtlpTpTimerCallback @ 0x180006FD0 (RtlpTpTimerCallback.c)
 *     RtlpTpWorkCallback @ 0x180008E40 (RtlpTpWorkCallback.c)
 *     TppExecuteWaitCallback @ 0x180009874 (TppExecuteWaitCallback.c)
 *     TppTimerpExecuteCallback @ 0x1800099C0 (TppTimerpExecuteCallback.c)
 *     TppIopExecuteCallback @ 0x180009AF0 (TppIopExecuteCallback.c)
 *     TppWorkpExecuteCallback @ 0x18002D420 (TppWorkpExecuteCallback.c)
 *     TppAlpcpExecuteCallback @ 0x18002E130 (TppAlpcpExecuteCallback.c)
 *     TppJobpExecuteCallback @ 0x180083F20 (TppJobpExecuteCallback.c)
 *     RtlpTpIoCallback @ 0x1800950E0 (RtlpTpIoCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A5C70 (NtTraceEvent.c)
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
