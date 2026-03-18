/*
 * XREFs of Template_qxq @ 0x1C001E078
 * Callers:
 *     ?DxgkEtwEnableCallback@@YAXKK_K@Z @ 0x1C000FE50 (-DxgkEtwEnableCallback@@YAXKK_K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_qxq(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, char a6)
{
  int v7; // [rsp+30h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-38h] BYREF
  char *v9; // [rsp+48h] [rbp-28h]
  __int64 v10; // [rsp+50h] [rbp-20h]
  char *v11; // [rsp+58h] [rbp-18h]
  __int64 v12; // [rsp+60h] [rbp-10h]

  UserData.Ptr = (ULONGLONG)&v7;
  v7 = 6;
  v9 = &a5;
  *(_QWORD *)&UserData.Size = 4LL;
  v11 = &a6;
  v10 = 8LL;
  v12 = 4LL;
  return EtwWrite(Microsoft_Windows_DxgKrnlHandle, &EventEtwVersion, 0LL, 3u, &UserData);
}
