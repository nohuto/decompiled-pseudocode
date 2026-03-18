/*
 * XREFs of ?PushEffectBrushLayer@CDrawingContext@@QEAAJPEBVCVisual@@AEBUD2D_SIZE_F@@PEAVCEffectBrush@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1801243FC
 * Callers:
 *     ?RenderExternalEffect@CEffectBrush@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x18013C680 (-RenderExternalEffect@CEffectBrush@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIn.c)
 *     ?RenderInternalEffect@CEffectBrush@@AEAAJPEAVCDrawingContext@@AEBUCCommonDrawListCacheParameters@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x18013CFC0 (-RenderInternalEffect@CEffectBrush@@AEAAJPEAVCDrawingContext@@AEBUCCommonDrawListCacheParameters.c)
 * Callees:
 *     ?PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z @ 0x180003AE4 (-PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??_ECExternalLayer@@UEAAPEAXI@Z @ 0x180121620 (--_ECExternalLayer@@UEAAPEAXI@Z.c)
 *     ?Create@CEffectBrushLayer@@SAJPEAVIRenderTarget@@AEBU_GUID@@AEBUMilPointAndSizeL@@PEAVCEffectBrush@@PEAPEAV1@@Z @ 0x18012E3AC (-Create@CEffectBrushLayer@@SAJPEAVIRenderTarget@@AEBU_GUID@@AEBUMilPointAndSizeL@@PEAVCEffectBru.c)
 */

__int64 __fastcall CDrawingContext::PushEffectBrushLayer(
        CDrawingContext *this,
        const struct CVisual *a2,
        const struct D2D_SIZE_F *a3,
        struct CEffectBrush *a4,
        struct IRenderTargetBitmap **a5)
{
  __m128 v5; // xmm2
  float width; // xmm0_4
  int v9; // eax
  float height; // xmm0_4
  int v11; // eax
  struct IRenderTarget *v12; // rcx
  const struct _GUID *v13; // rdx
  struct IRenderTargetBitmap *v14; // rbx
  int v15; // eax
  struct CLayer *v16; // rsi
  unsigned int v17; // edi
  int v18; // eax
  _DWORD v20[4]; // [rsp+30h] [rbp-10h] BYREF
  __int128 v21; // [rsp+60h] [rbp+20h] BYREF

  width = a3->width;
  v20[0] = 0;
  v20[1] = 0;
  *(float *)&v21 = width;
  if ( (LODWORD(width) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v5.m128_f32[0] = (float)(int)width - width;
    v5 = _mm_cmple_ss(v5, (__m128)LODWORD(FLOAT_N0_5));
    LODWORD(v21) = v5.m128_i32[0];
    v9 = (int)width - v5.m128_i32[0];
  }
  else
  {
    *(float *)&v21 = width + 6291456.25;
    v9 = (int)((_DWORD)v21 << 10) >> 11;
  }
  height = a3->height;
  v20[2] = v9;
  *(float *)&v21 = height;
  if ( (LODWORD(height) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v5.m128_f32[0] = (float)(int)height - height;
    LODWORD(v21) = _mm_cmple_ss(v5, (__m128)LODWORD(FLOAT_N0_5)).m128_u32[0];
    v11 = (int)height - v21;
  }
  else
  {
    *(float *)&v21 = height + 6291456.25;
    v11 = (int)((_DWORD)v21 << 10) >> 11;
  }
  v12 = (struct IRenderTarget *)*((_QWORD *)this + 54);
  v13 = (const struct _GUID *)(*((_QWORD *)this + 3) + 252LL);
  *(_QWORD *)&v21 = 0LL;
  v14 = 0LL;
  v20[3] = v11;
  v15 = CEffectBrushLayer::Create(v12, v13, (const struct MilPointAndSizeL *)v20, a4, (struct CEffectBrushLayer **)&v21);
  v16 = (struct CLayer *)v21;
  v17 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xBFEu);
  }
  else
  {
    v14 = *(struct IRenderTargetBitmap **)(v21 + 8);
    (*(void (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)v14 + 8LL))(v14);
    v18 = CDrawingContext::PushLayer(this, a2, v16, 1, 1);
    v17 = v18;
    if ( v18 >= 0 )
    {
      *a5 = v14;
      return v17;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0xC0Au);
  }
  if ( v14 )
    (*(void (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)v14 + 16LL))(v14);
  if ( v16 )
    CExternalLayer::`vector deleting destructor'(v16, 1);
  return v17;
}
