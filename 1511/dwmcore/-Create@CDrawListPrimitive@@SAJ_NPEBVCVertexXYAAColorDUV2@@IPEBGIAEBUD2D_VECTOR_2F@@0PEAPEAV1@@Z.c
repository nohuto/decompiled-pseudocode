/*
 * XREFs of ?Create@CDrawListPrimitive@@SAJ_NPEBVCVertexXYAAColorDUV2@@IPEBGIAEBUD2D_VECTOR_2F@@0PEAPEAV1@@Z @ 0x180034450
 * Callers:
 *     ?ExtractBuiltPrimitiveEntry@CDrawListPrimitiveBuilder@@QEAAJMMPEA_NPEAPEAVCHWDrawListEntry@@@Z @ 0x180034204 (-ExtractBuiltPrimitiveEntry@CDrawListPrimitiveBuilder@@QEAAJMMPEA_NPEAPEAVCHWDrawListEntry@@@Z.c)
 *     ?ReplaceMegaRectsWithClippedRects@CMegaRectCollection@@QEAAJXZ @ 0x180078370 (-ReplaceMegaRectsWithClippedRects@CMegaRectCollection@@QEAAJXZ.c)
 * Callees:
 *     ?SplitVertex@@YAXAEBVCVertexXYAAColorDUV2@@AEBUD2D_VECTOR_2F@@PEAVCVertexXYWColorDUV2@@PEAVCVertexAAFixupData@@@Z @ 0x18001580C (-SplitVertex@@YAXAEBVCVertexXYAAColorDUV2@@AEBUD2D_VECTOR_2F@@PEAVCVertexXYWColorDUV2@@PEAVCVert.c)
 *     ?TransformAndFillPosXYUV2@@YAXPEBVCVertexXYWColorDUV2@@PEBVCVertexAAFixupData@@AEBUD2D_MATRIX_3X2_F@@PEAV1@PEAUD2D_POINT_2F@@@Z @ 0x180015964 (-TransformAndFillPosXYUV2@@YAXPEBVCVertexXYWColorDUV2@@PEBVCVertexAAFixupData@@AEBUD2D_MATRIX_3X.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180051F80 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180052010 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1800BC8C6 (memcpy_0.c)
 *     ?AddRef@CManipulationFrame@@UEAAKXZ @ 0x1800BC980 (-AddRef@CManipulationFrame@@UEAAKXZ.c)
 */

