/*
 * XREFs of Template_qqqqqqq @ 0x1C00AE8E0
 * Callers:
 *     EtwTraceIdleStatus @ 0x1C0074C90 (EtwTraceIdleStatus.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_qqqqqqq(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char a9,
        char a10)
{
  int v11; // [rsp+30h] [rbp-79h] BYREF
  int v12; // [rsp+38h] [rbp-71h] BYREF
  int v13; // [rsp+40h] [rbp-69h] BYREF
  int v14; // [rsp+48h] [rbp-61h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-59h] BYREF
  char *v16; // [rsp+60h] [rbp-49h]
  __int64 v17; // [rsp+68h] [rbp-41h]
  int *v18; // [rsp+70h] [rbp-39h]
  __int64 v19; // [rsp+78h] [rbp-31h]
  int *v20; // [rsp+80h] [rbp-29h]
  __int64 v21; // [rsp+88h] [rbp-21h]
  int *v22; // [rsp+90h] [rbp-19h]
  __int64 v23; // [rsp+98h] [rbp-11h]
  char *v24; // [rsp+A0h] [rbp-9h]
  __int64 v25; // [rsp+A8h] [rbp-1h]
  char *v26; // [rsp+B0h] [rbp+7h]
  __int64 v27; // [rsp+B8h] [rbp+Fh]

  v13 = giDimTimeOutMs;
  v11 = giScreenSaveTimeOutMs;
  v14 = giPowerOffTimeOutMs;
  v12 = gSessionId;
  UserData.Ptr = (ULONGLONG)&v12;
  v16 = &a5;
  v18 = &v14;
  v20 = &v11;
  v22 = &v13;
  v24 = &a9;
  v26 = &a10;
  *(_QWORD *)&UserData.Size = 4LL;
  v17 = 4LL;
  v19 = 4LL;
  v21 = 4LL;
  v23 = 4LL;
  v25 = 4LL;
  v27 = 4LL;
  return EtwWrite(Microsoft_Windows_Win32kHandle, &IdleStatusEvent, &W32kControlGuid, 7u, &UserData);
}
