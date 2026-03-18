/*
 * XREFs of CleanupGDI @ 0x1C006D050
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C004DF98 (xxxDestroyThreadInfo.c)
 * Callees:
 *     IsDeleteFadeSpriteSupported_0 @ 0x1C00025E8 (IsDeleteFadeSpriteSupported_0.c)
 *     DeleteFadeSprite_0 @ 0x1C00025F0 (DeleteFadeSprite_0.c)
 *     IsReleaseWallpaperSettingsSupported_0 @ 0x1C00025F8 (IsReleaseWallpaperSettingsSupported_0.c)
 *     ReleaseWallpaperSettings_0 @ 0x1C0002600 (ReleaseWallpaperSettings_0.c)
 *     GreGetStockObject @ 0x1C00332C0 (GreGetStockObject.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     hbmSelectBitmap @ 0x1C0039900 (hbmSelectBitmap.c)
 *     GreDeleteObject @ 0x1C00446F0 (GreDeleteObject.c)
 *     DestroyCacheDCEntries @ 0x1C00502A4 (DestroyCacheDCEntries.c)
 *     DelayedDestroyCacheDC @ 0x1C005AB48 (DelayedDestroyCacheDC.c)
 *     ?DestroyFont@@YAXPEAPEAUHFONT__@@@Z @ 0x1C006D3EC (-DestroyFont@@YAXPEAPEAUHFONT__@@@Z.c)
 *     ?DestroyRegion@@YAXPEAPEAUHRGN__@@@Z @ 0x1C006D40C (-DestroyRegion@@YAXPEAPEAUHRGN__@@@Z.c)
 *     ?DestroyDC@@YAXPEAPEAUHDC__@@@Z @ 0x1C006D43C (-DestroyDC@@YAXPEAPEAUHDC__@@@Z.c)
 *     ?DestroyBitmap@@YAXPEAPEAUHBITMAP__@@@Z @ 0x1C006D474 (-DestroyBitmap@@YAXPEAPEAUHBITMAP__@@@Z.c)
 *     DestroyMonitor @ 0x1C006D4B0 (DestroyMonitor.c)
 *     DrvCleanupAndDestroyMDEV @ 0x1C006D598 (DrvCleanupAndDestroyMDEV.c)
 */

__int64 CleanupGDI()
{
  int v0; // edx
  __int64 v1; // r8
  int v2; // edx
  __int64 v3; // r8
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 result; // rax
  _QWORD *v8; // rcx
  _QWORD *v9; // rbx
  HBITMAP StockObject; // rax

  DestroyDC((HDC *)(gpDispInfo + 24));
  DestroyDC((HDC *)(gpDispInfo + 32));
  DestroyDC((HDC *)(gpDispInfo + 40));
  DestroyDC(&ghdcMem);
  DestroyDC(&ghdcMem2);
  if ( gfade && (int)IsDeleteFadeSpriteSupported_0() >= 0 )
    DeleteFadeSprite_0();
  DestroyDC(&qword_1C0104190);
  if ( qword_1C0104170 )
  {
    StockObject = (HBITMAP)GreGetStockObject(21LL);
    hbmSelectBitmap(qword_1C0104178, StockObject, 0, 0);
    GreDeleteObject(qword_1C0104170);
    qword_1C0104170 = 0LL;
  }
  DestroyDC(&qword_1C0104178);
  DestroyCacheDCEntries((__int64)gptiCurrent, v0, v1);
  DestroyCacheDCEntries(0LL, v2, v3);
  DelayedDestroyCacheDC(1LL);
  DestroyBitmap((HBITMAP *)(gpDispInfo + 48));
  DestroyBitmap(&ghbmBits);
  DestroyBitmap(&ghbmBits96);
  DestroyBitmap(&ghbmCaption);
  DestroyFont(&ghbrHungApp);
  DestroyFont((HFONT *)gpsi + 493);
  DestroyFont(&ghbrWhite);
  DestroyFont(&ghbrBlack);
  v4 = 3696LL;
  v5 = 31LL;
  do
  {
    DestroyFont((HFONT *)((char *)gpsi + v4));
    v4 += 8LL;
    --v5;
  }
  while ( v5 );
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
  DestroyFont(&qword_1C01007D8);
  DestroyFont(&qword_1C01007B8);
  DestroyFont(&qword_1C01007C0);
  DestroyFont(&qword_1C01007C8);
  DestroyFont(&qword_1C01007D0);
  DestroyFont(&gdpiSystem);
  DestroyFont(&qword_1C0100778);
  DestroyFont(&qword_1C0100758);
  DestroyFont(&qword_1C0100760);
  DestroyFont(&qword_1C0100768);
  DestroyFont(&qword_1C0100770);
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
  v6 = gpDispInfo;
  result = *(_QWORD *)(gpDispInfo + 8);
  if ( result )
  {
    DrvCleanupAndDestroyMDEV(*(_QWORD *)(gpDispInfo + 8));
    Win32FreePool();
    *(_QWORD *)(gpDispInfo + 8) = 0LL;
    result = gpDispInfo;
    *(_QWORD *)gpDispInfo = 0LL;
    v6 = gpDispInfo;
  }
  v8 = *(_QWORD **)(v6 + 96);
  if ( v8 )
  {
    do
    {
      v9 = (_QWORD *)v8[2];
      result = DestroyMonitor(v8);
      v8 = v9;
    }
    while ( v9 );
  }
  if ( gpMonitorCached )
    return DestroyMonitor(gpMonitorCached);
  return result;
}
