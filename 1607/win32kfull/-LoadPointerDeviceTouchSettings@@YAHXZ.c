/*
 * XREFs of ?LoadPointerDeviceTouchSettings@@YAHXZ @ 0x1C0134424
 * Callers:
 *     ReadPointerDeviceSettings @ 0x1C006A3E0 (ReadPointerDeviceSettings.c)
 *     ?GetTouchTimeFromCPLValue@@YAKKKKH@Z @ 0x1C0225664 (-GetTouchTimeFromCPLValue@@YAKKKKH@Z.c)
 * Callees:
 *     ?GetDWORDSettingValuesEx@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGKH@Z @ 0x1C006A818 (-GetDWORDSettingValuesEx@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGKH@Z.c)
 */

__int64 LoadPointerDeviceTouchSettings(void)
{
  __int64 result; // rax

  if ( !gTouchMonitor
    && !(unsigned int)GetDWORDSettingValuesEx(off_1C0320108, 0x3Eu, L"\\Software\\Microsoft\\Wisp\\Touch", 0xDu, 0)
    || !gMultiTouchMonitor
    && !(unsigned int)GetDWORDSettingValuesEx(off_1C03200F8, 0x48u, L"\\Software\\Microsoft\\Wisp\\MultiTouch", 1u, 0) )
  {
    return 0LL;
  }
  gTouchMonitor = 1;
  result = 1LL;
  gMultiTouchMonitor = 1;
  return result;
}
