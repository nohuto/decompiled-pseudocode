/*
 * XREFs of RtlpTpETWCallbackEnqueue @ 0x180001338
 * Callers:
 *     TppWorkpExecuteCallback @ 0x180020650 (TppWorkpExecuteCallback.c)
 *     RtlQueueWorkItem @ 0x180039CF0 (RtlQueueWorkItem.c)
 *     TppWorkCallbackPrologRelease @ 0x18003AFD0 (TppWorkCallbackPrologRelease.c)
 *     TppWorkPost @ 0x18003CDF4 (TppWorkPost.c)
 *     TpPostWork @ 0x18003CEF0 (TpPostWork.c)
 * Callees:
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A6FD0 (NtTraceEvent.c)
 */

__int64 __fastcall RtlpTpETWCallbackEnqueue(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
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
  v6[3] = 7200;
  v11 = a5;
  v7 = a1;
  return NtTraceEvent(MEMORY[0x7FFE0386], 132098LL, 40LL, v6);
}
