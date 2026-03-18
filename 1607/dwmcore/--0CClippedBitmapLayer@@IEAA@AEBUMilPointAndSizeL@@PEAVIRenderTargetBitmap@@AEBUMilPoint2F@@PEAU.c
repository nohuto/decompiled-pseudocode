/*
 * XREFs of ??0CClippedBitmapLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@AEBUMilPoint2F@@PEAUID2D1Bitmap1@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@@Z @ 0x18012EA04
 * Callers:
 *     ?Create@CClippedBitmapLayer@@SAJPEAVIRenderTarget@@AEBU_GUID@@PEAUID2D1Bitmap1@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@PEAPEAV1@@Z @ 0x18012EC18 (-Create@CClippedBitmapLayer@@SAJPEAVIRenderTarget@@AEBU_GUID@@PEAUID2D1Bitmap1@@PEBV-$CMatrix@UB.c)
 * Callees:
 *     ??0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z @ 0x180013A28 (--0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z.c)
 */

__int64 __fastcall CClippedBitmapLayer::CClippedBitmapLayer(
        __int64 a1,
        const struct MilPointAndSizeL *a2,
        struct IRenderTargetBitmap *a3,
        __int64 *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v9; // xmm0_8

  CExternalLayer::CExternalLayer((CExternalLayer *)a1, a2, a3);
  v9 = *a4;
  *(_QWORD *)a1 = &CClippedBitmapLayer::`vftable';
  *(_QWORD *)(a1 + 120) = a5;
  *(_QWORD *)(a1 + 112) = v9;
  *(_DWORD *)(a1 + 192) = 0;
  *(_QWORD *)(a1 + 200) = a7;
  *(_WORD *)(a1 + 208) = 0;
  *(_BYTE *)(a1 + 210) = 0;
  *(_OWORD *)(a1 + 128) = *(_OWORD *)a6;
  *(_OWORD *)(a1 + 144) = *(_OWORD *)(a6 + 16);
  *(_OWORD *)(a1 + 160) = *(_OWORD *)(a6 + 32);
  *(_OWORD *)(a1 + 176) = *(_OWORD *)(a6 + 48);
  *(_DWORD *)(a1 + 192) = *(_DWORD *)(a6 + 64);
  return a1;
}
