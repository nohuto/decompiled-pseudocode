/*
 * XREFs of Template_qqNR1qNR3 @ 0x1C00A9EFC
 * Callers:
 *     EtwTraceTimerDelayStatistics @ 0x1C0018C80 (EtwTraceTimerDelayStatistics.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_qqNR1qNR3(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        __int64 a7,
        int a8,
        int a9,
        __int64 a10)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-39h] BYREF
  int *v12; // [rsp+40h] [rbp-29h]
  __int64 v13; // [rsp+48h] [rbp-21h]
  __int64 v14; // [rsp+50h] [rbp-19h]
  int v15; // [rsp+58h] [rbp-11h]
  int v16; // [rsp+5Ch] [rbp-Dh]
  int *v17; // [rsp+60h] [rbp-9h]
  __int64 v18; // [rsp+68h] [rbp-1h]
  __int64 v19; // [rsp+70h] [rbp+7h]
  int v20; // [rsp+78h] [rbp+Fh]
  int v21; // [rsp+7Ch] [rbp+13h]
  int v22; // [rsp+B8h] [rbp+4Fh] BYREF

  v22 = a4;
  UserData.Ptr = (ULONGLONG)&v22;
  *(_QWORD *)&UserData.Size = 4LL;
  v16 = 0;
  v12 = &a5;
  v14 = a7;
  v21 = 0;
  v13 = 4LL;
  v18 = 4LL;
  v15 = a6 * a5;
  v17 = &a8;
  v19 = a10;
  v20 = a9 * a8;
  return EtwWrite(Microsoft_Windows_Win32kHandle, &TimerDelayStatistics, &W32kControlGuid, 5u, &UserData);
}
