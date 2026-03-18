/*
 * XREFs of ?Create@CDrawListPrimitive@@SAJ_NPEBVCVertexXYAAColorDUV2@@IPEBGIAEBUD2D_VECTOR_2F@@0PEAPEAV1@@Z @ 0x180057620
 * Callers:
 *     ?ReplaceMegaRectsWithClippedRects@CMegaRectCollection@@QEAAJPEBVCMILMatrix@@@Z @ 0x18006F960 (-ReplaceMegaRectsWithClippedRects@CMegaRectCollection@@QEAAJPEBVCMILMatrix@@@Z.c)
 *     ?ExtractBuiltPrimitiveEntry@CDrawListPrimitiveBuilder@@IEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVALUE@@@Z @ 0x1800961EC (-ExtractBuiltPrimitiveEntry@CDrawListPrimitiveBuilder@@IEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLOR.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180061620 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800616B0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?SplitVertex@@YAXAEBVCVertexXYAAColorDUV2@@AEBUD2D_VECTOR_2F@@PEAUD2D_POINT_2F@@PEAVCVertexXYWColorDUV2@@PEAVCVertexAAFixupData@@@Z @ 0x1800AF71C (-SplitVertex@@YAXAEBVCVertexXYAAColorDUV2@@AEBUD2D_VECTOR_2F@@PEAUD2D_POINT_2F@@PEAVCVertexXYWCo.c)
 *     ?AddRef@CManipulationFrame@@UEAAKXZ @ 0x1800B7FD0 (-AddRef@CManipulationFrame@@UEAAKXZ.c)
 *     memcpy_0 @ 0x1800BF662 (memcpy_0.c)
 *     sqrtf_0 @ 0x1800BF6B6 (sqrtf_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawListPrimitive::Create(
        char a1,
        const struct CVertexXYAAColorDUV2 *a2,
        unsigned int a3,
        const unsigned __int16 *a4,
        unsigned int a5,
        const struct D2D_VECTOR_2F *a6,
        bool a7,
        struct CDrawListPrimitive **a8)
{
  unsigned int v8; // r12d
  unsigned int v9; // r13d
  unsigned int v10; // r8d
  unsigned int v11; // ecx
  float *v12; // r15
  void *v13; // rsi
  void *v14; // rdi
  float v15; // xmm8_4
  float y; // xmm11_4
  __int64 v17; // rbx
  _DWORD *v18; // r14
  size_t v19; // rbx
  _BYTE *v20; // rax
  __int64 v21; // xmm2_8
  float *v22; // rdi
  float *v23; // rbx
  signed __int64 v24; // rsi
  float v25; // xmm13_4
  float v26; // xmm14_4
  float v27; // xmm15_4
  __int64 v28; // r15
  float v29; // xmm0_4
  float v30; // xmm2_4
  unsigned __int64 v31; // xmm1_8
  float v32; // xmm2_4
  float v33; // xmm0_4
  float v34; // xmm0_4
  float v35; // xmm1_4
  unsigned int v36; // r13d
  unsigned __int64 v37; // rdx
  void *(__fastcall *v38)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  void *v39; // rax
  void *(__fastcall *v40)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  struct CDrawListPrimitive *v41; // rax
  struct CDrawListPrimitive *v42; // rbx
  __int128 v43; // xmm0
  __int128 v44; // xmm0
  void (*v45)(WPF::ProcessHeapImpl *__hidden, void *); // rax
  __m128 v47; // xmm4
  float v48; // xmm7_4
  float v49; // xmm2_4
  __m128 v50; // xmm10
  float v51; // xmm8_4
  __m128 v52; // xmm9
  float v53; // xmm7_4
  __m128 v54; // xmm2
  __m128 v55; // xmm1
  unsigned __int64 v56; // xmm0_8
  __m128 v57; // xmm1
  __m128 v58; // xmm0
  float v59; // xmm0_4
  signed __int64 v60; // rsi
  struct D2D_POINT_2F *v61; // rdi
  struct CVertexXYWColorDUV2 *v62; // rbx
  __int64 v63; // r14
  unsigned int v64; // [rsp+28h] [rbp-E0h]
  struct D2D_VECTOR_2F v65; // [rsp+38h] [rbp-D0h] BYREF
  struct D2D_VECTOR_2F v66[2]; // [rsp+40h] [rbp-C8h]
  __int128 v67; // [rsp+50h] [rbp-B8h]
  __int64 v68; // [rsp+60h] [rbp-A8h]
  float *v69; // [rsp+68h] [rbp-A0h]
  _BYTE *v70; // [rsp+70h] [rbp-98h]
  _DWORD *v71; // [rsp+78h] [rbp-90h]
  __int64 v72; // [rsp+80h] [rbp-88h]
  float v73; // [rsp+88h] [rbp-80h]
  __int64 v74; // [rsp+8Ch] [rbp-7Ch]
  __int64 v75; // [rsp+94h] [rbp-74h]
  float v76; // [rsp+9Ch] [rbp-6Ch]
  __int64 v77; // [rsp+A0h] [rbp-68h]
  __int128 v78; // [rsp+A8h] [rbp-60h]
  __int128 v79; // [rsp+B8h] [rbp-50h]
  int v80; // [rsp+C8h] [rbp-40h]
  __int128 v81; // [rsp+D8h] [rbp-30h]
  __int128 v82; // [rsp+E8h] [rbp-20h]
  __int128 v83; // [rsp+F8h] [rbp-10h]
  __int128 v84; // [rsp+108h] [rbp+0h]
  unsigned int v87; // [rsp+218h] [rbp+110h]
  float x; // [rsp+230h] [rbp+128h]

  v8 = 0;
  v9 = a3;
  if ( a3 > 0x10000 || (v10 = a5, a5 > 0x1FFFE) )
  {
    v9 = 0;
    a5 = 0;
    v10 = 0;
  }
  v11 = v9;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v87 = v9;
  y = a6->y;
  x = a6->x;
  v15 = x;
  v65.x = x;
  v65.y = y;
  if ( x < 0.0049999999 || x > 200.0 || y < 0.0049999999 || y > 200.0 )
  {
    v15 = FLOAT_1_0;
    y = FLOAT_1_0;
    x = FLOAT_1_0;
    v65.x = FLOAT_1_0;
    v65.y = FLOAT_1_0;
  }
  if ( !v9 || !v10 )
  {
    v87 = 4;
    *(_OWORD *)&v66[0].x = 0uLL;
    v18 = &g_rgEmptyPrimitiveBaseVerticesLocal;
    v12 = (float *)&g_rgEmptyPrimitiveBaseVertices;
    v13 = &g_rgEmptyPrimitiveAAFixupVertices;
    v14 = &g_rgEmptyPrimitiveIndices;
    v36 = 3;
LABEL_42:
    v40 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
    if ( v40 == WPF::ProcessHeapImpl::Alloc )
      v41 = (struct CDrawListPrimitive *)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x68uLL);
    else
      v41 = (struct CDrawListPrimitive *)v40(WPF::g_pProcessHeap, 104uLL);
    v42 = v41;
    if ( v41 )
    {
      v43 = *(_OWORD *)&v66[0].x;
      ++CHWDrawListEngineMetrics::s_cDrawListPrimitives;
      *(_QWORD *)v41 = &CMILRefCountBase::`vftable';
      *((float *)v41 + 23) = v15;
      *(_QWORD *)v41 = &CDrawListPrimitive::`vftable';
      *((_DWORD *)v41 + 18) = v87;
      *((_OWORD *)v41 + 1) = v43;
      *((_BYTE *)v41 + 100) = a1;
      v44 = v67;
      *((_BYTE *)v41 + 101) = a7;
      *((float *)v41 + 24) = y;
      *((_DWORD *)v41 + 2) = 0;
      *((_OWORD *)v41 + 2) = v44;
      *((_QWORD *)v41 + 6) = v12;
      *((_QWORD *)v41 + 7) = v13;
      *((_QWORD *)v41 + 8) = v18;
      *((_QWORD *)v41 + 10) = v14;
      *((_DWORD *)v41 + 22) = v36;
      CManipulationFrame::AddRef(v41);
      v18 = 0LL;
      v12 = 0LL;
      v13 = 0LL;
      v14 = 0LL;
      *a8 = v42;
      goto LABEL_46;
    }
    v64 = 213;
    goto LABEL_74;
  }
  v81 = _xmm_ff7fffffff7fffff7f7fffff7f7fffff;
  v82 = _xmm_ff7fffffff7fffff7f7fffff7f7fffff;
  *(_OWORD *)&v66[0].x = _xmm_ff7fffffff7fffff7f7fffff7f7fffff;
  v83 = _xmm_ff7fffffff7fffff7f7fffff7f7fffff;
  v84 = _xmm_ff7fffffff7fffff7f7fffff7f7fffff;
  v67 = _xmm_ff7fffffff7fffff7f7fffff7f7fffff;
  if ( (v9 & 1) != 0 )
  {
    v11 = v9 - (v9 & 1) + 2;
    v87 = v11;
  }
  v17 = v11;
  v71 = _aligned_malloc(8LL * v11, 0x10uLL);
  v18 = v71;
  if ( v71 )
  {
    v19 = 32 * v17;
    v69 = (float *)_aligned_malloc(v19, 0x10uLL);
    v12 = v69;
    if ( v69 )
    {
      v20 = _aligned_malloc(v19, 0x10uLL);
      v70 = v20;
      v13 = v20;
      if ( v20 )
      {
        v21 = _xmm;
        v22 = v69 + 6;
        v23 = (float *)((char *)a2 + 60);
        v24 = v20 - (_BYTE *)v69;
        v25 = *((float *)&v67 + 3);
        v26 = *(float *)&v67;
        v27 = *((float *)&v67 + 2);
        v28 = v9;
        v29 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v15 - 1.0)) & _xmm);
        *(float *)&v68 = v29;
        do
        {
          *v18 = *((_DWORD *)v23 - 15);
          v18[1] = *((_DWORD *)v23 - 14);
          if ( v29 >= 0.0000011920929
            || (v30 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(y - 1.0)) & v21), v30 >= 0.0000011920929) )
          {
            v47 = (__m128)LODWORD(FLOAT_1_0);
            v48 = *(v23 - 14) - *(v23 - 6);
            v49 = *(v23 - 15) - *(v23 - 7);
            v78 = _xmm;
            v72 = *(_QWORD *)(v23 - 7);
            v52 = (__m128)HIDWORD(v72);
            v73 = v15;
            v74 = 0LL;
            v79 = _xmm;
            v50 = (__m128)(unsigned int)v72;
            v75 = 0LL;
            v77 = 0LL;
            v80 = 0;
            v50.m128_f32[0] = (float)((float)(*(float *)&v72 * v15) + (float)(*((float *)&v72 + 1) * 0.0)) + 0.0;
            v51 = (float)(v49 * x) + (float)(v48 * 0.0);
            v76 = y;
            v52.m128_f32[0] = (float)((float)(*((float *)&v72 + 1) * y) + (float)(*(float *)&v72 * 0.0)) + 0.0;
            v53 = (float)(v48 * y) + (float)(v49 * 0.0);
            if ( v51 != 0.0 || v53 != 0.0 )
            {
              v59 = sqrtf_0((float)(v53 * v53) + (float)(v51 * v51));
              v47 = (__m128)*((unsigned int *)v23 - 5);
              v47.m128_f32[0] = v47.m128_f32[0] / v59;
            }
            v54 = v47;
            v55 = v47;
            *(v22 - 6) = (float)(v51 * v47.m128_f32[0]) + v50.m128_f32[0];
            v15 = x;
            *(v22 - 5) = (float)(v53 * v47.m128_f32[0]) + v52.m128_f32[0];
            v54.m128_f32[0] = (float)(v47.m128_f32[0] * *(v23 - 11))
                            + (float)((float)(1.0 - v47.m128_f32[0]) * *(v23 - 3));
            v55.m128_f32[0] = (float)(v47.m128_f32[0] * *(v23 - 10))
                            + (float)((float)(1.0 - v47.m128_f32[0]) * *(v23 - 2));
            v56 = _mm_unpacklo_ps(v54, v55).m128_u64[0];
            v57 = v47;
            *((_QWORD *)v22 - 1) = v56;
            v57.m128_f32[0] = (float)(v47.m128_f32[0] * *(v23 - 9))
                            + (float)((float)(1.0 - v47.m128_f32[0]) * *(v23 - 1));
            v47.m128_f32[0] = (float)(v47.m128_f32[0] * *(v23 - 8)) + (float)((float)(1.0 - v47.m128_f32[0]) * *v23);
            v58 = v57;
            v31 = _mm_unpacklo_ps(v50, v52).m128_u64[0];
            *(_QWORD *)v22 = _mm_unpacklo_ps(v58, v47).m128_u64[0];
          }
          else
          {
            *((_QWORD *)v22 - 3) = *(_QWORD *)(v23 - 15);
            *((_QWORD *)v22 - 1) = *(_QWORD *)(v23 - 11);
            *(_QWORD *)v22 = *(_QWORD *)(v23 - 9);
            v31 = *(_QWORD *)(v23 - 7);
          }
          *(_QWORD *)((char *)v22 + v24 - 24) = v31;
          *(v22 - 4) = *(v23 - 13);
          *(v22 - 3) = *(v23 - 12);
          *(float *)((char *)v22 + v24 - 16) = *(v23 - 5);
          *(float *)((char *)v22 + v24 - 12) = *(v23 - 4);
          *(_QWORD *)((char *)v22 + v24 - 8) = *(_QWORD *)(v23 - 3);
          *(_QWORD *)((char *)v22 + v24) = *(_QWORD *)(v23 - 1);
          v32 = *(v23 - 7);
          if ( v32 <= v66[0].x )
            v66[0].x = *(v23 - 7);
          v33 = *(v23 - 6);
          if ( v33 <= v66[0].y )
            v66[0].y = *(v23 - 6);
          if ( v66[1].x <= v32 )
            v66[1].x = v32;
          if ( v66[1].y <= v33 )
            v66[1].y = v33;
          v34 = *(v22 - 6);
          if ( v34 <= v26 )
            v26 = *(v22 - 6);
          v35 = *(v22 - 5);
          if ( v35 <= *((float *)&v67 + 1) )
            *((float *)&v67 + 1) = *(v22 - 5);
          if ( v27 <= v34 )
            v27 = v34;
          if ( v25 <= v35 )
            v25 = v35;
          v21 = _xmm;
          v18 += 2;
          v29 = *(float *)&v68;
          v23 += 16;
          v22 += 8;
          --v28;
        }
        while ( v28 );
        *(float *)&v67 = v26;
        *((_QWORD *)&v67 + 1) = __PAIR64__(LODWORD(v25), LODWORD(v27));
        if ( v9 < v87 )
        {
          v60 = v70 - (_BYTE *)v69;
          v61 = (struct D2D_POINT_2F *)&v71[2 * v9];
          v62 = (struct CVertexXYWColorDUV2 *)&v69[8 * v9];
          v63 = v87 - v9;
          do
          {
            SplitVertex(
              (const struct CVertexXYAAColorDUV2 *)((char *)a2 + 64 * (unsigned __int64)(v9 - 1)),
              &v65,
              v61,
              v62,
              (struct CVertexXYWColorDUV2 *)((char *)v62 + v60));
            v62 = (struct CVertexXYWColorDUV2 *)((char *)v62 + 32);
            ++v61;
            --v63;
          }
          while ( v63 );
          y = v65.y;
          v15 = v65.x;
        }
        v36 = a5;
        v37 = 2LL * a5;
        if ( !is_mul_ok(a5, 2uLL) )
          v37 = -1LL;
        v38 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                       + 8LL);
        if ( v38 == WPF::ProcessHeapImpl::Alloc )
          v39 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v37);
        else
          v39 = (void *)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, unsigned __int64, void *(__fastcall *)(WPF::ProcessHeapImpl *__hidden, unsigned __int64)))v38)(
                          WPF::g_pProcessHeap,
                          v37,
                          WPF::ProcessHeapImpl::Alloc);
        v14 = v39;
        if ( !v39 )
        {
          v8 = -2147024882;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xB2u);
          v12 = v69;
          v13 = v70;
          v18 = v71;
          goto LABEL_46;
        }
        memcpy_0(v39, a4, 2LL * a5);
        v12 = v69;
        v13 = v70;
        v18 = v71;
        goto LABEL_42;
      }
      v64 = 126;
    }
    else
    {
      v64 = 125;
    }
  }
  else
  {
    v64 = 124;
  }
LABEL_74:
  v8 = -2147024882;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, v64);
LABEL_46:
  if ( v18 != (_DWORD *)&g_rgEmptyPrimitiveBaseVerticesLocal )
    _aligned_free(v18);
  if ( v12 != (float *)&g_rgEmptyPrimitiveBaseVertices )
    _aligned_free(v12);
  if ( v13 != &g_rgEmptyPrimitiveAAFixupVertices )
    _aligned_free(v13);
  if ( v14 != &g_rgEmptyPrimitiveIndices )
  {
    v45 = *(void (**)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v45 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v14);
    else
      ((void (__fastcall *)(WPF::ProcessHeapImpl *, void *))v45)(WPF::g_pProcessHeap, v14);
  }
  return v8;
}
