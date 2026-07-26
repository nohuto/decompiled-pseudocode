/*
 * XREFs of Template_jqxqqt @ 0x1C005F4EC
 * Callers:
 *     ndisQuerySetMiniportDeviceState @ 0x1C009B1E4 (ndisQuerySetMiniportDeviceState.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_jqxqqt(
        __int64 a1,
        __int64 a2,
        const GUID *a3,
        unsigned __int64 a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9)
{
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-41h] BYREF
  char *v11; // [rsp+40h] [rbp-31h]
  __int64 v12; // [rsp+48h] [rbp-29h]
  char *v13; // [rsp+50h] [rbp-21h]
  __int64 v14; // [rsp+58h] [rbp-19h]
  char *v15; // [rsp+60h] [rbp-11h]
  __int64 v16; // [rsp+68h] [rbp-9h]
  char *v17; // [rsp+70h] [rbp-1h]
  __int64 v18; // [rsp+78h] [rbp+7h]
  char *v19; // [rsp+80h] [rbp+Fh]
  __int64 v20; // [rsp+88h] [rbp+17h]

  v11 = &a5;
  UserData.Ptr = a4;
  v13 = &a6;
  *(_QWORD *)&UserData.Size = 16LL;
  v15 = &a7;
  v17 = &a8;
  v19 = &a9;
  v12 = 4LL;
  v14 = 8LL;
  v16 = 4LL;
  v18 = 4LL;
  v20 = 4LL;
  return EtwWrite(Microsoft_Windows_NDISHandle, &QuerySetMiniportDeviceStateFailed, a3, 6u, &UserData);
}
