/*
 * XREFs of ?UserReinitializeStockFonts@@YAXK@Z @ 0x1C01CB8E0
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C009190C (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     InvalidateKMDpiMetricsCacheDPIMETRICS @ 0x1C00B9BBC (InvalidateKMDpiMetricsCacheDPIMETRICS.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     GreSelectFontInternal @ 0x1C0292FA8 (GreSelectFontInternal.c)
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
  GreSelectFontInternal(*(HDC *)(gpDispInfo + 32LL));
  *(_DWORD *)(gpsi + 5556LL) = GetCharDimensions(*(_QWORD *)(gpDispInfo + 32LL), &v0, gpsi + 5560LL);
  *(_OWORD *)(gpsi + 5564LL) = v0;
  *(_OWORD *)(gpsi + 5580LL) = v1;
  *(_OWORD *)(gpsi + 5596LL) = v2;
  *(_QWORD *)(gpsi + 5612LL) = v3;
  *(_DWORD *)(gpsi + 5620LL) = v4;
  *(_QWORD *)gdpiSystem = GreGetStockObject(13LL);
  GreSelectFontInternal(*(HDC *)(gpDispInfo + 32LL));
  GreSelectFontInternal(*(HDC *)(gpDispInfo + 40LL));
  *(_DWORD *)(gpsi + 5452LL) = GetCharDimensions(*(_QWORD *)(gpDispInfo + 32LL), &v0, gpsi + 5456LL);
  *(_OWORD *)(gpsi + 5460LL) = v0;
  *(_OWORD *)(gpsi + 5476LL) = v1;
  *(_OWORD *)(gpsi + 5492LL) = v2;
  *(_QWORD *)(gpsi + 5508LL) = v3;
  *(_DWORD *)(gpsi + 5516LL) = v4;
  InvalidateKMDpiMetricsCacheDPIMETRICS();
}
