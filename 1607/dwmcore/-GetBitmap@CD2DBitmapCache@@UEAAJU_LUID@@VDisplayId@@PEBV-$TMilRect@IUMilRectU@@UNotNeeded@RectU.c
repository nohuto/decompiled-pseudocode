/*
 * XREFs of ?GetBitmap@CD2DBitmapCache@@UEAAJU_LUID@@VDisplayId@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_N3PEAPEAUID2D1Bitmap1@@@Z @ 0x180010510
 * Callers:
 *     ?GetD2DBitmap@CDxHandleBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_N4PEAPEAUID2D1Bitmap1@@@Z @ 0x1800103A0 (-GetD2DBitmap@CDxHandleBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEBV-$TMilRe.c)
 *     ?GetBitmap@CRenderTargetBitmap@@UEAAJU_LUID@@VDisplayId@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_N3PEAPEAUID2D1Bitmap1@@@Z @ 0x1801321E0 (-GetBitmap@CRenderTargetBitmap@@UEAAJU_LUID@@VDisplayId@@PEBV-$TMilRect@IUMilRectU@@UNotNeeded@R.c)
 *     ?GetD2DBitmap@CRenderTargetBitmap@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_N4PEAPEAUID2D1Bitmap1@@@Z @ 0x1801324E0 (-GetD2DBitmap@CRenderTargetBitmap@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEBV-$TMilRect@IUMi.c)
 *     ?GetD2DBitmap@CSectionBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_N4PEAPEAUID2D1Bitmap1@@@Z @ 0x18018EAA0 (-GetD2DBitmap@CSectionBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEBV-$TMilRec.c)
 *     ?GetD2DBitmap@CDxHandleStereoBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_N4PEAPEAUID2D1Bitmap1@@@Z @ 0x180190290 (-GetD2DBitmap@CDxHandleStereoBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEBV-$.c)
 * Callees:
 *     ?GetBitmap@CD2DBitmap@@UEAAJ_NPEAPEAUID2D1Bitmap1@@@Z @ 0x180010DB0 (-GetBitmap@CD2DBitmap@@UEAAJ_NPEAPEAUID2D1Bitmap1@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetBitmapInternalNoRef@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVID2DBitmap@@@Z @ 0x18009F8C4 (-GetBitmapInternalNoRef@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@PEBV-$TMilRect@IUMilRectU@@UNo.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
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
  unsigned int v8; // ebx
  __int64 (__fastcall *v9)(CD2DBitmap *__hidden, bool, struct ID2D1Bitmap1 **); // rax
  __int64 (__fastcall *v10)(CD2DBitmap *__hidden, bool, struct ID2D1Bitmap1 **); // rdx
  int Bitmap; // eax
  int v13; // r9d
  unsigned int v14; // [rsp+20h] [rbp-28h]
  CD2DBitmap *v15; // [rsp+30h] [rbp-18h] BYREF

  v15 = 0LL;
  *a7 = 0LL;
  if ( !a6 && *(_DWORD *)(a1 + 48) == 2 )
  {
    v8 = -2003304289;
    v14 = 129;
LABEL_11:
    v13 = v8;
LABEL_13:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, v14);
    return v8;
  }
  BitmapInternalNoRef = CD2DBitmapCache::GetBitmapInternalNoRef((CD2DBitmapCache *)(a1 - 16), (__int64)&v15);
  v8 = BitmapInternalNoRef;
  if ( BitmapInternalNoRef < 0 )
  {
    v14 = 135;
    v13 = BitmapInternalNoRef;
    goto LABEL_13;
  }
  v10 = CD2DBitmap::GetBitmap;
  v9 = *(__int64 (__fastcall **)(CD2DBitmap *__hidden, bool, struct ID2D1Bitmap1 **))(*(_QWORD *)v15 + 72LL);
  LOBYTE(v10) = a5;
  if ( v9 == CD2DBitmap::GetBitmap )
    Bitmap = CD2DBitmap::GetBitmap(v15, a5, a7);
  else
    Bitmap = v9(v15, (bool)v10, a7);
  v8 = Bitmap;
  if ( Bitmap < 0 )
  {
    v14 = 140;
    goto LABEL_11;
  }
  return v8;
}
