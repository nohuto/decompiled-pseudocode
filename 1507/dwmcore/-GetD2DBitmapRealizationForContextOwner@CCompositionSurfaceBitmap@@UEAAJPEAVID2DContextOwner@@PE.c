/*
 * XREFs of ?GetD2DBitmapRealizationForContextOwner@CCompositionSurfaceBitmap@@UEAAJPEAVID2DContextOwner@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180008840
 * Callers:
 *     ?BuildD2DBitmapList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@IIPEAPEAUID2D1Bitmap@@@Z @ 0x18000C924 (-BuildD2DBitmapList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@IIPEAPEAUID2D1B.c)
 *     ?GetD2DBitmapRealization@CCommandListBitmapRepresentation@@AEAAJPEAVID2DContextOwner@@PEAPEAUID2D1Bitmap@@@Z @ 0x1800117A0 (-GetD2DBitmapRealization@CCommandListBitmapRepresentation@@AEAAJPEAVID2DContextOwner@@PEAPEAUID2.c)
 *     ?DrawYCbCrBitmap@CDrawingContext@@UEAAJPEAVCResource@@0W4D2D1_YCBCR_CHROMA_SUBSAMPLING@@@Z @ 0x1800F34C0 (-DrawYCbCrBitmap@CDrawingContext@@UEAAJPEAVCResource@@0W4D2D1_YCBCR_CHROMA_SUBSAMPLING@@@Z.c)
 *     ?GetInputEffectForAtlasedSurface@CFilterEffect@@AEAAJPEAVID2DContext@@PEAVID2DContextOwner@@AEBUtagRECT@@PEAVCCompositionSurfaceBitmap@@PEAPEAUID2D1Effect@@@Z @ 0x180111B20 (-GetInputEffectForAtlasedSurface@CFilterEffect@@AEAAJPEAVID2DContext@@PEAVID2DContextOwner@@AEBU.c)
 * Callees:
 *     ?GetD2DBitmap@CDxHandleBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_N4PEAPEAUID2D1Bitmap1@@@Z @ 0x180007A80 (-GetD2DBitmap@CDxHandleBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEBV-$TMilRe.c)
 *     ?GetCurrentAdapterLuid@CDrawingContext@@EEBA?AU_LUID@@XZ @ 0x180022E30 (-GetCurrentAdapterLuid@CDrawingContext@@EEBA-AU_LUID@@XZ.c)
 *     ?GetCurrentDisplayId@CDrawingContext@@EEBA?AVDisplayId@@XZ @ 0x180022E50 (-GetCurrentDisplayId@CDrawingContext@@EEBA-AVDisplayId@@XZ.c)
 *     ?GetCurrentStereoContext@CDrawingContext@@EEBA?AW4StereoContext@@XZ @ 0x180022E70 (-GetCurrentStereoContext@CDrawingContext@@EEBA-AW4StereoContext@@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z @ 0x180086E58 (-EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::GetD2DBitmapRealizationForContextOwner(
        CCompositionSurfaceBitmap *this,
        struct ID2DContextOwner *a2,
        struct ID2D1Bitmap1 **a3)
{
  __int64 (__fastcall *v6)(struct ID2DContextOwner *); // rdi
  unsigned int CurrentStereoContext; // eax
  unsigned int v8; // ebp
  __int64 (__fastcall *v9)(struct ID2DContextOwner *, char *); // rdi
  __int64 CurrentDisplayId; // rax
  unsigned int *v11; // rsi
  struct _LUID (__fastcall *v12)(CDrawingContext *__hidden); // rdi
  __int64 *CurrentAdapterLuid; // rax
  unsigned int v14; // ebx
  __int64 v15; // rdi
  __int64 v16; // rsi
  char v17; // r12
  __int64 (__fastcall *v18)(__int64, int, int, __int64, int, bool, char, struct ID2D1Bitmap1 **); // r14
  int D2DBitmap; // eax
  unsigned int v20; // ebx
  bool v22; // [rsp+28h] [rbp-40h]
  char v23; // [rsp+30h] [rbp-38h]
  char v24; // [rsp+70h] [rbp+8h] BYREF
  char v25; // [rsp+78h] [rbp+10h] BYREF

  v6 = *(__int64 (__fastcall **)(struct ID2DContextOwner *))(*(_QWORD *)a2 + 56LL);
  if ( (char *)v6 == (char *)CDrawingContext::GetCurrentStereoContext )
    CurrentStereoContext = CDrawingContext::GetCurrentStereoContext(a2);
  else
    CurrentStereoContext = v6(a2);
  v8 = CurrentStereoContext;
  v9 = *(__int64 (__fastcall **)(struct ID2DContextOwner *, char *))(*(_QWORD *)a2 + 48LL);
  if ( (char *)v9 == (char *)CDrawingContext::GetCurrentDisplayId )
    CurrentDisplayId = CDrawingContext::GetCurrentDisplayId(a2, &v24);
  else
    CurrentDisplayId = v9(a2, &v24);
  v11 = (unsigned int *)CurrentDisplayId;
  v12 = *(struct _LUID (__fastcall **)(CDrawingContext *__hidden))(*(_QWORD *)a2 + 40LL);
  if ( v12 == CDrawingContext::GetCurrentAdapterLuid )
    CurrentAdapterLuid = (__int64 *)CDrawingContext::GetCurrentAdapterLuid(a2);
  else
    CurrentAdapterLuid = (__int64 *)((__int64 (__fastcall *)(struct ID2DContextOwner *, char *))v12)(a2, &v25);
  v14 = *v11;
  v15 = *CurrentAdapterLuid;
  *a3 = 0LL;
  if ( CCompositionSurfaceBitmap::EnsureBitmapRealization((CCompositionSurfaceBitmap *)((char *)this - 64), 0) )
  {
    v16 = *((_QWORD *)this + 47);
    v17 = *((_BYTE *)this + 386);
    v18 = *(__int64 (__fastcall **)(__int64, int, int, __int64, int, bool, char, struct ID2D1Bitmap1 **))(*(_QWORD *)(v16 + 112) + 88LL);
    if ( v18 == CDxHandleBitmapRealization::GetD2DBitmap )
    {
      D2DBitmap = CDxHandleBitmapRealization::GetD2DBitmap(v16 + 112, v15, v14, v8, 0, v17, 1, a3);
    }
    else
    {
      v23 = 1;
      v22 = v17;
      D2DBitmap = v18(v16 + 112, v15, v14, v8, 0, v22, v23, a3);
    }
    v20 = D2DBitmap;
    if ( D2DBitmap < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DBitmap, 0x57u);
  }
  else
  {
    v20 = -2003292412;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292412, 0x5Bu);
  }
  return v20;
}
