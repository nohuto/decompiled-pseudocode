/*
 * XREFs of Template_pnq @ 0x1C000120C
 * Callers:
 *     HUBDRIVER_EtwRundownHub @ 0x1C0061490 (HUBDRIVER_EtwRundownHub.c)
 *     HUBFDO_EvtDevicePrepareHardware @ 0x1C0062B00 (HUBFDO_EvtDevicePrepareHardware.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00341F0 (__security_check_cookie.c)
 */

NTSTATUS Template_pnq(__int64 a1, const EVENT_DESCRIPTOR *a2, const GUID *a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-40h] BYREF
  __int64 v5; // [rsp+40h] [rbp-30h]
  int v6; // [rsp+48h] [rbp-28h]
  int v7; // [rsp+4Ch] [rbp-24h]
  va_list v8; // [rsp+50h] [rbp-20h]
  __int64 v9; // [rsp+58h] [rbp-18h]
  __int64 v10; // [rsp+98h] [rbp+28h] BYREF
  va_list va; // [rsp+98h] [rbp+28h]
  __int64 v12; // [rsp+A0h] [rbp+30h]
  __int64 v13; // [rsp+A8h] [rbp+38h]
  va_list va1; // [rsp+B0h] [rbp+40h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v10 = va_arg(va1, _QWORD);
  v12 = va_arg(va1, _QWORD);
  v13 = va_arg(va1, _QWORD);
  va_copy((va_list)UserData.Ptr, va);
  v5 = v13;
  v6 = v12;
  va_copy(v8, va1);
  v7 = 0;
  *(_QWORD *)&UserData.Size = 8LL;
  v9 = 4LL;
  return EtwWrite(Microsoft_Windows_USB_USBHUB3Handle, a2, a3, 3u, &UserData);
}
