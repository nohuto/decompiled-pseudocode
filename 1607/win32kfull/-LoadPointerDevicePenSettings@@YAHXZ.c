/*
 * XREFs of ?LoadPointerDevicePenSettings@@YAHXZ @ 0x1C012D824
 * Callers:
 *     ReadPointerDeviceSettings @ 0x1C006A3E0 (ReadPointerDeviceSettings.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0088F70 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?PassedHoldTime@@YAHK_K0@Z @ 0x1C01F3CC0 (-PassedHoldTime@@YAHK_K0@Z.c)
 * Callees:
 *     ?GetDWORDSettingValuesEx@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGKH@Z @ 0x1C006A818 (-GetDWORDSettingValuesEx@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGKH@Z.c)
 */

__int64 LoadPointerDevicePenSettings(void)
{
  __int64 result; // rax

  result = GetDWORDSettingValuesEx(off_1C03200E8, 0x60u, L"\\Software\\Microsoft\\Wisp\\Pen\\SysEventParameters", 8u, 0);
  if ( (_DWORD)result )
  {
    result = 1LL;
    gPenMonitor = 1;
  }
  return result;
}
