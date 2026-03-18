/*
 * XREFs of ?PushLinearInterpolationLayer@CDrawingContext@@AEAAJAEBUMilPointAndSizeL@@MM@Z @ 0x180003E44
 * Callers:
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N33333@Z @ 0x18006D600 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 * Callees:
 *     ?PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z @ 0x180003AE4 (-PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z.c)
 *     ?Create@CLinearInterpolationLayer@@SAJPEAVIRenderTarget@@AEBU_GUID@@AEBUMilPointAndSizeL@@MMPEAPEAV1@@Z @ 0x1800127EC (-Create@CLinearInterpolationLayer@@SAJPEAVIRenderTarget@@AEBU_GUID@@AEBUMilPointAndSizeL@@MMPEAP.c)
 *     ??_GCLinearInterpolationLayer@@UEAAPEAXI@Z @ 0x1800129A0 (--_GCLinearInterpolationLayer@@UEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDrawingContext::PushLinearInterpolationLayer(
        struct IRenderTarget **this,
        const struct MilPointAndSizeL *a2,
        float a3,
        float a4)
{
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  CLinearInterpolationLayer *v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = 0LL;
  v5 = CLinearInterpolationLayer::Create(this[54], (const struct _GUID *)((char *)this[3] + 252), a2, a3, a4, &v9);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x177Cu);
  }
  else
  {
    v7 = CDrawingContext::PushLayer((CDrawingContext *)this, 0LL, v9, 1, 0);
    v6 = v7;
    if ( v7 >= 0 )
      return v6;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x1784u);
  }
  if ( v9 )
    CLinearInterpolationLayer::`scalar deleting destructor'(v9, 1u);
  return v6;
}