__int64 __fastcall CDrawListPrimitive::Create(
        char a1,
        const struct CVertexXYAAColorDUV2 *a2,
        unsigned int a3,
        unsigned __int16 *a4,
        unsigned int a5,
        const struct D2D_VECTOR_2F *a6,
        bool a7,
        struct CDrawListPrimitive **a8)
{
  unsigned int v8; // r14d
  unsigned int v9; // r13d
  unsigned int v10; // ecx
  _BYTE *v11; // r12
  void *v12; // rdi
  unsigned int v13; // esi
  float v14; // xmm7_4
  float y; // xmm13_4
  void *v16; // r15
  _BYTE *v17; // rax
  float v18; // xmm3_4
  _QWORD *v19; // rdi
  __int64 v20; // xmm2_8
  float v21; // xmm0_4
  char *v22; // rbx
  float v23; // xmm7_4
  signed __int64 v24; // r14
  float v25; // xmm8_4
  __m128 v26; // xmm4
  float v27; // xmm9_4
  float v28; // xmm10_4
  float v29; // xmm11_4
  float v30; // xmm12_4
  __int64 v31; // r15
  float v32; // xmm14_4
  float v33; // xmm0_4
  float v34; // xmm15_4
  float v35; // xmm2_4
  float *v36; // rsi
  float v37; // xmm2_4
  float v38; // xmm0_4
  float v39; // xmm1_4
  __int128 v40; // xmm6
  FLOAT v41; // xmm7_4
  __int64 v42; // r13
  unsigned __int64 v43; // rbx
  void *(__fastcall *v44)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // r14
  void *v45; // rax
  void *(__fastcall *v46)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rsi
  FLOAT *v47; // rax
  struct CDrawListPrimitive *v48; // rbx
  __int128 v49; // xmm0
  void (*v50)(WPF::ProcessHeapImpl *__hidden, void *); // rsi
  __m128 v52; // xmm3
  __m128 v53; // xmm2
  const struct CVertexAAFixupData *v54; // rdx
  const struct CVertexXYAAColorDUV2 *v55; // r14
  signed __int64 v56; // rdi
  struct CVertexXYWColorDUV2 *v57; // rbx
  __int64 v58; // rsi
  unsigned int v59; // [rsp+28h] [rbp-E0h]
  float x; // [rsp+3Ch] [rbp-CCh]
  unsigned int v62; // [rsp+40h] [rbp-C8h]
  struct D2D_VECTOR_2F v63; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int64 v64; // [rsp+50h] [rbp-B8h]
  __int128 v65; // [rsp+58h] [rbp-B0h]
  __int128 v66; // [rsp+68h] [rbp-A0h]
  __int64 v67; // [rsp+78h] [rbp-90h]
  const struct CVertexXYAAColorDUV2 *v68; // [rsp+80h] [rbp-88h]
  _QWORD *v69; // [rsp+88h] [rbp-80h]
  struct D2D_POINT_2F v70; // [rsp+90h] [rbp-78h] BYREF
  void *Src; // [rsp+98h] [rbp-70h]
  struct CDrawListPrimitive **v72; // [rsp+A0h] [rbp-68h]
  struct D2D_MATRIX_3X2_F v73; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v74; // [rsp+C0h] [rbp-48h]
  __int128 v75; // [rsp+D0h] [rbp-38h]
  __int128 v76; // [rsp+E0h] [rbp-28h]
  __int128 v77; // [rsp+F0h] [rbp-18h]
  __int128 v78; // [rsp+100h] [rbp-8h]

