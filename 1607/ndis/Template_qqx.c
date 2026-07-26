/*
 * XREFs of Template_qqx @ 0x1C004E7B8
 * Callers:
 *     ndisTraceDpcEnd @ 0x1C004F7C8 (ndisTraceDpcEnd.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_qqx(__int64 a1, __int64 a2, const GUID *a3, int a4, char a5, char a6)
{
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-40h] BYREF
  char *v8; // [rsp+40h] [rbp-30h]
  __int64 v9; // [rsp+48h] [rbp-28h]
  char *v10; // [rsp+50h] [rbp-20h]
  __int64 v11; // [rsp+58h] [rbp-18h]
  int v12; // [rsp+98h] [rbp+28h] BYREF

  v12 = a4;
  UserData.Ptr = (unsigned __int64)&v12;
  *(_QWORD *)&UserData.Size = 4LL;
  v8 = &a5;
  v9 = 4LL;
  v10 = &a6;
  v11 = 8LL;
  return EtwWrite(Microsoft_Windows_NDISHandle, &DpcEnd, a3, 3u, &UserData);
}
