/*
 * XREFs of ?Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@PEAV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4DebugFrameCounterPosition@1@PEAV4@@Z @ 0x1801194A4
 * Callers:
 *     ?RenderDebugFrameCounter@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x18011C858 (-RenderDebugFrameCounter@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800035A8 (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180025320 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x180058CF0 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059E20 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?Rotate90@CMILMatrix@@QEAAXXZ @ 0x18005B50C (-Rotate90@CMILMatrix@@QEAAXXZ.c)
 *     ?Translate@CMILMatrix@@QEAAXMMM@Z @ 0x18005B548 (-Translate@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x18005B70C (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x18006E110 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18006E5B0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18006E9A0 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x18006F114 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     ?DisplayText@CDisplayDebugFrameCounter@@IEAAJIIPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4DebugFrameCounterPosition@1@PEAV3@@Z @ 0x1801197D4 (-DisplayText@CDisplayDebugFrameCounter@@IEAAJIIPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@@.c)
 */

__int64 __fastcall CDisplayDebugFrameCounter::Display(
        CDisplayDebugFrameCounter *this,
        unsigned int a2,
        unsigned int a3,
        CDrawingContext *a4,
        struct CMILMatrix *a5,
        _OWORD *a6,
        int a7,
        _OWORD *a8)
{
  _OWORD *v10; // r14
  int v12; // eax
  unsigned int v13; // ebx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  _OWORD v19[4]; // [rsp+50h] [rbp-B0h] BYREF
  int v20; // [rsp+90h] [rbp-70h]
  _OWORD v21[4]; // [rsp+A0h] [rbp-60h] BYREF
  int v22; // [rsp+E0h] [rbp-20h]
  _BYTE v23[64]; // [rsp+F0h] [rbp-10h] BYREF
  int v24; // [rsp+130h] [rbp+30h]
  __int64 v25[2]; // [rsp+140h] [rbp+40h] BYREF
  __int64 v26[2]; // [rsp+150h] [rbp+50h] BYREF

  v10 = 0LL;
  v20 = 0;
  v24 = 0;
  v21[0] = CMILMatrix::Identity;
  v21[1] = xmmword_1801EAD20;
  v21[2] = xmmword_1801EAD30;
  v21[3] = xmmword_1801EAD40;
  v22 = dword_1801EAD50;
  CMILMatrix::Multiply((const struct CMILMatrix *)v21, a5, (struct CMILMatrix *)v23);
  *(_OWORD *)v26 = *a6;
  if ( !CMILMatrix::IsIdentity<0>((__int64)v23) )
    CMILMatrix::Transform2DBoundsHelper<0>((__int64)v23, (__int64)a6, (float *)v26);
  if ( a7 == 1 )
  {
    v19[0] = _xmm;
    LOWORD(v20) = 32085;
    v19[1] = _xmm;
    v19[2] = _xmm;
    v19[3] = _xmm;
    CMILMatrix::Rotate90((CMILMatrix *)v19);
    CMILMatrix::Translate((CMILMatrix *)v19, *(float *)&v26[1], 0.0, 0.0);
    CMILMatrix::Multiply((CMILMatrix *)v23, (const struct CMILMatrix *)v19);
    v10 = v19;
  }
  v25[1] = 0LL;
  v25[0] = 0LL;
  memset_0((char *)v21 + 4, 0, 0x24uLL);
  *(_QWORD *)&v21[0] = 2LL;
  v12 = CDrawingContext::PushRenderOptionsInternal(a4, 0LL, (const struct MilRenderOptions *)v21, 1);
  v13 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x47u);
  }
  else
  {
    v14 = CDrawingContext::PushTransformInternal(a4, 0LL, (const struct CMILMatrix *)v23, 0, 1);
    v13 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x4Au);
    }
    else
    {
      v15 = CDrawingContext::ApplyRenderStateInternal(a4, 0);
      v13 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x4Eu);
      }
      else
      {
        v16 = CDisplayDebugFrameCounter::DisplayText(this, a2, a3, a4, (__int64)v26, a7, (__int64)v25);
        v13 = v16;
        if ( v16 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x50u);
        }
        else if ( v10 )
        {
          *(_OWORD *)v26 = *(_OWORD *)v25;
          CMILMatrix::Transform2DBoundsHelper<0>((__int64)v10, (__int64)v26, (float *)v25);
        }
      }
      CDrawingContext::PopTransformInternal(a4, 1);
    }
    CDrawingContext::PopRenderOptionsInternal(a4, 1);
  }
  if ( a8 )
    *a8 = *(_OWORD *)v25;
  return v13;
}
