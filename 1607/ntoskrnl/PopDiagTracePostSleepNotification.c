/*
 * XREFs of PopDiagTracePostSleepNotification @ 0x1403D09D8
 * Callers:
 *     NtSetSystemPowerState @ 0x1403CF658 (NtSetSystemPowerState.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     PopDiagInterruptTimeToLocalTime @ 0x1403DF4CC (PopDiagInterruptTimeToLocalTime.c)
 */

NTSTATUS __fastcall PopDiagTracePostSleepNotification(
        int a1,
        int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  NTSTATUS result; // eax
  int v8; // [rsp+38h] [rbp-71h] BYREF
  int v9; // [rsp+3Ch] [rbp-6Dh] BYREF
  __int64 v10; // [rsp+40h] [rbp-69h] BYREF
  _QWORD v11[2]; // [rsp+48h] [rbp-61h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-51h] BYREF
  int *v13; // [rsp+68h] [rbp-41h]
  __int64 v14; // [rsp+70h] [rbp-39h]
  int *v15; // [rsp+78h] [rbp-31h]
  __int64 v16; // [rsp+80h] [rbp-29h]
  __int64 *v17; // [rsp+88h] [rbp-21h]
  __int64 v18; // [rsp+90h] [rbp-19h]
  _QWORD *v19; // [rsp+98h] [rbp-11h]
  __int64 v20; // [rsp+A0h] [rbp-9h]
  int *v21; // [rsp+A8h] [rbp-1h]
  __int64 v22; // [rsp+B0h] [rbp+7h]
  int *v23; // [rsp+B8h] [rbp+Fh]
  __int64 v24; // [rsp+C0h] [rbp+17h]
  int v25; // [rsp+F8h] [rbp+4Fh] BYREF
  int v26; // [rsp+100h] [rbp+57h] BYREF
  int v27; // [rsp+108h] [rbp+5Fh] BYREF

  v27 = a3;
  v26 = a2;
  v25 = a1;
  v10 = 0LL;
  v11[0] = 0LL;
  v8 = 0;
  v9 = 0;
  if ( a6 )
  {
    if ( a6 == -1 )
    {
      v8 = 4;
    }
    else if ( a6 == -2 )
    {
      v8 = 5;
    }
    else
    {
      v8 = *(_DWORD *)(a6 + 8);
    }
  }
  result = a7;
  if ( a7 )
  {
    if ( a7 == -1 )
    {
      v9 = 4;
    }
    else if ( a7 == -2 )
    {
      v9 = 5;
    }
    else
    {
      result = *(_DWORD *)(a7 + 8);
      v9 = result;
    }
  }
  if ( a4 )
    result = PopDiagInterruptTimeToLocalTime(a4, &v10);
  if ( a5 )
    result = PopDiagInterruptTimeToLocalTime(a5, v11);
  if ( PopDiagHandleRegistered )
  {
    UserData.Ptr = (ULONGLONG)&v25;
    *(_QWORD *)&UserData.Size = 4LL;
    v13 = &v26;
    v14 = 4LL;
    v15 = &v27;
    v16 = 4LL;
    v17 = &v10;
    v19 = v11;
    v21 = &v8;
    v23 = &v9;
    v18 = 8LL;
    v20 = 8LL;
    v22 = 4LL;
    v24 = 4LL;
    return EtwWrite(PopDiagHandle, &POP_ETW_EVENT_POSTSLEEP_NOTIFICATION, 0LL, 7u, &UserData);
  }
  return result;
}
