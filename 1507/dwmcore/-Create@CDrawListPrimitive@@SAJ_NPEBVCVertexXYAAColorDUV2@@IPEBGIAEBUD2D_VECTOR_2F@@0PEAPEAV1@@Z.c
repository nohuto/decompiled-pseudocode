/*
 * XREFs of ?Create@CDrawListPrimitive@@SAJ_NPEBVCVertexXYAAColorDUV2@@IPEBGIAEBUD2D_VECTOR_2F@@0PEAPEAV1@@Z @ 0x180041D10
 * Callers:
 *     ?ReplaceMegaRectsWithClippedRects@CMegaRectCollection@@QEAAJXZ @ 0x18003E3A0 (-ReplaceMegaRectsWithClippedRects@CMegaRectCollection@@QEAAJXZ.c)
 *     ?ExtractBuiltPrimitiveEntry@CDrawListPrimitiveBuilder@@QEAAJMMPEA_NPEAPEAVCHWDrawListEntry@@@Z @ 0x180077D1C (-ExtractBuiltPrimitiveEntry@CDrawListPrimitiveBuilder@@QEAAJMMPEA_NPEAPEAVCHWDrawListEntry@@@Z.c)
 * Callees:
 *     ?TransformAndFillPosXYUV2@@YAXPEBVCVertexXYWColorDUV2@@PEBVCVertexAAFixupData@@AEBUD2D_MATRIX_3X2_F@@PEAV1@PEAUD2D_POINT_2F@@@Z @ 0x18000E274 (-TransformAndFillPosXYUV2@@YAXPEBVCVertexXYWColorDUV2@@PEBVCVertexAAFixupData@@AEBUD2D_MATRIX_3X.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180031300 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180031390 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?SplitVertex@@YAXAEBVCVertexXYAAColorDUV2@@AEBUD2D_VECTOR_2F@@PEAVCVertexXYWColorDUV2@@PEAVCVertexAAFixupData@@@Z @ 0x18005D634 (-SplitVertex@@YAXAEBVCVertexXYAAColorDUV2@@AEBUD2D_VECTOR_2F@@PEAVCVertexXYWColorDUV2@@PEAVCVert.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     memcpy_0 @ 0x180099BBA (memcpy_0.c)
 *     ?AddRef@CManipulationFrame@@UEAAKXZ @ 0x18009B420 (-AddRef@CManipulationFrame@@UEAAKXZ.c)
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
  unsigned int v8; // r13d
  unsigned int v9; // r15d
  unsigned int v10; // ecx
  _BYTE *v11; // r12
  void *v12; // rdi
  unsigned int v13; // esi
  float x; // xmm10_4
  float y; // xmm8_4
  void *v16; // r14
  _BYTE *v17; // rax
  float v18; // xmm3_4
  _QWORD *v19; // rdi
  __int64 v20; // xmm2_8
  float v21; // xmm6_4
  char *v22; // rbx
  signed __int64 v23; // r14
  float v24; // xmm7_4
  float v25; // xmm11_4
  float v26; // xmm12_4
  float v27; // xmm13_4
  __int64 v28; // rcx
  float v29; // xmm14_4
  float v30; // xmm0_4
  float v31; // xmm15_4
  float v32; // xmm2_4
  float *v33; // rsi
  float v34; // xmm2_4
  float v35; // xmm0_4
  float v36; // xmm0_4
  __int128 v37; // xmm6
  __int64 v38; // r15
  SIZE_T v39; // rbx
  LPVOID (__fastcall *v40)(WPF::ProcessHeapImpl *, SIZE_T); // r14
  void *v41; // rax
  LPVOID (__fastcall *v42)(WPF::ProcessHeapImpl *, SIZE_T); // rsi
  float *v43; // rax
  struct CDrawListPrimitive *v44; // rbx
  __int128 v45; // xmm0
  void (__fastcall *v46)(WPF::ProcessHeapImpl *, void *); // rsi
  const struct CVertexXYAAColorDUV2 *v48; // r14
  signed __int64 v49; // rdi
  struct CVertexXYWColorDUV2 *v50; // rbx
  __int64 v51; // rsi
  __m128 v52; // xmm3
  __m128 v53; // xmm2
  const struct CVertexAAFixupData *v54; // rdx
  unsigned int v55; // [rsp+28h] [rbp-E0h]
  unsigned int v57; // [rsp+3Ch] [rbp-CCh]
  struct D2D_VECTOR_2F v58; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v59; // [rsp+48h] [rbp-C0h]
  _QWORD *v60; // [rsp+50h] [rbp-B8h]
  __int128 v61; // [rsp+58h] [rbp-B0h]
  __int128 v62; // [rsp+68h] [rbp-A0h]
  __int64 v63; // [rsp+78h] [rbp-90h]
  __int64 v64; // [rsp+80h] [rbp-88h]
  const struct CVertexXYAAColorDUV2 *v65; // [rsp+88h] [rbp-80h]
  void *Src; // [rsp+90h] [rbp-78h]
  struct CDrawListPrimitive **v67; // [rsp+98h] [rbp-70h]
  struct D2D_POINT_2F v68; // [rsp+A0h] [rbp-68h] BYREF
  struct D2D_MATRIX_3X2_F v69; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v70; // [rsp+C0h] [rbp-48h]
  __int128 v71; // [rsp+D0h] [rbp-38h]
  __int128 v72; // [rsp+E0h] [rbp-28h]
  __int128 v73; // [rsp+F0h] [rbp-18h]
  __int128 v74; // [rsp+100h] [rbp-8h]

  v8 = 0;
  v9 = a3;
  v10 = a5;
  Src = a4;
  v65 = a2;
  LODWORD(v59) = a5;
  v67 = a8;
  if ( a3 > 0x10000 || a5 > 0x1FFFE )
  {
    v10 = 0;
    v9 = 0;
    LODWORD(v59) = 0;
  }
  v11 = 0LL;
  v12 = 0LL;
  v13 = v9;
  v57 = v9;
  y = a6->y;
  v58.x = a6->x;
  x = v58.x;
  v58.y = y;
  if ( v58.x < 0.0049999999 || v58.x > 200.0 || y < 0.0049999999 || y > 200.0 )
  {
    x = FLOAT_1_0;
    y = FLOAT_1_0;
    v58.x = FLOAT_1_0;
    v58.y = FLOAT_1_0;
  }
  if ( !v9 || !v10 )
  {
    v37 = 0LL;
    v57 = 4;
    v16 = &g_rgEmptyPrimitiveBaseVertices;
    v11 = &g_rgEmptyPrimitiveAAFixupVertices;
    v12 = &g_rgEmptyPrimitiveIndices;
    LODWORD(v38) = 3;
LABEL_41:
    v42 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
    if ( v42 == WPF::ProcessHeapImpl::Alloc )
      v43 = (float *)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x60uLL);
    else
      v43 = (float *)v42(WPF::g_pProcessHeap, 96LL);
    v44 = (struct CDrawListPrimitive *)v43;
    if ( v43 )
    {
      v45 = v61;
      ++CHWDrawListEngineMetrics::s_cDrawListPrimitives;
      *(_QWORD *)v43 = &CMILRefCountBase::`vftable';
      v43[21] = x;
      *(_QWORD *)v43 = &CDrawListPrimitive::`vftable';
      *((_DWORD *)v43 + 16) = v57;
      *((_BYTE *)v43 + 92) = a7;
      *((_BYTE *)v43 + 93) = a1;
      v43[22] = y;
      v43[2] = 0.0;
      *((_OWORD *)v43 + 1) = v37;
      *((_QWORD *)v43 + 6) = v16;
      *((_OWORD *)v43 + 2) = v45;
      *((_QWORD *)v43 + 7) = v11;
      *((_QWORD *)v43 + 9) = v12;
      *((_DWORD *)v43 + 20) = v38;
      CManipulationFrame::AddRef((CManipulationFrame *)v43);
      v16 = 0LL;
      v11 = 0LL;
      v12 = 0LL;
      *v67 = v44;
      goto LABEL_45;
    }
    v55 = 1166;
    goto LABEL_69;
  }
  v72 = _xmm_ff7fffffff7fffff7f7fffff7f7fffff;
  v70 = _xmm_ff7fffffff7fffff7f7fffff7f7fffff;
  v62 = _xmm_ff7fffffff7fffff7f7fffff7f7fffff;
  v73 = _xmm_ff7fffffff7fffff7f7fffff7f7fffff;
  v71 = _xmm_ff7fffffff7fffff7f7fffff7f7fffff;
  v61 = _xmm_ff7fffffff7fffff7f7fffff7f7fffff;
  if ( (v9 & 1) != 0 )
  {
    v13 = v9 - (v9 & 1) + 2;
    v57 = v13;
  }
  v60 = _aligned_malloc(32LL * v13, 0x10uLL);
  v16 = v60;
  if ( v60 )
  {
    v17 = _aligned_malloc(32LL * v13, 0x10uLL);
    v11 = v17;
    if ( v17 )
    {
      v18 = FLOAT_1_0;
      v19 = v60 + 3;
      v20 = _xmm;
      v21 = *((float *)&v61 + 3);
      v22 = (char *)v65 + 24;
      v23 = v17 - (_BYTE *)v60;
      v24 = *((float *)&v62 + 3);
      v25 = *(float *)&v61;
      v26 = *((float *)&v61 + 2);
      v27 = *((float *)&v61 + 1);
      v28 = v9;
      v64 = v9;
      v29 = *((float *)&v62 + 2);
      v30 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(x) & _xmm);
      v31 = *((float *)&v62 + 1);
      *(float *)&v63 = v30;
      do
      {
        if ( v30 >= 0.0000011920929
          || (v32 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(y - v18)) & v20), v32 >= 0.0000011920929) )
        {
          *(float *)&v74 = x;
          *(_QWORD *)((char *)&v74 + 4) = 0LL;
          *((float *)&v74 + 3) = y;
          v52 = 0LL;
          v52.m128_f32[0] = 0.0 - (float)(x * 0.0);
          v53 = 0LL;
          v53.m128_f32[0] = 0.0 - (float)(y * 0.0);
          *(_OWORD *)&v69.m11 = v74;
          *(_QWORD *)&v69.m[2][0] = _mm_unpacklo_ps(v52, v53).m128_u64[0];
          if ( v22 == (char *)24 )
            v54 = 0LL;
          else
            v54 = (const struct CVertexAAFixupData *)(v22 + 8);
          v33 = (float *)(v19 - 3);
          TransformAndFillPosXYUV2(
            (const struct CVertexXYWColorDUV2 *)(v22 - 24),
            v54,
            &v69,
            (struct CVertexXYWColorDUV2 *)(v19 - 3),
            &v68);
          v18 = FLOAT_1_0;
          v28 = v64;
          *(struct D2D_POINT_2F *)((char *)v19 + v23 - 24) = v68;
        }
        else
        {
          v33 = (float *)(v19 - 3);
          *(v19 - 3) = *((_QWORD *)v22 - 3);
          *(v19 - 1) = *((_QWORD *)v22 - 1);
          *v19 = *(_QWORD *)v22;
          *(_QWORD *)((char *)v19 + v23 - 24) = *((_QWORD *)v22 + 1);
        }
        *((_DWORD *)v19 - 4) = *((_DWORD *)v22 - 4);
        *((_DWORD *)v19 - 3) = *((_DWORD *)v22 - 3);
        *(_DWORD *)((char *)v19 + v23 - 16) = *((_DWORD *)v22 + 4);
        *(_DWORD *)((char *)v19 + v23 - 12) = *((_DWORD *)v22 + 5);
        *(_QWORD *)((char *)v19 + v23 - 8) = *((_QWORD *)v22 + 3);
        *(_QWORD *)((char *)v19 + v23) = *((_QWORD *)v22 + 4);
        v34 = *((float *)v22 + 2);
        if ( v34 <= *(float *)&v62 )
          LODWORD(v62) = *((_DWORD *)v22 + 2);
        v35 = *((float *)v22 + 3);
        if ( v35 <= v31 )
          v31 = *((float *)v22 + 3);
        if ( v29 <= v34 )
          v29 = v34;
        if ( v24 <= v35 )
          v24 = *((float *)v22 + 3);
        if ( *v33 <= v25 )
          v25 = *v33;
        v36 = *((float *)v19 - 5);
        if ( v36 <= v27 )
          v27 = *((float *)v19 - 5);
        if ( v26 <= *v33 )
          v26 = *v33;
        if ( v21 <= v36 )
          v21 = *((float *)v19 - 5);
        v20 = _xmm;
        v22 += 64;
        v30 = *(float *)&v63;
        v19 += 4;
        v64 = --v28;
      }
      while ( v28 );
      *((_QWORD *)&v62 + 1) = __PAIR64__(LODWORD(v24), LODWORD(v29));
      *((float *)&v62 + 1) = v31;
      *((float *)&v61 + 3) = v21;
      v37 = v62;
      *(float *)&v61 = v25;
      *(_QWORD *)((char *)&v61 + 4) = __PAIR64__(LODWORD(v26), LODWORD(v27));
      if ( v9 < v57 )
      {
        v48 = (const struct CVertexXYAAColorDUV2 *)((char *)v65 + 64 * (unsigned __int64)(v9 - 1));
        v49 = v11 - (_BYTE *)v60;
        v50 = (struct CVertexXYWColorDUV2 *)&v60[4 * v9];
        v51 = v57 - v9;
        do
        {
          SplitVertex(v48, &v58, v50, (struct CVertexXYWColorDUV2 *)((char *)v50 + v49));
          v50 = (struct CVertexXYWColorDUV2 *)((char *)v50 + 32);
          --v51;
        }
        while ( v51 );
        y = v58.y;
        x = v58.x;
      }
      v38 = (unsigned int)v59;
      v39 = 2LL * (unsigned int)v59;
      if ( !is_mul_ok((unsigned int)v59, 2uLL) )
        v39 = -1LL;
      v40 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
      if ( v40 == WPF::ProcessHeapImpl::Alloc )
        v41 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v39);
      else
        v41 = v40(WPF::g_pProcessHeap, v39);
      v12 = v41;
      if ( !v41 )
      {
        v8 = -2147024882;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x46Du);
        v16 = v60;
        goto LABEL_45;
      }
      memcpy_0(v41, Src, 2 * v38);
      v16 = v60;
      goto LABEL_41;
    }
    v55 = 1096;
  }
  else
  {
    v55 = 1095;
  }
LABEL_69:
  v8 = -2147024882;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, v55);
LABEL_45:
  if ( v16 != &g_rgEmptyPrimitiveBaseVertices )
    _aligned_free(v16);
  if ( v11 != (_BYTE *)&g_rgEmptyPrimitiveAAFixupVertices )
    _aligned_free(v11);
  if ( v12 != &g_rgEmptyPrimitiveIndices )
  {
    v46 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v46 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v12);
    else
      v46(WPF::g_pProcessHeap, v12);
  }
  return v8;
}
