/*
 * XREFs of PopDiagTraceIdleResiliencyStart @ 0x140208BF0
 * Callers:
 *     PopDeepSleepEvaluateCallback @ 0x14020AFE4 (PopDeepSleepEvaluateCallback.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall PopDiagTraceIdleResiliencyStart(__int64 a1, int a2, unsigned __int64 a3)
{
  NTSTATUS result; // eax
  __int64 v4; // [rsp+30h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-38h] BYREF
  int *v6; // [rsp+48h] [rbp-28h]
  __int64 v7; // [rsp+50h] [rbp-20h]
  unsigned __int64 *v8; // [rsp+58h] [rbp-18h]
  __int64 v9; // [rsp+60h] [rbp-10h]
  int v10; // [rsp+88h] [rbp+18h] BYREF
  unsigned __int64 v11; // [rsp+90h] [rbp+20h] BYREF

  v10 = a2;
  if ( PopDiagHandleRegistered )
  {
    v4 = 0LL;
    *(_QWORD *)&UserData.Size = 4LL;
    v7 = 4LL;
    if ( a3 >= 0xFFFFFFFF )
      a3 = 0xFFFFFFFFLL;
    v9 = 4LL;
    v11 = a3;
    UserData.Ptr = (ULONGLONG)&v4;
    v6 = &v10;
    v8 = &v11;
    return EtwWrite(PopDiagHandle, &POP_ETW_IDLE_RESILIENCY_START, 0LL, 3u, &UserData);
  }
  return result;
}
