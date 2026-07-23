/*
 * XREFs of RtlpTpETWCallbackEnqueue @ 0x180001338
 * Callers:
 *     TppWorkpExecuteCallback @ 0x180020640 (TppWorkpExecuteCallback.c)
 *     RtlQueueWorkItem @ 0x180039CE0 (RtlQueueWorkItem.c)
 *     TppWorkCallbackPrologRelease @ 0x18003AFC0 (TppWorkCallbackPrologRelease.c)
 *     TppWorkPost @ 0x18003CDE4 (TppWorkPost.c)
 *     TpPostWork @ 0x18003CEE0 (TpPostWork.c)
 * Callees:
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A6FD0 (NtTraceEvent.c)
 */

NTSTATUS __fastcall RtlpTpETWCallbackEnqueue(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
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
  return NtTraceEvent((HANDLE)MEMORY[0x7FFE0386], 0x20402u, 0x28u, v6);
}
