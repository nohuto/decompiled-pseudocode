/*
 * XREFs of Template_qqxx @ 0x1C00AF318
 * Callers:
 *     EtwGdiSysMemToken @ 0x1C0076970 (EtwGdiSysMemToken.c)
 *     EtwTraceTokenIndependentFlipSkipCompleteEvent @ 0x1C00AC370 (EtwTraceTokenIndependentFlipSkipCompleteEvent.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_qqxx(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-50h] BYREF
  char *v9; // [rsp+40h] [rbp-40h]
  __int64 v10; // [rsp+48h] [rbp-38h]
  char *v11; // [rsp+50h] [rbp-30h]
  __int64 v12; // [rsp+58h] [rbp-28h]
  char *v13; // [rsp+60h] [rbp-20h]
  __int64 v14; // [rsp+68h] [rbp-18h]
  int v15; // [rsp+A8h] [rbp+28h] BYREF

  v15 = a4;
  UserData.Ptr = (ULONGLONG)&v15;
  v12 = 8LL;
  *(_QWORD *)&UserData.Size = 4LL;
  v9 = &a5;
  v11 = &a6;
  v13 = &a7;
  v10 = 4LL;
  v14 = 8LL;
  return EtwWrite(Microsoft_Windows_Win32kHandle, a2, &W32kControlGuid, 4u, &UserData);
}
