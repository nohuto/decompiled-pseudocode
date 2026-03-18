/*
 * XREFs of ?PushLinearInterpolationLayer@CDrawingContext@@AEAAJAEBUMilPointAndSizeL@@MM@Z @ 0x18000DE94
 * Callers:
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N33333@Z @ 0x180045060 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 * Callees:
 *     ?Create@CLinearInterpolationLayer@@SAJPEAVIRenderTarget@@AEBU_GUID@@AEBUMilPointAndSizeL@@MMPEAPEAV1@@Z @ 0x1800105C0 (-Create@CLinearInterpolationLayer@@SAJPEAVIRenderTarget@@AEBU_GUID@@AEBUMilPointAndSizeL@@MMPEAP.c)
 *     ??_GCLinearInterpolationLayer@@UEAAPEAXI@Z @ 0x1800107A0 (--_GCLinearInterpolationLayer@@UEAAPEAXI@Z.c)
 *     ?PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z @ 0x18003CBE8 (-PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDrawingContext::PushLinearInterpolationLayer(
        struct IRenderTarget **this,
        const struct MilPointAndSizeL *a2,
        float a3,
        float a4)
{
  int v5; // eax
  unsigned int v6; // edi
  struct CLayer *v7; // rbx
  int v8; // eax
  struct CLayer *v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = 0LL;
  v5 = CLinearInterpolationLayer::Create(this[44], (const struct _GUID *)((char *)this[3] + 252), a2, a3, a4, &v10);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x173Fu);
    v7 = v10;
  }
  else
  {
    v7 = v10;
    v8 = CDrawingContext::PushLayer((CDrawingContext *)this, 0LL, v10, 1, 0);
    v6 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x1748u);
    else
      v7 = 0LL;
  }
  if ( v7 )
    CLinearInterpolationLayer::`scalar deleting destructor'(v7, 1u);
  return v6;
}
