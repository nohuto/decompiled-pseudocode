/*
 * XREFs of ?IsMouseDeviceOnWhiteList@@YAHPEAU_DEVICE_OBJECT@@H@Z @ 0x1C01D02C4
 * Callers:
 *     IsLegacyTouchPadDevice @ 0x1C0111110 (IsLegacyTouchPadDevice.c)
 * Callees:
 *     ?IsDeviceOnRegistryList@@YAHU_UNICODE_STRING@@0H@Z @ 0x1C0095A2C (-IsDeviceOnRegistryList@@YAHU_UNICODE_STRING@@0H@Z.c)
 *     GetPointerDeviceId @ 0x1C0095AE8 (GetPointerDeviceId.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

__int64 __fastcall IsMouseDeviceOnWhiteList(struct _DEVICE_OBJECT *a1, int a2)
{
  unsigned int v3; // ebx
  struct _UNICODE_STRING Destination; // [rsp+20h] [rbp-E0h] BYREF
  struct _UNICODE_STRING v6; // [rsp+30h] [rbp-D0h] BYREF
  struct _UNICODE_STRING v7; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  char v9; // [rsp+60h] [rbp-A0h] BYREF

  *(_DWORD *)&Destination.Length = 13107200;
  v3 = 0;
  Destination.Buffer = (PWSTR)&v9;
  if ( (int)GetPointerDeviceId(a1, &Destination) >= 0 )
  {
    RtlInitUnicodeString(
      &DestinationString,
      L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\PrecisionTouchPad\\LegacyDevices");
    v6 = Destination;
    v7 = DestinationString;
    return IsDeviceOnRegistryList(&v7, &v6, a2);
  }
  return v3;
}
