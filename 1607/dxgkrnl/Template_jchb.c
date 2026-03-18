/*
 * XREFs of Template_jchb @ 0x1C0022FF4
 * Callers:
 *     DxgLogEtwEventCb @ 0x1C0022DF0 (DxgLogEtwEventCb.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_jchb(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        ULONGLONG a4,
        char a5,
        unsigned __int16 a6,
        __int64 a7)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-50h] BYREF
  char *v9; // [rsp+40h] [rbp-40h]
  __int64 v10; // [rsp+48h] [rbp-38h]
  unsigned __int16 *v11; // [rsp+50h] [rbp-30h]
  __int64 v12; // [rsp+58h] [rbp-28h]
  __int64 v13; // [rsp+60h] [rbp-20h]
  int v14; // [rsp+68h] [rbp-18h]
  int v15; // [rsp+6Ch] [rbp-14h]

  v9 = &a5;
  UserData.Ptr = a4;
  v11 = &a6;
  v13 = a7;
  v14 = a6;
  v15 = 0;
  *(_QWORD *)&UserData.Size = 16LL;
  v10 = 1LL;
  v12 = 2LL;
  return EtwWrite(Microsoft_Windows_DxgKrnlHandle, &EventExternalEvent, 0LL, 4u, &UserData);
}
