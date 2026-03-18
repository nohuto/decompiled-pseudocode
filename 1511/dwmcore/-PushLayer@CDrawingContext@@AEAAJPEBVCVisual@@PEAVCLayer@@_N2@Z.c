/*
 * XREFs of ?PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z @ 0x18003CBE8
 * Callers:
 *     ?PushLinearInterpolationLayer@CDrawingContext@@AEAAJAEBUMilPointAndSizeL@@MM@Z @ 0x18000DE94 (-PushLinearInterpolationLayer@CDrawingContext@@AEAAJAEBUMilPointAndSizeL@@MM@Z.c)
 *     ?PushFilterEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAVCFilterEffect@@@Z @ 0x18000DF28 (-PushFilterEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPointA.c)
 *     ?PushD2DLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M@Z @ 0x18003CD30 (-PushD2DLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@.c)
 *     ?PushClippedBitmapLayer@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@@Z @ 0x18010DDEC (-PushClippedBitmapLayer@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@PEBV-$CMatrix@UBaseSampling@Coor.c)
 *     ?PushColorTransformLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0DE@@@@Z @ 0x18010DEBC (-PushColorTransformLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAV-$TValueResource@UMilColorTransf.c)
 * Callees:
 *     ?ApplyState@CLinearInterpolationLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180010960 (-ApplyState@CLinearInterpolationLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180025130 (-ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?FlushDeferredD2DLayers@CDrawingContext@@AEAAJXZ @ 0x18003C9E0 (-FlushDeferredD2DLayers@CDrawingContext@@AEAAJXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180076E18 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Pop@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAHPEAUStackStateEntry@CDrawingContext@@@Z @ 0x1800A9B1C (-Pop@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAHPEAUStackStateEntry@C.c)
 *     ?Push@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackStateEntry@CDrawingContext@@@Z @ 0x1800A9B7C (-Push@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackStateEntry@.c)
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
  __int64 (__fastcall *v16)(CLinearInterpolationLayer *, struct CDrawingContext *); // rbx
  int v17; // eax
  int v18; // esi
  int v19; // eax
  unsigned int v20; // [rsp+20h] [rbp-38h]
  _QWORD v21[5]; // [rsp+30h] [rbp-28h] BYREF

  v5 = 0;
  v6 = 0;
  if ( a4 )
  {
    v11 = CDrawingContext::FlushDeferredD2DLayers(this);
    v12 = v11;
    if ( v11 < 0 )
    {
      v20 = 6103;
LABEL_26:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, v20);
      goto LABEL_9;
    }
  }
  if ( a5 )
  {
    LODWORD(v21[0]) = 5;
    v21[1] = a2;
    v11 = CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Push((char *)this + 424, v21);
    v12 = v11;
    if ( v11 < 0 )
    {
      v20 = 6113;
      goto LABEL_26;
    }
    v5 = 1;
  }
  v21[0] = a3;
  v13 = *((_DWORD *)this + 136);
  v14 = v13 + 1;
  if ( v13 + 1 < v13 )
  {
    v18 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    v12 = -2147024362;
    goto LABEL_25;
  }
  v12 = 0;
  if ( v14 <= *((_DWORD *)this + 135) )
  {
    *(_QWORD *)(*((_QWORD *)this + 65) + 8LL * v13) = v21[0];
    *((_DWORD *)this + 136) = v14;
    goto LABEL_8;
  }
  v19 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 520, 8LL, 1LL, v21);
  v18 = v19;
  if ( v19 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0xC0u);
  v12 = v18;
  if ( v18 < 0 )
  {
LABEL_25:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x17E8u);
    goto LABEL_9;
  }
LABEL_8:
  v6 = 1;
  if ( a4 )
  {
    v16 = *(__int64 (__fastcall **)(CLinearInterpolationLayer *, struct CDrawingContext *))(*(_QWORD *)a3 + 16LL);
    if ( v16 == CD2DLayer::ApplyState )
    {
      v17 = CD2DLayer::ApplyState(a3, this);
    }
    else if ( v16 == CLinearInterpolationLayer::ApplyState )
    {
      v17 = CLinearInterpolationLayer::ApplyState(a3, this);
    }
    else
    {
      v17 = v16(a3, this);
    }
    v12 = v17;
    if ( v17 >= 0 )
      return (unsigned int)v12;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x17EDu);
  }
LABEL_9:
  if ( v12 < 0 )
  {
    if ( v6 )
      --*((_DWORD *)this + 136);
    if ( v5 )
      CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop((char *)this + 424, 0LL, a3);
  }
  return (unsigned int)v12;
}
