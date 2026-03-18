/*
 * XREFs of ?Pop@CDrawingContext@@UEAAJXZ @ 0x180027E60
 * Callers:
 *     ?Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z @ 0x18004E7A0 (-Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z.c)
 *     ?PostSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800DBE20 (-PostSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x180010764 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 *     ?PopLayer@CDrawingContext@@AEAAJXZ @ 0x180028020 (-PopLayer@CDrawingContext@@AEAAJXZ.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800310B0 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x180031110 (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?Top@?$CWatermarkStack@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$07$01$07@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x180059230 (-Top@-$CWatermarkStack@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@.c)
 *     ?Pop@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAHPEAUStackStateEntry@CDrawingContext@@@Z @ 0x18005B05C (-Pop@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAHPEAUStackStateEntry@C.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PopCpuClip@CDrawingContext@@AEAAXXZ @ 0x1800DC1F8 (-PopCpuClip@CDrawingContext@@AEAAXXZ.c)
 *     ?PopClippingScope@CDrawingContext@@AEAAX_N@Z @ 0x1800DC260 (-PopClippingScope@CDrawingContext@@AEAAX_N@Z.c)
 *     ?Pop@?$CWatermarkStack@_N$0EA@$01$09@@QEAAHPEA_N@Z @ 0x1800E06E8 (-Pop@-$CWatermarkStack@_N$0EA@$01$09@@QEAAHPEA_N@Z.c)
 */

__int64 __fastcall CDrawingContext::Pop(CDrawingContext *this)
{
  char *v1; // rsi
  int v3; // eax
  unsigned int v4; // edi
  int v6; // eax
  _DWORD v7[6]; // [rsp+30h] [rbp-18h] BYREF

  v1 = (char *)this + 424;
  v3 = CWatermarkStack<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,8,2,8>::Top(
         (char *)this + 424,
         v7);
  v4 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x19DAu);
  switch ( v7[0] )
  {
    case 1:
      CDrawingContext::PopGpuClipRectInternal(this, 1);
      break;
    case 2:
      CDrawingContext::PopCpuClip(this);
      break;
    case 3:
      CDrawingContext::PopClippingScope(this, 1);
      break;
    case 4:
      CDrawingContext::PopTransformInternal(this, 1);
      break;
    default:
      if ( v7[0] > 4 )
      {
        if ( v7[0] <= 6 )
        {
          v6 = CDrawingContext::PopLayer(this);
          v4 = v6;
          if ( v6 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x19EEu);
        }
        else if ( v7[0] == 7 )
        {
          CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop(v1, v7);
          CWatermarkStack<bool,64,2,10>::Pop((char *)this + 2584);
        }
        else if ( v7[0] == 8 )
        {
          CDrawingContext::PopRenderOptionsInternal(this, 1);
        }
      }
      break;
  }
  return v4;
}
