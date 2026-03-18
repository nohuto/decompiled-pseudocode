/*
 * XREFs of ?UserReinitializeStockFonts@@YAXK@Z @ 0x1C01D35E0
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C012420C (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     GreSelectFont @ 0x1C0018350 (GreSelectFont.c)
 *     InvalidateKMDpiMetricsCacheDPIMETRICS @ 0x1C00D0E04 (InvalidateKMDpiMetricsCacheDPIMETRICS.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall UserReinitializeStockFonts()
{
  __int128 v0; // [rsp+20h] [rbp-50h] BYREF
  __int128 v1; // [rsp+30h] [rbp-40h]
  __int128 v2; // [rsp+40h] [rbp-30h]
  __int64 v3; // [rsp+50h] [rbp-20h]
  int v4; // [rsp+58h] [rbp-18h]

  GreReinitializeStockFonts();
  gdpi96[0] = GreGetDpiStockObject(13LL);
  GreSelectFont(*(_QWORD *)(gpDispInfo + 32LL), gdpi96[0]);
  *(_DWORD *)(gpsi + 4164LL) = GetCharDimensions(*(_QWORD *)(gpDispInfo + 32LL), &v0, gpsi + 4168LL);
  *(_OWORD *)(gpsi + 4172LL) = v0;
  *(_OWORD *)(gpsi + 4188LL) = v1;
  *(_OWORD *)(gpsi + 4204LL) = v2;
  *(_QWORD *)(gpsi + 4220LL) = v3;
  *(_DWORD *)(gpsi + 4228LL) = v4;
  gdpiSystem[0] = (HBRUSH)GreGetStockObject(13LL);
  GreSelectFont(*(_QWORD *)(gpDispInfo + 32LL), (__int64)gdpiSystem[0]);
  GreSelectFont(*(_QWORD *)(gpDispInfo + 40LL), (__int64)gdpiSystem[0]);
  *(_DWORD *)(gpsi + 4060LL) = GetCharDimensions(*(_QWORD *)(gpDispInfo + 32LL), &v0, gpsi + 4064LL);
  *(_OWORD *)(gpsi + 4068LL) = v0;
  *(_OWORD *)(gpsi + 4084LL) = v1;
  *(_OWORD *)(gpsi + 4100LL) = v2;
  *(_QWORD *)(gpsi + 4116LL) = v3;
  *(_DWORD *)(gpsi + 4124LL) = v4;
  InvalidateKMDpiMetricsCacheDPIMETRICS();
}
