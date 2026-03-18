/*
 * XREFs of ?DrawYCbCrBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@1W4D2D1_YCBCR_CHROMA_SUBSAMPLING@@PEBUD2D_RECT_F@@MW4D2D1_INTERPOLATION_MODE@@W4D2D1_COMPOSITE_MODE@@@Z @ 0x180176CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?DrawImage@ID2D1DeviceContext@@QEAAXPEAUID2D1Effect@@PEBUD2D_POINT_2F@@PEBUD2D_RECT_F@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_COMPOSITE_MODE@@@Z @ 0x18001ED8C (-DrawImage@ID2D1DeviceContext@@QEAAXPEAUID2D1Effect@@PEBUD2D_POINT_2F@@PEBUD2D_RECT_F@@W4D2D1_IN.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetPrimitiveBlend@CD2DContext@@IEAAXW4D2D1_PRIMITIVE_BLEND@@@Z @ 0x18007C840 (-SetPrimitiveBlend@CD2DContext@@IEAAXW4D2D1_PRIMITIVE_BLEND@@@Z.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x18007C9A4 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x18007CA60 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
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
  const struct D2D_RECT_F *v9; // rsi
  int v14; // eax
  unsigned int v15; // ebx
  int v16; // eax
  struct ID2D1PrivateCompositorRenderer *v17; // rcx
  int v18; // eax
  struct ID2D1Effect *v20; // [rsp+30h] [rbp-99h] BYREF
  __int64 v21; // [rsp+38h] [rbp-91h] BYREF
  __int64 v22; // [rsp+40h] [rbp-89h] BYREF
  _BYTE v23[28]; // [rsp+48h] [rbp-81h]
  __int128 v24; // [rsp+68h] [rbp-61h] BYREF
  __int64 v25; // [rsp+78h] [rbp-51h]
  int v26; // [rsp+80h] [rbp-49h]
  __m128i v27; // [rsp+88h] [rbp-41h] BYREF
  __int64 v28; // [rsp+98h] [rbp-31h]
  enum D2D1_INTERPOLATION_MODE v29; // [rsp+A0h] [rbp-29h]
  _BYTE v30[24]; // [rsp+A8h] [rbp-21h] BYREF

  v9 = a6;
  CD2DContext::FlushDrawList(this);
  v22 = 0LL;
  v21 = 0LL;
  CD2DContext::EnsureBeginDraw((CD2DContext *)this);
  (*(void (__fastcall **)(const struct ID2DContextOwner *, _BYTE *))(*(_QWORD *)a2 + 8LL))(a2, v30);
  (*(void (__fastcall **)(struct ID2D1PrivateCompositorRenderer *, _BYTE *))(*(_QWORD *)this[5] + 240LL))(this[5], v30);
  v14 = (*((__int64 (__fastcall **)(struct ID2D1PrivateCompositorRenderer **, __int64, struct ID2D1Effect **))*this + 30))(
          this,
          7LL,
          &v20);
  v15 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x59Cu);
  }
  else
  {
    (*(void (__fastcall **)(struct ID2D1Effect *, _QWORD, struct ID2D1Bitmap1 *, __int64))(*(_QWORD *)v20 + 112LL))(
      v20,
      0LL,
      a3,
      1LL);
    (*(void (__fastcall **)(struct ID2D1Effect *, __int64, struct ID2D1Bitmap1 *, __int64))(*(_QWORD *)v20 + 112LL))(
      v20,
      1LL,
      a4,
      1LL);
    v16 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, enum D2D1_YCBCR_CHROMA_SUBSAMPLING *, int))(*(_QWORD *)v20 + 72LL))(
            v20,
            0LL,
            0LL,
            &a5,
            4);
    v15 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x5A0u);
    }
    else if ( a9 )
    {
      ID2D1DeviceContext::DrawImage(this[5], v20, 0LL, v9, a8, a9);
    }
    else
    {
      CD2DContext::SetPrimitiveBlend((CD2DContext *)this, D2D1_PRIMITIVE_BLEND_SOURCE_OVER);
      (*(void (__fastcall **)(struct ID2D1Effect *, __int64 *))(*(_QWORD *)v20 + 144LL))(v20, &v21);
      v25 = 0LL;
      v17 = this[5];
      v27 = _mm_loadu_si128((const __m128i *)v9);
      v29 = a8;
      v28 = 0LL;
      *(float *)v23 = a7;
      *(_QWORD *)&v23[20] = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
      *(_OWORD *)&v23[4] = _xmm;
      v26 = *(_DWORD *)&v23[24];
      v24 = *(_OWORD *)v23;
      v25 = *(_QWORD *)&v23[16];
      v18 = (*(__int64 (__fastcall **)(struct ID2D1PrivateCompositorRenderer *, __int64, __m128i *, __int128 *, __int64 *))(*(_QWORD *)v17 + 520LL))(
              v17,
              v21,
              &v27,
              &v24,
              &v22);
      v15 = v18;
      if ( v18 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x5B6u);
      else
        (*(void (__fastcall **)(struct ID2D1PrivateCompositorRenderer *, const struct D2D_RECT_F *, __int64))(*(_QWORD *)this[5] + 136LL))(
          this[5],
          v9,
          v22);
    }
  }
  if ( v20 )
  {
    (*(void (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, __int64))(*(_QWORD *)v20 + 112LL))(v20, 0LL, 0LL, 1LL);
    (*(void (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, __int64))(*(_QWORD *)v20 + 112LL))(
      v20,
      1LL,
      0LL,
      1LL);
  }
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  return v15;
}
