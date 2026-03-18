/*
 * XREFs of Template_pqzr1q @ 0x1C00345A8
 * Callers:
 *     Etw_StartDeviceFail @ 0x1C0033EDC (Etw_StartDeviceFail.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0010810 (__security_check_cookie.c)
 */

NTSTATUS Template_pqzr1q(__int64 a1, __int64 a2, __int64 a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-50h] BYREF
  va_list v5; // [rsp+40h] [rbp-40h]
  __int64 v6; // [rsp+48h] [rbp-38h]
  __int64 v7; // [rsp+50h] [rbp-30h]
  int v8; // [rsp+58h] [rbp-28h]
  int v9; // [rsp+5Ch] [rbp-24h]
  va_list v10; // [rsp+60h] [rbp-20h]
  __int64 v11; // [rsp+68h] [rbp-18h]
  __int64 v12; // [rsp+A8h] [rbp+28h] BYREF
  va_list va; // [rsp+A8h] [rbp+28h]
  __int64 v14; // [rsp+B0h] [rbp+30h] BYREF
  va_list va1; // [rsp+B0h] [rbp+30h]
  __int64 v16; // [rsp+B8h] [rbp+38h]
  va_list va2; // [rsp+C0h] [rbp+40h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v12 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v14 = va_arg(va2, _QWORD);
  v16 = va_arg(va2, _QWORD);
  va_copy((va_list)UserData.Ptr, va);
  v9 = 0;
  va_copy(v5, va1);
  v7 = v16;
  *(_QWORD *)&UserData.Size = 8LL;
  v8 = 2 * v14;
  va_copy(v10, va2);
  v6 = 4LL;
  v11 = 4LL;
  return EtwWrite((REGHANDLE)WPP_MAIN_CB.Dpc.SystemArgument2, &USBXHCI_ETW_EVENT_STARTDEVICE_FAIL, 0LL, 4u, &UserData);
}
