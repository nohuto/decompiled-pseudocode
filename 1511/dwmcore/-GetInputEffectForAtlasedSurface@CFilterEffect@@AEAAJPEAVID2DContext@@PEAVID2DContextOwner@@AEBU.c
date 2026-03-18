/*
 * XREFs of ?GetInputEffectForAtlasedSurface@CFilterEffect@@AEAAJPEAVID2DContext@@PEAVID2DContextOwner@@AEBUtagRECT@@PEAVCCompositionSurfaceBitmap@@PEAPEAUID2D1Effect@@@Z @ 0x18012C9E0
 * Callers:
 *     ?GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAUID2D1Bitmap1@@PEAVID2DContext@@PEAVID2DContextOwner@@PEAPEAUID2D1Effect@@@Z @ 0x18001AAF4 (-GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAUID2D1Bitmap1@@PEAVID2DContext@@PEAVID2DContextOwner@@.c)
 * Callees:
 *     ?GetD2DBitmapRealizationForContextOwner@CCompositionSurfaceBitmap@@UEAAJPEAVID2DContextOwner@@PEAPEAUID2D1Bitmap1@@@Z @ 0x18000CA50 (-GetD2DBitmapRealizationForContextOwner@CCompositionSurfaceBitmap@@UEAAJPEAVID2DContextOwner@@PE.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?SetInputEffect@ID2D1Effect@@QEAAXIPEAU1@H@Z @ 0x18012CDB4 (-SetInputEffect@ID2D1Effect@@QEAAXIPEAU1@H@Z.c)
 */

__int64 __fastcall CFilterEffect::GetInputEffectForAtlasedSurface(
        CFilterEffect *this,
        struct ID2DContext *a2,
        struct ID2DContextOwner *a3,
        const __m128i *a4,
        struct CCompositionSurfaceBitmap *a5,
        struct ID2D1Effect **a6)
{
  struct ID2D1Effect *v7; // r14
  ID2D1Effect *v8; // rsi
  int D2DBitmapRealizationForContextOwner; // eax
  unsigned int v11; // edi
  int v12; // eax
  int v13; // eax
  _QWORD **v14; // rsi
  _QWORD **v15; // rsi
  int v16; // eax
  __int64 (__fastcall *v17)(ID2D1Effect *, __int64, _QWORD, __m128 *, int); // rbx
  int v18; // eax
  int v19; // r9d
  _QWORD **v21; // [rsp+30h] [rbp-40h] BYREF
  _QWORD **v22; // [rsp+38h] [rbp-38h] BYREF
  struct ID2D1Bitmap1 *v23; // [rsp+40h] [rbp-30h] BYREF
  __m128 v24; // [rsp+48h] [rbp-28h] BYREF
  unsigned __int64 v25; // [rsp+58h] [rbp-18h]

  v21 = 0LL;
  v22 = 0LL;
  v7 = 0LL;
  v23 = 0LL;
  v8 = 0LL;
  D2DBitmapRealizationForContextOwner = CCompositionSurfaceBitmap::GetD2DBitmapRealizationForContextOwner(
                                          (struct CCompositionSurfaceBitmap *)((char *)a5 + 72),
                                          a3,
                                          &v23);
  v11 = D2DBitmapRealizationForContextOwner;
  if ( D2DBitmapRealizationForContextOwner >= 0 )
  {
    v12 = (*(__int64 (__fastcall **)(struct ID2DContext *, GUID *, _QWORD ***))(*(_QWORD *)a2 + 272LL))(
            a2,
            &CLSID_D2D1Crop,
            &v21);
    v11 = v12;
    if ( v12 >= 0 )
    {
      v13 = (*(__int64 (__fastcall **)(struct ID2DContext *, GUID *, _QWORD ***))(*(_QWORD *)a2 + 272LL))(
              a2,
              &CLSID_D2D12DAffineTransform,
              &v22);
      v11 = v13;
      if ( v13 >= 0 )
      {
        v14 = v21;
        (*(void (__fastcall **)(_QWORD *))(*v21[13] + 8LL))(v21[13]);
        v7 = (struct ID2D1Effect *)v14[13];
        v15 = v22;
        (*(void (__fastcall **)(_QWORD *))(*v22[13] + 8LL))(v22[13]);
        v8 = (ID2D1Effect *)v15[13];
        v24 = _mm_cvtepi32_ps(_mm_loadu_si128(a4));
        v16 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, __m128 *, int))(*(_QWORD *)v7 + 72LL))(
                v7,
                0LL,
                0LL,
                &v24,
                16);
        v11 = v16;
        if ( v16 >= 0 )
        {
          v17 = *(__int64 (__fastcall **)(ID2D1Effect *, __int64, _QWORD, __m128 *, int))(*(_QWORD *)v8 + 72LL);
          v25 = _mm_unpacklo_ps(
                  _mm_xor_ps((__m128)COERCE_UNSIGNED_INT((float)a4->m128i_i32[0]), (__m128)_xmm),
                  _mm_xor_ps((__m128)COERCE_UNSIGNED_INT((float)a4->m128i_i32[1]), (__m128)_xmm)).m128_u64[0];
          v24 = (__m128)_xmm;
          v18 = v17(v8, 2LL, 0LL, &v24, 24);
          v11 = v18;
          if ( v18 >= 0 )
          {
            (*(void (__fastcall **)(struct ID2D1Effect *, _QWORD, struct ID2D1Bitmap1 *, __int64))(*(_QWORD *)v7 + 112LL))(
              v7,
              0LL,
              v23,
              1LL);
            ID2D1Effect::SetInputEffect(v8, 0, v7, v19);
            *a6 = v8;
            v8 = 0LL;
          }
          else
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x32Bu);
          }
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x323u);
        }
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x31Bu);
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x31Au);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DBitmapRealizationForContextOwner, 0x318u);
  }
  if ( v23 )
    (*(void (__fastcall **)(struct ID2D1Bitmap1 *))(*(_QWORD *)v23 + 16LL))(v23);
  if ( v7 )
    (*(void (__fastcall **)(struct ID2D1Effect *))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v21 )
    ((void (__fastcall *)(_QWORD **))(*v21)[2])(v21);
  if ( v22 )
    ((void (__fastcall *)(_QWORD **))(*v22)[2])(v22);
  if ( v8 )
    (*(void (__fastcall **)(ID2D1Effect *))(*(_QWORD *)v8 + 16LL))(v8);
  return v11;
}
