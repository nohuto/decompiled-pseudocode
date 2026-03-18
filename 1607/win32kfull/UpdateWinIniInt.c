/*
 * XREFs of UpdateWinIniInt @ 0x1C01CE8E8
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C0068630 (xxxSystemParametersInfo.c)
 *     ?UpdateThresholdFromMetric@@YAXHPEAH0IEW4_THRESHOLD_SELECTOR@@@Z @ 0x1C00BAAE4 (-UpdateThresholdFromMetric@@YAXHPEAH0IEW4_THRESHOLD_SELECTOR@@@Z.c)
 *     xxxSetIMEShowStatus @ 0x1C01341F8 (xxxSetIMEShowStatus.c)
 *     ?SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z @ 0x1C01CDF0C (-SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z.c)
 * Callees:
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00DAA3C (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall UpdateWinIniInt(__int64 a1, unsigned int a2, unsigned int a3)
{
  wchar_t Dest[16]; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v8[80]; // [rsp+40h] [rbp-78h] BYREF

  RtlStringCchPrintfW(Dest, 16LL, L"%d");
  RtlLoadStringOrError(a3, v8, 40LL);
  return FastWriteProfileStringW(a1, a2, v8, Dest);
}
