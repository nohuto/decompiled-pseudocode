/*
 * XREFs of Template_qqqtq @ 0x1C00AA890
 * Callers:
 *     EtwTraceTouchPadAAP @ 0x1C00A7FA0 (EtwTraceTouchPadAAP.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_qqqtq(__int64 a1, __int64 a2, __int64 a3, int a4, char a5, char a6, char a7, char a8)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-29h] BYREF
  char *v10; // [rsp+40h] [rbp-19h]
  __int64 v11; // [rsp+48h] [rbp-11h]
  char *v12; // [rsp+50h] [rbp-9h]
  __int64 v13; // [rsp+58h] [rbp-1h]
  char *v14; // [rsp+60h] [rbp+7h]
  __int64 v15; // [rsp+68h] [rbp+Fh]
  char *v16; // [rsp+70h] [rbp+17h]
  __int64 v17; // [rsp+78h] [rbp+1Fh]
  int v18; // [rsp+B8h] [rbp+5Fh] BYREF

  v18 = a4;
  UserData.Ptr = (ULONGLONG)&v18;
  *(_QWORD *)&UserData.Size = 4LL;
  v10 = &a5;
  v11 = 4LL;
  v12 = &a6;
  v13 = 4LL;
  v14 = &a7;
  v16 = &a8;
  v15 = 4LL;
  v17 = 4LL;
  return EtwWrite(Microsoft_Windows_Win32kHandle, &TouchPadAAP, &W32kControlGuid, 5u, &UserData);
}
