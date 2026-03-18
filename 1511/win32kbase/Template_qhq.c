/*
 * XREFs of Template_qhq @ 0x1C00AE1D8
 * Callers:
 *     UpdateLastInput @ 0x1C000E9A0 (UpdateLastInput.c)
 *     EtwTraceDisplayReqChange @ 0x1C000EC20 (EtwTraceDisplayReqChange.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_qhq(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, __int64 a4, char a5, char a6)
{
  int v7; // [rsp+30h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-38h] BYREF
  char *v9; // [rsp+48h] [rbp-28h]
  __int64 v10; // [rsp+50h] [rbp-20h]
  char *v11; // [rsp+58h] [rbp-18h]
  __int64 v12; // [rsp+60h] [rbp-10h]

  v7 = gSessionId;
  UserData.Ptr = (ULONGLONG)&v7;
  v9 = &a5;
  v11 = &a6;
  *(_QWORD *)&UserData.Size = 4LL;
  v10 = 2LL;
  v12 = 4LL;
  return EtwWrite(Microsoft_Windows_Win32kHandle, a2, &W32kControlGuid, 3u, &UserData);
}
