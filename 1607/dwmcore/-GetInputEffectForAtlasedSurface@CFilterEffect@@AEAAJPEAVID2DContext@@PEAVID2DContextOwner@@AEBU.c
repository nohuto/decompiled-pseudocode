/*
 * XREFs of ?GetInputEffectForAtlasedSurface@CFilterEffect@@AEAAJPEAVID2DContext@@PEAVID2DContextOwner@@AEBUtagRECT@@PEAVCCompositionSurfaceBitmap@@PEAPEAUID2D1Effect@@@Z @ 0x18014C880
 * Callers:
 *     ?GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAUID2D1Bitmap1@@PEAVID2DContext@@PEAVID2DContextOwner@@PEAPEAUID2D1Effect@@@Z @ 0x180014868 (-GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAUID2D1Bitmap1@@PEAVID2DContext@@PEAVID2DContextOwner@@.c)
 * Callees:
 *     ?GetD2DBitmapRealizationForContextOwner@CCompositionSurfaceBitmap@@UEAAJPEAVID2DContextOwner@@PEAPEAUID2D1Bitmap1@@@Z @ 0x1800101E0 (-GetD2DBitmapRealizationForContextOwner@CCompositionSurfaceBitmap@@UEAAJPEAVID2DContextOwner@@PE.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?SetInputEffect@ID2D1Effect@@QEAAXIPEAU1@H@Z @ 0x18014CCFC (-SetInputEffect@ID2D1Effect@@QEAAXIPEAU1@H@Z.c)
 */

__int64 __fastcall CFilterEffect::GetInputEffectForAtlasedSurface(
        CFilterEffect *this,
        struct ID2DContext *a2,
        struct ID2DContextOwner *a3,
        const __m128i *a4,
        struct CCompositionSurfaceBitmap *a5,
        struct ID2D1Effect **a6)
{
  ID2D1Effect *v7; // rsi
  struct ID2D1Effect *v9; // rdi
  int D2DBitmapRealizationForContextOwner; // eax
  unsigned int v11; // ebx
  _QWORD **v12; // rbx
  _QWORD **v13; // rbx
  int v14; // eax
  __int64 (__fastcall *v15)(ID2D1Effect *, __int64, _QWORD, __m128 *, int); // rax
  int v16; // r9d
  unsigned int v18; // [rsp+20h] [rbp-50h]
  struct ID2D1Bitmap1 *v19; // [rsp+30h] [rbp-40h] BYREF
  _QWORD **v20; // [rsp+38h] [rbp-38h] BYREF
  _QWORD **v21; // [rsp+40h] [rbp-30h] BYREF
  __m128 v22; // [rsp+48h] [rbp-28h] BYREF
  unsigned __int64 v23; // [rsp+58h] [rbp-18h]

  v20 = 0LL;
  v21 = 0LL;
  v7 = 0LL;
  v19 = 0LL;
  v9 = 0LL;
  D2DBitmapRealizationForContextOwner = CCompositionSurfaceBitmap::GetD2DBitmapRealizationForContextOwner(
                                          (struct CCompositionSurfaceBitmap *)((char *)a5 + 144),
                                          a3,
                                          &v19);
  v11 = D2DBitmapRealizationForContextOwner;
  if ( D2DBitmapRealizationForContextOwner < 0 )
  {
    v18 = 822;
  }
  else
  {
    D2DBitmapRealizationForContextOwner = (*(__int64 (__fastcall **)(struct ID2DContext *, GUID *, _QWORD ***))(*(_QWORD *)a2 + 272LL))(
                                            a2,
                                            &CLSID_D2D1Crop,
                                            &v20);
    v11 = D2DBitmapRealizationForContextOwner;
    if ( D2DBitmapRealizationForContextOwner < 0 )
    {
      v18 = 824;
    }
    else
    {
      D2DBitmapRealizationForContextOwner = (*(__int64 (__fastcall **)(struct ID2DContext *, GUID *, _QWORD ***))(*(_QWORD *)a2 + 272LL))(
                                              a2,
                                              &CLSID_D2D12DAffineTransform,
                                              &v21);
      v11 = D2DBitmapRealizationForContextOwner;
      if ( D2DBitmapRealizationForContextOwner < 0 )
      {
        v18 = 825;
      }
      else
      {
        v12 = v20;
        (*(void (__fastcall **)(_QWORD *))(*v20[13] + 8LL))(v20[13]);
        v9 = (struct ID2D1Effect *)v12[13];
        v13 = v21;
        (*(void (__fastcall **)(_QWORD *))(*v21[13] + 8LL))(v21[13]);
        v7 = (ID2D1Effect *)v13[13];
        v22 = _mm_cvtepi32_ps(_mm_loadu_si128(a4));
        v14 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, __m128 *, int))(*(_QWORD *)v9 + 72LL))(
                v9,
                0LL,
                0LL,
                &v22,
                16);
        v11 = v14;
        if ( v14 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x341u);
          goto LABEL_13;
        }
        v15 = *(__int64 (__fastcall **)(ID2D1Effect *, __int64, _QWORD, __m128 *, int))(*(_QWORD *)v7 + 72LL);
        v23 = _mm_unpacklo_ps(
                _mm_xor_ps((__m128)COERCE_UNSIGNED_INT((float)a4->m128i_i32[0]), (__m128)_xmm),
                _mm_xor_ps((__m128)COERCE_UNSIGNED_INT((float)a4->m128i_i32[1]), (__m128)_xmm)).m128_u64[0];
        v22 = (__m128)_xmm;
        D2DBitmapRealizationForContextOwner = v15(v7, 2LL, 0LL, &v22, 24);
        v11 = D2DBitmapRealizationForContextOwner;
        if ( D2DBitmapRealizationForContextOwner >= 0 )
        {
          (*(void (__fastcall **)(struct ID2D1Effect *, _QWORD, struct ID2D1Bitmap1 *, __int64))(*(_QWORD *)v9 + 112LL))(
            v9,
            0LL,
            v19,
            1LL);
          ID2D1Effect::SetInputEffect(v7, 0, v9, v16);
          *a6 = v7;
          v7 = 0LL;
          goto LABEL_13;
        }
        v18 = 841;
      }
    }
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DBitmapRealizationForContextOwner, v18);
LABEL_13:
  if ( v19 )
    (*(void (__fastcall **)(struct ID2D1Bitmap1 *))(*(_QWORD *)v19 + 16LL))(v19);
  if ( v9 )
    (*(void (__fastcall **)(struct ID2D1Effect *))(*(_QWORD *)v9 + 16LL))(v9);
  if ( v20 )
    ((void (__fastcall *)(_QWORD **))(*v20)[2])(v20);
  if ( v21 )
    ((void (__fastcall *)(_QWORD **))(*v21)[2])(v21);
  if ( v7 )
    (*(void (__fastcall **)(ID2D1Effect *))(*(_QWORD *)v7 + 16LL))(v7);
  return v11;
}
