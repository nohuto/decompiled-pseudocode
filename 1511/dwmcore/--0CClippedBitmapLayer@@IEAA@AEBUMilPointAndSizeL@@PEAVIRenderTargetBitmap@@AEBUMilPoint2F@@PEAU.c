/*
 * XREFs of ??0CClippedBitmapLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@AEBUMilPoint2F@@PEAUID2D1Bitmap1@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@@Z @ 0x180114EC8
 * Callers:
 *     ?Create@CClippedBitmapLayer@@SAJPEAVIRenderTarget@@AEBU_GUID@@PEAUID2D1Bitmap1@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@PEAPEAV1@@Z @ 0x1801150E0 (-Create@CClippedBitmapLayer@@SAJPEAVIRenderTarget@@AEBU_GUID@@PEAUID2D1Bitmap1@@PEBV-$CMatrix@UB.c)
 * Callees:
 *     ??0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z @ 0x180010DB0 (--0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z.c)
 */

__int64 __fastcall CClippedBitmapLayer::CClippedBitmapLayer(
        __int64 a1,
        const struct MilPointAndSizeL *a2,
        struct IRenderTargetBitmap *a3,
        __int64 *a4,
        __int64 a5,
        _OWORD *a6,
        __int64 a7)
{
  __int64 v9; // xmm0_8
  __int64 result; // rax

  CExternalLayer::CExternalLayer((CExternalLayer *)a1, a2, a3);
  v9 = *a4;
  *(_QWORD *)a1 = &CClippedBitmapLayer::`vftable';
  *(_QWORD *)(a1 + 112) = a5;
  *(_QWORD *)(a1 + 184) = a7;
  *(_WORD *)(a1 + 192) = 0;
  *(_BYTE *)(a1 + 194) = 0;
  *(_QWORD *)(a1 + 104) = v9;
  *(_OWORD *)(a1 + 120) = *a6;
  *(_OWORD *)(a1 + 136) = a6[1];
  *(_OWORD *)(a1 + 152) = a6[2];
  result = a1;
  *(_OWORD *)(a1 + 168) = a6[3];
  return result;
}
