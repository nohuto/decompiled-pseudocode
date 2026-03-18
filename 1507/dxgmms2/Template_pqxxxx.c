/*
 * XREFs of Template_pqxxxx @ 0x1C0014E54
 * Callers:
 *     VidSchiUpdateLastCompletedPresentTimestamp @ 0x1C0001258 (VidSchiUpdateLastCompletedPresentTimestamp.c)
 *     VidSchiFindPriorityLevelToSchedule @ 0x1C0004900 (VidSchiFindPriorityLevelToSchedule.c)
 *     VidSchiScheduleCommandToRun @ 0x1C0004BB0 (VidSchiScheduleCommandToRun.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0006E70 (__security_check_cookie.c)
 */

NTSTATUS Template_pqxxxx(__int64 a1, __int64 a2, __int64 a3, ...)
{
  __int64 v4; // [rsp+30h] [rbp-51h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-41h] BYREF
  va_list v6; // [rsp+50h] [rbp-31h]
  __int64 v7; // [rsp+58h] [rbp-29h]
  va_list v8; // [rsp+60h] [rbp-21h]
  __int64 v9; // [rsp+68h] [rbp-19h]
  va_list v10; // [rsp+70h] [rbp-11h]
  __int64 v11; // [rsp+78h] [rbp-9h]
  va_list v12; // [rsp+80h] [rbp-1h]
  __int64 v13; // [rsp+88h] [rbp+7h]
  __int64 *v14; // [rsp+90h] [rbp+Fh]
  __int64 v15; // [rsp+98h] [rbp+17h]
  __int64 v16; // [rsp+D8h] [rbp+57h] BYREF
  va_list va; // [rsp+D8h] [rbp+57h]
  __int64 v18; // [rsp+E0h] [rbp+5Fh] BYREF
  va_list va1; // [rsp+E0h] [rbp+5Fh]
  __int64 v20; // [rsp+E8h] [rbp+67h] BYREF
  va_list va2; // [rsp+E8h] [rbp+67h]
  __int64 v22; // [rsp+F0h] [rbp+6Fh] BYREF
  va_list va3; // [rsp+F0h] [rbp+6Fh]
  va_list va4; // [rsp+F8h] [rbp+77h] BYREF

  va_start(va4, a3);
  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v16 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v18 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v20 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v22 = va_arg(va4, _QWORD);
  va_copy((va_list)UserData.Ptr, va);
  *(_QWORD *)&UserData.Size = 8LL;
  v4 = 0LL;
  va_copy(v6, va1);
  va_copy(v8, va2);
  va_copy(v10, va3);
  v7 = 4LL;
  va_copy(v12, va4);
  v14 = &v4;
  v9 = 8LL;
  v11 = 8LL;
  v13 = 8LL;
  v15 = 8LL;
  return EtwWrite(Microsoft_Windows_DxgKrnlHandle, &EventYieldConditionEvaluation, 0LL, 6u, &UserData);
}
