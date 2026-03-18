/*
 * XREFs of ?ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x180001DAC
 * Callers:
 *     ?ApplyState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180001C90 (-ApplyState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?ApplyState@CClippedBitmapLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800FB190 (-ApplyState@CClippedBitmapLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x180010764 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N3@Z @ 0x18002976C (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x18002F290 (-Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z @ 0x18002F420 (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CExternalLayer::ApplyRenderTarget(CExternalLayer *this, struct CDrawingContext *a2)
{
  struct IRenderTarget *v3; // rdx
  int v5; // eax
  unsigned int v6; // edi
  __int64 v7; // rdi
  float v8; // xmm1_4
  int v9; // eax
  __m128i v10; // xmm0
  __m128i v11; // xmm1
  unsigned int v13; // [rsp+20h] [rbp-40h]
  int *v14; // [rsp+30h] [rbp-30h] BYREF
  int v15; // [rsp+38h] [rbp-28h] BYREF
  int v16; // [rsp+3Ch] [rbp-24h]
  float v17; // [rsp+40h] [rbp-20h]
  float v18; // [rsp+44h] [rbp-1Ch]
  struct _D3DCOLORVALUE v19; // [rsp+48h] [rbp-18h] BYREF

  v14 = 0LL;
  v3 = (struct IRenderTarget *)*((_QWORD *)this + 1);
  *(_QWORD *)&v19.r = 0LL;
  *(_QWORD *)&v19.b = 0LL;
  v5 = CDrawingContext::PushRenderTarget(a2, v3);
  v6 = v5;
  if ( v5 < 0 )
  {
    v13 = 116;
LABEL_13:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, v13);
    goto LABEL_7;
  }
  v7 = *((_QWORD *)this + 1);
  *((_BYTE *)this + 33) = 1;
  v5 = (*(__int64 (__fastcall **)(__int64, int **))(*(_QWORD *)v7 + 184LL))(v7, &v14);
  v6 = v5;
  if ( v5 < 0 )
  {
    v13 = 130;
    goto LABEL_13;
  }
  v15 = 0;
  v16 = 0;
  v8 = (float)v14[35];
  v17 = (float)v14[34];
  v18 = v8;
  v5 = CDrawingContext::PushGpuClipRectInternal((_DWORD)a2, 0, (unsigned int)&v15, 1, 1, 0);
  v6 = v5;
  if ( v5 < 0 )
  {
    v13 = 137;
    goto LABEL_13;
  }
  v9 = CDrawingContext::Clear(a2, &v19);
  v6 = v9;
  if ( v9 >= 0 )
  {
    CDrawingContext::PopGpuClipRectInternal(a2, 0);
    v10 = _mm_cvtsi32_si128(*((_DWORD *)this + 7));
    v11 = _mm_cvtsi32_si128(*((_DWORD *)this + 6));
    v15 = 0;
    v16 = 0;
    LODWORD(v18) = _mm_cvtepi32_ps(v10).m128_u32[0];
    LODWORD(v17) = _mm_cvtepi32_ps(v11).m128_u32[0];
    v5 = CDrawingContext::PushGpuClipRectInternal((_DWORD)a2, 0, (unsigned int)&v15, 1, 1, 0);
    v6 = v5;
    if ( v5 >= 0 )
    {
      *((_BYTE *)this + 34) = 1;
      goto LABEL_7;
    }
    v13 = 155;
    goto LABEL_13;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x8Cu);
  CDrawingContext::PopGpuClipRectInternal(a2, 0);
LABEL_7:
  if ( v14 )
    (*(void (__fastcall **)(int *))(*(_QWORD *)v14 + 8LL))(v14);
  return v6;
}
