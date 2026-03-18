/*
 * XREFs of ?RenderComposeTopWorker@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x1800B8CE8
 * Callers:
 *     ?RenderComposeTop@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x18007BFF0 (-RenderComposeTop@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 * Callees:
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x18000DC18 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036DF0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?IntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180036E20 (-IntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N3@Z @ 0x180045C70 (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?RenderTargetRectToDesktopRect@CHwndRenderTarget@@IEAAXPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1800F3CF8 (-RenderTargetRectToDesktopRect@CHwndRenderTarget@@IEAAXPEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?NotifyRenderedRect@CHwndRenderTarget@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1800F3D6C (-NotifyRenderedRect@CHwndRenderTarget@@AEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotN.c)
 *     ?FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@PEAV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@@Z @ 0x1800FCD48 (-FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@PEAV-$CMatrix@UPageInPixels@CoordinateSpace@@.c)
 *     ?NewContentRendered@CComposeTop@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800FCDEC (-NewContentRendered@CComposeTop@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@.c)
 *     ?RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@PEAV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@PEAVCShape@@PEAVCOverlayContext@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180130C14 (-RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@PEAV-$CMatrix@UPageInPixels@CoordinateSpace.c)
 */

__int64 __fastcall CHwndRenderTarget::RenderComposeTopWorker(
        CHwndRenderTarget *this,
        struct CDrawingContext *a2,
        struct CComposeTop *a3,
        char a4)
{
  unsigned int v4; // esi
  char v5; // r12
  CDrawingContext *v7; // r13
  int v9; // eax
  __int64 v10; // rax
  int v11; // eax
  int v12; // eax
  int v13; // r9d
  int v14; // eax
  unsigned int v16; // [rsp+20h] [rbp-50h]
  float v17[4]; // [rsp+30h] [rbp-40h] BYREF
  float v18[4]; // [rsp+40h] [rbp-30h] BYREF
  _BYTE v19[16]; // [rsp+50h] [rbp-20h] BYREF

  v4 = 0;
  v5 = 0;
  v7 = a2;
  if ( !a4 )
  {
    if ( !*((_QWORD *)a3 + 2) )
      goto LABEL_23;
    v10 = *((_QWORD *)this + 68);
    v5 = 1;
    if ( v10 && *(_BYTE *)(v10 + 841) )
      LOBYTE(v4) = 1;
    LOBYTE(a2) = v4;
    (*(void (__fastcall **)(_QWORD, struct CDrawingContext *, float *))(**((_QWORD **)this + 11) + 264LL))(
      *((_QWORD *)this + 11),
      a2,
      v17);
    v11 = CDrawingContext::PushGpuClipRectInternal((__int64)v7, 0LL, v17, 1, 0, 0);
    v4 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xB0Du);
      return v4;
    }
    v4 = 0;
    if ( *((_QWORD *)a3 + 2) )
    {
      v12 = CComposeTop::RenderWorker(a3, v7, (char *)this + 132);
      v4 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x14Fu);
    }
    if ( (v4 & 0x80000000) == 0 )
    {
      TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IntersectUnsafe((__int64)v18, (__int64)v17);
      if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(v18) )
        goto LABEL_23;
      v14 = CHwndRenderTarget::NotifyRenderedRect(this, v18, 0LL);
      v4 = v14;
      if ( v14 >= 0 )
      {
        CHwndRenderTarget::RenderTargetRectToDesktopRect(this, v18, v19);
        v14 = CComposeTop::NewContentRendered(a3, (struct MilRectF *)v19);
        v4 = v14;
        if ( v14 >= 0 )
          goto LABEL_23;
        v16 = 2868;
      }
      else
      {
        v16 = 2855;
      }
      v13 = v14;
    }
    else
    {
      v16 = 2842;
      v13 = v4;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, v16);
LABEL_26:
    CDrawingContext::PopGpuClipRectInternal(v7, 0);
    return v4;
  }
  (*(void (__fastcall **)(_QWORD, float *))(**((_QWORD **)this + 11) + 64LL))(*((_QWORD *)this + 11), v17);
  v9 = CComposeTop::FullRender((_DWORD)a3, (_DWORD)v7, (int)this + 132, (unsigned int)v17, *((_QWORD *)this + 68));
  v4 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xAFDu);
    return v4;
  }
LABEL_23:
  if ( g_LockAndReadTarget )
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 11) + 168LL))(
      *((_QWORD *)this + 11),
      0LL,
      0LL);
  if ( v5 )
    goto LABEL_26;
  return v4;
}
