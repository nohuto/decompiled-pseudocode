/*
 * XREFs of ?DrawYCbCrBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@1W4D2D1_YCBCR_CHROMA_SUBSAMPLING@@PEBUD2D_RECT_F@@MW4D2D1_INTERPOLATION_MODE@@W4D2D1_COMPOSITE_MODE@@@Z @ 0x180147140
 * Callers:
 *     <none>
 * Callees:
 *     ?DrawImage@ID2D1DeviceContext@@QEAAXPEAUID2D1Effect@@PEBUD2D_POINT_2F@@PEBUD2D_RECT_F@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_COMPOSITE_MODE@@@Z @ 0x18001CC44 (-DrawImage@ID2D1DeviceContext@@QEAAXPEAUID2D1Effect@@PEBUD2D_POINT_2F@@PEBUD2D_RECT_F@@W4D2D1_IN.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x180020670 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x1800207C0 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?SetPrimitiveBlend@CD2DContext@@IEAAXW4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1800FA314 (-SetPrimitiveBlend@CD2DContext@@IEAAXW4D2D1_PRIMITIVE_BLEND@@@Z.c)
 */

__int64 __fastcall CD2DContext::DrawYCbCrBitmap(
        struct ID2D1PrivateCompositorRenderer **this,
        const struct ID2DContextOwner *a2,
        struct ID2D1Bitmap1 *a3,
        struct ID2D1Bitmap1 *a4,
        enum D2D1_YCBCR_CHROMA_SUBSAMPLING a5,
        const struct D2D_RECT_F *a6,
        float a7,
        enum D2D1_INTERPOLATION_MODE a8,
        enum D2D1_COMPOSITE_MODE a9)
{
  const struct D2D_RECT_F *v9; // r15
  int v14; // eax
  unsigned int v15; // esi
  int v16; // eax
  __m128i v17; // xmm0
  struct ID2D1PrivateCompositorRenderer *v18; // rdi
  int v19; // eax
  struct ID2D1Effect *v21; // [rsp+30h] [rbp-A1h] BYREF
  __int64 v22; // [rsp+38h] [rbp-99h] BYREF
  __int64 v23; // [rsp+40h] [rbp-91h] BYREF
  _BYTE v24[28]; // [rsp+48h] [rbp-89h]
  __int128 v25; // [rsp+68h] [rbp-69h] BYREF
  __int64 v26; // [rsp+78h] [rbp-59h]
  int v27; // [rsp+80h] [rbp-51h]
  __m128i v28; // [rsp+88h] [rbp-49h] BYREF
  __int64 v29; // [rsp+98h] [rbp-39h]
  enum D2D1_INTERPOLATION_MODE v30; // [rsp+A0h] [rbp-31h]
  _BYTE v31[24]; // [rsp+A8h] [rbp-29h] BYREF

  v9 = a6;
  CD2DContext::FlushDrawList(this);
  v22 = 0LL;
  v23 = 0LL;
  CD2DContext::EnsureBeginDraw((CD2DContext *)this);
  (*(void (__fastcall **)(const struct ID2DContextOwner *, _BYTE *))(*(_QWORD *)a2 + 8LL))(a2, v31);
  (*(void (__fastcall **)(struct ID2D1PrivateCompositorRenderer *, _BYTE *))(*(_QWORD *)this[5] + 240LL))(this[5], v31);
  v14 = (*((__int64 (__fastcall **)(struct ID2D1PrivateCompositorRenderer **, __int64, struct ID2D1Effect **))*this + 29))(
          this,
          7LL,
          &v21);
  v15 = v14;
  if ( v14 >= 0 )
  {
    (*(void (__fastcall **)(struct ID2D1Effect *, _QWORD, struct ID2D1Bitmap1 *, __int64))(*(_QWORD *)v21 + 112LL))(
      v21,
      0LL,
      a3,
      1LL);
    (*(void (__fastcall **)(struct ID2D1Effect *, __int64, struct ID2D1Bitmap1 *, __int64))(*(_QWORD *)v21 + 112LL))(
      v21,
      1LL,
      a4,
      1LL);
    v16 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, enum D2D1_YCBCR_CHROMA_SUBSAMPLING *, int))(*(_QWORD *)v21 + 72LL))(
            v21,
            0LL,
            0LL,
            &a5,
            4);
    v15 = v16;
    if ( v16 >= 0 )
    {
      if ( a9 )
      {
        ID2D1DeviceContext::DrawImage(this[5], v21, 0LL, v9, a8, a9);
      }
      else
      {
        CD2DContext::SetPrimitiveBlend((CD2DContext *)this, 0);
        (*(void (__fastcall **)(struct ID2D1Effect *, __int64 *))(*(_QWORD *)v21 + 144LL))(v21, &v23);
        v17 = _mm_loadu_si128((const __m128i *)v9);
        v26 = 0LL;
        v18 = this[5];
        v28 = v17;
        v30 = a8;
        v29 = 0LL;
        *(float *)v24 = a7;
        *(_QWORD *)&v24[20] = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
        *(_OWORD *)&v24[4] = _xmm;
        v27 = *(_DWORD *)&v24[24];
        v25 = *(_OWORD *)v24;
        v26 = *(_QWORD *)&v24[16];
        v19 = (*(__int64 (__fastcall **)(struct ID2D1PrivateCompositorRenderer *, __int64, __m128i *, __int128 *, __int64 *))(*(_QWORD *)v18 + 520LL))(
                v18,
                v23,
                &v28,
                &v25,
                &v22);
        v15 = v19;
        if ( v19 >= 0 )
          (*(void (__fastcall **)(struct ID2D1PrivateCompositorRenderer *, const struct D2D_RECT_F *, __int64))(*(_QWORD *)this[5] + 136LL))(
            this[5],
            v9,
            v22);
        else
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x43Au);
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x424u);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x420u);
  }
  if ( v21 )
  {
    (*(void (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, __int64))(*(_QWORD *)v21 + 112LL))(v21, 0LL, 0LL, 1LL);
    (*(void (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, __int64))(*(_QWORD *)v21 + 112LL))(
      v21,
      1LL,
      0LL,
      1LL);
  }
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  return v15;
}
