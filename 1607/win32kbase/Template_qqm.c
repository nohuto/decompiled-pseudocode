/*
 * XREFs of Template_qqm @ 0x1C00B7D44
 * Callers:
 *     EtwTraceUserIsActive @ 0x1C0079D90 (EtwTraceUserIsActive.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_qqm(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, __int64 a6)
{
  int v7; // [rsp+30h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-38h] BYREF
  char *v9; // [rsp+48h] [rbp-28h]
  __int64 v10; // [rsp+50h] [rbp-20h]
  __int64 v11; // [rsp+58h] [rbp-18h]
  __int64 v12; // [rsp+60h] [rbp-10h]

  v7 = gSessionId;
  *(_QWORD *)&UserData.Size = 4LL;
  UserData.Ptr = (ULONGLONG)&v7;
  v9 = &a5;
  v11 = a6;
  v10 = 4LL;
  v12 = 8LL;
  return EtwWrite(Microsoft_Windows_Win32kHandle, &UserActiveEvent, &W32kControlGuid, 3u, &UserData);
}
