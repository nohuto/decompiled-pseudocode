/*
 * XREFs of ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV?$DynArray@PEAVCBitmapSource@@$0A@@@@Z @ 0x180042AF4
 * Callers:
 *     ?CreateGlyphsFromAtlas@CTopLevelWindow@@CAJQEAX@Z @ 0x180042A08 (-CreateGlyphsFromAtlas@CTopLevelWindow@@CAJQEAX@Z.c)
 *     ?LoadTheme@CDesktopManager@@AEAAJXZ @ 0x180046314 (-LoadTheme@CDesktopManager@@AEAAJXZ.c)
 *     ?CreateNCButtons@CTopLevelWindow@@CAJQEAXPEAUWindowFrame@1@1@Z @ 0x1800497F0 (-CreateNCButtons@CTopLevelWindow@@CAJQEAXPEAUWindowFrame@1@1@Z.c)
 *     ?Start@CContactStationaryVisual@@QEAAJW4STATIONARY_ANIMATION_TYPE@1@PEBUtagPOINT@@PEBUtagRECT@@_N@Z @ 0x180088280 (-Start@CContactStationaryVisual@@QEAAJW4STATIONARY_ANIMATION_TYPE@1@PEBUtagPOINT@@PEBUtagRECT@@_.c)
 *     ?Start@CPenPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18008B0C8 (-Start@CPenPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?Initialize@CIndirectTouchVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x180091450 (-Initialize@CIndirectTouchVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18002AA90 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x180042BB0 (-CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@PEAPEAVCBitmapSource@@.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(
        void *a1,
        int iPartId,
        unsigned int a3,
        struct _MARGINS *a4,
        __int64 a5)
{
  int v9; // eax
  int v10; // ebx
  int BitmapsFromAtlasImageStrip; // eax

  if ( (dword_1800B7F50 & 1) == 0 )
  {
    dword_1800B7F10 = -2147023728;
    dword_1800B7F50 |= 1u;
  }
  v9 = DynArrayImpl<0>::Grow(a5, 8u, a3, 0, 0LL);
  v10 = v9;
  if ( v9 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x1A7u);
  else
    *(_DWORD *)(a5 + 24) += a3;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1800B7F10, 1u, v10, 0x2AFu);
  }
  else
  {
    BitmapsFromAtlasImageStrip = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(
                                   a1,
                                   iPartId,
                                   a3,
                                   a4,
                                   *(struct CBitmapSource ***)a5);
    v10 = BitmapsFromAtlasImageStrip;
    if ( BitmapsFromAtlasImageStrip < 0 )
      MilInstrumentationCheckHR(0x14u, &dword_1800B7F10, 1u, BitmapsFromAtlasImageStrip, 0x2B7u);
  }
  return (unsigned int)v10;
}
