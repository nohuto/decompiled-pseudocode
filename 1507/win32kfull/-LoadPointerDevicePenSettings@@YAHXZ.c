/*
 * XREFs of ?LoadPointerDevicePenSettings@@YAHXZ @ 0x1C0151B88
 * Callers:
 *     ReadPointerDeviceSettings @ 0x1C003C944 (ReadPointerDeviceSettings.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00724A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?PassedHoldTime@@YAHK_K0@Z @ 0x1C01FC5AC (-PassedHoldTime@@YAHK_K0@Z.c)
 * Callees:
 *     ?GetDWORDSettingValues@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z @ 0x1C003CD70 (-GetDWORDSettingValues@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z.c)
 */

__int64 LoadPointerDevicePenSettings(void)
{
  __int64 result; // rax

  result = GetDWORDSettingValues(off_1C031B208, 0x60u, L"\\Software\\Microsoft\\Wisp\\Pen\\SysEventParameters", 8u);
  if ( (_DWORD)result )
  {
    result = 1LL;
    gPenMonitor = 1;
  }
  return result;
}
