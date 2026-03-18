/*
 * XREFs of ?PushLayer@CD2DContext@@MEAAXPEBVID2DContextOwner@@AEBUD2D_RECT_F@@PEAUID2D1Geometry@@PEAUD2D_MATRIX_3X2_F@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_LAYER_OPTIONS1@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1800032D0
 * Callers:
 *     ?ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800058E0 (-ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x18007C9A4 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x18007CA60 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?AreEqual@@YA_NAEBUD2D_RECT_F@@0@Z @ 0x1800AE65C (-AreEqual@@YA_NAEBUD2D_RECT_F@@0@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
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
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rdi
  unsigned __int64 v16; // xmm1_8
  __m128i v17; // xmm2
  __int64 v18; // rax
  unsigned int v19; // esi
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int128 v25; // xmm0
  _BYTE v26[4]; // [rsp+2Ch] [rbp-ADh] BYREF
  _BYTE v27[40]; // [rsp+38h] [rbp-A1h]
  __int64 v28; // [rsp+60h] [rbp-79h]
  __int64 v29; // [rsp+68h] [rbp-71h]
  __int128 v30; // [rsp+70h] [rbp-69h] BYREF
  unsigned __int64 v31; // [rsp+80h] [rbp-59h]
  _OWORD v32[4]; // [rsp+88h] [rbp-51h] BYREF
  __int64 v33; // [rsp+C8h] [rbp-11h]

  CD2DContext::FlushDrawList(this);
  v12 = *((_DWORD *)this + 54);
  v13 = 0LL;
  if ( v12 )
    v13 = *(_QWORD *)(*((_QWORD *)this + 24) + 8LL * (unsigned int)(v12 - 1));
  CD2DContext::EnsureBeginDraw(this);
  v14 = *(_QWORD *)(v13 + 16);
  v31 = 0LL;
  v30 = _xmm;
  (*(void (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)(v14 + 40) + 240LL))(*(_QWORD *)(v14 + 40), &v30);
  v15 = *(_QWORD *)(v13 + 16);
  if ( a9 != *(_DWORD *)(v15 + 260) )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v15 + 40) + 624LL))(*(_QWORD *)(v15 + 40), (unsigned int)a9);
    *(_DWORD *)(v15 + 260) = a9;
  }
  if ( a5 )
  {
    v16 = *(_QWORD *)&a5->m[2][0];
    v30 = *(_OWORD *)&a5->m11;
    v31 = v16;
  }
  else
  {
    v30 = _xmm;
    v31 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  }
  memset_0(v26, 0, 0x44uLL);
  v17 = _mm_loadu_si128(a3);
  v28 = 0LL;
  *(_DWORD *)&v27[8] = a7;
  *(_OWORD *)&v27[12] = v30;
  LODWORD(v29) = a8;
  v18 = *(_QWORD *)(v13 + 16);
  *(_QWORD *)&v27[28] = v31;
  *(_QWORD *)v27 = a4;
  *(float *)&v27[36] = a6;
  v32[2] = *(_OWORD *)&v27[16];
  v32[1] = *(_OWORD *)v27;
  v32[0] = v17;
  v32[3] = *(unsigned __int64 *)&v27[32];
  v33 = v29;
  (*(void (__fastcall **)(_QWORD, _OWORD *, _QWORD))(**(_QWORD **)(v18 + 40) + 688LL))(*(_QWORD *)(v18 + 40), v32, 0LL);
  if ( *(_BYTE *)(v13 + 56) )
  {
    v19 = *(_DWORD *)(v13 + 76);
    if ( *(_BYTE *)(v13 + 48) )
    {
      v20 = *(_QWORD *)(v13 + 16);
      if ( *(_BYTE *)(v20 + 402)
        || v19 != *(_DWORD *)(v20 + 280)
        || !AreEqual((const struct D2D_RECT_F *)(v13 + 60), (const struct D2D_RECT_F *)(v20 + 264)) )
      {
        v23 = *(_QWORD *)(v20 + 40);
        v31 = 0LL;
        v30 = _xmm;
        (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v23 + 240LL))(v23, &v30);
        v24 = *(_QWORD *)(v20 + 48);
        *(_BYTE *)(v20 + 402) = 0;
        v25 = *(_OWORD *)(v13 + 60);
        *(_DWORD *)(v20 + 280) = v19;
        *(_OWORD *)(v20 + 264) = v25;
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v24 + 80LL))(v24, v13 + 60, v19);
      }
    }
    *(_BYTE *)(v13 + 56) = 1;
  }
  else
  {
    v21 = *(_QWORD *)(v13 + 16);
    v22 = *(_QWORD *)(v21 + 48);
    *(_BYTE *)(v21 + 402) = 1;
    (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v22 + 80LL))(v22, 0LL, 1LL);
  }
  ++*(_DWORD *)(v13 + 52);
}
