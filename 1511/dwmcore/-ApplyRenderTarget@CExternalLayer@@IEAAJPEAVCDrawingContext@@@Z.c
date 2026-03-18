/*
 * XREFs of ?ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x180010E18
 * Callers:
 *     ?ApplyState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180010CE0 (-ApplyState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?ApplyState@CClippedBitmapLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180114F60 (-ApplyState@CClippedBitmapLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x18000DC18 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 *     ?GetBitmapTexture@CHwTextureRenderTarget@@UEAAJPEAPEAVCD3DTexture@@@Z @ 0x180010FF0 (-GetBitmapTexture@CHwTextureRenderTarget@@UEAAJPEAPEAVCD3DTexture@@@Z.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Release@CD3DSurface@@UEAAKXZ @ 0x180027B50 (-Release@CD3DSurface@@UEAAKXZ.c)
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z @ 0x180044C40 (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z.c)
 *     ?Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x180044FA0 (-Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N3@Z @ 0x180045C70 (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall CExternalLayer::ApplyRenderTarget(CExternalLayer *this, struct CDrawingContext *a2)
{
  struct IRenderTarget *v3; // rdx
  int v5; // eax
  unsigned int v6; // ebx
  CHwTextureRenderTarget *v7; // rbx
  __int64 (__fastcall *v8)(CHwTextureRenderTarget *__hidden, struct CD3DTexture **); // r14
  int BitmapTexture; // eax
  float v10; // xmm1_4
  int v11; // eax
  __m128i v12; // xmm0
  __m128i v13; // xmm1
  unsigned int (__fastcall *v14)(CD3DSurface *__hidden); // rsi
  int v16; // r9d
  unsigned int v17; // [rsp+20h] [rbp-40h]
  CD3DSurface *v18; // [rsp+30h] [rbp-30h] BYREF
  int v19; // [rsp+38h] [rbp-28h] BYREF
  int v20; // [rsp+3Ch] [rbp-24h]
  float v21; // [rsp+40h] [rbp-20h]
  float v22; // [rsp+44h] [rbp-1Ch]
  struct _D3DCOLORVALUE v23; // [rsp+48h] [rbp-18h] BYREF

  v18 = 0LL;
  v3 = (struct IRenderTarget *)*((_QWORD *)this + 1);
  *(_QWORD *)&v23.r = 0LL;
  *(_QWORD *)&v23.b = 0LL;
  v5 = CDrawingContext::PushRenderTarget(a2, v3);
  v6 = v5;
  if ( v5 < 0 )
  {
    v17 = 116;
LABEL_15:
    v16 = v5;
LABEL_17:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, v17);
    goto LABEL_9;
  }
  v7 = (CHwTextureRenderTarget *)*((_QWORD *)this + 1);
  *((_BYTE *)this + 33) = 1;
  v8 = *(__int64 (__fastcall **)(CHwTextureRenderTarget *__hidden, struct CD3DTexture **))(*(_QWORD *)v7 + 184LL);
  if ( v8 == CHwTextureRenderTarget::GetBitmapTexture )
    BitmapTexture = CHwTextureRenderTarget::GetBitmapTexture(v7, &v18);
  else
    BitmapTexture = v8(v7, &v18);
  v6 = BitmapTexture;
  if ( BitmapTexture < 0 )
  {
    v17 = 130;
    v16 = BitmapTexture;
    goto LABEL_17;
  }
  v19 = 0;
  v20 = 0;
  v10 = (float)*((int *)v18 + 35);
  v21 = (float)*((int *)v18 + 34);
  v22 = v10;
  v5 = CDrawingContext::PushGpuClipRectInternal((_DWORD)a2, 0, (unsigned int)&v19, 1, 1, 0);
  v6 = v5;
  if ( v5 < 0 )
  {
    v17 = 137;
    goto LABEL_15;
  }
  v11 = CDrawingContext::Clear(a2, &v23);
  v6 = v11;
  if ( v11 >= 0 )
  {
    CDrawingContext::PopGpuClipRectInternal(a2, 0);
    v12 = _mm_cvtsi32_si128(*((_DWORD *)this + 7));
    v13 = _mm_cvtsi32_si128(*((_DWORD *)this + 6));
    v19 = 0;
    v20 = 0;
    LODWORD(v22) = _mm_cvtepi32_ps(v12).m128_u32[0];
    LODWORD(v21) = _mm_cvtepi32_ps(v13).m128_u32[0];
    v5 = CDrawingContext::PushGpuClipRectInternal((_DWORD)a2, 0, (unsigned int)&v19, 1, 1, 0);
    v6 = v5;
    if ( v5 >= 0 )
    {
      *((_BYTE *)this + 34) = 1;
      goto LABEL_9;
    }
    v17 = 155;
    goto LABEL_15;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x8Cu);
  CDrawingContext::PopGpuClipRectInternal(a2, 0);
LABEL_9:
  if ( v18 )
  {
    v14 = *(unsigned int (__fastcall **)(CD3DSurface *__hidden))(*(_QWORD *)v18 + 8LL);
    if ( v14 == CD3DSurface::Release )
      CD3DSurface::Release(v18);
    else
      v14(v18);
  }
  return v6;
}
