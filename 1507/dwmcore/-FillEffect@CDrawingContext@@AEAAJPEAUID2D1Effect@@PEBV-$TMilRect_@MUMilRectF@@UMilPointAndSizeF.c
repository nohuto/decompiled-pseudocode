/*
 * XREFs of ?FillEffect@CDrawingContext@@AEAAJPEAUID2D1Effect@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUD2D_POINT_2F@@_NPEBUMilPointAndSizeF@@@Z @ 0x1800107A4
 * Callers:
 *     ?RenderLayer@CFilterEffectLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x180001984 (-RenderLayer@CFilterEffectLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderLayer@CColorTransformLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800FBB60 (-RenderLayer@CColorTransformLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x180010764 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 *     ?PushClipRectForNode@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x180022DEC (-PushClipRectForNode@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAnd.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180030500 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180030950 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800310B0 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?Top@?$CWatermarkStack@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$07$01$07@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x180059230 (-Top@-$CWatermarkStack@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetD2DInterpolationMode@CDrawingContext@@IEBA?AW4D2D1_INTERPOLATION_MODE@@XZ @ 0x180097AB0 (-GetD2DInterpolationMode@CDrawingContext@@IEBA-AW4D2D1_INTERPOLATION_MODE@@XZ.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CDrawingContext::FillEffect(
        CDrawingContext *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6)
{
  float *v9; // r10
  float v10; // xmm2_4
  float v11; // xmm1_4
  float v12; // xmm2_4
  int v13; // eax
  unsigned int v14; // ebx
  int v15; // eax
  int v16; // eax
  char *v17; // r15
  __int64 v18; // r14
  int v19; // esi
  enum D2D1_INTERPOLATION_MODE D2DInterpolationMode; // eax
  __int64 v21; // r10
  int v22; // eax
  _BYTE v25[8]; // [rsp+48h] [rbp-70h] BYREF
  __int64 v26; // [rsp+50h] [rbp-68h]
  float v27[4]; // [rsp+58h] [rbp-60h] BYREF

  if ( !a6 )
    goto LABEL_3;
  CWatermarkStack<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,8,2,8>::Top(
    (char *)this + 424,
    v25);
  CDrawingContext::PopGpuClipRectInternal(this, 1);
  v10 = v9[1];
  v27[0] = *v9;
  v11 = v27[0] + v9[2];
  v27[1] = v10;
  v12 = v10 + v9[3];
  v27[2] = v11;
  v27[3] = v12;
  v13 = CDrawingContext::PushClipRectForNode(this, v26, v27, 0LL);
  v14 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xF85u);
  }
  else
  {
LABEL_3:
    v15 = CDrawingContext::PushTransformInternal(this, 0LL, (const struct CMILMatrix *)&IdentityMatrix, 0, 1);
    v14 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xF8Au);
    }
    else
    {
      v16 = CDrawingContext::ApplyRenderStateInternal(this, 0);
      v14 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0xF8Eu);
      }
      else
      {
        if ( this )
          v17 = (char *)this + 56;
        else
          v17 = 0LL;
        v18 = *((_QWORD *)this + 47);
        v19 = 0;
        if ( *((_DWORD *)this + 68) == 2 )
          v19 = 12;
        D2DInterpolationMode = CDrawingContext::GetD2DInterpolationMode(this);
        v22 = (*(__int64 (__fastcall **)(__int64, char *, __int64, __int64, __int64, enum D2D1_INTERPOLATION_MODE, int))(v21 + 96))(
                v18,
                v17,
                a2,
                a3,
                a4,
                D2DInterpolationMode,
                v19);
        v14 = v22;
        if ( v22 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0xF9Cu);
      }
      CDrawingContext::PopTransformInternal(this, 1);
    }
  }
  return v14;
}
