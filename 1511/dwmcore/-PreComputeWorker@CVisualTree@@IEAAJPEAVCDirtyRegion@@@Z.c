/*
 * XREFs of ?PreComputeWorker@CVisualTree@@IEAAJPEAVCDirtyRegion@@@Z @ 0x180075E90
 * Callers:
 *     ?PreRender@CDesktopRenderTarget@@UEAAJXZ @ 0x1800750F0 (-PreRender@CDesktopRenderTarget@@UEAAJXZ.c)
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180076884 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?GetBounds@CVisualTree@@QEAAJPEAV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800769A0 (-GetBounds@CVisualTree@@QEAAJPEAV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotN.c)
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180036C00 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180036CE0 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?AddAdditionalDirtyRects@CVisual@@QEAAJPEBUMilRectF@@@Z @ 0x18004D6F0 (-AddAdditionalDirtyRects@CVisual@@QEAAJPEBUMilRectF@@@Z.c)
 *     ?PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@@Z @ 0x18004ECA0 (-PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@@Z.c)
 *     ?GetOptimizedDirtyRects@CDirtyRegion@@QEBAPEBUMilRectF@@XZ @ 0x180079820 (-GetOptimizedDirtyRects@CDirtyRegion@@QEBAPEBUMilRectF@@XZ.c)
 *     ?CalcAcceleration@CDirtyRegion@@AEAAMAEBUDirtyRegionCachedData@1@0@Z @ 0x18007A7DC (-CalcAcceleration@CDirtyRegion@@AEAAMAEBUDirtyRegionCachedData@1@0@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CalcOvehead@@YAMAEBUMilRectF@@0@Z @ 0x1800ABCA4 (-CalcOvehead@@YAMAEBUMilRectF@@0@Z.c)
 *     memset_0 @ 0x1800BC8D2 (memset_0.c)
 */

__int64 __fastcall CVisualTree::PreComputeWorker(CVisualTree *this, struct CDirtyRegion *a2)
{
  __int64 v2; // r12
  CVisualTree *v4; // rbp
  __int64 v5; // rax
  int v6; // eax
  __int64 result; // rax
  int v8; // ebx
  unsigned int v9; // r8d
  unsigned int v10; // ecx
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // r8
  unsigned int i; // r14d
  float *v15; // rbp
  __int64 v16; // r13
  __int64 v17; // rdi
  float *v18; // rbx
  float *v19; // rsi
  const struct MilRectF *v20; // rdx
  char *v21; // rdx
  int v22; // r8d
  bool v23; // zf
  CVisual *v24; // rsi
  const struct MilRectF *OptimizedDirtyRects; // rbx
  unsigned int v26; // eax
  __int64 v27; // rdi
  _QWORD *v28; // rdx
  __int64 v29; // r10
  float v30; // xmm4_4
  __int64 v31; // r9
  float v32; // xmm1_4
  float v33; // xmm3_4
  float v34; // xmm2_4
  float *v35; // r8
  bool v36; // cc
  char v37; // al
  float v38; // xmm2_4
  float v39; // xmm1_4
  const struct CDirtyRegion::DirtyRegionCachedData *v40; // rdx
  CDirtyRegion *v41; // rcx
  float v42; // xmm0_4
  __int64 v43; // rdx
  float *v44; // rcx
  __int64 v45; // r9
  float *v46; // rdx
  float *v47; // rcx
  unsigned int v48; // eax
  __int64 v49; // r9
  float v50; // xmm1_4
  char v51; // al
  float v52; // xmm2_4
  float v53; // xmm2_4
  char v54; // al
  float v55; // xmm1_4
  float v56; // xmm1_4
  char v57; // al
  float v58; // xmm2_4
  float v59; // xmm1_4
  char v60; // al
  float v61; // xmm2_4
  float *v62; // rdx
  __int64 v63; // rbx
  float *v64; // rcx
  __int64 v65; // r9
  float v66; // xmm1_4
  char v67; // al
  float v68; // xmm2_4
  __int64 v69; // r9
  __int64 v70; // r10
  _QWORD *v71; // rdx
  _QWORD *v72; // rdx
  __int64 v73; // [rsp+30h] [rbp-A8h]
  __m128 v74; // [rsp+40h] [rbp-98h] BYREF
  unsigned int v76; // [rsp+F0h] [rbp+18h]

  v2 = 0LL;
  v4 = this;
  v76 = 0;
  if ( *((_BYTE *)this + 33) )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292412, 0x118u);
    return 2291674884LL;
  }
  v5 = *((_QWORD *)this + 3);
  *((_BYTE *)this + 33) = 1;
  if ( (*(_BYTE *)(v5 + 72) & 0xF) != 0 )
  {
    v6 = CPreComputeContext::PreCompute((CVisualTree *)((char *)this + 64), this, a2);
    v76 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xD2u);
      result = v76;
      *((_BYTE *)v4 + 33) = 0;
      return result;
    }
  }
  v8 = 1;
  if ( qword_1801A39E8 )
  {
    v9 = *((_DWORD *)qword_1801A39E8 + 18);
    v10 = 0;
    if ( v9 )
    {
      do
      {
        v11 = *(_QWORD *)(*((_QWORD *)qword_1801A39E8 + 6) + 8LL * v10);
        if ( *(_BYTE *)(v11 + 220) || *(_DWORD *)(v11 + 216) )
          goto LABEL_11;
      }
      while ( ++v10 < v9 );
    }
  }
  if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v4 + 2) + 32LL) + 60LL) )
