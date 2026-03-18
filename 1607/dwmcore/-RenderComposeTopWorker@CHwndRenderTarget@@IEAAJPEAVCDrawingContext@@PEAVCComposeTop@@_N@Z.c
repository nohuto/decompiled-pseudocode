/*
 * XREFs of ?RenderComposeTopWorker@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x1800BC9F0
 * Callers:
 *     ?RenderComposeTop@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x180073FD0 (-RenderComposeTop@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 * Callees:
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x1800057C0 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004B800 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N3@Z @ 0x18006DE9C (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?ReadTexture@CDrawingContext@@QEAAJXZ @ 0x1801076EC (-ReadTexture@CDrawingContext@@QEAAJXZ.c)
 *     ?RenderTargetRectToDesktopRect@CHwndRenderTarget@@IEAAX_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180107958 (-RenderTargetRectToDesktopRect@CHwndRenderTarget@@IEAAX_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 *     ?NotifyRenderedRect@CHwndRenderTarget@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1801079E8 (-NotifyRenderedRect@CHwndRenderTarget@@AEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotN.c)
 *     ?FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@PEAV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180111CC4 (-FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@PEAV-$CMatrix@UPageInPixels@CoordinateSpace@@.c)
 *     ?NewContentRendered@CComposeTop@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180111D5C (-NewContentRendered@CComposeTop@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@.c)
 *     ?RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@PEAV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@PEAVCShape@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801530A8 (-RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@PEAV-$CMatrix@UPageInPixels@CoordinateSpace.c)
 */

__int64 __fastcall CHwndRenderTarget::RenderComposeTopWorker(
        CHwndRenderTarget *this,
        struct CDrawingContext *a2,
        struct CComposeTop *a3,
        char a4)
{
  unsigned int v4; // ebx
  char v5; // r12
  float v9; // xmm0_4
  float v10; // xmm1_4
  float v11; // xmm2_4
  float v12; // xmm3_4
  int v13; // eax
  __int64 v14; // rdx
  int v16; // eax
  int v17; // eax
  __int64 v18; // rax
  char *v19; // r8
  __int64 v20; // rax
  char *v21; // r8
  int v22; // eax
  int v23; // r9d
  unsigned int v24; // [rsp+20h] [rbp-50h]
  float v25; // [rsp+30h] [rbp-40h] BYREF
  float v26; // [rsp+34h] [rbp-3Ch]
  float v27; // [rsp+38h] [rbp-38h]
  float v28; // [rsp+3Ch] [rbp-34h]
  float v29; // [rsp+40h] [rbp-30h] BYREF
  float v30; // [rsp+44h] [rbp-2Ch]
  float v31; // [rsp+48h] [rbp-28h]
  float v32; // [rsp+4Ch] [rbp-24h]
  _BYTE v33[16]; // [rsp+50h] [rbp-20h] BYREF

  v4 = 0;
  v5 = 0;
  if ( !a4 )
  {
    if ( !*((_QWORD *)a3 + 2) )
      goto LABEL_18;
    (*(void (__fastcall **)(_QWORD, float *))(**((_QWORD **)this + 20) + 280LL))(*((_QWORD *)this + 20), &v29);
    v5 = 1;
    v17 = CDrawingContext::PushGpuClipRectInternal((__int64)a2, 0LL, &v29, 1, 0, 0);
    v4 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0xB90u);
      return v4;
    }
    v20 = *((_QWORD *)this + 92);
    if ( !v20 || (v21 = (char *)this + 272, !*(_BYTE *)(v20 + 1089)) )
      v21 = (char *)this + 204;
    v4 = 0;
    if ( *((_QWORD *)a3 + 2) )
    {
      v22 = CComposeTop::RenderWorker(a3, a2, v21);
      v4 = v22;
      if ( v22 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0x144u);
    }
    if ( (v4 & 0x80000000) != 0 )
    {
      v24 = 2972;
      v23 = v4;
    }
    else
    {
      v9 = v25;
      if ( v29 > v25 )
      {
        v9 = v29;
        v25 = v29;
      }
      v10 = v26;
      if ( v30 > v26 )
      {
        v10 = v30;
        v26 = v30;
      }
      v11 = v27;
      if ( v27 > v31 )
      {
        v11 = v31;
        v27 = v31;
      }
      v12 = v28;
      if ( v28 > v32 )
      {
        v12 = v32;
        v28 = v32;
      }
      if ( v11 <= v9 || v12 <= v10 )
      {
        v28 = 0.0;
        v27 = 0.0;
        v26 = 0.0;
        v25 = 0.0;
      }
      if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(&v25) )
        goto LABEL_18;
      v13 = CHwndRenderTarget::NotifyRenderedRect(this, &v25, 0LL);
      v4 = v13;
      if ( v13 < 0 )
      {
        v24 = 2985;
      }
      else
      {
        CHwndRenderTarget::RenderTargetRectToDesktopRect(this, v14, &v25, v33);
        v13 = CComposeTop::NewContentRendered(a3);
        v4 = v13;
        if ( v13 >= 0 )
          goto LABEL_18;
        v24 = 2999;
      }
      v23 = v13;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, v24);
LABEL_21:
    CDrawingContext::PopGpuClipRectInternal(a2, 0);
    return v4;
  }
  (*(void (__fastcall **)(_QWORD, float *))(**((_QWORD **)this + 20) + 64LL))(*((_QWORD *)this + 20), &v29);
  v18 = *((_QWORD *)this + 92);
  if ( !v18 || (v19 = (char *)this + 272, !*(_BYTE *)(v18 + 1089)) )
    v19 = (char *)this + 204;
  v16 = CComposeTop::FullRender(a3, a2, v19, &v29);
  v4 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0xB81u);
    return v4;
  }
LABEL_18:
  if ( g_LockAndReadTarget )
    CDrawingContext::ReadTexture(a2);
  if ( v5 )
    goto LABEL_21;
  return v4;
}
