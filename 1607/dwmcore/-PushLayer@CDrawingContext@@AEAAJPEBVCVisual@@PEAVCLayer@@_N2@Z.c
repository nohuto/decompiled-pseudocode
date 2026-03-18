/*
 * XREFs of ?PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z @ 0x180003AE4
 * Callers:
 *     ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@MI@Z @ 0x180003C10 (-PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@.c)
 *     ?PushLinearInterpolationLayer@CDrawingContext@@AEAAJAEBUMilPointAndSizeL@@MM@Z @ 0x180003E44 (-PushLinearInterpolationLayer@CDrawingContext@@AEAAJAEBUMilPointAndSizeL@@MM@Z.c)
 *     ?PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAVCResource@@PEA_N@Z @ 0x180003EC0 (-PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndSize.c)
 *     ?PushClippedBitmapLayer@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@@Z @ 0x18012425C (-PushClippedBitmapLayer@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@PEBV-$CMatrix@UBaseSampling@Coor.c)
 *     ?PushColorTransformLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0DF@@@@Z @ 0x18012430C (-PushColorTransformLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAV-$TValueResource@UMilColorTransf.c)
 *     ?PushEffectBrushLayer@CDrawingContext@@QEAAJPEBVCVisual@@AEBUD2D_SIZE_F@@PEAVCEffectBrush@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1801243FC (-PushEffectBrushLayer@CDrawingContext@@QEAAJPEBVCVisual@@AEBUD2D_SIZE_F@@PEAVCEffectBrush@@PEAPE.c)
 *     ?PushHDRConversionLayer@CDrawingContext@@AEAAJXZ @ 0x1801245B4 (-PushHDRConversionLayer@CDrawingContext@@AEAAJXZ.c)
 * Callees:
 *     ?FlushDeferredD2DLayers@CDrawingContext@@AEAAJXZ @ 0x180003900 (-FlushDeferredD2DLayers@CDrawingContext@@AEAAJXZ.c)
 *     ?ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800058E0 (-ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?Pop@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAHPEAUStackStateEntry@CDrawingContext@@@Z @ 0x180022168 (-Pop@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAHPEAUStackStateEntry@C.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Push@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackStateEntry@CDrawingContext@@@Z @ 0x1800AD570 (-Push@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackStateEntry@.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::PushLayer(
        CDrawingContext *this,
        const struct CVisual *a2,
        struct CLayer *a3,
        char a4,
        bool a5)
{
  char v5; // r12
  char v6; // r15
  int v11; // eax
  int v12; // ebx
  unsigned int v13; // eax
  unsigned int v14; // edx
  __int64 (__fastcall *v16)(CD2DLayer *__hidden, struct CDrawingContext *); // rax
  int v17; // eax
  int v18; // r9d
  int v19; // eax
  unsigned int v20; // [rsp+20h] [rbp-38h]
  _QWORD v21[5]; // [rsp+30h] [rbp-28h] BYREF

  v5 = 0;
  v6 = 0;
  if ( !a4 || (v11 = CDrawingContext::FlushDeferredD2DLayers(this), v12 = v11, v11 >= 0) )
  {
    if ( a5 )
    {
      LODWORD(v21[0]) = 5;
      v21[1] = a2;
      v11 = CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Push((char *)this + 504, v21);
      v12 = v11;
      if ( v11 < 0 )
      {
        v20 = 6174;
        goto LABEL_19;
      }
      v5 = 1;
    }
    v21[0] = a3;
    v13 = *((_DWORD *)this + 156);
    v14 = v13 + 1;
    if ( v13 + 1 < v13 )
    {
      v12 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    }
    else
    {
      v12 = 0;
      if ( v14 <= *((_DWORD *)this + 155) )
      {
        *(_QWORD *)(*((_QWORD *)this + 75) + 8LL * v13) = v21[0];
        *((_DWORD *)this + 156) = v14;
        goto LABEL_8;
      }
      v19 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 600, 8LL, 1LL, v21);
      v12 = v19;
      if ( v19 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0xC0u);
    }
    if ( v12 < 0 )
    {
      v20 = 6181;
LABEL_25:
      v18 = v12;
      goto LABEL_26;
    }
LABEL_8:
    v6 = 1;
    if ( !a4 )
      goto LABEL_9;
    v16 = *(__int64 (__fastcall **)(CD2DLayer *__hidden, struct CDrawingContext *))(*(_QWORD *)a3 + 16LL);
    if ( v16 == CD2DLayer::ApplyState )
      v17 = CD2DLayer::ApplyState(a3, this);
    else
      v17 = v16(a3, this);
    v12 = v17;
    if ( v17 >= 0 )
      return (unsigned int)v12;
    v20 = 6186;
    goto LABEL_25;
  }
  v20 = 6164;
LABEL_19:
  v18 = v11;
LABEL_26:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, v20);
LABEL_9:
  if ( v12 < 0 )
  {
    if ( v6 )
      --*((_DWORD *)this + 156);
    if ( v5 )
      CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop((char *)this + 504, 0LL, a3);
  }
  return (unsigned int)v12;
}
