/*
 * XREFs of ?PushColorTransformLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0DE@@@@Z @ 0x18010DEBC
 * Callers:
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@1PEA_N@Z @ 0x18003CFD0 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N33333@Z @ 0x180045060 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 * Callees:
 *     ?PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z @ 0x18003CBE8 (-PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??_ECColorTransformLayer@@UEAAPEAXI@Z @ 0x18010B080 (--_ECColorTransformLayer@@UEAAPEAXI@Z.c)
 *     ?ComputeExternalLayerOffsetAndBounds@CDrawingContext@@AEAAJPEAUMilPointAndSizeL@@@Z @ 0x18010B720 (-ComputeExternalLayerOffsetAndBounds@CDrawingContext@@AEAAJPEAUMilPointAndSizeL@@@Z.c)
 *     ?Create@CColorTransformLayer@@SAJPEAVIRenderTarget@@AEBU_GUID@@AEBUMilPointAndSizeL@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0DE@@@PEAPEAV1@@Z @ 0x180115720 (-Create@CColorTransformLayer@@SAJPEAVIRenderTarget@@AEBU_GUID@@AEBUMilPointAndSizeL@@PEAV-$TValu.c)
 */

__int64 __fastcall CDrawingContext::PushColorTransformLayer(CDrawingContext *this, struct CVisual *a2, __int64 a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  CColorTransformLayer *v9; // rdi
  int v10; // eax
  _BYTE v12[24]; // [rsp+30h] [rbp-18h] BYREF
  CColorTransformLayer *v13; // [rsp+68h] [rbp+20h] BYREF

  v13 = 0LL;
  v6 = CDrawingContext::ComputeExternalLayerOffsetAndBounds(this, (struct MilPointAndSizeL *)v12);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v8 = CColorTransformLayer::Create(*((_QWORD *)this + 44), *((_QWORD *)this + 3) + 252LL, v12, a3, &v13);
    v7 = v8;
    if ( v8 >= 0 )
    {
      v9 = v13;
      v10 = CDrawingContext::PushLayer(this, a2, v13, 1, 1);
      v7 = v10;
      if ( v10 >= 0 )
        v9 = 0LL;
      else
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x16CCu);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x16C3u);
      v9 = v13;
    }
    if ( v9 )
      CColorTransformLayer::`vector deleting destructor'(v9, 1);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x16BDu);
  }
  return v7;
}
