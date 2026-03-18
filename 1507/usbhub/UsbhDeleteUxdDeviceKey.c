/*
 * XREFs of UsbhDeleteUxdDeviceKey @ 0x1C0056604
 * Callers:
 *     UsbhDeleteUxdSettings @ 0x1C005675C (UsbhDeleteUxdSettings.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0029D80 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_S @ 0x1C0045584 (WPP_RECORDER_SF_S.c)
 *     UsbhBuildUxdDeviceKey @ 0x1C005648C (UsbhBuildUxdDeviceKey.c)
 */

__int64 __fastcall UsbhDeleteUxdDeviceKey(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r8
  WCHAR ValueName[16]; // [rsp+30h] [rbp-38h] BYREF

  wcscpy(ValueName, L"VVVVPPPPRRRR");
  UsbhBuildUxdDeviceKey(a1, a2, ValueName, a4);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_S(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      v4,
      0x1Eu,
      (__int64)&WPP_7b111e6d9aaacafadc26834d2b580d22_Traceguids,
      ValueName);
  RtlDeleteRegistryValue(1u, L"usbhub\\uxd_control\\devices", ValueName);
  return 0LL;
}
