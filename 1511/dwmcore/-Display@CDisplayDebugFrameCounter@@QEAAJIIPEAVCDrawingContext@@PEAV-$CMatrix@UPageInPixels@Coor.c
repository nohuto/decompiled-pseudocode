/*
 * XREFs of ?Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@PEAV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4DebugFrameCounterPosition@1@PEAV4@@Z @ 0x1801032E0
 * Callers:
 *     ?RenderDebugFrameCounter@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1801063B8 (-RenderDebugFrameCounter@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x180045EE0 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180046380 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180046830 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x180046E74 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x180046ED0 (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?D2DMatrixIsIdentity@@YAHPEBUD2DMatrix@@@Z @ 0x180047060 (-D2DMatrixIsIdentity@@YAHPEBUD2DMatrix@@@Z.c)
 *     ?Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z @ 0x180047C60 (-Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z.c)
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x180066F90 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     memset_0 @ 0x1800BC8D2 (memset_0.c)
 *     ?DisplayText@CDisplayDebugFrameCounter@@IEAAJIIPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4DebugFrameCounterPosition@1@PEAV3@@Z @ 0x180103650 (-DisplayText@CDisplayDebugFrameCounter@@IEAAJIIPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@@.c)
 *     ?Rotate90@CBaseMatrix@@QEAAXXZ @ 0x180138F24 (-Rotate90@CBaseMatrix@@QEAAXXZ.c)
 */

__int64 __fastcall CDisplayDebugFrameCounter::Display(
        CDisplayDebugFrameCounter *this,
        unsigned int a2,
        unsigned int a3,
        CDrawingContext *a4,
        struct D2DMatrix *a5,
        __int64 a6,
        int a7,
        _OWORD *a8)
{
  CBaseMatrix *v8; // r14
  _OWORD *v12; // r9
  const struct MilRectF *v13; // r9
  int v14; // eax
  unsigned int v15; // ebx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v21; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD v22[11]; // [rsp+4Ch] [rbp-B4h] BYREF
  __int64 v23[3]; // [rsp+78h] [rbp-88h] BYREF
  int v24; // [rsp+90h] [rbp-70h] BYREF
  int v25; // [rsp+94h] [rbp-6Ch]
  int v26; // [rsp+98h] [rbp-68h]
  int v27; // [rsp+9Ch] [rbp-64h]
  int v28; // [rsp+A0h] [rbp-60h]
  int v29; // [rsp+A4h] [rbp-5Ch]
  int v30; // [rsp+A8h] [rbp-58h]
  int v31; // [rsp+ACh] [rbp-54h]
  int v32; // [rsp+B0h] [rbp-50h]
  int v33; // [rsp+B4h] [rbp-4Ch]
  int v34; // [rsp+B8h] [rbp-48h]
  int v35; // [rsp+BCh] [rbp-44h]
  float v36; // [rsp+C0h] [rbp-40h]
  float v37; // [rsp+C4h] [rbp-3Ch]
  int v38; // [rsp+C8h] [rbp-38h]
  int v39; // [rsp+CCh] [rbp-34h]
  __int64 v40[2]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v41[64]; // [rsp+E0h] [rbp-20h] BYREF

  v8 = 0LL;
  v38 = 0;
  v37 = 0.0;
  v36 = 0.0;
  v35 = 0;
  v33 = 0;
  v32 = 0;
  v31 = 0;
  v30 = 0;
  v28 = 0;
  v27 = 0;
  v26 = 0;
  v25 = 0;
  v39 = 1065353216;
  v34 = 1065353216;
  v29 = 1065353216;
  v24 = 1065353216;
  D2DMatrixMultiply((struct D2DMatrix *)v41, (const struct D2DMatrix *)&v24, a5);
  *(_OWORD *)v40 = *v12;
  if ( !D2DMatrixIsIdentity((const struct D2DMatrix *)v41) )
    CBaseMatrix::Transform2DBounds((CBaseMatrix *)v41, v13, (struct MilRectF *)v40);
  if ( a7 == 1 )
  {
    v38 = 0;
    v37 = 0.0;
    v36 = 0.0;
    v35 = 0;
    v33 = 0;
    v32 = 0;
    v31 = 0;
    v30 = 0;
    v28 = 0;
    v27 = 0;
    v26 = 0;
    v25 = 0;
    v39 = 1065353216;
    v34 = 1065353216;
    v29 = 1065353216;
    v24 = 1065353216;
    CBaseMatrix::Rotate90((CBaseMatrix *)&v24);
    v37 = v37 + 0.0;
    v36 = v36 + *(float *)&v40[1];
    D2DMatrixMultiply((struct D2DMatrix *)v41, (const struct D2DMatrix *)v41, (const struct D2DMatrix *)&v24);
    v8 = (CBaseMatrix *)&v24;
  }
  v23[1] = 0LL;
  v23[0] = 0LL;
  memset_0(v22, 0, 0x28uLL);
  v22[0] = 0;
  v21 = 2;
  v14 = CDrawingContext::PushRenderOptionsInternal(a4, 0LL, (const struct MilRenderOptions *)&v21, 1);
  v15 = v14;
  if ( v14 >= 0 )
  {
    v16 = CDrawingContext::PushTransformInternal(a4, 0LL, (const struct CMILMatrix *)v41, 0, 1);
    v15 = v16;
    if ( v16 >= 0 )
    {
      v17 = CDrawingContext::ApplyRenderStateInternal(a4, 0);
      v15 = v17;
      if ( v17 >= 0 )
      {
        v18 = CDisplayDebugFrameCounter::DisplayText(this, a2, a3, (bool)a4, (__int64)v40, a7, (__int64)v23);
        v15 = v18;
        if ( v18 >= 0 )
        {
          if ( v8 )
          {
            *(_OWORD *)v40 = *(_OWORD *)v23;
            CBaseMatrix::Transform2DBounds(v8, (const struct MilRectF *)v40, (struct MilRectF *)v23);
          }
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x50u);
        }
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x4Eu);
      }
      CDrawingContext::PopTransformInternal(a4, 1);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x4Au);
    }
    CDrawingContext::PopRenderOptionsInternal(a4, 1);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x47u);
  }
  if ( a8 )
    *a8 = *(_OWORD *)v23;
  return v15;
}
