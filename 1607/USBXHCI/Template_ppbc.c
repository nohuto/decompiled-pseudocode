/*
 * XREFs of Template_ppbc @ 0x1C00345B0
 * Callers:
 *     Etw_CommandWaitlisted @ 0x1C0033C44 (Etw_CommandWaitlisted.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000FA40 (__security_check_cookie.c)
 */

NTSTATUS Template_ppbc(__int64 a1, __int64 a2, __int64 a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-50h] BYREF
  va_list v5; // [rsp+40h] [rbp-40h]
  __int64 v6; // [rsp+48h] [rbp-38h]
  __int64 v7; // [rsp+50h] [rbp-30h]
  __int64 v8; // [rsp+58h] [rbp-28h]
  va_list v9; // [rsp+60h] [rbp-20h]
  __int64 v10; // [rsp+68h] [rbp-18h]
  __int64 v11; // [rsp+A8h] [rbp+28h] BYREF
  va_list va; // [rsp+A8h] [rbp+28h]
  __int64 v13; // [rsp+B0h] [rbp+30h] BYREF
  va_list va1; // [rsp+B0h] [rbp+30h]
  __int64 v15; // [rsp+B8h] [rbp+38h]
  va_list va2; // [rsp+C0h] [rbp+40h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v11 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v13 = va_arg(va2, _QWORD);
  v15 = va_arg(va2, _QWORD);
  va_copy((va_list)UserData.Ptr, va);
  *(_QWORD *)&UserData.Size = 8LL;
  va_copy(v5, va1);
  v7 = v15;
  va_copy(v9, va2);
  v6 = 8LL;
  v8 = 16LL;
  v10 = 1LL;
  return EtwWrite((REGHANDLE)WPP_MAIN_CB.Dpc.SystemArgument1, &USBXHCI_ETW_EVENT_COMMAND_WAITLISTED, 0LL, 4u, &UserData);
}
