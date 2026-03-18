/*
 * XREFs of GetDpiCacheIndex @ 0x140302350
 * Callers:
 *     GetDpiDependentMetric @ 0x140032058 (GetDpiDependentMetric.c)
 *     GetWindowBordersForDpiWithCompatFlags2 @ 0x140032974 (GetWindowBordersForDpiWithCompatFlags2.c)
 *     ?GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z @ 0x140032AE8 (-GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z.c)
 *     ?GetWindowBordersWithDpiAwareness@@YAHPEBUtagWND@@_N1I@Z @ 0x140033184 (-GetWindowBordersWithDpiAwareness@@YAHPEBUtagWND@@_N1I@Z.c)
 *     ?RealGetSystemMetricsForDpi@@YAHHI@Z @ 0x14004E344 (-RealGetSystemMetricsForDpi@@YAHHI@Z.c)
 *     GetOemBitmapInfoForDpi @ 0x140124A34 (GetOemBitmapInfoForDpi.c)
 *     _EnsureDpiDepSysMetCacheForPlateau @ 0x1401BF4C0 (_EnsureDpiDepSysMetCacheForPlateau.c)
 *     ?GetWindowFrameMetricForDpiWithCompatFlags2@@YAHHIK@Z @ 0x1401BF5C8 (-GetWindowFrameMetricForDpiWithCompatFlags2@@YAHHIK@Z.c)
 *     ?PrepareHDCBITSBitmap@@YAPEAUHDC__@@PEAU1@@Z @ 0x1401C0154 (-PrepareHDCBITSBitmap@@YAPEAUHDC__@@PEAU1@@Z.c)
 *     NtUserGetActiveProcessesDpis @ 0x1401EF2A0 (NtUserGetActiveProcessesDpis.c)
 *     GetDpiServerInfoForDpi @ 0x1403025B0 (GetDpiServerInfoForDpi.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetDpiCacheIndex(__int64 a1, __int64 a2)
{
  int v2; // ebx
  unsigned int v3; // edi
  int v4; // edx

  v2 = a1;
  v3 = -1;
  if ( (_DWORD)a1 == *(unsigned __int16 *)(*(_QWORD *)(W32GetUserSessionState(a1, a2) + 19904) + 6998LL) )
  {
    return 0;
  }
  else if ( v2 >= 96 && v2 == 24 * (v2 / 0x18u) )
  {
    v4 = (v2 - 72) / 24;
    if ( v4 >= 18 )
      return (unsigned int)-1;
    return (unsigned int)v4;
  }
  return v3;
}
