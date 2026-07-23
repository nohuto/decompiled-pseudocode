/*
 * XREFs of PopDiagTraceIdleResiliencyEnd @ 0x140208B58
 * Callers:
 *     PopDeepSleepEvaluateCallback @ 0x14020AFE4 (PopDeepSleepEvaluateCallback.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall PopDiagTraceIdleResiliencyEnd(__int64 a1, int a2)
{
  NTSTATUS result; // eax
  int v3; // [rsp+30h] [rbp-50h] BYREF
  __int64 v4; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-40h] BYREF
  int *v6; // [rsp+50h] [rbp-30h]
  __int64 v7; // [rsp+58h] [rbp-28h]
  int *v8; // [rsp+60h] [rbp-20h]
  __int64 v9; // [rsp+68h] [rbp-18h]
  int v10; // [rsp+98h] [rbp+18h] BYREF

  v10 = a2;
  if ( PopDiagHandleRegistered )
  {
    UserData.Ptr = (ULONGLONG)&v4;
    v4 = 0LL;
    v6 = &v10;
    v3 = 0;
    v8 = &v3;
    *(_QWORD *)&UserData.Size = 4LL;
    v7 = 4LL;
    v9 = 4LL;
    return EtwWrite(PopDiagHandle, &POP_ETW_IDLE_RESILIENCY_END, 0LL, 3u, &UserData);
  }
  return result;
}