LABEL_11:
    v8 = 0;
  v12 = *((_QWORD *)v4 + 2);
  if ( *(_DWORD *)(v12 + 1120) )
    v8 = 0;
  if ( *(_QWORD *)(v12 + 512) )
    v8 = 2;
  if ( *((_BYTE *)a2 + 1012) )
  {
    *((_DWORD *)a2 + 110) = 1;
  }
  else
  {
    memset_0((char *)a2 + 280, 0, 0x80uLL);
    v13 = v8;
    v73 = v8;
LABEL_19:
    for ( i = 0; i < 8; ++i )
    {
      v15 = (float *)((char *)a2 + 16 * i);
      if ( v15[8] > v15[6] && v15[9] > v15[7] )
      {
        v16 = i + 1;
        v17 = (unsigned int)v16;
        if ( (unsigned int)v16 < 8 )
        {
          v18 = (float *)((char *)a2 + 16 * (unsigned int)v16 + 36);
          v19 = (float *)((char *)a2 + 32 * v16 + 4 * i + 576);
          do
          {
            if ( *(v18 - 1) > *(v18 - 3) && *v18 > *(v18 - 2) )
            {
              if ( v13 == 2
                || TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(
                     v15 + 6,
                     (float *)a2 + 4 * (unsigned int)v17 + 6) )
              {
LABEL_56:
                v74 = *(__m128 *)(v15 + 6);
                TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(
                  v74.m128_f32,
                  (float *)a2 + 4 * (unsigned int)v17 + 6);
                v30 = v74.m128_f32[0];
                v31 = i;
                v32 = v74.m128_f32[3];
                v33 = v74.m128_f32[1];
                v34 = _mm_shuffle_ps(v74, v74, 170).m128_f32[0];
                v35 = (float *)((char *)a2 + 16 * i + 864);
                v36 = v34 <= v74.m128_f32[0];
                *(__m128 *)(v15 + 6) = v74;
                if ( v36 || (v37 = 0, v32 <= v33) )
                  v37 = 1;
                *((_BYTE *)v35 + 12) = v37;
                v38 = v34 - v30;
                v39 = v32 - v33;
                v35[2] = v38 * v39;
                *v35 = (float)(v38 * 0.5) + v30;
                v35[1] = (float)(v39 * 0.5) + v33;
                *((_BYTE *)a2 + v29 + 876) = 1;
                *(_QWORD *)((char *)a2 + v29 + 868) = 0LL;
                *((_DWORD *)a2 + 4 * v17 + 216) = 0;
                v28[1] = 0LL;
                *v28 = 0LL;
                if ( i )
                {
                  v40 = (struct CDirtyRegion *)((char *)a2 + 864);
                  v41 = (struct CDirtyRegion *)((char *)a2 + 32 * i + 576);
                  do
                  {
                    v42 = CDirtyRegion::CalcAcceleration(
                            v41,
                            v40,
                            (const struct CDirtyRegion::DirtyRegionCachedData *)v35);
                    v40 = (const struct CDirtyRegion::DirtyRegionCachedData *)(v43 + 16);
                    *v44 = v42;
                    v41 = (CDirtyRegion *)(v44 + 1);
                  }
                  while ( v45 != 1 );
                  v31 = i;
                }
                if ( (unsigned int)(8 - v16) >= 4 )
                {
                  v46 = (float *)((char *)a2 + 16 * (unsigned int)v16 + 868);
                  v47 = (float *)((char *)a2 + 32 * (unsigned int)v16 + 4 * v31 + 608);
                  v48 = ((unsigned int)(4 - v16) >> 2) + 1;
                  v49 = v48;
                  LODWORD(v16) = v16 + 4 * v48;
                  do
                  {
                    v50 = 0.0;
                    v51 = *((_BYTE *)v35 + 12);
                    if ( *((_BYTE *)v46 + 8) )
                    {
                      if ( !v51 )
                        v50 = FLOAT_3_4028235e38;
                    }
                    else if ( !v51 )
                    {
                      v52 = (float)((float)(*v46 - v35[1]) * (float)(*v46 - v35[1]))
                          + (float)((float)(*(v46 - 1) - *v35) * (float)(*(v46 - 1) - *v35));
                      if ( v52 != 0.0 )
                        v50 = (float)(v46[1] + v35[2]) / v52;
                    }
                    *(v47 - 8) = v50;
                    v53 = 0.0;
                    v54 = *((_BYTE *)v35 + 12);
                    if ( *((_BYTE *)v46 + 24) )
                    {
                      if ( !v54 )
                        v53 = FLOAT_3_4028235e38;
                    }
                    else if ( !v54 )
                    {
                      v55 = (float)((float)(v46[4] - v35[1]) * (float)(v46[4] - v35[1]))
                          + (float)((float)(v46[3] - *v35) * (float)(v46[3] - *v35));
                      if ( v55 != 0.0 )
                        v53 = (float)(v46[5] + v35[2]) / v55;
                    }
                    *v47 = v53;
                    v56 = 0.0;
                    v57 = *((_BYTE *)v35 + 12);
                    if ( *((_BYTE *)v46 + 40) )
                    {
                      if ( !v57 )
                        v56 = FLOAT_3_4028235e38;
                    }
                    else if ( !v57 )
                    {
                      v58 = (float)((float)(v46[8] - v35[1]) * (float)(v46[8] - v35[1]))
                          + (float)((float)(v46[7] - *v35) * (float)(v46[7] - *v35));
                      if ( v58 != 0.0 )
                        v56 = (float)(v46[9] + v35[2]) / v58;
                    }
                    v47[8] = v56;
                    v59 = 0.0;
                    v60 = *((_BYTE *)v35 + 12);
                    if ( *((_BYTE *)v46 + 56) )
                    {
                      if ( !v60 )
                        v59 = FLOAT_3_4028235e38;
                    }
                    else if ( !v60 )
                    {
                      v61 = (float)((float)(v46[12] - v35[1]) * (float)(v46[12] - v35[1]))
                          + (float)((float)(v46[11] - *v35) * (float)(v46[11] - *v35));
                      if ( v61 != 0.0 )
                        v59 = (float)(v46[13] + v35[2]) / v61;
                    }
                    v47[16] = v59;
                    v46 += 16;
                    v47 += 32;
                    --v49;
                  }
                  while ( v49 );
                }
                if ( (unsigned int)v16 >= 8 )
                {
                  v63 = i;
                }
                else
                {
                  v62 = (float *)((char *)a2 + 16 * (unsigned int)v16 + 868);
                  v63 = i;
                  v64 = (float *)((char *)a2 + 32 * (unsigned int)v16 + 4 * i + 576);
                  v65 = (unsigned int)(8 - v16);
                  do
                  {
                    v66 = 0.0;
                    v67 = *((_BYTE *)v35 + 12);
                    if ( *((_BYTE *)v62 + 8) )
                    {
                      if ( !v67 )
                        v66 = FLOAT_3_4028235e38;
                    }
                    else if ( !v67 )
                    {
                      v68 = (float)((float)(*v62 - v35[1]) * (float)(*v62 - v35[1]))
                          + (float)((float)(*(v62 - 1) - *v35) * (float)(*(v62 - 1) - *v35));
                      if ( v68 != 0.0 )
                        v66 = (float)(v62[1] + v35[2]) / v68;
                    }
                    *v64 = v66;
                    v62 += 4;
                    v64 += 8;
                    --v65;
                  }
                  while ( v65 );
                }
                TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(
                  (float *)a2 + 4 * i + 38,
                  (float *)((char *)a2 + v29 + 152));
                v71[1] = 0LL;
                *v71 = 0LL;
                v72 = (_QWORD *)((char *)a2 + 16 * v17 + 448);
                if ( (_QWORD *)*v72 != v72 )
                {
                  **(_QWORD **)((char *)a2 + v69 + 456) = *v72;
                  *(_QWORD *)(*v72 + 8LL) = *(_QWORD *)((char *)a2 + v69 + 456);
                  **(_QWORD **)((char *)a2 + v70 + 456) = (char *)a2 + 16 * v63 + 448;
                  *(_QWORD *)((char *)a2 + v69 + 456) = *(_QWORD *)((char *)a2 + v70 + 456);
                  v72[1] = v72;
                  *v72 = v72;
                }
                v13 = v73;
                goto LABEL_19;
              }
              if ( v13 )
              {
                if ( *v19 >= 0.86000001 || CalcOvehead((const struct MilRectF *)(v15 + 6), v20) < 50000.0 )
                  goto LABEL_56;
                v13 = v73;
              }
            }
            v17 = (unsigned int)(v17 + 1);
            v19 += 8;
            v18 += 4;
          }
          while ( (unsigned int)v17 < 8 );
        }
      }
    }
    v21 = (char *)a2 + 36;
    v22 = 2;
    do
    {
      if ( *((float *)v21 - 1) > *((float *)v21 - 3) && *(float *)v21 > *((float *)v21 - 2) )
      {
        *(_OWORD *)((char *)a2 + 16 * (unsigned int)v2 + 280) = *(_OWORD *)(v21 - 12);
        *((_DWORD *)a2 + v2 + 102) = v22 - 2;
        v2 = (unsigned int)(v2 + 1);
      }
      if ( *((float *)v21 + 3) > *((float *)v21 + 1) && *((float *)v21 + 4) > *((float *)v21 + 2) )
      {
        *(_OWORD *)((char *)a2 + 16 * (unsigned int)v2 + 280) = *(_OWORD *)(v21 + 4);
        *((_DWORD *)a2 + v2 + 102) = v22 - 1;
        v2 = (unsigned int)(v2 + 1);
      }
      if ( *((float *)v21 + 7) > *((float *)v21 + 5) && *((float *)v21 + 8) > *((float *)v21 + 6) )
      {
        *(_OWORD *)((char *)a2 + 16 * (unsigned int)v2 + 280) = *(_OWORD *)(v21 + 20);
        *((_DWORD *)a2 + v2 + 102) = v22;
        v2 = (unsigned int)(v2 + 1);
      }
      if ( *((float *)v21 + 11) > *((float *)v21 + 9) && *((float *)v21 + 12) > *((float *)v21 + 10) )
      {
        *(_OWORD *)((char *)a2 + 16 * (unsigned int)v2 + 280) = *(_OWORD *)(v21 + 36);
        *((_DWORD *)a2 + v2 + 102) = v22 + 1;
        v2 = (unsigned int)(v2 + 1);
      }
      v22 += 4;
      v21 += 64;
    }
    while ( (unsigned int)(v22 - 2) < 8 );
    v4 = this;
    *((_DWORD *)a2 + 110) = v2;
  }
  v23 = *((_BYTE *)a2 + 1012) == 0;
  *((_BYTE *)a2 + 1014) = 1;
  if ( !v23 || *((_DWORD *)a2 + 110) )
  {
    v24 = *(CVisual **)(*((_QWORD *)v4 + 3) + 64LL);
    if ( v24 )
    {
      OptimizedDirtyRects = CDirtyRegion::GetOptimizedDirtyRects(a2);
      v26 = *((_DWORD *)a2 + 110);
      if ( v26 )
      {
        v27 = v26;
        do
        {
          CVisual::AddAdditionalDirtyRects(v24, OptimizedDirtyRects);
          OptimizedDirtyRects = (const struct MilRectF *)((char *)OptimizedDirtyRects + 16);
          --v27;
        }
        while ( v27 );
      }
    }
  }
  result = v76;
  *((_BYTE *)v4 + 33) = 0;
  return result;
}
