/*
 * XREFs of ?PushLayer@CD2DTarget@@QEAAXAEBUD2D_RECT_F@@PEAUID2D1Geometry@@PEAUD2D_MATRIX_3X2_F@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_LAYER_OPTIONS1@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x180024CAC
 * Callers:
 *     ?PushLayer@CD2DContext@@MEAAXPEBVID2DContextOwner@@AEBUD2D_RECT_F@@PEAUID2D1Geometry@@PEAUD2D_MATRIX_3X2_F@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_LAYER_OPTIONS1@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x180021A40 (-PushLayer@CD2DContext@@MEAAXPEBVID2DContextOwner@@AEBUD2D_RECT_F@@PEAUID2D1Geometry@@PEAUD2D_MA.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     memset_0 @ 0x1800BC8D2 (memset_0.c)
 */

void __fastcall CD2DTarget::PushLayer(
        CD2DTarget *this,
        const __m128i *a2,
        struct ID2D1Geometry *a3,
        struct D2D_MATRIX_3X2_F *a4,
        float a5,
        enum D2D1_ANTIALIAS_MODE a6,
        enum D2D1_LAYER_OPTIONS1 a7,
        enum D2D1_PRIMITIVE_BLEND a8)
{
  __int64 v8; // rax
  __int64 v12; // r15
  unsigned __int64 v13; // xmm1_8
  __m128i v14; // xmm2
  __int64 v15; // rax
  unsigned int v16; // r12d
  __int64 v17; // r14
  float *v18; // r15
  __int64 v19; // rdi
  __int64 v20; // rdi
  __int128 v21; // xmm0
  __int64 v22; // rax
  __int64 v23; // rdi
  _BYTE v25[4]; // [rsp+34h] [rbp-BDh] BYREF
  _BYTE v26[40]; // [rsp+40h] [rbp-B1h]
  __int64 v27; // [rsp+68h] [rbp-89h]
  __int64 v28; // [rsp+70h] [rbp-81h]
  __int128 v29; // [rsp+78h] [rbp-79h] BYREF
  unsigned __int64 v30; // [rsp+88h] [rbp-69h]
  _OWORD v31[4]; // [rsp+98h] [rbp-59h] BYREF
  __int64 v32; // [rsp+D8h] [rbp-19h]

  v8 = *((_QWORD *)this + 2);
  v30 = 0LL;
  v29 = _xmm;
  (*(void (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)(v8 + 40) + 240LL))(*(_QWORD *)(v8 + 40), &v29);
  v12 = *((_QWORD *)this + 2);
  if ( a8 != *(_DWORD *)(v12 + 236) )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v12 + 40) + 624LL))(*(_QWORD *)(v12 + 40), (unsigned int)a8);
    *(_DWORD *)(v12 + 236) = a8;
  }
  if ( a4 )
  {
    v13 = *(_QWORD *)&a4->m[2][0];
    v29 = *(_OWORD *)&a4->m11;
    v30 = v13;
  }
  else
  {
    v29 = _xmm;
    v30 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  }
  memset_0(v25, 0, 0x44uLL);
  *(_OWORD *)&v26[12] = v29;
  *(_QWORD *)v26 = a3;
  v14 = _mm_loadu_si128(a2);
  *(_DWORD *)&v26[8] = a6;
  *(_QWORD *)&v26[28] = v30;
  LODWORD(v28) = a7;
  v15 = *((_QWORD *)this + 2);
  v31[2] = *(_OWORD *)&v26[16];
  *(float *)&v26[36] = a5;
  v27 = 0LL;
  v31[0] = v14;
  v31[1] = *(_OWORD *)v26;
  v32 = v28;
  v31[3] = *(unsigned __int64 *)&v26[32];
  (*(void (__fastcall **)(_QWORD, _OWORD *, _QWORD))(**(_QWORD **)(v15 + 40) + 688LL))(*(_QWORD *)(v15 + 40), v31, 0LL);
  if ( *((_BYTE *)this + 56) )
  {
    v16 = *((_DWORD *)this + 19);
    if ( *((_BYTE *)this + 48) )
    {
      v17 = *((_QWORD *)this + 2);
      v18 = (float *)((char *)this + 60);
      if ( *(_BYTE *)(v17 + 378)
        || v16 != *(_DWORD *)(v17 + 256)
        || *v18 != *(float *)(v17 + 240)
        || *((float *)this + 16) != *(float *)(v17 + 244)
        || *((float *)this + 17) != *(float *)(v17 + 248)
        || *((float *)this + 18) != *(float *)(v17 + 252) )
      {
        v19 = *(_QWORD *)(v17 + 40);
        v30 = 0LL;
        v29 = _xmm;
        (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v19 + 240LL))(v19, &v29);
        v20 = *(_QWORD *)(v17 + 48);
        *(_BYTE *)(v17 + 378) = 0;
        v21 = *(_OWORD *)v18;
        *(_DWORD *)(v17 + 256) = v16;
        *(_OWORD *)(v17 + 240) = v21;
        (*(void (__fastcall **)(__int64, char *, _QWORD))(*(_QWORD *)v20 + 80LL))(v20, (char *)this + 60, v16);
      }
    }
    *((_BYTE *)this + 56) = 1;
  }
  else
  {
    v22 = *((_QWORD *)this + 2);
    v23 = *(_QWORD *)(v22 + 48);
    *(_BYTE *)(v22 + 378) = 1;
    (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v23 + 80LL))(v23, 0LL, 1LL);
  }
  ++*((_DWORD *)this + 13);
}
