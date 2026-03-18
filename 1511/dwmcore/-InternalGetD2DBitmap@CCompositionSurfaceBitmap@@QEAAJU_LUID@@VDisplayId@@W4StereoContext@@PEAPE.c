/*
 * XREFs of ?InternalGetD2DBitmap@CCompositionSurfaceBitmap@@QEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEAPEAUID2D1Bitmap1@@@Z @ 0x18000CD58
 * Callers:
 *     ?GetD2DBitmapRealizationForContextOwner@CCompositionSurfaceBitmap@@UEAAJPEAVID2DContextOwner@@PEAPEAUID2D1Bitmap1@@@Z @ 0x18000CA50 (-GetD2DBitmapRealizationForContextOwner@CCompositionSurfaceBitmap@@UEAAJPEAVID2DContextOwner@@PE.c)
 * Callees:
 *     ?GetD2DBitmap@CDxHandleBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_N4PEAPEAUID2D1Bitmap1@@@Z @ 0x18000CF20 (-GetD2DBitmap@CDxHandleBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEBV-$TMilRe.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z @ 0x18002E6E4 (-EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::InternalGetD2DBitmap(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        struct ID2D1Bitmap1 **a5)
{
  char v7; // bp
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(_DWORD, _DWORD, int, int, _DWORD, bool, char, struct ID2D1Bitmap1 **); // rsi
  int D2DBitmap; // eax
  unsigned int v11; // ebx
  bool v13; // [rsp+28h] [rbp-30h]
  char v14; // [rsp+30h] [rbp-28h]

  *a5 = 0LL;
  if ( CCompositionSurfaceBitmap::EnsureBitmapRealization((CCompositionSurfaceBitmap *)a1, 0) )
  {
    v7 = *(_BYTE *)(a1 + 458);
    v8 = *(_QWORD *)(a1 + 448);
    v9 = *(__int64 (__fastcall **)(_DWORD, _DWORD, int, int, _DWORD, bool, char, struct ID2D1Bitmap1 **))(*(_QWORD *)(v8 + 112) + 96LL);
    if ( v9 == CDxHandleBitmapRealization::GetD2DBitmap )
    {
      D2DBitmap = CDxHandleBitmapRealization::GetD2DBitmap((int)v8 + 112, a2, a3, a4, 0, v7, 1, a5);
    }
    else
    {
      v14 = 1;
      v13 = v7;
      D2DBitmap = v9(v8 + 112, a2, a3, a4, 0LL, v13, v14, a5);
    }
    v11 = D2DBitmap;
    if ( D2DBitmap < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DBitmap, 0x57u);
  }
  else
  {
    v11 = -2003292412;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292412, 0x5Bu);
  }
  return v11;
}
