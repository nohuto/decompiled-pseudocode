/*
 * XREFs of UsbhDeleteUxdPortSettings @ 0x1C0056E50
 * Callers:
 *     UsbhDeleteUxdSettings @ 0x1C0056F04 (UsbhDeleteUxdSettings.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1C0008A60 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1C0029400 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_S @ 0x1C00459F4 (WPP_RECORDER_SF_S.c)
 */

NTSTATUS __fastcall UsbhDeleteUxdPortSettings(__int64 a1, const WCHAR *a2, unsigned int a3)
{
  int v4; // r8d
  wchar_t pszDest[16]; // [rsp+30h] [rbp-38h] BYREF

  wcscpy(pszDest, L"uxd_port_nnn");
  RtlStringCbPrintfW(pszDest, 0x1AuLL, L"uxd_port_%3.3d", a3);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_S(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      v4,
      29,
      (__int64)&WPP_5b132266348c32d7b0c29b24875d7db7_Traceguids,
      (__int64)pszDest);
  return RtlDeleteRegistryValue(0x40000000u, a2, pszDest);
}
