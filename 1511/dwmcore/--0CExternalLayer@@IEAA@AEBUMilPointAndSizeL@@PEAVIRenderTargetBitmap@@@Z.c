/*
 * XREFs of ??0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z @ 0x180010DB0
 * Callers:
 *     ??0CLinearInterpolationLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@MM@Z @ 0x1800109C4 (--0CLinearInterpolationLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@MM@Z.c)
 *     ?Create@CFilterEffectLayer@@SAJPEAVIRenderTarget@@AEBU_GUID@@AEBUMilPointAndSizeL@@PEAVCFilterEffect@@PEBVCVisual@@AEBUMilPointAndSizeF@@PEAPEAV1@@Z @ 0x180019A30 (-Create@CFilterEffectLayer@@SAJPEAVIRenderTarget@@AEBU_GUID@@AEBUMilPointAndSizeL@@PEAVCFilterEf.c)
 *     ??0CClippedBitmapLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@AEBUMilPoint2F@@PEAUID2D1Bitmap1@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@@Z @ 0x180114EC8 (--0CClippedBitmapLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@AEBUMilPoint2F@@PEAU.c)
 *     ?Create@CColorTransformLayer@@SAJPEAVIRenderTarget@@AEBU_GUID@@AEBUMilPointAndSizeL@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0DE@@@PEAPEAV1@@Z @ 0x180115720 (-Create@CColorTransformLayer@@SAJPEAVIRenderTarget@@AEBU_GUID@@AEBUMilPointAndSizeL@@PEAV-$TValu.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

CExternalLayer *__fastcall CExternalLayer::CExternalLayer(
        CExternalLayer *this,
        const struct MilPointAndSizeL *a2,
        struct IRenderTargetBitmap *a3)
{
  __int128 v3; // xmm0

  v3 = *(_OWORD *)a2;
  *((_QWORD *)this + 1) = a3;
  *(_QWORD *)this = &CExternalLayer::`vftable';
  *((_DWORD *)this + 8) = 0;
  *((_BYTE *)this + 36) = 0;
  *((_OWORD *)this + 1) = v3;
  if ( a3 )
    (*(void (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)a3 + 8LL))(a3);
  return this;
}
