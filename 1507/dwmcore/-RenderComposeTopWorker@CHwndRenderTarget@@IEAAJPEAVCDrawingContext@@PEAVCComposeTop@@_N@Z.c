/*
 * XREFs of ?RenderComposeTopWorker@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x1800EA6F8
 * Callers:
 *     ?RenderComposeTop@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x1800EA5C8 (-RenderComposeTop@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004E0A0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?NotifyRenderedRect@CHwndRenderTarget@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1800DC3EC (-NotifyRenderedRect@CHwndRenderTarget@@AEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotN.c)
 *     ?RenderTargetRectToDesktopRect@CHwndRenderTarget@@IEAAXPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1800EAAE0 (-RenderTargetRectToDesktopRect@CHwndRenderTarget@@IEAAXPEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@PEAV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180119DC4 (-FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@PEAV-$CMatrix@UPageInPixels@CoordinateSpace@@.c)
 *     ?NewContentRendered@CComposeTop@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180119E5C (-NewContentRendered@CComposeTop@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@.c)
 *     ?RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@PEAV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@PEAVCShape@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180119FE8 (-RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@PEAV-$CMatrix@UPageInPixels@CoordinateSpace.c)
 */

__int64 __fastcall CHwndRenderTarget::RenderComposeTopWorker(
        CHwndRenderTarget *this,
        struct CDrawingContext *a2,
        struct CComposeTop *a3,
        char a4)
{
  unsigned int v4; // esi
  int v8; // eax
  int v9; // eax
  int v10; // r9d
  float v11; // xmm3_4
  float v12; // xmm0_4
  float v13; // xmm1_4
  float v14; // xmm2_4
  int v15; // eax
  unsigned int v17; // [rsp+20h] [rbp-50h]
  float v18; // [rsp+30h] [rbp-40h] BYREF
  float v19; // [rsp+34h] [rbp-3Ch]
  float v20; // [rsp+38h] [rbp-38h]
  float v21; // [rsp+3Ch] [rbp-34h]
  float v22; // [rsp+40h] [rbp-30h] BYREF
  float v23; // [rsp+44h] [rbp-2Ch]
  float v24; // [rsp+48h] [rbp-28h]
  float v25; // [rsp+4Ch] [rbp-24h]
  _BYTE v26[16]; // [rsp+50h] [rbp-20h] BYREF

  v4 = 0;
  if ( !a4 )
  {
    if ( !*((_QWORD *)a3 + 2) )
      goto LABEL_28;
    v9 = CComposeTop::RenderWorker(a3, a2, (char *)this + 132);
    v4 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x14Du);
    if ( (v4 & 0x80000000) == 0 )
    {
      (*(void (__fastcall **)(_QWORD, float *))(**((_QWORD **)this + 11) + 256LL))(*((_QWORD *)this + 11), &v22);
      v11 = v18;
      if ( v22 > v18 )
      {
        v11 = v22;
        v18 = v22;
      }
      v12 = v19;
      if ( v23 > v19 )
      {
        v12 = v23;
        v19 = v23;
      }
      v13 = v20;
      if ( v20 > v24 )
      {
        v13 = v24;
        v20 = v24;
      }
      v14 = v21;
      if ( v21 > v25 )
      {
        v14 = v25;
        v21 = v25;
      }
      if ( v13 <= v11 || v14 <= v12 )
      {
        v21 = 0.0;
        v20 = 0.0;
        v19 = 0.0;
        v18 = 0.0;
      }
      if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(&v18) )
        goto LABEL_28;
      v15 = CHwndRenderTarget::NotifyRenderedRect((__int64)this, (const struct MilRectF *)&v18, 0);
      v4 = v15;
      if ( v15 >= 0 )
      {
        CHwndRenderTarget::RenderTargetRectToDesktopRect(this, &v18, v26);
        v15 = CComposeTop::NewContentRendered(a3, (struct MilRectF *)v26);
        v4 = v15;
        if ( v15 >= 0 )
          goto LABEL_28;
        v17 = 2947;
      }
      else
      {
        v17 = 2934;
      }
      v10 = v15;
    }
    else
    {
      v17 = 2915;
      v10 = v4;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, v17);
    return v4;
  }
  (*(void (__fastcall **)(_QWORD, float *))(**((_QWORD **)this + 11) + 64LL))(*((_QWORD *)this + 11), &v22);
  v8 = CComposeTop::FullRender(a3, a2, (char *)this + 132, &v22);
  v4 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xB51u);
    return v4;
  }
LABEL_28:
  if ( g_LockAndReadTarget )
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 11) + 168LL))(
      *((_QWORD *)this + 11),
      0LL,
      0LL);
  return v4;
}
