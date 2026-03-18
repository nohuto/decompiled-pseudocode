/*
 * XREFs of UsbhDeleteUxdPortSettings @ 0x1C00566A8
 * Callers:
 *     UsbhDeleteUxdSettings @ 0x1C005675C (UsbhDeleteUxdSettings.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1C0006BC0 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1C0029D80 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_S @ 0x1C0045584 (WPP_RECORDER_SF_S.c)
 */

NTSTATUS __fastcall UsbhDeleteUxdPortSettings(__int64 a1, const WCHAR *a2, unsigned int a3)
{
  __int64 v4; // r8
  wchar_t pszDest[16]; // [rsp+30h] [rbp-38h] BYREF

  wcscpy(pszDest, L"uxd_port_nnn");
  RtlStringCbPrintfW(pszDest, 0x1AuLL, L"uxd_port_%3.3d", a3);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_S(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      v4,
      0x1Du,
      (__int64)&WPP_7b111e6d9aaacafadc26834d2b580d22_Traceguids,
      pszDest);
  return RtlDeleteRegistryValue(0x40000000u, a2, pszDest);
}
