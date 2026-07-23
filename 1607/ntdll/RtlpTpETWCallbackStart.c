/*
 * XREFs of RtlpTpETWCallbackStart @ 0x18000116C
 * Callers:
 *     TppAlpcpExecuteCallback @ 0x18001D450 (TppAlpcpExecuteCallback.c)
 *     TppWorkpExecuteCallback @ 0x180020640 (TppWorkpExecuteCallback.c)
 *     RtlpTpWorkCallback @ 0x18003A1B0 (RtlpTpWorkCallback.c)
 *     TppExecuteWaitCallback @ 0x18003AD44 (TppExecuteWaitCallback.c)
 *     TppTimerpExecuteCallback @ 0x18003AE90 (TppTimerpExecuteCallback.c)
 *     TppIopExecuteCallback @ 0x18003B190 (TppIopExecuteCallback.c)
 *     RtlpTpTimerCallback @ 0x18007E560 (RtlpTpTimerCallback.c)
 *     RtlpTpWaitCallback @ 0x18007FD30 (RtlpTpWaitCallback.c)
 *     TppSimplepExecuteCallback @ 0x180081160 (TppSimplepExecuteCallback.c)
 *     TppJobpExecuteCallback @ 0x180084250 (TppJobpExecuteCallback.c)
 *     RtlpTpIoCallback @ 0x180096590 (RtlpTpIoCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A6FD0 (NtTraceEvent.c)
 */

NTSTATUS __fastcall RtlpTpETWCallbackStart(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
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
  v6[3] = 7202;
  v11 = a5;
  v7 = a1;
  return NtTraceEvent((HANDLE)MEMORY[0x7FFE0386], 0x402u, 0x28u, v6);
}
