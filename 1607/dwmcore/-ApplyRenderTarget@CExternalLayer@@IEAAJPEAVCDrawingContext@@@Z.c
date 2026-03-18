/*
 * XREFs of ?ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x180013898
 * Callers:
 *     ?ApplyState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180013B20 (-ApplyState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?ApplyState@CClippedBitmapLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18012EAB0 (-ApplyState@CClippedBitmapLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x1800057C0 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 *     ?GetBitmapTexture@CHwTextureRenderTarget@@UEAAJPEAPEAVCD3DTexture@@@Z @ 0x180013C20 (-GetBitmapTexture@CHwTextureRenderTarget@@UEAAJPEAPEAVCD3DTexture@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z @ 0x18006D260 (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z.c)
 *     ?Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x18006D550 (-Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N3@Z @ 0x18006DE9C (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?Release@CD3DSurface@@UEAAKXZ @ 0x180079680 (-Release@CD3DSurface@@UEAAKXZ.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CExternalLayer::ApplyRenderTarget(CExternalLayer *this, struct CDrawingContext *a2)
{
  struct IRenderTarget *v3; // rdx
  int v5; // eax
  unsigned int v6; // ebx
  CHwTextureRenderTarget *v7; // rcx
  __int64 (__fastcall *v8)(CHwTextureRenderTarget *__hidden, struct CD3DTexture **); // rax
  int BitmapTexture; // eax
  float v10; // xmm1_4
  int v11; // eax
  __m128i v12; // xmm0
  __m128i v13; // xmm1
  void (*v14)(void); // rax
  unsigned int v16; // [rsp+20h] [rbp-40h]
  CD3DSurface *v17; // [rsp+30h] [rbp-30h] BYREF
  int v18; // [rsp+38h] [rbp-28h] BYREF
  int v19; // [rsp+3Ch] [rbp-24h]
  float v20; // [rsp+40h] [rbp-20h]
  float v21; // [rsp+44h] [rbp-1Ch]
  struct _D3DCOLORVALUE v22; // [rsp+48h] [rbp-18h] BYREF

  v17 = 0LL;
  v3 = (struct IRenderTarget *)*((_QWORD *)this + 1);
  *(_QWORD *)&v22.r = 0LL;
  *(_QWORD *)&v22.b = 0LL;
  v5 = CDrawingContext::PushRenderTarget(a2, v3);
  v6 = v5;
  if ( v5 < 0 )
  {
    v16 = 137;
  }
  else
  {
    v7 = (CHwTextureRenderTarget *)*((_QWORD *)this + 1);
    *((_BYTE *)this + 33) = 1;
    v8 = *(__int64 (__fastcall **)(CHwTextureRenderTarget *__hidden, struct CD3DTexture **))(*(_QWORD *)v7 + 192LL);
    if ( v8 == CHwTextureRenderTarget::GetBitmapTexture )
      BitmapTexture = CHwTextureRenderTarget::GetBitmapTexture(v7, &v17);
    else
      BitmapTexture = v8(v7, &v17);
    v6 = BitmapTexture;
    if ( BitmapTexture < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, BitmapTexture, 0x97u);
      goto LABEL_9;
    }
    v18 = 0;
    v19 = 0;
    v10 = (float)*((int *)v17 + 35);
    v20 = (float)*((int *)v17 + 34);
    v21 = v10;
    v5 = CDrawingContext::PushGpuClipRectInternal((_DWORD)a2, 0, (unsigned int)&v18, 1, 1, 0);
    v6 = v5;
    if ( v5 < 0 )
    {
      v16 = 158;
    }
    else
    {
      v11 = CDrawingContext::Clear(a2, &v22);
      v6 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xA1u);
        CDrawingContext::PopGpuClipRectInternal(a2, 0);
        goto LABEL_9;
      }
      CDrawingContext::PopGpuClipRectInternal(a2, 0);
      v12 = _mm_cvtsi32_si128(*((_DWORD *)this + 7));
      v13 = _mm_cvtsi32_si128(*((_DWORD *)this + 6));
      v18 = 0;
      v19 = 0;
      LODWORD(v21) = _mm_cvtepi32_ps(v12).m128_u32[0];
      LODWORD(v20) = _mm_cvtepi32_ps(v13).m128_u32[0];
      v5 = CDrawingContext::PushGpuClipRectInternal((_DWORD)a2, 0, (unsigned int)&v18, 1, 1, 0);
      v6 = v5;
      if ( v5 >= 0 )
      {
        *((_BYTE *)this + 34) = 1;
        goto LABEL_9;
      }
      v16 = 176;
    }
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, v16);
LABEL_9:
  if ( v17 )
  {
    v14 = *(void (**)(void))(*(_QWORD *)v17 + 8LL);
    if ( (char *)v14 == (char *)CD3DSurface::Release )
      CD3DSurface::Release(v17);
    else
      v14();
  }
  return v6;
}
