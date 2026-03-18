/*
 * XREFs of CleanupGDI @ 0x1C0055F7C
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C00131CC (xxxDestroyThreadInfo.c)
 * Callees:
 *     IsDeleteFadeSpriteSupported_0 @ 0x1C00025B8 (IsDeleteFadeSpriteSupported_0.c)
 *     DeleteFadeSprite_0 @ 0x1C00025C0 (DeleteFadeSprite_0.c)
 *     IsReleaseWallpaperSettingsSupported_0 @ 0x1C00025C8 (IsReleaseWallpaperSettingsSupported_0.c)
 *     ReleaseWallpaperSettings_0 @ 0x1C00025D0 (ReleaseWallpaperSettings_0.c)
 *     DelayedDestroyCacheDC @ 0x1C000F4CC (DelayedDestroyCacheDC.c)
 *     hbmSelectBitmap @ 0x1C0025B20 (hbmSelectBitmap.c)
 *     GreGetStockObject @ 0x1C0035660 (GreGetStockObject.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     GreDeleteObject @ 0x1C003A290 (GreDeleteObject.c)
 *     ?DestroyBitmap@@YAXPEAPEAUHBITMAP__@@@Z @ 0x1C00546D8 (-DestroyBitmap@@YAXPEAPEAUHBITMAP__@@@Z.c)
 *     ?DestroyDC@@YAXPEAPEAUHDC__@@@Z @ 0x1C0054D68 (-DestroyDC@@YAXPEAPEAUHDC__@@@Z.c)
 *     ?DestroyFont@@YAXPEAPEAUHFONT__@@@Z @ 0x1C0056318 (-DestroyFont@@YAXPEAPEAUHFONT__@@@Z.c)
 *     ?DestroyRegion@@YAXPEAPEAUHRGN__@@@Z @ 0x1C0056338 (-DestroyRegion@@YAXPEAPEAUHRGN__@@@Z.c)
 *     DestroyCacheDCEntries @ 0x1C005C710 (DestroyCacheDCEntries.c)
 *     DrvCleanupAndDestroyMDEV @ 0x1C006CE28 (DrvCleanupAndDestroyMDEV.c)
 *     DestroyMonitor @ 0x1C00760A0 (DestroyMonitor.c)
 */

__int64 CleanupGDI()
{
  __int64 v0; // rbx
  __int64 v1; // rdi
  __int64 v2; // rcx
  __int64 result; // rax
  _QWORD *v4; // rcx
  _QWORD *v5; // rbx
  HBITMAP StockObject; // rax

  DestroyDC((HDC *)(gpDispInfo + 24));
  DestroyDC((HDC *)(gpDispInfo + 32));
  DestroyDC((HDC *)(gpDispInfo + 40));
  DestroyDC(&ghdcMem);
  DestroyDC(&ghdcMem2);
  if ( gfade && (int)IsDeleteFadeSpriteSupported_0() >= 0 )
    DeleteFadeSprite_0();
  DestroyDC(&qword_1C011BD80);
  if ( qword_1C011C430 )
  {
    StockObject = (HBITMAP)GreGetStockObject(21);
    hbmSelectBitmap(qword_1C011C438, StockObject, 0, 0);
    GreDeleteObject(qword_1C011C430);
    qword_1C011C430 = 0LL;
  }
  DestroyDC(&qword_1C011C438);
  DestroyCacheDCEntries(gptiCurrent);
  DestroyCacheDCEntries(0LL);
  DelayedDestroyCacheDC(1);
  DestroyBitmap((HBITMAP *)(gpDispInfo + 48));
  DestroyBitmap(&ghbmBits);
  DestroyBitmap(&ghbmBits96);
  DestroyBitmap(&ghbmCaption);
  DestroyFont(&ghbrHungApp);
  DestroyFont((HFONT *)gpsi + 667);
  DestroyFont(&ghbrWhite);
  DestroyFont(&ghbrBlack);
  v0 = 5088LL;
  v1 = 31LL;
  do
  {
    DestroyFont((HFONT *)((char *)gpsi + v0));
    v0 += 8LL;
    --v1;
  }
  while ( v1 );
  DestroyRegion((HRGN *)(gpDispInfo + 152));
  DestroyRegion((HRGN *)(gpDispInfo + 160));
  DestroyRegion((HRGN *)(gpDispInfo + 168));
  DestroyRegion(&ghrgnInvalidSum);
  DestroyRegion(&ghrgnVisNew);
  DestroyRegion(&ghrgnSWP1);
  DestroyRegion(&ghrgnValid);
  DestroyRegion(&ghrgnValidSum);
  DestroyRegion(&ghrgnInvalid);
  DestroyRegion(&ghrgnInv0);
  DestroyRegion(&ghrgnInv1);
  DestroyRegion(&ghrgnInv2);
  DestroyRegion(&ghrgnGDC);
  DestroyRegion(&ghrgnSCR);
  DestroyRegion(&ghrgnSPB1);
  DestroyRegion(&ghrgnSPB2);
  DestroyRegion(&ghrgnSW);
  DestroyRegion(&ghrgnScrl1);
  DestroyRegion(&ghrgnScrl2);
  DestroyRegion(&ghrgnScrlVis);
  DestroyRegion(&ghrgnScrlSrc);
  DestroyRegion(&ghrgnScrlDst);
  DestroyRegion(&ghrgnScrlValid);
  DestroyFont(&qword_1C011A628);
  DestroyFont(&qword_1C011A608);
  DestroyFont(&qword_1C011A610);
  DestroyFont(&qword_1C011A618);
  DestroyFont(&qword_1C011A620);
  DestroyFont(&gdpiSystem);
  DestroyFont(&qword_1C011A5C8);
  DestroyFont(&qword_1C011A5A8);
  DestroyFont(&qword_1C011A5B0);
  DestroyFont(&qword_1C011A5B8);
  DestroyFont(&qword_1C011A5C0);
  DestroyFont(&gdpi96);
  if ( g_pWallpaperSettings )
  {
    if ( (int)IsReleaseWallpaperSettingsSupported_0() >= 0 )
      ReleaseWallpaperSettings_0();
    g_pWallpaperSettings = 0LL;
  }
  if ( g_hbmDesktopPattern )
  {
    GreDeleteObject(g_hbmDesktopPattern);
    g_hbmDesktopPattern = 0LL;
  }
  v2 = gpDispInfo;
  result = *(_QWORD *)(gpDispInfo + 8);
  if ( result )
  {
    DrvCleanupAndDestroyMDEV(*(_QWORD *)(gpDispInfo + 8));
    Win32FreePool();
    *(_QWORD *)(gpDispInfo + 8) = 0LL;
    result = gpDispInfo;
    *(_QWORD *)gpDispInfo = 0LL;
    v2 = gpDispInfo;
  }
  v4 = *(_QWORD **)(v2 + 96);
  if ( v4 )
  {
    do
    {
      v5 = (_QWORD *)v4[2];
      result = DestroyMonitor(v4);
      v4 = v5;
    }
    while ( v5 );
  }
  if ( gpMonitorCached )
    return DestroyMonitor(gpMonitorCached);
  return result;
}
