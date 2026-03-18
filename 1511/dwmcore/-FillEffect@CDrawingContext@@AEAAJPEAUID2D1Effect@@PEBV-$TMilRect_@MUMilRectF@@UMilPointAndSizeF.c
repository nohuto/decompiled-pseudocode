/*
 * XREFs of ?FillEffect@CDrawingContext@@AEAAJPEAUID2D1Effect@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUD2D_POINT_2F@@_N@Z @ 0x18000E180
 * Callers:
 *     ?RenderLayer@CFilterEffectLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x180019DB4 (-RenderLayer@CFilterEffectLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderLayer@CColorTransformLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x180115934 (-RenderLayer@CColorTransformLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180046380 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180046830 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x180046E74 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?D2DInterpolationModeFromMilInterpolationMode@@YA?AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapInterpolationMode@@@Z @ 0x1800AC040 (-D2DInterpolationModeFromMilInterpolationMode@@YA-AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapIn.c)
 */

__int64 __fastcall CDrawingContext::FillEffect(CDrawingContext *this, __int64 a2, __int64 a3, __int64 a4)
{
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // eax
  char *v10; // r15
  int v11; // ebp
  int v12; // eax
  int v13; // eax

  v7 = CDrawingContext::PushTransformInternal(this, 0LL, (const struct CMILMatrix *)&IdentityMatrix, 0, 1);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xFA1u);
  }
  else
  {
    v9 = CDrawingContext::ApplyRenderStateInternal(this, 0);
    v8 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xFA5u);
    }
    else
    {
      if ( this )
        v10 = (char *)this + 56;
      else
        v10 = 0LL;
      v11 = 0;
      if ( *((_DWORD *)this + 68) == 2 )
        v11 = 12;
      v12 = D2DInterpolationModeFromMilInterpolationMode(*((unsigned int *)this + 61));
      v13 = (*(__int64 (__fastcall **)(_QWORD, char *, __int64, __int64, __int64, int, int))(**((_QWORD **)this + 47)
                                                                                           + 96LL))(
              *((_QWORD *)this + 47),
              v10,
              a2,
              a3,
              a4,
              v12,
              v11);
      v8 = v13;
      if ( v13 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xFB3u);
    }
    CDrawingContext::PopTransformInternal(this, 1);
  }
  return v8;
}
