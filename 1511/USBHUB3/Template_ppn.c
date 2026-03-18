/*
 * XREFs of Template_ppn @ 0x1C000F978
 * Callers:
 *     HUBPDO_ValidateURB @ 0x1C0011B9C (HUBPDO_ValidateURB.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0034B70 (__security_check_cookie.c)
 */

NTSTATUS Template_ppn(__int64 a1, const EVENT_DESCRIPTOR *a2, const GUID *a3, ...)
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
  __int64 v14; // [rsp+B0h] [rbp+40h]
  va_list va2; // [rsp+B8h] [rbp+48h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v9 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v11 = va_arg(va2, _QWORD);
  v13 = va_arg(va2, _QWORD);
  v14 = va_arg(va2, _QWORD);
  va_copy((va_list)UserData.Ptr, va);
  *(_QWORD *)&UserData.Size = 8LL;
  va_copy(v5, va1);
  v7 = v14;
  v6 = 8LL;
  v8 = 24LL;
  return EtwWrite(Microsoft_Windows_USB_USBHUB3Handle, a2, a3, 3u, &UserData);
}
