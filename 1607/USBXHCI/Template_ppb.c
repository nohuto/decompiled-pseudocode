/*
 * XREFs of Template_ppb @ 0x1C003452C
 * Callers:
 *     Command_InternalSendCommand @ 0x1C001BC70 (Command_InternalSendCommand.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000FA40 (__security_check_cookie.c)
 */

NTSTATUS Template_ppb(__int64 a1, __int64 a2, __int64 a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-40h] BYREF
  va_list v5; // [rsp+40h] [rbp-30h]
  __int64 v6; // [rsp+48h] [rbp-28h]
  __int64 v7; // [rsp+50h] [rbp-20h]
  __int64 v8; // [rsp+58h] [rbp-18h]
  __int64 v9; // [rsp+98h] [rbp+28h] BYREF
  va_list va; // [rsp+98h] [rbp+28h]
  __int64 v11; // [rsp+A0h] [rbp+30h] BYREF
  va_list va1; // [rsp+A0h] [rbp+30h]
  __int64 v13; // [rsp+A8h] [rbp+38h]
  va_list va2; // [rsp+B0h] [rbp+40h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v9 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v11 = va_arg(va2, _QWORD);
  v13 = va_arg(va2, _QWORD);
  va_copy((va_list)UserData.Ptr, va);
  *(_QWORD *)&UserData.Size = 8LL;
  va_copy(v5, va1);
  v7 = v13;
  v6 = 8LL;
  v8 = 16LL;
  return EtwWrite((REGHANDLE)WPP_MAIN_CB.Dpc.SystemArgument1, &USBXHCI_ETW_EVENT_COMMAND_SEND, 0LL, 3u, &UserData);
}
