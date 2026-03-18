/*
 * XREFs of ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N3@Z @ 0x180045C70
 * Callers:
 *     ?ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x180010E18 (-ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderLayer@CFilterEffectLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x180019DB4 (-RenderLayer@CFilterEffectLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?PushClipRectForNode@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x180037120 (-PushClipRectForNode@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAnd.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N33333@Z @ 0x180045060 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?RenderComposeTopWorker@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x1800B8CE8 (-RenderComposeTopWorker@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?CreateSurfaceAndContext@CBrushIntermediateRealizer@@IEAAJIIW4Enum@MilTileMode@@PEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingContext@@@Z @ 0x1801384AC (-CreateSurfaceAndContext@CBrushIntermediateRealizer@@IEAAJIIW4Enum@MilTileMode@@PEAPEAVIRenderTa.c)
 * Callees:
 *     ?RoundWithHalvesDown@@YAXAEBUMilRectF@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180077610 (-RoundWithHalvesDown@@YAXAEBUMilRectF@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Push@CBaseClipStack@@IEAAJAEBUMilRectF@@@Z @ 0x1800A2670 (-Push@CBaseClipStack@@IEAAJAEBUMilRectF@@@Z.c)
 *     ?Push@?$CWatermarkStack@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$07$01$07@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800A2894 (-Push@-$CWatermarkStack@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@.c)
 *     ?Pop@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAHPEAUStackStateEntry@CDrawingContext@@@Z @ 0x1800A9B1C (-Pop@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAHPEAUStackStateEntry@C.c)
 *     ?Push@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackStateEntry@CDrawingContext@@@Z @ 0x1800A9B7C (-Push@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackStateEntry@.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ceilf_0 @ 0x1800BC85A (ceilf_0.c)
 */

__int64 __fastcall CDrawingContext::PushGpuClipRectInternal(
        __int64 a1,
        __int64 a2,
        float *a3,
        int a4,
        char a5,
        char a6)
{
  char v6; // r12
  int v10; // eax
  int v11; // ebx
  float v12; // xmm0_4
  int v13; // eax
  float v14; // xmm0_4
  float v15; // xmm11_4
  int v16; // eax
  float v17; // xmm0_4
  float v18; // xmm10_4
  int v19; // eax
  float v20; // xmm0_4
  float v21; // xmm7_4
  float v22; // xmm0_4
  int v23; // eax
  __int64 v24; // r8
  int v25; // ebx
  __int64 v26; // rcx
  int v28; // eax
  int v29; // eax
  __int128 v30; // [rsp+38h] [rbp-39h] BYREF

  v6 = 0;
  if ( a6 )
  {
    *((_QWORD *)&v30 + 1) = a2;
    LODWORD(v30) = 1;
    v28 = CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Push(a1 + 424, &v30);
    v25 = v28;
    if ( v28 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v28, 0x138Au);
      goto LABEL_23;
    }
    v6 = 1;
  }
  if ( !a5
    && (v10 = *(_DWORD *)(a1 + 704)) != 0
    && *(_DWORD *)(76LL * (unsigned int)(v10 - 1) + *(_QWORD *)(a1 + 680) + 4) )
  {
    if ( a4 == 1 )
      RoundWithHalvesDown(a3, &v30);
    else
      v30 = *(_OWORD *)a3;
    v29 = CBaseClipStack::Push((CBaseClipStack *)(a1 + 2544), (const struct MilRectF *)&v30);
    v25 = v29;
    if ( v29 >= 0 )
    {
LABEL_20:
      v26 = 76LL * (unsigned int)(*(_DWORD *)(a1 + 704) - 1);
      ++*(_DWORD *)(v26 + *(_QWORD *)(a1 + 680) + 4);
      goto LABEL_21;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v29, 0xECu);
  }
  else
  {
    if ( a4 == 1 )
    {
      v11 = 0x7FFFFFFF;
      v12 = *a3 - 0.5;
      if ( v12 < -2147483600.0 )
      {
        v13 = 0x80000000;
      }
      else if ( v12 >= 2147483600.0 )
      {
        v13 = 0x7FFFFFFF;
      }
      else
      {
        v13 = (int)ceilf_0(v12);
      }
      v14 = a3[1] - 0.5;
      v15 = (float)v13;
      if ( v14 < -2147483600.0 )
      {
        v16 = 0x80000000;
      }
      else if ( v14 >= 2147483600.0 )
      {
        v16 = 0x7FFFFFFF;
      }
      else
      {
        v16 = (int)ceilf_0(v14);
      }
      v17 = a3[2] - 0.5;
      v18 = (float)v16;
      if ( v17 < -2147483600.0 )
      {
        v19 = 0x80000000;
      }
      else if ( v17 >= 2147483600.0 )
      {
        v19 = 0x7FFFFFFF;
      }
      else
      {
        v19 = (int)ceilf_0(v17);
      }
      v20 = a3[3] - 0.5;
      v21 = (float)v19;
      if ( v20 < -2147483600.0 )
      {
        v11 = 0x80000000;
      }
      else if ( v20 < 2147483600.0 )
      {
        v11 = (int)ceilf_0(v20);
      }
      v22 = (float)v11;
    }
    else
    {
      v15 = *a3;
      v18 = a3[1];
      v21 = a3[2];
      v22 = a3[3];
    }
    *(_QWORD *)&v30 = __PAIR64__(LODWORD(v18), LODWORD(v15));
    *((_QWORD *)&v30 + 1) = __PAIR64__(LODWORD(v22), LODWORD(v21));
    v23 = CWatermarkStack<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,8,2,8>::Push(
            a1 + 2552,
            &v30);
    v25 = v23;
    if ( v23 >= 0 )
      goto LABEL_20;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0xE8u);
  }
LABEL_21:
  if ( v25 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, 0x1391u);
  else
    *(_WORD *)(a1 + 5965) = 257;
LABEL_23:
  if ( v25 < 0 && v6 )
    CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop(a1 + 424, 0LL, v24);
  return (unsigned int)v25;
}
