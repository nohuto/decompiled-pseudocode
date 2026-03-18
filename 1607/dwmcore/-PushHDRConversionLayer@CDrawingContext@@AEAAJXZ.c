/*
 * XREFs of ?PushHDRConversionLayer@CDrawingContext@@AEAAJXZ @ 0x1801245B4
 * Callers:
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N33333@Z @ 0x18006D600 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 * Callees:
 *     ?PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z @ 0x180003AE4 (-PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??_GCHDRConvertLayer@@UEAAPEAXI@Z @ 0x180121540 (--_GCHDRConvertLayer@@UEAAPEAXI@Z.c)
 *     ?ComputeExternalLayerOffsetAndBounds@CDrawingContext@@AEAAJPEAUMilPointAndSizeL@@@Z @ 0x180121A4C (-ComputeExternalLayerOffsetAndBounds@CDrawingContext@@AEAAJPEAUMilPointAndSizeL@@@Z.c)
 *     ?Create@CHDRConvertLayer@@SAJPEAVIRenderTargetDisplay@@AEBUMilPointAndSizeL@@PEAPEAV1@@Z @ 0x18012F218 (-Create@CHDRConvertLayer@@SAJPEAVIRenderTargetDisplay@@AEBUMilPointAndSizeL@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CDrawingContext::PushHDRConversionLayer(struct IRenderTargetDisplay **this)
{
  CHDRConvertLayer *v1; // rdi
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // eax
  int v6; // eax
  _BYTE v8[24]; // [rsp+30h] [rbp-18h] BYREF
  CHDRConvertLayer *v9; // [rsp+58h] [rbp+10h] BYREF

  v1 = 0LL;
  v9 = 0LL;
  v3 = CDrawingContext::ComputeExternalLayerOffsetAndBounds((CDrawingContext *)this, (struct MilPointAndSizeL *)v8);
  v4 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x16A5u);
  }
  else
  {
    v5 = CHDRConvertLayer::Create(this[55], (const struct MilPointAndSizeL *)v8, &v9);
    v4 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x16A9u);
      v1 = v9;
    }
    else
    {
      v1 = v9;
      v6 = CDrawingContext::PushLayer((CDrawingContext *)this, 0LL, v9, 1, 1);
      v4 = v6;
      if ( v6 >= 0 )
        return v4;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x16B1u);
    }
  }
  if ( v1 )
    CHDRConvertLayer::`scalar deleting destructor'(v1, 1);
  return v4;
}
