/*
 * XREFs of Template_pqn @ 0x1C0001574
 * Callers:
 *     HUBDRIVER_EtwRundownHub @ 0x1C0061490 (HUBDRIVER_EtwRundownHub.c)
 *     HUBFDO_EvtDevicePrepareHardware @ 0x1C0062B00 (HUBFDO_EvtDevicePrepareHardware.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00341F0 (__security_check_cookie.c)
 */

NTSTATUS Template_pqn(__int64 a1, const EVENT_DESCRIPTOR *a2, const GUID *a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-40h] BYREF
  va_list v5; // [rsp+40h] [rbp-30h]
  __int64 v6; // [rsp+48h] [rbp-28h]
  __int64 v7; // [rsp+50h] [rbp-20h]
  int v8; // [rsp+58h] [rbp-18h]
  int v9; // [rsp+5Ch] [rbp-14h]
  __int64 v10; // [rsp+98h] [rbp+28h] BYREF
  va_list va; // [rsp+98h] [rbp+28h]
  __int64 v12; // [rsp+A0h] [rbp+30h] BYREF
  va_list va1; // [rsp+A0h] [rbp+30h]
  __int64 v14; // [rsp+A8h] [rbp+38h]
  __int64 v15; // [rsp+B0h] [rbp+40h]
  va_list va2; // [rsp+B8h] [rbp+48h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v10 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v12 = va_arg(va2, _QWORD);
  v14 = va_arg(va2, _QWORD);
  v15 = va_arg(va2, _QWORD);
  va_copy((va_list)UserData.Ptr, va);
  v9 = 0;
  va_copy(v5, va1);
  v7 = v15;
  v8 = v14;
  *(_QWORD *)&UserData.Size = 8LL;
  v6 = 4LL;
  return EtwWrite(Microsoft_Windows_USB_USBHUB3Handle, a2, a3, 3u, &UserData);
}
