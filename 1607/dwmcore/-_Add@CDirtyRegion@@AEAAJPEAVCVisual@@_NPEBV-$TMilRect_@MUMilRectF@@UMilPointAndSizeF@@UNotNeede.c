/*
 * XREFs of ?_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800718D0
 * Callers:
 *     ?CollectAdditionalDirtyRegion@CVisual@@MEAAJPEAVCDirtyRegion@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UPageInPixels@2@@@W4Enum@MilBitmapInterpolationMode@@PEBV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x180051AA0 (-CollectAdditionalDirtyRegion@CVisual@@MEAAJPEAVCDirtyRegion@@PEBV-$CMatrix@ULocalRenderingHPC@C.c)
 *     ?PostSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180062110 (-PostSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180062AD0 (-PreSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180070FBC (-Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18004BAF0 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?SetFullDirty@CDirtyRegion@@QEAAXXZ @ 0x180070E8C (-SetFullDirty@CDirtyRegion@@QEAAXXZ.c)
 *     ?UpdateAcceleration@CDirtyRegion@@AEAAXI@Z @ 0x180071044 (-UpdateAcceleration@CDirtyRegion@@AEAAXI@Z.c)
 *     ?Merge@CDirtyRegion@@AEAAXII@Z @ 0x180071150 (-Merge@CDirtyRegion@@AEAAXII@Z.c)
 *     ?CalcDirtyRegionCachedData@CDirtyRegion@@AEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUDirtyRegionCachedData@1@@Z @ 0x180072474 (-CalcDirtyRegionCachedData@CDirtyRegion@@AEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNo.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800A30EC (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ceilf_0 @ 0x1800BF5DE (ceilf_0.c)
 *     floorf_0 @ 0x1800BF60E (floorf_0.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?MilUnexpectedErrorWithAsimovEvent@@YAXJPEBG@Z @ 0x18016186C (-MilUnexpectedErrorWithAsimovEvent@@YAXJPEBG@Z.c)
 */

