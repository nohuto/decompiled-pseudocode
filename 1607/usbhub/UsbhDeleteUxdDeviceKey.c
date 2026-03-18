/*
 * XREFs of UsbhDeleteUxdDeviceKey @ 0x1C0056DAC
 * Callers:
 *     UsbhDeleteUxdSettings @ 0x1C0056F04 (UsbhDeleteUxdSettings.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0029400 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_S @ 0x1C00459F4 (WPP_RECORDER_SF_S.c)
 *     UsbhBuildUxdDeviceKey @ 0x1C0056C34 (UsbhBuildUxdDeviceKey.c)
 */

__int64 __fastcall UsbhDeleteUxdDeviceKey(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r8d
  WCHAR ValueName[16]; // [rsp+30h] [rbp-38h] BYREF

  wcscpy(ValueName, L"VVVVPPPPRRRR");
  UsbhBuildUxdDeviceKey(a1, a2, ValueName, a4);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_S(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      v4,
      30,
      (__int64)&WPP_5b132266348c32d7b0c29b24875d7db7_Traceguids,
      (__int64)ValueName);
  RtlDeleteRegistryValue(1u, L"usbhub\\uxd_control\\devices", ValueName);
  return 0LL;
}
