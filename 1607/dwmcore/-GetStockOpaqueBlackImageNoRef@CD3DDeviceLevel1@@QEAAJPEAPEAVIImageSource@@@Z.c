/*
 * XREFs of ?GetStockOpaqueBlackImageNoRef@CD3DDeviceLevel1@@QEAAJPEAPEAVIImageSource@@@Z @ 0x1801742F0
 * Callers:
 *     ?GetInputParameters@CEffectBrush@@AEAAJIAEBUD2D_SIZE_F@@PEAVCDrawingContext@@PEAUGraphInputParameters@1@@Z @ 0x18013BD88 (-GetInputParameters@CEffectBrush@@AEAAJIAEBUD2D_SIZE_F@@PEAVCDrawingContext@@PEAUGraphInputParam.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsOOM@@YA_NJ@Z @ 0x180047590 (-IsOOM@@YA_NJ@Z.c)
 *     ?CreateSingleAdapter@CRenderTargetImageSource@@SAJPEAVIRenderTarget@@PEAPEAV1@@Z @ 0x180131B38 (-CreateSingleAdapter@CRenderTargetImageSource@@SAJPEAVIRenderTarget@@PEAPEAV1@@Z.c)
 *     ?IsCompBuild@@YA_NXZ @ 0x1801693A8 (-IsCompBuild@@YA_NXZ.c)
 *     ?EnsureBlackBitmapTargets@CD3DDeviceLevel1@@AEAAJXZ @ 0x180173B08 (-EnsureBlackBitmapTargets@CD3DDeviceLevel1@@AEAAJXZ.c)
 */

__int64 __fastcall CD3DDeviceLevel1::GetStockOpaqueBlackImageNoRef(CD3DDeviceLevel1 *this, struct IImageSource **a2)
{
  unsigned int v2; // ebx
  struct CRenderTargetImageSource **v3; // rdi
  int v6; // eax
  int SingleAdapter; // eax

  v2 = 0;
  v3 = (struct CRenderTargetImageSource **)((char *)this + 808);
  *a2 = 0LL;
  if ( *((_QWORD *)this + 101) )
    goto LABEL_13;
  v6 = CD3DDeviceLevel1::EnsureBlackBitmapTargets(this);
  v2 = v6;
  if ( v6 >= 0 )
  {
    SingleAdapter = CRenderTargetImageSource::CreateSingleAdapter(*((struct IRenderTarget **)this + 99), v3);
    v2 = SingleAdapter;
    if ( SingleAdapter < 0 )
    {
      if ( IsOOM(SingleAdapter) && IsCompBuild() )
        NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x5E5u);
      return v2;
    }
LABEL_13:
    *a2 = *v3;
    return v2;
  }
  if ( IsOOM(v6) && IsCompBuild() )
    NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x5E1u);
  return v2;
}