__int64 __fastcall CDirtyRegion::_Add(CDirtyRegion *this, __int64 a2, char a3, __int128 *a4)
{
  unsigned int v4; // r15d
  float v8; // xmm9_4
  float v9; // xmm6_4
  float v10; // xmm8_4
  float v11; // xmm7_4
  float v12; // xmm1_4
  float v13; // xmm1_4
  float v14; // xmm1_4
  __int128 v15; // xmm10
  char *v16; // rbx
  _QWORD *v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rcx
  bool v20; // dl
  float v21; // xmm9_4
  float v22; // xmm8_4
  __int64 v23; // r8
  float *v24; // r10
  float *v25; // r13
  float *v26; // rcx
  float *v27; // rax
  float v28; // xmm3_4
  float v29; // xmm9_4
  float v30; // xmm8_4
  float v31; // xmm1_4
  float v32; // xmm2_4
  float v33; // xmm1_4
  float v34; // xmm1_4
  float v35; // xmm1_4
  __int64 v36; // r9
  unsigned int v37; // ebx
  unsigned int v38; // edx
  unsigned int v39; // esi
  char v40; // r14
  unsigned int v41; // r8d
  int v42; // r11d
  float *v43; // rcx
  float *v44; // rax
  __int64 v45; // r9
  __int64 v46; // rdx
  float v47; // xmm5_4
  float v48; // xmm2_4
  __int64 v49; // r8
  float v50; // xmm4_4
  float v51; // xmm1_4
  float *v52; // rcx
  unsigned int v53; // eax
  __int64 v54; // rdx
  float v55; // xmm2_4
  char v56; // al
  float v57; // xmm1_4
  float v58; // xmm1_4
  float v59; // xmm2_4
  char v60; // al
  float v61; // xmm1_4
  float v62; // xmm1_4
  char v63; // dl
  float v64; // xmm2_4
  float *v65; // rax
  float v66; // xmm1_4
  float v67; // xmm1_4
  __int64 v68; // r9
  float *v69; // r10
  float *v70; // rcx
  unsigned int v71; // edx
  __int64 v72; // r11
  float v73; // xmm1_4
  char v74; // al
  float v75; // xmm2_4
  char v76; // al
  float v77; // xmm1_4
  char v78; // al
  float v79; // xmm2_4
  char v80; // al
  float v81; // xmm1_4
  char v82; // al
  float *v83; // rdx
  float *v84; // rcx
  __int64 v85; // rax
  float v86; // xmm1_4
  char v87; // r9
  float v89; // xmm2_4
  float v90; // xmm1_4
  float v91; // xmm2_4
  float v92; // xmm2_4
  __int64 v93; // rcx
  float v94; // xmm2_4
  float v95; // xmm2_4
  float v96; // xmm1_4
  float v97; // xmm1_4
  float v98; // xmm2_4
  float v99; // xmm2_4
  float v100; // xmm1_4
  float v101; // xmm1_4
  float v102; // xmm2_4
  float v103; // xmm2_4
  float v104; // xmm2_4
  float v105; // xmm2_4
  _QWORD *v106; // rax
  __int64 v107; // rax
  __int128 X; // [rsp+38h] [rbp-49h] BYREF
  __int128 v109; // [rsp+48h] [rbp-39h] BYREF
  unsigned int v110; // [rsp+E8h] [rbp+67h]

  v4 = 0;
  v110 = 0;
  X = *a4;
  if ( *((_BYTE *)this + 2724) )
    return v110;
  v8 = *((float *)&X + 2);
  v9 = *(float *)&X;
  if ( *((float *)&X + 2) < *(float *)&X )
    goto LABEL_158;
  v10 = *((float *)&X + 3);
  v11 = *((float *)&X + 1);
  if ( *((float *)&X + 3) < *((float *)&X + 1) )
    goto LABEL_158;
  if ( *((float *)this + 677) > *(float *)&X )
    v9 = *((float *)this + 677);
  if ( *((float *)this + 678) > *((float *)&X + 1) )
    v11 = *((float *)this + 678);
  if ( *((float *)&X + 2) > *((float *)this + 679) )
    v8 = *((float *)this + 679);
  if ( *((float *)&X + 3) > *((float *)this + 680) )
    v10 = *((float *)this + 680);
  if ( v8 <= v9 || v10 <= v11 )
    return v110;
  if ( *((_BYTE *)this + 2725) )
  {
LABEL_158:
    CDirtyRegion::SetFullDirty(this);
    return v110;
  }
  v12 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v9) & _xmm);
  if ( v12 < 8388608.0 )
    v9 = (float)(int)floorf_0(v9);
  *(float *)&X = v9;
  v13 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v11) & _xmm);
  if ( v13 < 8388608.0 )
    v11 = (float)(int)floorf_0(v11);
  *((float *)&X + 1) = v11;
  v14 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v8) & _xmm);
  if ( v14 < 8388608.0 )
    v8 = (float)(int)ceilf_0(v8);
  *((float *)&X + 2) = v8;
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v10) & _xmm) < 8388608.0 )
    v10 = (float)(int)ceilf_0(v10);
  *((float *)&X + 3) = v10;
  v15 = X;
  if ( a2 )
  {
    v16 = (char *)this + 712;
    if ( *((_DWORD *)this + 570) == 32 )
    {
      v106 = (_QWORD *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                         WPF::g_pProcessHeap,
                         1552LL);
      v17 = v106;
      if ( !v106 )
      {
        v110 = -2147024882;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x1Du);
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x217u);
        (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
          WPF::g_pProcessHeap,
          0LL);
        return v110;
      }
      memset_0(v106, 0, 0x610uLL);
      `vector constructor iterator'(
        (TemporaryConfiguration *)(v17 + 2),
        0x30uLL,
        0x20uLL,
        (void *(*)(void *))COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo);
      v107 = *(_QWORD *)v16;
      if ( *(char **)(*(_QWORD *)v16 + 8LL) != v16 )
        __fastfail(3u);
      *v17 = v107;
      v17[1] = v16;
      *(_QWORD *)(v107 + 8) = v17;
      *(_QWORD *)v16 = v17;
      *((_DWORD *)this + 570) = 0;
    }
    else
    {
      v17 = *(_QWORD **)v16;
    }
    v18 = *((unsigned int *)this + 570);
    v19 = 6 * v18;
    *((_DWORD *)this + 570) = v18 + 1;
    v17[v19 + 4] = a2;
    LOBYTE(v17[v19 + 5]) = a3;
    *(_OWORD *)((char *)&v17[v19 + 5] + 4) = v15;
    v17[v19 + 3] = 0LL;
    v17[v19 + 2] = 0LL;
    v110 = 0;
  }
  v20 = v8 <= v9 || v10 <= v11;
  v21 = v8 - v9;
  v22 = v10 - v11;
  v23 = 2LL;
  v24 = (float *)((char *)this + 2548);
  v25 = (float *)((char *)this + 2580);
  v26 = (float *)((char *)this + 2548);
  v27 = (float *)((char *)this + 2580);
  v28 = v21 * v22;
  v29 = (float)(v21 * 0.5) + v9;
  v30 = (float)(v22 * 0.5) + v11;
  do
  {
    v31 = 0.0;
    if ( *((_BYTE *)v27 + 8) )
    {
      if ( !v20 )
        v31 = FLOAT_3_4028235e38;
    }
    else if ( !v20 )
    {
      v89 = (float)((float)(*v27 - v30) * (float)(*v27 - v30))
          + (float)((float)(*(v27 - 1) - v29) * (float)(*(v27 - 1) - v29));
      if ( v89 != 0.0 )
        v31 = (float)(v28 + v27[1]) / v89;
    }
    *(v26 - 1) = v31;
    v32 = 0.0;
    if ( *((_BYTE *)v27 + 24) )
    {
      if ( !v20 )
        v32 = FLOAT_3_4028235e38;
    }
    else if ( !v20 )
    {
      v90 = (float)((float)(v27[4] - v30) * (float)(v27[4] - v30))
          + (float)((float)(v27[3] - v29) * (float)(v27[3] - v29));
      if ( v90 != 0.0 )
        v32 = (float)(v28 + v27[5]) / v90;
    }
    *v26 = v32;
    v33 = 0.0;
    if ( *((_BYTE *)v27 + 40) )
    {
      if ( !v20 )
        v33 = FLOAT_3_4028235e38;
    }
    else if ( !v20 )
    {
      v91 = (float)((float)(v27[8] - v30) * (float)(v27[8] - v30))
          + (float)((float)(v27[7] - v29) * (float)(v27[7] - v29));
      if ( v91 != 0.0 )
        v33 = (float)(v28 + v27[9]) / v91;
    }
    v26[1] = v33;
    v34 = 0.0;
    if ( *((_BYTE *)v27 + 56) )
    {
      if ( !v20 )
        v34 = FLOAT_3_4028235e38;
    }
    else if ( !v20 )
    {
      v92 = (float)((float)(v27[12] - v30) * (float)(v27[12] - v30))
          + (float)((float)(v27[11] - v29) * (float)(v27[11] - v29));
      if ( v92 != 0.0 )
        v34 = (float)(v28 + v27[13]) / v92;
    }
    v26[2] = v34;
    v27 += 16;
    v26 += 4;
    --v23;
  }
  while ( v23 );
  v35 = FLOAT_N1_0;
  v36 = 64LL;
  v37 = 0;
  v38 = 8;
  v39 = 0;
  v40 = 0;
  do
  {
    v41 = 0;
    if ( v38 >= 4 )
    {
      v42 = 2;
      v43 = v24;
      do
      {
        if ( *(v43 - 1) > v35 )
        {
          v35 = *(v43 - 1);
          v37 = v38;
          v39 = v41;
          v40 = 1;
        }
        if ( *v43 > v35 )
        {
          v35 = *v43;
          v39 = v42 - 1;
          v37 = v38;
          v40 = 1;
        }
        if ( v43[1] > v35 )
        {
          v35 = v43[1];
          v37 = v38;
          v39 = v42;
          v40 = 1;
        }
        if ( v43[2] > v35 )
        {
          v35 = v43[2];
          v39 = v42 + 1;
          v37 = v38;
          v40 = 1;
        }
        v43 += 4;
        v41 += 4;
        v42 += 4;
      }
      while ( v41 < v38 - 3 );
    }
    if ( v41 < v38 )
    {
      v44 = (float *)((char *)this + 4 * v36 + 4 * v41 + 2288);
      do
      {
        if ( *v44 > v35 )
        {
          v35 = *v44;
          v37 = v38;
          v39 = v41;
          v40 = 1;
        }
        ++v44;
        ++v41;
      }
      while ( v41 < v38 );
    }
    v24 -= 8;
    v36 -= 8LL;
    --v38;
  }
  while ( v38 );
  if ( !v40 )
    MilUnexpectedErrorWithAsimovEvent(-2147467259, L"Invalid dirty region");
  if ( v37 == 8 )
  {
    TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe((float *)this + 4 * v39 + 38, (float *)&X);
    v109 = X;
    TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe((float *)&v109, (float *)((char *)this + v45 + 24));
    v47 = *(float *)&v109;
    if ( *((float *)&v109 + 2) > *(float *)&v109 )
    {
      v48 = *((float *)&v109 + 1);
      if ( *((float *)&v109 + 3) > *((float *)&v109 + 1)
        && (*(float *)&v109 < *(float *)v46
         || *((float *)&v109 + 1) < *(float *)(v46 + 4)
         || *(float *)(v46 + 8) < *((float *)&v109 + 2)
         || *(float *)(v46 + 12) < *((float *)&v109 + 3)) )
      {
        v49 = 2 * (v39 + 161LL);
        v50 = *((float *)&v109 + 2) - *(float *)&v109;
        v51 = *((float *)&v109 + 3) - *((float *)&v109 + 1);
        *(_OWORD *)v46 = v109;
        *((_BYTE *)this + 8 * v49 + 12) = 0;
        *((float *)this + 2 * v49 + 2) = v50 * v51;
        *((float *)this + 2 * v49) = (float)(v50 * 0.5) + v47;
        *((float *)this + 2 * v49 + 1) = (float)(v51 * 0.5) + v48;
        if ( v39 >= 2 )
        {
          v52 = (float *)((char *)this + 32 * v39 + 2292);
          v53 = ((v39 - 2) >> 1) + 1;
          v54 = v53;
          v4 = 2 * v53;
          do
          {
            v55 = 0.0;
            v56 = *((_BYTE *)this + 16 * v39 + 2588);
            if ( *((_BYTE *)v25 + 8) )
            {
              if ( !v56 )
                v55 = FLOAT_3_4028235e38;
            }
            else if ( !v56 )
            {
              v57 = *v25 - *((float *)this + 4 * v39 + 645);
              v58 = (float)(v57 * v57)
                  + (float)((float)(*(v25 - 1) - *((float *)this + 4 * v39 + 644))
                          * (float)(*(v25 - 1) - *((float *)this + 4 * v39 + 644)));
              if ( v58 != 0.0 )
                v55 = (float)(v25[1] + *((float *)this + 4 * v39 + 646)) / v58;
            }
            *(v52 - 1) = v55;
            v59 = 0.0;
            v60 = *((_BYTE *)this + 16 * v39 + 2588);
            if ( *((_BYTE *)v25 + 24) )
            {
              if ( !v60 )
                v59 = FLOAT_3_4028235e38;
            }
            else if ( !v60 )
            {
              v61 = v25[4] - *((float *)this + 4 * v39 + 645);
              v62 = (float)(v61 * v61)
                  + (float)((float)(v25[3] - *((float *)this + 4 * v39 + 644))
                          * (float)(v25[3] - *((float *)this + 4 * v39 + 644)));
              if ( v62 != 0.0 )
                v59 = (float)(v25[5] + *((float *)this + 4 * v39 + 646)) / v62;
            }
            *v52 = v59;
            v25 += 8;
            v52 += 2;
            --v54;
          }
          while ( v54 );
        }
        if ( v4 < v39 )
        {
          v63 = *((_BYTE *)this + 16 * v39 + 2588);
          v64 = 0.0;
          v65 = (float *)((char *)this + 16 * v4 + 2576);
          if ( *((_BYTE *)v65 + 12) )
          {
            if ( !v63 )
              v64 = FLOAT_3_4028235e38;
          }
          else if ( !v63 )
          {
            v66 = v65[1] - *((float *)this + 4 * v39 + 645);
            v67 = (float)(v66 * v66)
                + (float)((float)(*v65 - *((float *)this + 4 * v39 + 644))
                        * (float)(*v65 - *((float *)this + 4 * v39 + 644)));
            if ( v67 != 0.0 )
              v64 = (float)(v65[2] + *((float *)this + 4 * v39 + 646)) / v67;
          }
          *((float *)this + 8 * v39 + v4 + 572) = v64;
        }
        v68 = v39 + 1;
        if ( (unsigned int)v68 < 8 )
        {
          if ( (unsigned int)(8 - v68) >= 5 )
          {
            v69 = (float *)((char *)this + 16 * (unsigned int)v68 + 2580);
            v70 = (float *)((char *)this + 32 * v68 + 4 * v39 + 2320);
            v71 = (3 - (int)v68) / 5u + 1;
            v72 = v71;
            v68 = v71 + (_DWORD)v68 + 4 * v71;
            do
            {
              v73 = 0.0;
              v74 = *((_BYTE *)this + 16 * v39 + 2588);
              if ( *((_BYTE *)v69 + 8) )
              {
                if ( !v74 )
                  v73 = FLOAT_3_4028235e38;
              }
              else if ( !v74 )
              {
                v94 = *v69 - *((float *)this + 4 * v39 + 645);
                v95 = (float)(v94 * v94)
                    + (float)((float)(*(v69 - 1) - *((float *)this + 4 * v39 + 644))
                            * (float)(*(v69 - 1) - *((float *)this + 4 * v39 + 644)));
                if ( v95 != 0.0 )
                  v73 = (float)(*((float *)this + 4 * v39 + 646) + v69[1]) / v95;
              }
              *(v70 - 8) = v73;
              v75 = 0.0;
              v76 = *((_BYTE *)this + 16 * v39 + 2588);
              if ( *((_BYTE *)v69 + 24) )
              {
                if ( !v76 )
                  v75 = FLOAT_3_4028235e38;
              }
              else if ( !v76 )
              {
                v96 = v69[4] - *((float *)this + 4 * v39 + 645);
                v97 = (float)(v96 * v96)
                    + (float)((float)(v69[3] - *((float *)this + 4 * v39 + 644))
                            * (float)(v69[3] - *((float *)this + 4 * v39 + 644)));
                if ( v97 != 0.0 )
                  v75 = (float)(*((float *)this + 4 * v39 + 646) + v69[5]) / v97;
              }
              *v70 = v75;
              v77 = 0.0;
              v78 = *((_BYTE *)this + 16 * v39 + 2588);
              if ( *((_BYTE *)v69 + 40) )
              {
                if ( !v78 )
                  v77 = FLOAT_3_4028235e38;
              }
              else if ( !v78 )
              {
                v98 = v69[8] - *((float *)this + 4 * v39 + 645);
                v99 = (float)(v98 * v98)
                    + (float)((float)(v69[7] - *((float *)this + 4 * v39 + 644))
                            * (float)(v69[7] - *((float *)this + 4 * v39 + 644)));
                if ( v99 != 0.0 )
                  v77 = (float)(*((float *)this + 4 * v39 + 646) + v69[9]) / v99;
              }
              v70[8] = v77;
              v79 = 0.0;
              v80 = *((_BYTE *)this + 16 * v39 + 2588);
              if ( *((_BYTE *)v69 + 56) )
              {
                if ( !v80 )
                  v79 = FLOAT_3_4028235e38;
              }
              else if ( !v80 )
              {
                v100 = v69[12] - *((float *)this + 4 * v39 + 645);
                v101 = (float)(v100 * v100)
                     + (float)((float)(v69[11] - *((float *)this + 4 * v39 + 644))
                             * (float)(v69[11] - *((float *)this + 4 * v39 + 644)));
                if ( v101 != 0.0 )
                  v79 = (float)(*((float *)this + 4 * v39 + 646) + v69[13]) / v101;
              }
              v70[16] = v79;
              v81 = 0.0;
              v82 = *((_BYTE *)this + 16 * v39 + 2588);
              if ( *((_BYTE *)v69 + 72) )
              {
                if ( !v82 )
                  v81 = FLOAT_3_4028235e38;
              }
              else if ( !v82 )
              {
                v102 = v69[16] - *((float *)this + 4 * v39 + 645);
                v103 = (float)(v102 * v102)
                     + (float)((float)(v69[15] - *((float *)this + 4 * v39 + 644))
                             * (float)(v69[15] - *((float *)this + 4 * v39 + 644)));
                if ( v103 != 0.0 )
                  v81 = (float)(*((float *)this + 4 * v39 + 646) + v69[17]) / v103;
              }
              v70[24] = v81;
              v69 += 20;
              v70 += 40;
              --v72;
            }
            while ( v72 );
          }
          if ( (unsigned int)v68 < 8 )
          {
            v83 = (float *)((char *)this + 16 * (unsigned int)v68 + 2580);
            v84 = (float *)((char *)this + 32 * v68 + 4 * v39 + 2288);
            v85 = (unsigned int)(8 - v68);
            do
            {
              v86 = 0.0;
              v87 = *((_BYTE *)this + 16 * v39 + 2588);
              if ( *((_BYTE *)v83 + 8) )
              {
                if ( !v87 )
                  v86 = FLOAT_3_4028235e38;
              }
              else if ( !v87 )
              {
                v104 = *v83 - *((float *)this + 4 * v39 + 645);
                v105 = (float)(v104 * v104)
                     + (float)((float)(*(v83 - 1) - *((float *)this + 4 * v39 + 644))
                             * (float)(*(v83 - 1) - *((float *)this + 4 * v39 + 644)));
                if ( v105 != 0.0 )
                  v86 = (float)(v83[1] + *((float *)this + 4 * v39 + 646)) / v105;
              }
              *v84 = v86;
              v83 += 4;
              v84 += 8;
              --v85;
            }
            while ( v85 );
          }
        }
      }
    }
  }
  else
  {
    CDirtyRegion::Merge(this, v37, v39);
    *(_OWORD *)((char *)this + 16 * v39 + 24) = v15;
    CDirtyRegion::CalcDirtyRegionCachedData(v93, &X, (char *)this + 16 * v39 + 2576);
    CDirtyRegion::UpdateAcceleration(this, v39);
    *(_OWORD *)((char *)this + 16 * v39 + 152) = v15;
  }
  return v110;
}
