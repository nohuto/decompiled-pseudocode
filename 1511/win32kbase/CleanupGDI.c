/*
 * XREFs of CleanupGDI @ 0x1C0069388
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0040170 (xxxDestroyThreadInfo.c)
 * Callees:
 *     IsDeleteFadeSpriteSupported_0 @ 0x1C0002618 (IsDeleteFadeSpriteSupported_0.c)
 *     DeleteFadeSprite_0 @ 0x1C0002620 (DeleteFadeSprite_0.c)
 *     IsReleaseWallpaperSettingsSupported_0 @ 0x1C0002628 (IsReleaseWallpaperSettingsSupported_0.c)
 *     ReleaseWallpaperSettings_0 @ 0x1C0002630 (ReleaseWallpaperSettings_0.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     hbmSelectBitmap @ 0x1C002DCA0 (hbmSelectBitmap.c)
 *     GreDeleteObject @ 0x1C00377D0 (GreDeleteObject.c)
 *     DestroyCacheDCEntries @ 0x1C0042170 (DestroyCacheDCEntries.c)
 *     DestroyMonitor @ 0x1C0066A80 (DestroyMonitor.c)
 *     ?DestroyFont@@YAXPEAPEAUHFONT__@@@Z @ 0x1C0069724 (-DestroyFont@@YAXPEAPEAUHFONT__@@@Z.c)
 *     ?DestroyRegion@@YAXPEAPEAUHRGN__@@@Z @ 0x1C0069744 (-DestroyRegion@@YAXPEAPEAUHRGN__@@@Z.c)
 *     ?DestroyDC@@YAXPEAPEAUHDC__@@@Z @ 0x1C0069904 (-DestroyDC@@YAXPEAPEAUHDC__@@@Z.c)
 *     DelayedDestroyCacheDC @ 0x1C006A5AC (DelayedDestroyCacheDC.c)
 *     GreGetStockObject @ 0x1C006C0A0 (GreGetStockObject.c)
 *     ?DestroyBitmap@@YAXPEAPEAUHBITMAP__@@@Z @ 0x1C006C134 (-DestroyBitmap@@YAXPEAPEAUHBITMAP__@@@Z.c)
 *     DrvCleanupAndDestroyMDEV @ 0x1C00767B0 (DrvCleanupAndDestroyMDEV.c)
 */

__int64 CleanupGDI()
{
  __int64 v0; // rbx
  __int64 v1; // rdi
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 result; // rax
  _QWORD *v5; // rcx
  _QWORD *v6; // rbx
  __int64 StockObject; // rax
  __int64 v8; // rdx

  DestroyDC((HDC *)(gpDispInfo + 24));
  DestroyDC((HDC *)(gpDispInfo + 32));
  DestroyDC((HDC *)(gpDispInfo + 40));
  DestroyDC(&ghdcMem);
  DestroyDC(&ghdcMem2);
  if ( gfade && (int)IsDeleteFadeSpriteSupported_0() >= 0 )
    DeleteFadeSprite_0();
  DestroyDC(&qword_1C0104A70);
  if ( qword_1C01049E0 )
  {
    StockObject = GreGetStockObject(21LL);
    hbmSelectBitmap((__int64)qword_1C01049E8, StockObject, 0, 0);
    GreDeleteObject((__int64)qword_1C01049E0, v8);
    qword_1C01049E0 = 0LL;
  }
  DestroyDC(&qword_1C01049E8);
  DestroyCacheDCEntries((__int64)gptiCurrent);
  DestroyCacheDCEntries(0LL);
  DelayedDestroyCacheDC(1LL);
  DestroyBitmap((HBITMAP *)(gpDispInfo + 48));
  DestroyBitmap(&ghbmBits);
  DestroyBitmap(&ghbmBits96);
  DestroyBitmap((HBITMAP *)&ghbmCaption);
  DestroyFont(&ghbrHungApp);
  DestroyFont((HFONT *)gpsi + 493);
  DestroyFont(&ghbrWhite);
  DestroyFont(&ghbrBlack);
  v0 = 3696LL;
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
  DestroyFont(&qword_1C01032E8);
  DestroyFont(&qword_1C01032C8);
  DestroyFont(&qword_1C01032D0);
  DestroyFont(&qword_1C01032D8);
  DestroyFont(&qword_1C01032E0);
  DestroyFont(&gdpiSystem);
  DestroyFont(&qword_1C0103288);
  DestroyFont(&qword_1C0103268);
  DestroyFont(&qword_1C0103270);
  DestroyFont(&qword_1C0103278);
  DestroyFont(&qword_1C0103280);
  DestroyFont(&gdpi96);
  if ( g_pWallpaperSettings )
  {
    if ( (int)IsReleaseWallpaperSettingsSupported_0() >= 0 )
      ReleaseWallpaperSettings_0();
    g_pWallpaperSettings = 0LL;
  }
  if ( g_hbmDesktopPattern )
  {
    GreDeleteObject((__int64)g_hbmDesktopPattern, v2);
    g_hbmDesktopPattern = 0LL;
  }
  v3 = gpDispInfo;
  result = *(_QWORD *)(gpDispInfo + 8);
  if ( result )
  {
    DrvCleanupAndDestroyMDEV(*(_QWORD *)(gpDispInfo + 8));
    Win32FreePool();
    *(_QWORD *)(gpDispInfo + 8) = 0LL;
    result = gpDispInfo;
    *(_QWORD *)gpDispInfo = 0LL;
    v3 = gpDispInfo;
  }
  v5 = *(_QWORD **)(v3 + 96);
  if ( v5 )
  {
    do
    {
      v6 = (_QWORD *)v5[2];
      result = DestroyMonitor(v5);
      v5 = v6;
    }
    while ( v6 );
  }
  if ( gpMonitorCached )
    return DestroyMonitor(gpMonitorCached);
  return result;
}
