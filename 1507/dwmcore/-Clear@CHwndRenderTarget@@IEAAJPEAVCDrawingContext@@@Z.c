/*
 * XREFs of ?Clear@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800E9CF8
 * Callers:
 *     ?EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ @ 0x18004AC20 (-EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ.c)
 *     ?EnsureHwRenderTarget@CHwndRenderTarget@@MEAAJPEAVCMILFactory@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x18004ADC0 (-EnsureHwRenderTarget@CHwndRenderTarget@@MEAAJPEAVCMILFactory@@U-$TMILFlagsEnum@W4FlagsEnum@MilR.c)
 *     ?Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z @ 0x18004CCC0 (-Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z.c)
 * Callees:
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEAU_D3DCOLORVALUE@@_NPEAV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0DA@@@2PEAVCHwndRenderTarget@@@Z @ 0x18002EA00 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEAU_D3DCOLORVALUE@@_NPEAV-$CMatrix@UPageIn.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18002EDE0 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x18002F290 (-Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?GetDrawingContext@CRenderTarget@@IEAAJPEAPEAVCDrawingContext@@_N@Z @ 0x180058584 (-GetDrawingContext@CRenderTarget@@IEAAJPEAPEAVCDrawingContext@@_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?NotifyRenderedRect@CHwndRenderTarget@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1800DC3EC (-NotifyRenderedRect@CHwndRenderTarget@@AEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotN.c)
 */

__int64 __fastcall CHwndRenderTarget::Clear(CHwndRenderTarget *this, struct CDrawingContext *a2)
{
  CDrawingContext *v2; // rdi
  int DrawingContext; // eax
  unsigned int v5; // ebx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  struct CDrawingContext *v10; // [rsp+58h] [rbp+10h] BYREF

  v10 = a2;
  v2 = a2;
  if ( !a2 )
  {
    DrawingContext = CRenderTarget::GetDrawingContext(this, &v10);
    v5 = DrawingContext;
    if ( DrawingContext < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, DrawingContext, 0x18Au);
      return v5;
    }
    v2 = v10;
  }
  v6 = CDrawingContext::BeginFrame(
         v2,
         *((struct IRenderTarget **)this + 11),
         (_OWORD *)this + 14,
         *((_BYTE *)this + 560),
         (CHwndRenderTarget *)((char *)this + 132),
         0LL,
         0,
         0LL);
  v5 = v6;
  if ( v6 >= 0 )
  {
    v7 = CDrawingContext::Clear(v2, (const struct _D3DCOLORVALUE *)this + 14);
    v5 = v7;
    if ( v7 >= 0 )
    {
      v8 = CHwndRenderTarget::NotifyRenderedRect((__int64)this, 0LL, 1);
      v5 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x197u);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x193u);
    }
    CDrawingContext::EndFrame(v2);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x190u);
  }
  return v5;
}
