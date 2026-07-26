/*
 * XREFs of Template_jqxb @ 0x1C0058D0C
 * Callers:
 *     ndisGetMiniportInfo @ 0x1C00D1DE8 (ndisGetMiniportInfo.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_jqxb(
        __int64 a1,
        __int64 a2,
        const GUID *a3,
        unsigned __int64 a4,
        char a5,
        char a6,
        __int64 a7)
{
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-50h] BYREF
  char *v9; // [rsp+40h] [rbp-40h]
  __int64 v10; // [rsp+48h] [rbp-38h]
  char *v11; // [rsp+50h] [rbp-30h]
  __int64 v12; // [rsp+58h] [rbp-28h]
  __int64 v13; // [rsp+60h] [rbp-20h]
  __int64 v14; // [rsp+68h] [rbp-18h]

  v9 = &a5;
  UserData.Ptr = a4;
  v11 = &a6;
  v13 = a7;
  *(_QWORD *)&UserData.Size = 16LL;
  v10 = 4LL;
  v12 = 8LL;
  v14 = 6LL;
  return EtwWrite(Microsoft_Windows_NDISHandle, &MiniportMacAddress, a3, 4u, &UserData);
}
