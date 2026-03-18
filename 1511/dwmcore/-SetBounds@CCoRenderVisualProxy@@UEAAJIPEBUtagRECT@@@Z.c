/*
 * XREFs of ?SetBounds@CCoRenderVisualProxy@@UEAAJIPEBUtagRECT@@@Z @ 0x18010F520
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180076CE4 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180076E90 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z @ 0x1800A9D58 (-PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1800BC8BA (memcmp_0.c)
 *     ?GetContentAsCoRenderContentNoRef@CVisual@@AEBA_NPEAPEAVCCoRenderContent@@@Z @ 0x1800F77D4 (-GetContentAsCoRenderContentNoRef@CVisual@@AEBA_NPEAPEAVCCoRenderContent@@@Z.c)
 *     ?SetDirty@CCoRenderVisualProxy@@AEAAJIPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18010F908 (-SetDirty@CCoRenderVisualProxy@@AEAAJIPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@.c)
 *     ?SetBounds@CCoRenderContent@@QEAA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180132D90 (-SetBounds@CCoRenderContent@@QEAA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rec.c)
 */

__int64 __fastcall CCoRenderVisualProxy::SetBounds(
        CCoRenderVisualProxy *this,
        unsigned int a2,
        const struct tagRECT *a3)
{
  __int64 v3; // rsi
  int v6; // eax
  unsigned int v7; // ebx
  const void *v8; // r14
  int v9; // eax
  int v10; // r13d
  int v11; // r12d
  int v12; // r15d
  unsigned int *p_top; // rdx
  signed __int64 v14; // rcx
  __int64 v15; // r8
  __m128i v16; // xmm0
  __m128i v17; // xmm0
  __m128i v18; // xmm0
  int v19; // ecx
  int v20; // eax
  CVisual *v21; // rcx
  __int64 v22; // r8
  unsigned __int32 v23; // xmm0_4
  unsigned __int32 v24; // xmm1_4
  char v25; // r9
  unsigned int v27; // [rsp+20h] [rbp-49h]
  int v28; // [rsp+40h] [rbp-29h]
  void *Buf1[2]; // [rsp+48h] [rbp-21h] BYREF
  __int64 v30; // [rsp+58h] [rbp-11h]
  int v31; // [rsp+60h] [rbp-9h]
  struct CCoRenderContent *v32[2]; // [rsp+68h] [rbp-1h] BYREF
  __m128 v33; // [rsp+78h] [rbp+Fh] BYREF

  v3 = a2;
  v30 = 0LL;
  v31 = 0;
  *(_OWORD *)Buf1 = 0LL;
  *(__m128i *)v32 = _mm_load_si128((const __m128i *)&_xmm);
  v6 = DynArrayImpl<0>::Grow((__int64)Buf1, 0x10u, a2, 1, 0LL);
  v7 = v6;
  if ( v6 < 0 )
  {
    v27 = 483;
LABEL_3:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, v27);
    goto LABEL_27;
  }
  v8 = Buf1[0];
  v31 = v3;
  if ( (_DWORD)v3 )
  {
    v11 = (int)v32[1];
    p_top = (unsigned int *)&a3->top;
    v10 = HIDWORD(v32[0]);
    v9 = (int)v32[0];
    v14 = (char *)Buf1[0] - (char *)a3;
    v12 = HIDWORD(v32[1]);
    v15 = v3;
    do
    {
      *(float *)((char *)p_top + v14 - 4) = (float)(int)*(p_top - 1);
      v16 = _mm_cvtsi32_si128(*p_top);
      if ( (int)*(p_top - 1) < v9 )
        v9 = *(p_top - 1);
      *(unsigned int *)((char *)p_top + v14) = _mm_cvtepi32_ps(v16).m128_u32[0];
      v17 = _mm_cvtsi32_si128(p_top[1]);
      if ( (int)*p_top < v10 )
        v10 = *p_top;
      *(unsigned int *)((char *)p_top + v14 + 4) = _mm_cvtepi32_ps(v17).m128_u32[0];
      v18 = _mm_cvtsi32_si128(p_top[2]);
      if ( (int)p_top[1] > v11 )
        v11 = p_top[1];
      *(unsigned int *)((char *)p_top + v14 + 8) = _mm_cvtepi32_ps(v18).m128_u32[0];
      if ( (int)p_top[2] > v12 )
        v12 = p_top[2];
      p_top += 4;
      --v15;
    }
    while ( v15 );
  }
  else
  {
    *(_OWORD *)v32 = 0LL;
    v9 = 0;
    v10 = 0;
    v11 = 0;
    v12 = 0;
  }
  v28 = v9;
  v6 = CCoRenderVisualProxy::SetDirty(this, (unsigned int)v3, v8);
  v7 = v6;
  if ( v6 < 0 )
  {
    v27 = 528;
    goto LABEL_3;
  }
  if ( (_DWORD)v3 != *((_DWORD *)this + 14) || memcmp_0(v8, *((const void **)this + 4), 16 * v3) )
  {
    v6 = CCoRenderVisualProxy::SetDirty(this, *((unsigned int *)this + 14), *((_QWORD *)this + 4));
    v7 = v6;
    if ( v6 < 0 )
    {
      v27 = 535;
      goto LABEL_3;
    }
    v19 = *((_DWORD *)this + 13);
    Buf1[0] = *((void **)this + 4);
    *((_DWORD *)this + 13) = HIDWORD(v30);
    v20 = *((_DWORD *)this + 14);
    *((_DWORD *)this + 14) = v3;
    *((_QWORD *)this + 4) = v8;
    HIDWORD(v30) = v19;
    v21 = (CVisual *)*((_QWORD *)this + 3);
    v31 = v20;
    if ( CVisual::GetContentAsCoRenderContentNoRef(v21, v32) )
    {
      v33.m128_f32[0] = (float)v28;
      v33.m128_f32[1] = (float)v10;
      v33.m128_f32[2] = (float)v11;
      v33.m128_f32[3] = (float)v12;
      v23 = _mm_shuffle_ps(v33, v33, 85).m128_u32[0];
      v24 = _mm_shuffle_ps(v33, v33, 170).m128_u32[0];
      v33.m128_i32[3] = _mm_shuffle_ps(v33, v33, 255).m128_u32[0];
      *(unsigned __int64 *)((char *)v33.m128_u64 + 4) = __PAIR64__(v24, v23);
      if ( (unsigned __int8)CCoRenderContent::SetBounds(v32[0], &v33, v22, 0LL) )
        CVisual::PropagateFlags(*((struct CVisual **)this + 3), 1, 0, v25, v25, v25, v25);
    }
    else
    {
      v7 = -2147418113;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147418113, 0x220u);
    }
  }
LABEL_27:
  DynArrayImpl<1>::~DynArrayImpl<1>(Buf1);
  return v7;
}
