/*
 * XREFs of ?GetD2DBitmap@CDxHandleStereoBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_N4PEAPEAUID2D1Bitmap1@@@Z @ 0x18014E2A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBitmap@CD2DBitmapCache@@UEAAJU_LUID@@VDisplayId@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_N3PEAPEAUID2D1Bitmap1@@@Z @ 0x180007BA0 (-GetBitmap@CD2DBitmapCache@@UEAAJU_LUID@@VDisplayId@@PEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectU.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?EnsureD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAJXZ @ 0x18014E1D0 (-EnsureD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAJXZ.c)
 *     ?UseLeftBitmap@CDxHandleStereoBitmapRealization@@IEBA_NW4StereoContext@@@Z @ 0x18014E6FC (-UseLeftBitmap@CDxHandleStereoBitmapRealization@@IEBA_NW4StereoContext@@@Z.c)
 */

__int64 __fastcall CDxHandleStereoBitmapRealization::GetD2DBitmap(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        bool a6,
        char a7,
        struct ID2D1Bitmap1 **a8)
{
  char v9; // bp
  CD2DBitmap **v10; // rcx
  int v11; // eax
  unsigned int v12; // ebx
  int Bitmap; // eax
  int v14; // eax

  v9 = CDxHandleStereoBitmapRealization::UseLeftBitmap(a1 - 112, a4);
  *a8 = 0LL;
  v11 = CDxHandleStereoBitmapRealization::EnsureD2DBitmap(v10);
  v12 = v11;
  if ( v11 >= 0 )
  {
    if ( v9 )
    {
      Bitmap = CD2DBitmapCache::GetBitmap(a1 - 96, a2, a3, a5, a6, a7, a8);
      v12 = Bitmap;
      if ( Bitmap < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, Bitmap, 0x41u);
    }
    else
    {
      v14 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, bool, char, struct ID2D1Bitmap1 **))(*(_QWORD *)(a1 + 384) + 56LL))(
              a1 + 384,
              a2,
              a3,
              a5,
              a6,
              a7,
              a8);
      v12 = v14;
      if ( v14 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x4Au);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x38u);
  }
  return v12;
}
