/*
 * XREFs of Template_pjqq @ 0x1C0020204
 * Callers:
 *     Controller_UcxEvtQueryUsbCapability @ 0x1C00087B0 (Controller_UcxEvtQueryUsbCapability.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000FA40 (__security_check_cookie.c)
 */

NTSTATUS Template_pjqq(__int64 a1, __int64 a2, __int64 a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-50h] BYREF
  __int64 v5; // [rsp+40h] [rbp-40h]
  __int64 v6; // [rsp+48h] [rbp-38h]
  va_list v7; // [rsp+50h] [rbp-30h]
  __int64 v8; // [rsp+58h] [rbp-28h]
  va_list v9; // [rsp+60h] [rbp-20h]
  __int64 v10; // [rsp+68h] [rbp-18h]
  __int64 v11; // [rsp+A8h] [rbp+28h] BYREF
  va_list va; // [rsp+A8h] [rbp+28h]
  __int64 v13; // [rsp+B0h] [rbp+30h]
  __int64 v14; // [rsp+B8h] [rbp+38h] BYREF
  va_list va1; // [rsp+B8h] [rbp+38h]
  va_list va2; // [rsp+C0h] [rbp+40h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v11 = va_arg(va1, _QWORD);
  v13 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v14 = va_arg(va2, _QWORD);
  va_copy((va_list)UserData.Ptr, va);
  v5 = v13;
  *(_QWORD *)&UserData.Size = 8LL;
  va_copy(v7, va1);
  va_copy(v9, va2);
  v6 = 16LL;
  v8 = 4LL;
  v10 = 4LL;
  return EtwWrite(
           (REGHANDLE)WPP_MAIN_CB.Dpc.SystemArgument1,
           &USBXHCI_ETW_EVENT_CONTROLLER_QUERY_USB_CAPABILITY,
           0LL,
           4u,
           &UserData);
}