  v8 = 0;
  v9 = a3;
  v10 = a5;
  Src = a4;
  v68 = a2;
  v64 = __PAIR64__(a3, a5);
  v72 = a8;
  if ( a3 > 0x10000 || a5 > 0x1FFFE )
  {
    v10 = 0;
    v64 = 0LL;
    v9 = 0;
  }
  v11 = 0LL;
  v12 = 0LL;
  v13 = v9;
  v62 = v9;
  y = a6->y;
  x = a6->x;
  v63.x = a6->x;
  v14 = v63.x;
  v63.y = y;
  if ( v63.x < 0.0049999999 || v63.x > 200.0 || y < 0.0049999999 || y > 200.0 )
  {
    v14 = FLOAT_1_0;
    y = FLOAT_1_0;
    x = FLOAT_1_0;
    v63.y = FLOAT_1_0;
    v63.x = FLOAT_1_0;
  }
  if ( v9 && v10 )
  {
    v76 = _xmm_ff7fffffff7fffff7f7fffff7f7fffff;
    v74 = _xmm_ff7fffffff7fffff7f7fffff7f7fffff;
    v66 = _xmm_ff7fffffff7fffff7f7fffff7f7fffff;
    v77 = _xmm_ff7fffffff7fffff7f7fffff7f7fffff;
    v75 = _xmm_ff7fffffff7fffff7f7fffff7f7fffff;
    v65 = _xmm_ff7fffffff7fffff7f7fffff7f7fffff;
    if ( (v9 & 1) != 0 )
    {
      v13 = v9 - (v9 & 1) + 2;
      v62 = v13;
    }
    v69 = _aligned_malloc(32LL * v13, 0x10uLL);
    v16 = v69;
    if ( !v69 )
    {
      v59 = 1095;
      goto LABEL_71;
    }
    v17 = _aligned_malloc(32LL * v13, 0x10uLL);
    v11 = v17;
    if ( !v17 )
    {
      v59 = 1096;
      goto LABEL_71;
    }
    v18 = FLOAT_1_0;
    v19 = v69 + 3;
    v20 = _xmm;
    v21 = v14 - 1.0;
    v22 = (char *)v68 + 24;
    v23 = *((float *)&v65 + 3);
    v24 = v17 - (_BYTE *)v69;
    v25 = *(float *)&v65;
    v26 = 0LL;
    v27 = *((float *)&v65 + 2);
    v28 = *((float *)&v66 + 3);
    v29 = *((float *)&v65 + 1);
    v30 = *((float *)&v66 + 2);
    v31 = v9;
    v32 = *((float *)&v66 + 1);
    v33 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v21) & _xmm);
    LODWORD(v34) = v66;
    *(float *)&v67 = v33;
    do
    {
      if ( v33 >= 0.0000011920929
        || (v35 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(y - v18)) & v20), v35 >= 0.0000011920929) )
      {
        *(float *)&v78 = x;
        v52 = v26;
        *(_QWORD *)((char *)&v78 + 4) = 0LL;
        v53 = v26;
        *((float *)&v78 + 3) = y;
        v53.m128_f32[0] = v26.m128_f32[0] - (float)(y * v26.m128_f32[0]);
        v52.m128_f32[0] = v26.m128_f32[0] - (float)(x * v26.m128_f32[0]);
        *(_OWORD *)&v73.m11 = v78;
        *(_QWORD *)&v73.m[2][0] = _mm_unpacklo_ps(v52, v53).m128_u64[0];
        if ( v22 == (char *)24 )
          v54 = 0LL;
        else
          v54 = (const struct CVertexAAFixupData *)(v22 + 8);
        v36 = (float *)(v19 - 3);
        TransformAndFillPosXYUV2(
          (const struct CVertexXYWColorDUV2 *)(v22 - 24),
          v54,
          &v73,
          (struct CVertexXYWColorDUV2 *)(v19 - 3),
          &v70);
        v26 = 0LL;
        v18 = FLOAT_1_0;
        *(struct D2D_POINT_2F *)((char *)v19 + v24 - 24) = v70;
      }
      else
      {
        v36 = (float *)(v19 - 3);
        *(v19 - 3) = *((_QWORD *)v22 - 3);
        *(v19 - 1) = *((_QWORD *)v22 - 1);
        *v19 = *(_QWORD *)v22;
        *(_QWORD *)((char *)v19 + v24 - 24) = *((_QWORD *)v22 + 1);
      }
      *((_DWORD *)v19 - 4) = *((_DWORD *)v22 - 4);
      *((_DWORD *)v19 - 3) = *((_DWORD *)v22 - 3);
      *(_DWORD *)((char *)v19 + v24 - 16) = *((_DWORD *)v22 + 4);
      *(_DWORD *)((char *)v19 + v24 - 12) = *((_DWORD *)v22 + 5);
      *(_QWORD *)((char *)v19 + v24 - 8) = *((_QWORD *)v22 + 3);
      *(_QWORD *)((char *)v19 + v24) = *((_QWORD *)v22 + 4);
      v37 = *((float *)v22 + 2);
      if ( v37 <= v34 )
        v34 = *((float *)v22 + 2);
      v38 = *((float *)v22 + 3);
      if ( v38 <= v32 )
        v32 = *((float *)v22 + 3);
      if ( v30 <= v37 )
        v30 = *((float *)v22 + 2);
      if ( v28 <= v38 )
        v28 = *((float *)v22 + 3);
      if ( *v36 <= v25 )
        v25 = *v36;
      v39 = *((float *)v19 - 5);
      if ( v39 <= v29 )
        v29 = *((float *)v19 - 5);
      if ( v27 <= *v36 )
        v27 = *v36;
      if ( v23 <= v39 )
        v23 = *((float *)v19 - 5);
      v33 = *(float *)&v67;
      v22 += 64;
      v20 = _xmm;
      v19 += 4;
      --v31;
    }
    while ( v31 );
    v16 = v69;
    *((_QWORD *)&v66 + 1) = __PAIR64__(LODWORD(v28), LODWORD(v30));
    *(_QWORD *)&v66 = __PAIR64__(LODWORD(v32), LODWORD(v34));
    v40 = v66;
    *(float *)&v65 = v25;
    *(_QWORD *)((char *)&v65 + 4) = __PAIR64__(LODWORD(v27), LODWORD(v29));
    *((float *)&v65 + 3) = v23;
    if ( HIDWORD(v64) < v62 )
    {
      v55 = (const struct CVertexXYAAColorDUV2 *)((char *)v68 + 64 * (unsigned __int64)(unsigned int)(HIDWORD(v64) - 1));
      v56 = v11 - (_BYTE *)v69;
      v57 = (struct CVertexXYWColorDUV2 *)&v69[4 * HIDWORD(v64)];
      v58 = v62 - HIDWORD(v64);
      do
      {
        SplitVertex(v55, &v63, v57, (struct CVertexXYWColorDUV2 *)((char *)v57 + v56));
        v57 = (struct CVertexXYWColorDUV2 *)((char *)v57 + 32);
        --v58;
      }
      while ( v58 );
      y = v63.y;
      v41 = v63.x;
    }
    else
    {
      v41 = x;
    }
    v42 = (unsigned int)v64;
    v43 = 2LL * (unsigned int)v64;
    if ( !is_mul_ok((unsigned int)v64, 2uLL) )
      v43 = -1LL;
    v44 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
    if ( v44 == WPF::ProcessHeapImpl::Alloc )
      v45 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v43);
    else
      v45 = v44(WPF::g_pProcessHeap, v43);
    v12 = v45;
    if ( !v45 )
    {
      v59 = 1133;
      goto LABEL_71;
    }
    memcpy_0(v45, Src, 2 * v42);
    v8 = 0;
  }
  else
  {
    v41 = x;
    v40 = 0LL;
    v16 = &g_rgEmptyPrimitiveBaseVertices;
    v62 = 4;
    v11 = &g_rgEmptyPrimitiveAAFixupVertices;
    v12 = &g_rgEmptyPrimitiveIndices;
    LODWORD(v42) = 3;
  }
  v46 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
  if ( v46 == WPF::ProcessHeapImpl::Alloc )
    v47 = (FLOAT *)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x60uLL);
  else
    v47 = (FLOAT *)v46(WPF::g_pProcessHeap, 96uLL);
  v48 = (struct CDrawListPrimitive *)v47;
  if ( v47 )
  {
    v49 = v65;
    ++CHWDrawListEngineMetrics::s_cDrawListPrimitives;
    *(_QWORD *)v47 = &CMILRefCountBase::`vftable';
    v47[21] = v41;
    *(_QWORD *)v47 = &CDrawListPrimitive::`vftable';
    *((_DWORD *)v47 + 16) = v62;
    *((_BYTE *)v47 + 92) = a7;
    *((_BYTE *)v47 + 93) = a1;
    v47[22] = y;
    v47[2] = 0.0;
    *((_OWORD *)v47 + 1) = v40;
    *((_QWORD *)v47 + 6) = v16;
    *((_OWORD *)v47 + 2) = v49;
    *((_QWORD *)v47 + 7) = v11;
    *((_QWORD *)v47 + 9) = v12;
    *((_DWORD *)v47 + 20) = v42;
    CManipulationFrame::AddRef((CManipulationFrame *)v47);
    v16 = 0LL;
    v11 = 0LL;
    v12 = 0LL;
    *v72 = v48;
    goto LABEL_46;
  }
  v59 = 1166;
LABEL_71:
  v8 = -2147024882;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, v59);
LABEL_46:
  if ( v16 != &g_rgEmptyPrimitiveBaseVertices )
    _aligned_free(v16);
  if ( v11 != (_BYTE *)&g_rgEmptyPrimitiveAAFixupVertices )
    _aligned_free(v11);
  if ( v12 != &g_rgEmptyPrimitiveIndices )
  {
    v50 = *(void (**)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v50 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v12);
    else
      ((void (__fastcall *)(WPF::ProcessHeapImpl *, void *))v50)(WPF::g_pProcessHeap, v12);
  }
  return v8;
}
