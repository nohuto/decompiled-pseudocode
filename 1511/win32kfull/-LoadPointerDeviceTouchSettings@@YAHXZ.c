/*
 * XREFs of ?LoadPointerDeviceTouchSettings@@YAHXZ @ 0x1C0113358
 * Callers:
 *     ReadPointerDeviceSettings @ 0x1C0125F9C (ReadPointerDeviceSettings.c)
 *     ?GetTouchTimeFromCPLValue@@YAKKKKH@Z @ 0x1C0224AA4 (-GetTouchTimeFromCPLValue@@YAKKKKH@Z.c)
 * Callees:
 *     ?GetDWORDSettingValues@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z @ 0x1C01259A4 (-GetDWORDSettingValues@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z.c)
 */

__int64 LoadPointerDeviceTouchSettings(void)
{
  __int64 result; // rax

  if ( !gTouchMonitor
    && !(unsigned int)GetDWORDSettingValues(off_1C031B1C8, 0x3Eu, L"\\Software\\Microsoft\\Wisp\\Touch", 0xDu)
    || !gMultiTouchMonitor
    && !(unsigned int)GetDWORDSettingValues(off_1C031B1B8, 0x48u, L"\\Software\\Microsoft\\Wisp\\MultiTouch", 1u) )
  {
    return 0LL;
  }
  gTouchMonitor = 1;
  result = 1LL;
  gMultiTouchMonitor = 1;
  return result;
}
