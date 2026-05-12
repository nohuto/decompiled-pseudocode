/*
 * XREFs of Template_qqqqq @ 0x1C0025440
 * Callers:
 *     RaidCoalescingCallback @ 0x1C00236F0 (RaidCoalescingCallback.c)
 *     RaidPowerSettingCallback @ 0x1C0024730 (RaidPowerSettingCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0012DB0 (__security_check_cookie.c)
 */

NTSTATUS Template_qqqqq(_DWORD a1, _DWORD a2, _DWORD a3, int a4, char a5, char a6, ...)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-29h] BYREF
  char *v8; // [rsp+40h] [rbp-19h]
  __int64 v9; // [rsp+48h] [rbp-11h]
  char *v10; // [rsp+50h] [rbp-9h]
  __int64 v11; // [rsp+58h] [rbp-1h]
  va_list v12; // [rsp+60h] [rbp+7h]
  __int64 v13; // [rsp+68h] [rbp+Fh]
  va_list v14; // [rsp+70h] [rbp+17h]
  __int64 v15; // [rsp+78h] [rbp+1Fh]
  int v16; // [rsp+B8h] [rbp+5Fh] BYREF
  __int64 v17; // [rsp+D0h] [rbp+77h] BYREF
  va_list va; // [rsp+D0h] [rbp+77h]
  va_list va1; // [rsp+D8h] [rbp+7Fh] BYREF

  va_start(va1, a6);
  va_start(va, a6);
  v17 = va_arg(va1, _QWORD);
  v16 = a4;
  UserData.Ptr = (unsigned __int64)&v16;
  *(_QWORD *)&UserData.Size = 4LL;
  v8 = &a5;
  v9 = 4LL;
  v10 = &a6;
  v11 = 4LL;
  va_copy(v12, va);
  va_copy(v14, va1);
  v13 = 4LL;
  v15 = 4LL;
  return EtwWrite(Microsoft_Windows_StorPortHandle, &EventAdapterSystemPowerHint, 0LL, 5u, &UserData);
}
