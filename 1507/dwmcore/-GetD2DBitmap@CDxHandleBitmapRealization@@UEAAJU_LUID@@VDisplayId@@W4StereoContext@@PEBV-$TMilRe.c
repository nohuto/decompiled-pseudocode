/*
 * XREFs of ?GetD2DBitmap@CDxHandleBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_N4PEAPEAUID2D1Bitmap1@@@Z @ 0x180007A80
 * Callers:
 *     ?GetD2DBitmapRealizationForContextOwner@CCompositionSurfaceBitmap@@UEAAJPEAVID2DContextOwner@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180008840 (-GetD2DBitmapRealizationForContextOwner@CCompositionSurfaceBitmap@@UEAAJPEAVID2DContextOwner@@PE.c)
 *     ?GetD2DBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_N4PEAPEAUID2D1Bitmap1@@@Z @ 0x18014EE60 (-GetD2DBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoCon.c)
 * Callees:
 *     ?GetBitmap@CD2DBitmapCache@@UEAAJU_LUID@@VDisplayId@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_N3PEAPEAUID2D1Bitmap1@@@Z @ 0x180007BA0 (-GetBitmap@CD2DBitmapCache@@UEAAJU_LUID@@VDisplayId@@PEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectU.c)
 *     ?EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ @ 0x18001E8E0 (-EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CDxHandleBitmapRealization::GetD2DBitmap(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        int a5,
        bool a6,
        char a7,
        struct ID2D1Bitmap1 **a8)
{
  int v8; // esi
  __int64 (__fastcall *v9)(CDxHandleBitmapRealization *__hidden); // rdi
  int v10; // eax
  unsigned int v11; // ebx
  int Bitmap; // eax

  v8 = a1;
  *a8 = 0LL;
  v9 = *(__int64 (__fastcall **)(CDxHandleBitmapRealization *__hidden))(*(_QWORD *)(a1 - 112) + 112LL);
  if ( v9 == CDxHandleBitmapRealization::EnsureD2DBitmap )
    v10 = CDxHandleBitmapRealization::EnsureD2DBitmap((CDxHandleBitmapRealization *)(a1 - 112));
  else
    v10 = v9((CDxHandleBitmapRealization *)(a1 - 112));
  v11 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xA9u);
  }
  else
  {
    Bitmap = CD2DBitmapCache::GetBitmap(v8 - 96, a2, a3, a5, a6, a7, a8);
    v11 = Bitmap;
    if ( Bitmap < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, Bitmap, 0xB0u);
  }
  return v11;
}
