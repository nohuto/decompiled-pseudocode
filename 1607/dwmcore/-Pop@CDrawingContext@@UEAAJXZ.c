/*
 * XREFs of ?Pop@CDrawingContext@@UEAAJXZ @ 0x180067D80
 * Callers:
 *     ?Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z @ 0x18004DC00 (-Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z.c)
 *     ?PopStacksForNode@CDrawingContext@@AEAAJPEBVCVisual@@@Z @ 0x180107390 (-PopStacksForNode@CDrawingContext@@AEAAJPEBVCVisual@@@Z.c)
 * Callees:
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800035A8 (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x180003A7C (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x1800057C0 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 *     ?Top@?$CWatermarkStack@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$07$01$07@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x18001B740 (-Top@-$CWatermarkStack@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x18006F114 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?PopAlpha@CDrawingContext@@AEAAXXZ @ 0x180107360 (-PopAlpha@CDrawingContext@@AEAAXXZ.c)
 *     ?PopCpuClip@CDrawingContext@@AEAAXXZ @ 0x18010740C (-PopCpuClip@CDrawingContext@@AEAAXXZ.c)
 *     ?PopClippingScope@CDrawingContext@@AEAAX_N@Z @ 0x180107500 (-PopClippingScope@CDrawingContext@@AEAAX_N@Z.c)
 *     ?PopLight@CDrawingContext@@AEAAJXZ @ 0x180124060 (-PopLight@CDrawingContext@@AEAAJXZ.c)
 */

__int64 __fastcall CDrawingContext::Pop(CDrawingContext *this)
{
  int v2; // eax
  unsigned int v3; // edi
  int v5; // eax
  int v6; // eax
  __int128 v7; // [rsp+30h] [rbp-18h] BYREF

  v2 = CWatermarkStack<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,8,2,8>::Top(
         (int *)this + 126,
         &v7);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x19F7u);
  switch ( (_DWORD)v7 )
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
      if ( (int)v7 > 4 )
      {
        if ( (int)v7 <= 6 )
        {
          v6 = CDrawingContext::PopLayer(this);
          v3 = v6;
          if ( v6 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x1A0Bu);
        }
        else
        {
          switch ( (_DWORD)v7 )
          {
            case 7:
              CDrawingContext::PopAlpha(this);
              break;
            case 8:
              CDrawingContext::PopRenderOptionsInternal(this, 1);
              break;
            case 9:
              v5 = CDrawingContext::PopLight(this);
              v3 = v5;
              if ( v5 < 0 )
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x1A1Bu);
              break;
          }
        }
      }
      break;
  }
  return v3;
}
