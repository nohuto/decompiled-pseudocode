/*
 * XREFs of ?Pop@CDrawingContext@@UEAAJXZ @ 0x18003C8F0
 * Callers:
 *     ?Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z @ 0x18009ECF0 (-Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z.c)
 *     ?PopStacksForNode@CDrawingContext@@AEAAJPEBVCVisual@@@Z @ 0x1800F37DC (-PopStacksForNode@CDrawingContext@@AEAAJPEBVCVisual@@@Z.c)
 * Callees:
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x18000DC18 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 *     ?PopLayer@CDrawingContext@@AEAAJXZ @ 0x18003CB80 (-PopLayer@CDrawingContext@@AEAAJXZ.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x180046E74 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x180046ED0 (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Pop@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAHPEAUStackStateEntry@CDrawingContext@@@Z @ 0x1800A9B1C (-Pop@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAHPEAUStackStateEntry@C.c)
 *     ?Top@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEBAJPEAUStackStateEntry@CDrawingContext@@I@Z @ 0x1800A9B4C (-Top@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEBAJPEAUStackStateEntry@C.c)
 *     ?PopCpuClip@CDrawingContext@@AEAAXXZ @ 0x1800F3858 (-PopCpuClip@CDrawingContext@@AEAAXXZ.c)
 *     ?PopClippingScope@CDrawingContext@@AEAAX_N@Z @ 0x1800F38C0 (-PopClippingScope@CDrawingContext@@AEAAX_N@Z.c)
 *     ?Pop@?$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAHPEAW4Enum@MilBitmapInterpolationMode@@@Z @ 0x1800FE26C (-Pop@-$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAHPEAW4Enum@MilBitmapI.c)
 */

__int64 __fastcall CDrawingContext::Pop(CDrawingContext *this)
{
  char *v1; // rsi
  int v3; // eax
  __int64 v4; // r8
  unsigned int v5; // edi
  int v7; // eax
  _DWORD v8[6]; // [rsp+30h] [rbp-18h] BYREF

  v1 = (char *)this + 424;
  v3 = CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Top((char *)this + 424, v8);
  v5 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x19A7u);
  switch ( v8[0] )
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
      if ( v8[0] > 4 )
      {
        if ( v8[0] <= 6 )
        {
          v7 = CDrawingContext::PopLayer(this);
          v5 = v7;
          if ( v7 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x19BBu);
        }
        else if ( v8[0] == 7 )
        {
          CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop(v1, v8, v4);
          CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Pop((char *)this + 2584);
        }
        else if ( v8[0] == 8 )
        {
          CDrawingContext::PopRenderOptionsInternal(this, 1);
        }
      }
      break;
  }
  return v5;
}
