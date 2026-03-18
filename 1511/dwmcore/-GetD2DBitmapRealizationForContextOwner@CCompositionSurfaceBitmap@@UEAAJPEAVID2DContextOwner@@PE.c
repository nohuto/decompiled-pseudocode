/*
 * XREFs of ?GetD2DBitmapRealizationForContextOwner@CCompositionSurfaceBitmap@@UEAAJPEAVID2DContextOwner@@PEAPEAUID2D1Bitmap1@@@Z @ 0x18000CA50
 * Callers:
 *     ?BuildD2DBitmapList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@IIPEAPEAUID2D1Bitmap@@@Z @ 0x18000A0F4 (-BuildD2DBitmapList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@IIPEAPEAUID2D1B.c)
 *     ?GetD2DBitmapRealization@CCommandListBitmapRepresentation@@AEAAJPEAVID2DContextOwner@@PEAPEAUID2D1Bitmap@@@Z @ 0x18000B480 (-GetD2DBitmapRealization@CCommandListBitmapRepresentation@@AEAAJPEAVID2DContextOwner@@PEAPEAUID2.c)
 *     ?DrawYCbCrBitmap@CDrawingContext@@UEAAJPEAVCResource@@0W4D2D1_YCBCR_CHROMA_SUBSAMPLING@@@Z @ 0x18010D4B0 (-DrawYCbCrBitmap@CDrawingContext@@UEAAJPEAVCResource@@0W4D2D1_YCBCR_CHROMA_SUBSAMPLING@@@Z.c)
 *     ?GetInputEffectForAtlasedSurface@CFilterEffect@@AEAAJPEAVID2DContext@@PEAVID2DContextOwner@@AEBUtagRECT@@PEAVCCompositionSurfaceBitmap@@PEAPEAUID2D1Effect@@@Z @ 0x18012C9E0 (-GetInputEffectForAtlasedSurface@CFilterEffect@@AEAAJPEAVID2DContext@@PEAVID2DContextOwner@@AEBU.c)
 * Callees:
 *     ?InternalGetD2DBitmap@CCompositionSurfaceBitmap@@QEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEAPEAUID2D1Bitmap1@@@Z @ 0x18000CD58 (-InternalGetD2DBitmap@CCompositionSurfaceBitmap@@QEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEAPE.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?GetCurrentAdapterLuid@CDrawingContext@@EEBA?AU_LUID@@XZ @ 0x180037150 (-GetCurrentAdapterLuid@CDrawingContext@@EEBA-AU_LUID@@XZ.c)
 *     ?GetCurrentDisplayId@CDrawingContext@@EEBA?AVDisplayId@@XZ @ 0x180037170 (-GetCurrentDisplayId@CDrawingContext@@EEBA-AVDisplayId@@XZ.c)
 *     ?GetCurrentStereoContext@CDrawingContext@@EEBA?AW4StereoContext@@XZ @ 0x180037190 (-GetCurrentStereoContext@CDrawingContext@@EEBA-AW4StereoContext@@XZ.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::GetD2DBitmapRealizationForContextOwner(
        CCompositionSurfaceBitmap *this,
        struct ID2DContextOwner *a2,
        struct ID2D1Bitmap1 **a3)
{
  __int64 (__fastcall *v6)(struct ID2DContextOwner *); // rdi
  unsigned int CurrentStereoContext; // eax
  unsigned int v8; // esi
  __int64 (__fastcall *v9)(struct ID2DContextOwner *, char *); // rdi
  __int64 CurrentDisplayId; // rax
  unsigned int *v11; // r14
  struct _LUID (__fastcall *v12)(CDrawingContext *__hidden); // rdi
  _QWORD *CurrentAdapterLuid; // rax
  char v15; // [rsp+60h] [rbp+8h] BYREF
  char v16; // [rsp+68h] [rbp+10h] BYREF

  v6 = *(__int64 (__fastcall **)(struct ID2DContextOwner *))(*(_QWORD *)a2 + 56LL);
  if ( (char *)v6 == (char *)CDrawingContext::GetCurrentStereoContext )
    CurrentStereoContext = CDrawingContext::GetCurrentStereoContext(a2);
  else
    CurrentStereoContext = v6(a2);
  v8 = CurrentStereoContext;
  v9 = *(__int64 (__fastcall **)(struct ID2DContextOwner *, char *))(*(_QWORD *)a2 + 48LL);
  if ( (char *)v9 == (char *)CDrawingContext::GetCurrentDisplayId )
    CurrentDisplayId = CDrawingContext::GetCurrentDisplayId(a2, &v15);
  else
    CurrentDisplayId = v9(a2, &v15);
  v11 = (unsigned int *)CurrentDisplayId;
  v12 = *(struct _LUID (__fastcall **)(CDrawingContext *__hidden))(*(_QWORD *)a2 + 40LL);
  if ( v12 == CDrawingContext::GetCurrentAdapterLuid )
    CurrentAdapterLuid = (_QWORD *)CDrawingContext::GetCurrentAdapterLuid(a2);
  else
    CurrentAdapterLuid = (_QWORD *)((__int64 (__fastcall *)(struct ID2DContextOwner *, char *))v12)(a2, &v16);
  return CCompositionSurfaceBitmap::InternalGetD2DBitmap((char *)this - 72, *CurrentAdapterLuid, *v11, v8, a3);
}
