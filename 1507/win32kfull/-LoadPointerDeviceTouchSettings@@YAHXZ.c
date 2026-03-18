/*
 * XREFs of ?LoadPointerDeviceTouchSettings@@YAHXZ @ 0x1C0156CA4
 * Callers:
 *     ReadPointerDeviceSettings @ 0x1C003C944 (ReadPointerDeviceSettings.c)
 *     ?GetTouchTimeFromCPLValue@@YAKKKKH@Z @ 0x1C0225594 (-GetTouchTimeFromCPLValue@@YAKKKKH@Z.c)
 * Callees:
 *     ?GetDWORDSettingValues@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z @ 0x1C003CD70 (-GetDWORDSettingValues@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z.c)
 */

__int64 LoadPointerDeviceTouchSettings(void)
{
  __int64 result; // rax

  if ( !gTouchMonitor
    && !(unsigned int)GetDWORDSettingValues(off_1C031B228, 0x3Eu, L"\\Software\\Microsoft\\Wisp\\Touch", 0xDu)
    || !gMultiTouchMonitor
    && !(unsigned int)GetDWORDSettingValues(off_1C031B218, 0x48u, L"\\Software\\Microsoft\\Wisp\\MultiTouch", 1u) )
  {
    return 0LL;
  }
  gTouchMonitor = 1;
  result = 1LL;
  gMultiTouchMonitor = 1;
  return result;
}
