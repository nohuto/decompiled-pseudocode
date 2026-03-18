/*
 * XREFs of ?GetD2DBitmapRealizationForContextOwner@CCompositionSurfaceBitmap@@UEAAJPEAVID2DContextOwner@@PEAPEAUID2D1Bitmap1@@@Z @ 0x1800101E0
 * Callers:
 *     ?BuildD2DBitmapList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@IIPEAPEAUID2D1Bitmap@@@Z @ 0x18000EBA4 (-BuildD2DBitmapList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@IIPEAPEAUID2D1B.c)
 *     ?GetD2DBitmapRealization@CCommandListBitmapRepresentation@@AEAAJPEAVID2DContextOwner@@PEAPEAUID2D1Bitmap@@@Z @ 0x18000F1FC (-GetD2DBitmapRealization@CCommandListBitmapRepresentation@@AEAAJPEAVID2DContextOwner@@PEAPEAUID2.c)
 *     ?DrawYCbCrBitmap@CDrawingContext@@UEAAJPEAVCResource@@0W4D2D1_YCBCR_CHROMA_SUBSAMPLING@@@Z @ 0x1801230A0 (-DrawYCbCrBitmap@CDrawingContext@@UEAAJPEAVCResource@@0W4D2D1_YCBCR_CHROMA_SUBSAMPLING@@@Z.c)
 *     ?GetInputEffectForAtlasedSurface@CFilterEffect@@AEAAJPEAVID2DContext@@PEAVID2DContextOwner@@AEBUtagRECT@@PEAVCCompositionSurfaceBitmap@@PEAPEAUID2D1Effect@@@Z @ 0x18014C880 (-GetInputEffectForAtlasedSurface@CFilterEffect@@AEAAJPEAVID2DContext@@PEAVID2DContextOwner@@AEBU.c)
 *     ?DrawPencilStroke@CD2DContext@@UEAAJPEAVID2DContextOwner@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@PEAUID2D1PencilStroke@@PEBUD2D1_PENCIL_STYLE@@PEAVCCompositionSurfaceBitmap@@AEBUtagRECT@@56M@Z @ 0x180176A00 (-DrawPencilStroke@CD2DContext@@UEAAJPEAVID2DContextOwner@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIV.c)
 * Callees:
 *     ?InternalGetD2DBitmap@CCompositionSurfaceBitmap@@QEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEAPEAUID2D1Bitmap1@@@Z @ 0x18000FA2C (-InternalGetD2DBitmap@CCompositionSurfaceBitmap@@QEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEAPE.c)
 *     ?GetCurrentStereoContext@CDrawingContext@@EEBA?AW4StereoContext@@XZ @ 0x180064100 (-GetCurrentStereoContext@CDrawingContext@@EEBA-AW4StereoContext@@XZ.c)
 *     ?GetCurrentDisplayId@CDrawingContext@@EEBA?AVDisplayId@@XZ @ 0x18006F260 (-GetCurrentDisplayId@CDrawingContext@@EEBA-AVDisplayId@@XZ.c)
 *     ?GetCurrentAdapterLuid@CDrawingContext@@EEBA?AU_LUID@@XZ @ 0x18006F280 (-GetCurrentAdapterLuid@CDrawingContext@@EEBA-AU_LUID@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::GetD2DBitmapRealizationForContextOwner(
        CCompositionSurfaceBitmap *this,
        struct ID2DContextOwner *a2,
        struct ID2D1Bitmap1 **a3)
{
  __int64 (__fastcall *v6)(struct ID2DContextOwner *); // rax
  unsigned int CurrentStereoContext; // eax
  unsigned int v8; // edi
  __int64 (__fastcall *v9)(struct ID2DContextOwner *, char *); // rax
  __int64 CurrentDisplayId; // rax
  unsigned int *v11; // rsi
  struct _LUID (__fastcall *v12)(CDrawingContext *__hidden); // rax
  __int64 *CurrentAdapterLuid; // rax
  char v15; // [rsp+50h] [rbp+8h] BYREF
  char v16; // [rsp+58h] [rbp+10h] BYREF

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
    CurrentAdapterLuid = (__int64 *)CDrawingContext::GetCurrentAdapterLuid(a2);
  else
    CurrentAdapterLuid = (__int64 *)((__int64 (__fastcall *)(struct ID2DContextOwner *, char *))v12)(a2, &v16);
  return CCompositionSurfaceBitmap::InternalGetD2DBitmap((__int64)this - 144, *CurrentAdapterLuid, *v11, v8, a3);
}
