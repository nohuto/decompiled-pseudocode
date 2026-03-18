/*
 * XREFs of ?GetBitmap@CD2DBitmapCache@@UEAAJU_LUID@@VDisplayId@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_N3PEAPEAUID2D1Bitmap1@@@Z @ 0x18000D440
 * Callers:
 *     ?GetD2DBitmap@CDxHandleBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_N4PEAPEAUID2D1Bitmap1@@@Z @ 0x18000CF20 (-GetD2DBitmap@CDxHandleBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEBV-$TMilRe.c)
 *     ?GetD2DBitmap@CSectionBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_N4PEAPEAUID2D1Bitmap1@@@Z @ 0x18015C680 (-GetD2DBitmap@CSectionBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEBV-$TMilRec.c)
 *     ?GetD2DBitmap@CDxHandleStereoBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_N4PEAPEAUID2D1Bitmap1@@@Z @ 0x18015CE20 (-GetD2DBitmap@CDxHandleStereoBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEBV-$.c)
 * Callees:
 *     ?GetBitmap@CD2DBitmap@@UEAAJ_NPEAPEAUID2D1Bitmap1@@@Z @ 0x18000DAD0 (-GetBitmap@CD2DBitmap@@UEAAJ_NPEAPEAUID2D1Bitmap1@@@Z.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?GetBitmapInternalNoRef@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVID2DBitmap@@@Z @ 0x18003032C (-GetBitmapInternalNoRef@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@PEBV-$TMilRect@IUMilRectU@@UNo.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CD2DBitmapCache::GetBitmap(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        bool a5,
        char a6,
        struct ID2D1Bitmap1 **a7)
{
  int BitmapInternalNoRef; // eax
  _BOOL8 v8; // rdx
  unsigned int v9; // ebx
  __int64 (__fastcall *v10)(CD2DBitmap *__hidden, bool, struct ID2D1Bitmap1 **); // rdi
  int Bitmap; // eax
  unsigned int v13; // [rsp+20h] [rbp-28h]
  CD2DBitmap *v14; // [rsp+30h] [rbp-18h] BYREF

  v14 = 0LL;
  *a7 = 0LL;
  if ( !a6 && *(_DWORD *)(a1 + 48) == 2 )
  {
    v9 = -2003304289;
    v13 = 129;
LABEL_12:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, v13);
    return v9;
  }
  BitmapInternalNoRef = CD2DBitmapCache::GetBitmapInternalNoRef((CD2DBitmapCache *)(a1 - 16), (__int64)&v14);
  v9 = BitmapInternalNoRef;
  if ( BitmapInternalNoRef < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, BitmapInternalNoRef, 0x87u);
  }
  else
  {
    v10 = *(__int64 (__fastcall **)(CD2DBitmap *__hidden, bool, struct ID2D1Bitmap1 **))(*(_QWORD *)v14 + 72LL);
    if ( v10 == CD2DBitmap::GetBitmap )
    {
      Bitmap = CD2DBitmap::GetBitmap(v14, a5, a7);
    }
    else
    {
      LOBYTE(v8) = a5;
      Bitmap = v10(v14, v8, a7);
    }
    v9 = Bitmap;
    if ( Bitmap < 0 )
    {
      v13 = 140;
      goto LABEL_12;
    }
  }
  return v9;
}
