/*
 * XREFs of ?PushLayer@CD2DContext@@MEAAXPEBVID2DContextOwner@@AEBUD2D_RECT_F@@PEAUID2D1Geometry@@PEAUD2D_MATRIX_3X2_F@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_LAYER_OPTIONS1@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x180072570
 * Callers:
 *     ?ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180071290 (-ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x180071584 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x180071660 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     memset_0 @ 0x180099BC6 (memset_0.c)
 */

void __fastcall CD2DContext::PushLayer(
        CD2DContext *this,
        const struct ID2DContextOwner *a2,
        const __m128i *a3,
        struct ID2D1Geometry *a4,
        struct D2D_MATRIX_3X2_F *a5,
        float a6,
        enum D2D1_ANTIALIAS_MODE a7,
        enum D2D1_LAYER_OPTIONS1 a8,
        enum D2D1_PRIMITIVE_BLEND a9)
{
  int v12; // eax
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // r14
  unsigned __int64 v16; // xmm1_8
  __m128i v17; // xmm2
  __int64 v18; // rax
  float *v19; // r15
  unsigned int v20; // r12d
  __int64 v21; // r14
  __int64 v22; // rdi
  __int64 v23; // rdi
  __int128 v24; // xmm0
  __int64 v25; // rax
  __int64 v26; // rdi
  _BYTE v27[4]; // [rsp+2Ch] [rbp-BDh] BYREF
  _BYTE v28[40]; // [rsp+38h] [rbp-B1h]
  __int64 v29; // [rsp+60h] [rbp-89h]
  __int64 v30; // [rsp+68h] [rbp-81h]
  __int128 v31; // [rsp+70h] [rbp-79h] BYREF
  unsigned __int64 v32; // [rsp+80h] [rbp-69h]
  _OWORD v33[4]; // [rsp+88h] [rbp-61h] BYREF
  __int64 v34; // [rsp+C8h] [rbp-21h]

  CD2DContext::FlushDrawList(this);
  v12 = *((_DWORD *)this + 48);
  v13 = 0LL;
  if ( v12 )
    v13 = *(_QWORD *)(*((_QWORD *)this + 21) + 8LL * (unsigned int)(v12 - 1));
  CD2DContext::EnsureBeginDraw(this);
  v14 = *(_QWORD *)(v13 + 16);
  v32 = 0LL;
  v31 = _xmm;
  (*(void (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)(v14 + 40) + 240LL))(*(_QWORD *)(v14 + 40), &v31);
  v15 = *(_QWORD *)(v13 + 16);
  if ( a9 != *(_DWORD *)(v15 + 240) )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v15 + 40) + 624LL))(*(_QWORD *)(v15 + 40), (unsigned int)a9);
    *(_DWORD *)(v15 + 240) = a9;
  }
  if ( a5 )
  {
    v16 = *(_QWORD *)&a5->m[2][0];
    v31 = *(_OWORD *)&a5->m11;
    v32 = v16;
  }
  else
  {
    v31 = _xmm;
    v32 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  }
  memset_0(v27, 0, 0x44uLL);
  v17 = _mm_loadu_si128(a3);
  *(_DWORD *)&v28[8] = a7;
  *(_OWORD *)&v28[12] = v31;
  LODWORD(v30) = a8;
  v18 = *(_QWORD *)(v13 + 16);
  *(_QWORD *)&v28[28] = v32;
  *(_QWORD *)v28 = a4;
  *(float *)&v28[36] = a6;
  v29 = 0LL;
  v33[2] = *(_OWORD *)&v28[16];
  v33[1] = *(_OWORD *)v28;
  v33[0] = v17;
  v33[3] = *(unsigned __int64 *)&v28[32];
  v34 = v30;
  (*(void (__fastcall **)(_QWORD, _OWORD *, _QWORD))(**(_QWORD **)(v18 + 40) + 688LL))(*(_QWORD *)(v18 + 40), v33, 0LL);
  if ( *(_BYTE *)(v13 + 56) )
  {
    v19 = (float *)(v13 + 60);
    v20 = *(_DWORD *)(v13 + 76);
    if ( *(_BYTE *)(v13 + 48) )
    {
      v21 = *(_QWORD *)(v13 + 16);
      if ( *(_BYTE *)(v21 + 245)
        || v20 != *(_DWORD *)(v21 + 264)
        || *v19 != *(float *)(v21 + 248)
        || *(float *)(v13 + 64) != *(float *)(v21 + 252)
        || *(float *)(v13 + 68) != *(float *)(v21 + 256)
        || *(float *)(v13 + 72) != *(float *)(v21 + 260) )
      {
        v22 = *(_QWORD *)(v21 + 40);
        v32 = 0LL;
        v31 = _xmm;
        (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v22 + 240LL))(v22, &v31);
        v23 = *(_QWORD *)(v21 + 48);
        *(_BYTE *)(v21 + 245) = 0;
        v24 = *(_OWORD *)v19;
        *(_DWORD *)(v21 + 264) = v20;
        *(_OWORD *)(v21 + 248) = v24;
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v23 + 80LL))(v23, v13 + 60, v20);
      }
    }
    *(_BYTE *)(v13 + 56) = 1;
  }
  else
  {
    v25 = *(_QWORD *)(v13 + 16);
    v26 = *(_QWORD *)(v25 + 48);
    *(_BYTE *)(v25 + 245) = 1;
    (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v26 + 80LL))(v26, 0LL, 1LL);
  }
  ++*(_DWORD *)(v13 + 52);
}
