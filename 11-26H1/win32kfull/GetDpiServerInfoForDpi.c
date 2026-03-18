/*
 * XREFs of GetDpiServerInfoForDpi @ 0x1403025B0
 * Callers:
 *     xxxDrawMenuItem @ 0x14000B428 (xxxDrawMenuItem.c)
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x14000C0D0 (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 *     ?xxxMNGetBitmapSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagWND@@HPEAUHDC__@@@Z @ 0x14000D234 (-xxxMNGetBitmapSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagWND@@HPEAUHDC__@@.c)
 *     GetWindowNCMetricsForDpi @ 0x1400322BC (GetWindowNCMetricsForDpi.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1401BF66C (_ScaleSystemMetricForDPIWithoutCache.c)
 *     GetScaledLogFontForDpi @ 0x1401D087C (GetScaledLogFontForDpi.c)
 *     UpdateDpiMetricsCacheDPISERVERINFO @ 0x14021B858 (UpdateDpiMetricsCacheDPISERVERINFO.c)
 *     InitProcessSystemDpi @ 0x1402A6F70 (InitProcessSystemDpi.c)
 *     GetDpiServerInfoForCurrentProcess @ 0x14030253C (GetDpiServerInfoForCurrentProcess.c)
 *     GetDpiServerInfoForCurrentThread @ 0x140302578 (GetDpiServerInfoForCurrentThread.c)
 * Callees:
 *     EnsureDpiServerInfoForDpi @ 0x1402A648C (EnsureDpiServerInfoForDpi.c)
 *     GetDpiCacheIndex @ 0x140302350 (GetDpiCacheIndex.c)
 */

__int64 __fastcall GetDpiServerInfoForDpi(__int64 a1, __int64 a2)
{
  unsigned int v2; // esi
  __int64 DpiCacheIndex; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 UserSessionState; // rax
  __int64 v8; // rbx

  v2 = a1;
  DpiCacheIndex = (int)GetDpiCacheIndex(a1, a2);
  UserSessionState = W32GetUserSessionState(v5, v4);
  if ( (_DWORD)DpiCacheIndex == -1 )
    return *(_QWORD *)(UserSessionState + 19904) + 5096LL;
  v8 = *(_QWORD *)(UserSessionState + 19904) + 104 * (DpiCacheIndex + 49);
  if ( (int)DpiCacheIndex > 1 )
    EnsureDpiServerInfoForDpi(*(_QWORD *)(UserSessionState + 19904) + 104 * (DpiCacheIndex + 49), v2);
  return v8;
}
