/*
 * XREFs of ?LoadPointerDevicePenSettings@@YAHXZ @ 0x1C0111430
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0061810 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ReadPointerDeviceSettings @ 0x1C0125F9C (ReadPointerDeviceSettings.c)
 *     ?PassedHoldTime@@YAHK_K0@Z @ 0x1C01FCA4C (-PassedHoldTime@@YAHK_K0@Z.c)
 * Callees:
 *     ?GetDWORDSettingValues@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z @ 0x1C01259A4 (-GetDWORDSettingValues@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z.c)
 */

__int64 LoadPointerDevicePenSettings(void)
{
  __int64 result; // rax

  result = GetDWORDSettingValues(off_1C031B1A8, 0x60u, L"\\Software\\Microsoft\\Wisp\\Pen\\SysEventParameters", 8u);
  if ( (_DWORD)result )
  {
    result = 1LL;
    gPenMonitor = 1;
  }
  return result;
}
