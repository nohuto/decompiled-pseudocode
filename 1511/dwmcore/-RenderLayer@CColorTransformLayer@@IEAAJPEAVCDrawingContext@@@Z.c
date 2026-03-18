/*
 * XREFs of ?RenderLayer@CColorTransformLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x180115934
 * Callers:
 *     ?RestoreState@CColorTransformLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180115D30 (-RestoreState@CColorTransformLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?FillEffect@CDrawingContext@@AEAAJPEAUID2D1Effect@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUD2D_POINT_2F@@_N@Z @ 0x18000E180 (-FillEffect@CDrawingContext@@AEAAJPEAUID2D1Effect@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x180045EE0 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x180046ED0 (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     TemplateEventDescriptor @ 0x1800BA27C (TemplateEventDescriptor.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     memset_0 @ 0x1800BC8D2 (memset_0.c)
 *     ?GetCachedEffectNoRef@CDrawingContext@@QEAAJW4Enum@D2DEffect@@PEAPEAUID2D1Effect@@@Z @ 0x18010DA64 (-GetCachedEffectNoRef@CDrawingContext@@QEAAJW4Enum@D2DEffect@@PEAPEAUID2D1Effect@@@Z.c)
 */

__int64 __fastcall CColorTransformLayer::RenderLayer(CColorTransformLayer *this, struct CDrawingContext *a2)
{
  __m128i v4; // xmm0
  __m128i v5; // xmm1
  __int64 v6; // rdi
  __m128i v7; // xmm0
  int v8; // eax
  __int64 v9; // rdx
  unsigned int v10; // edi
  int CachedEffectNoRef; // eax
  __int64 v12; // rax
  __int64 v13; // rdi
  __m128 v14; // xmm2
  __m128 v15; // xmm3
  __m128 v16; // xmm7
  __m128 v17; // xmm4
  __m128 v18; // xmm5
  __m128 v19; // xmm6
  int v20; // eax
  int v21; // eax
  char *v22; // r15
  int v23; // eax
  __int64 v24; // rcx
  unsigned int v26; // [rsp+20h] [rbp-E0h]
  __int64 v27; // [rsp+30h] [rbp-D0h] BYREF
  int v28; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v29; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v30[2]; // [rsp+48h] [rbp-B8h] BYREF
  int v31; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v32[39]; // [rsp+54h] [rbp-ACh] BYREF
  _DWORD v33[4]; // [rsp+F0h] [rbp-10h] BYREF
  _DWORD v34[15]; // [rsp+100h] [rbp+0h] BYREF
  unsigned __int32 v35; // [rsp+13Ch] [rbp+3Ch]
  __int32 v36; // [rsp+140h] [rbp+40h]
  unsigned __int32 v37; // [rsp+144h] [rbp+44h]
  unsigned __int32 v38; // [rsp+148h] [rbp+48h]
  unsigned __int32 v39; // [rsp+14Ch] [rbp+4Ch]

  v29 = 0LL;
  v31 = 0;
  memset_0(v32, 0, 0x28uLL);
  v4 = _mm_cvtsi32_si128(*((_DWORD *)this + 4));
  v5 = _mm_cvtsi32_si128(*((_DWORD *)this + 5));
  v6 = *((_QWORD *)this + 1);
  v27 = 0LL;
  v33[0] = 0;
  v33[1] = 0;
  v30[0] = _mm_cvtepi32_ps(v4).m128_u32[0];
  v7 = _mm_cvtsi32_si128(*((_DWORD *)this + 7));
  v30[1] = _mm_cvtepi32_ps(v5).m128_u32[0];
  *(float *)&v33[2] = (float)*((int *)this + 6);
  v33[3] = _mm_cvtepi32_ps(v7).m128_u32[0];
  v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 112LL))(v6, &v29);
  v10 = v8;
  if ( v8 < 0 )
  {
    v26 = 106;
LABEL_3:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, v26);
    goto LABEL_26;
  }
  CachedEffectNoRef = CDrawingContext::GetCachedEffectNoRef((__int64)a2, v9, (__int64)&v27);
  v10 = CachedEffectNoRef;
  if ( CachedEffectNoRef < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, CachedEffectNoRef, 0x6Fu);
    goto LABEL_26;
  }
  v31 = 10;
  v32[0] = -16777216;
  v32[1] = 1;
  v8 = CDrawingContext::PushRenderOptionsInternal(a2, 0LL, (const struct MilRenderOptions *)&v31, 1);
  v10 = v8;
  if ( v8 < 0 )
  {
    v26 = 128;
    goto LABEL_3;
  }
  v12 = *((_QWORD *)this + 13);
  v13 = *((_QWORD *)this + 1);
  v14 = *(__m128 *)(v12 + 40);
  v15 = *(__m128 *)(v12 + 56);
  v16 = *(__m128 *)(v12 + 120);
  v17 = *(__m128 *)(v12 + 72);
  v18 = *(__m128 *)(v12 + 88);
  v19 = *(__m128 *)(v12 + 104);
  v34[0] = v14.m128_i32[0];
  v34[1] = _mm_shuffle_ps(v14, v14, 85).m128_u32[0];
  v34[4] = _mm_shuffle_ps(v15, v15, 85).m128_u32[0];
  v34[8] = _mm_shuffle_ps(v17, v17, 170).m128_u32[0];
  v34[11] = _mm_shuffle_ps(v18, v18, 85).m128_u32[0];
  v34[2] = _mm_shuffle_ps(v14, v14, 170).m128_u32[0];
  v34[14] = _mm_shuffle_ps(v19, v19, 85).m128_u32[0];
  v34[5] = _mm_shuffle_ps(v15, v15, 170).m128_u32[0];
  v34[7] = v17.m128_i32[0];
  v34[10] = v18.m128_i32[0];
  v34[13] = v19.m128_i32[0];
  v36 = v16.m128_i32[0];
  v34[3] = _mm_shuffle_ps(v14, v14, 255).m128_u32[0];
  v34[6] = _mm_shuffle_ps(v15, v15, 255).m128_u32[0];
  v34[9] = _mm_shuffle_ps(v17, v17, 255).m128_u32[0];
  v34[12] = _mm_shuffle_ps(v18, v18, 255).m128_u32[0];
  v37 = _mm_shuffle_ps(v16, v16, 85).m128_u32[0];
  v38 = _mm_shuffle_ps(v16, v16, 170).m128_u32[0];
  v39 = _mm_shuffle_ps(v16, v16, 255).m128_u32[0];
  v35 = _mm_shuffle_ps(v19, v19, 170).m128_u32[0];
  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v13 + 32LL))(v13) == 3 )
  {
    v35 = 0;
    v39 = LODWORD(FLOAT_1_0);
  }
  v20 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _DWORD *, int))(*(_QWORD *)v27 + 72LL))(
          v27,
          0LL,
          0LL,
          v34,
          80);
  v10 = v20;
  if ( v20 >= 0 )
  {
    v28 = 2;
    v21 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, int *, int))(*(_QWORD *)v27 + 72LL))(
            v27,
            1LL,
            0LL,
            &v28,
            4);
    v10 = v21;
    if ( v21 >= 0 )
    {
      (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v27 + 112LL))(v27, 0LL, v29, 1LL);
      if ( g_LockAndReadLayer )
      {
        if ( a2 )
          v22 = (char *)a2 + 56;
        else
          v22 = 0LL;
        (*(void (__fastcall **)(_QWORD, _QWORD, char *))(**((_QWORD **)this + 1) + 168LL))(
          *((_QWORD *)this + 1),
          *((_QWORD *)a2 + 47),
          v22);
      }
      v23 = CDrawingContext::FillEffect(a2, v27, (__int64)v33, (__int64)v30);
      v10 = v23;
      if ( v23 >= 0 )
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
          TemplateEventDescriptor(v24, &EVTDESC_ETWGUID_LAYEREVENT_EndExternalLayer_Stop);
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0xCAu);
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0xB2u);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0xADu);
  }
  CDrawingContext::PopRenderOptionsInternal(a2, 1);
LABEL_26:
  if ( v29 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
  if ( v27 )
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v27 + 112LL))(v27, 0LL, 0LL, 1LL);
  return v10;
}
