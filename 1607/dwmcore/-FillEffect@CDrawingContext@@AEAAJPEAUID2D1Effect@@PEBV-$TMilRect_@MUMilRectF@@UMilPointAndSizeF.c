/*
 * XREFs of ?FillEffect@CDrawingContext@@AEAAJPEAUID2D1Effect@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUD2D_POINT_2F@@_N@Z @ 0x180004788
 * Callers:
 *     ?RenderLayer@CFilterEffectLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x180012FE0 (-RenderLayer@CFilterEffectLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderLayer@CColorTransformLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18012F648 (-RenderLayer@CColorTransformLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?FillBlurEffect@CBlurLayer@@QEAAJPEAVCDrawingContext@@M@Z @ 0x18018C9E4 (-FillBlurEffect@CBlurLayer@@QEAAJPEAVCDrawingContext@@M@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18006E5B0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18006E9A0 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x18006F114 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?D2DInterpolationModeFromMilInterpolationMode@@YA?AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapInterpolationMode@@@Z @ 0x1800AF478 (-D2DInterpolationModeFromMilInterpolationMode@@YA-AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapIn.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::FillEffect(CDrawingContext *this, __int64 a2, __int64 a3, __int64 a4)
{
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  char *v11; // rdx
  int v12; // eax
  __int64 v13; // rdx
  int v14; // r9d
  int v15; // eax

  v8 = CDrawingContext::PushTransformInternal(this, 0LL, (const struct CMILMatrix *)&CMILMatrix::Identity, 0, 1);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xF57u);
  }
  else
  {
    v10 = CDrawingContext::ApplyRenderStateInternal(this, 0);
    v9 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xF5Bu);
    }
    else
    {
      if ( this )
        v11 = (char *)this + 128;
      else
        v11 = 0LL;
      v12 = D2DInterpolationModeFromMilInterpolationMode(*((unsigned int *)this + 81), v11);
      v15 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64, __int64, int, int))(**((_QWORD **)this + 57)
                                                                                            + 96LL))(
              *((_QWORD *)this + 57),
              v13,
              a2,
              a3,
              a4,
              v12,
              v14);
      v9 = v15;
      if ( v15 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xF69u);
    }
    CDrawingContext::PopTransformInternal(this, 1);
  }
  return v9;
}
