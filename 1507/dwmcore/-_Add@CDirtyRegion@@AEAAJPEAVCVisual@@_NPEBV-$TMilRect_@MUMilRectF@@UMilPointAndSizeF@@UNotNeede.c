/*
 * XREFs of ?_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18003CD40
 * Callers:
 *     ?CollectAdditionalDirtyRegion@CVisual@@MEAAJPEAVCDirtyRegion@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UPageInPixels@2@@@W4Enum@MilBitmapInterpolationMode@@PEBV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x180036A70 (-CollectAdditionalDirtyRegion@CVisual@@MEAAJPEAVCDirtyRegion@@PEBV-$CMatrix@ULocalRenderingHPC@C.c)
 *     ?PostSubgraph@CPreComputeContext@@MEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800396B0 (-PostSubgraph@CPreComputeContext@@MEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@MEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18003A510 (-PreSubgraph@CPreComputeContext@@MEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?CollectAdditionalDirtyRegion@CWindowNode@@UEAAJPEAVCDirtyRegion@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UPageInPixels@2@@@W4Enum@MilBitmapInterpolationMode@@PEBV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x18007CB50 (-CollectAdditionalDirtyRegion@CWindowNode@@UEAAJPEAVCDirtyRegion@@PEBV-$CMatrix@ULocalRenderingH.c)
 *     ?Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800DE608 (-Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 * Callees:
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180031390 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180035460 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?Initialize@CDirtyRegion@@QEAAX_KAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x18003C97C (-Initialize@CDirtyRegion@@QEAAX_KAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectU.c)
 *     ?UpdateAcceleration@CDirtyRegion@@AEAAXI@Z @ 0x18003CA50 (-UpdateAcceleration@CDirtyRegion@@AEAAXI@Z.c)
 *     ?Merge@CDirtyRegion@@AEAAXII@Z @ 0x18003CC34 (-Merge@CDirtyRegion@@AEAAXII@Z.c)
 *     ?CalcDirtyRegionCachedData@CDirtyRegion@@AEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUDirtyRegionCachedData@1@@Z @ 0x18003D970 (-CalcDirtyRegionCachedData@CDirtyRegion@@AEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNo.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18004DEE0 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ceilf_0 @ 0x180099B5A (ceilf_0.c)
 *     floorf_0 @ 0x180099B7E (floorf_0.c)
 *     ?MilUnexpectedErrorWithAsimovEvent@@YAXJPEBG@Z @ 0x180123308 (-MilUnexpectedErrorWithAsimovEvent@@YAXJPEBG@Z.c)
 */

__int64 __fastcall CDirtyRegion::_Add(CDirtyRegion *this, CBitmapOfDeviceBitmaps *a2, char a3, _OWORD *a4)
{
  unsigned int v4; // r12d
  __int64 *v8; // r14
  float v9; // xmm11_4
  float v10; // xmm8_4
  float v11; // xmm10_4
  float v12; // xmm9_4
  _OWORD *v13; // r8
  float v14; // xmm1_4
  float v15; // xmm1_4
  float v16; // xmm1_4
  __int128 v17; // xmm12
  LPVOID (__fastcall *v18)(WPF::ProcessHeapImpl *, SIZE_T); // r14
  __int64 *v19; // rax
  __int64 (__fastcall *v20)(CBitmapOfDeviceBitmaps *); // rsi
  bool v21; // dl
  float *v22; // rcx
  float *v23; // rax
  __int64 v24; // r8
  float v25; // xmm3_4
  float v26; // xmm4_4
  float v27; // xmm5_4
  float v28; // xmm1_4
  float v29; // xmm2_4
  float v30; // xmm1_4
  float v31; // xmm1_4
  float v32; // xmm1_4
  unsigned int v33; // edx
  unsigned int v34; // ebx
  unsigned int v35; // r15d
  char v36; // r10
  __int64 v37; // r9
  unsigned int v38; // r8d
  float *v39; // rax
  __int64 v40; // r11
  __int64 *v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // r11
  float v45; // xmm5_4
  float v46; // xmm2_4
  unsigned int v47; // r9d
  __int64 v48; // r8
  float v49; // xmm1_4
  float v50; // xmm4_4
  char v51; // dl
  float v52; // xmm2_4
  __int64 v53; // rcx
  float *v54; // rax
  float v55; // xmm1_4
  float v56; // xmm1_4
  char v57; // dl
  float v58; // xmm2_4
  float *v59; // rax
  float v60; // xmm1_4
  float v61; // xmm1_4
  float v62; // xmm1_4
  char v63; // dl
  float *v64; // rax
  float v65; // xmm2_4
  float v66; // xmm2_4
  float *v67; // r10
  float *v68; // rdx
  __int64 v69; // rcx
  float v70; // xmm2_4
  char v71; // al
  float v72; // xmm1_4
  float v73; // xmm1_4
  unsigned int v74; // r9d
  float *v75; // r10
  float *v76; // rcx
  __int64 v77; // rdx
  float v78; // xmm1_4
  char v79; // al
  float v80; // xmm2_4
  char v81; // al
  float v82; // xmm1_4
  char v83; // al
  float v84; // xmm2_4
  char v85; // al
  float v86; // xmm1_4
  char v87; // al
  float *v88; // rdx
  float *v89; // rcx
  __int64 v90; // rax
  float v91; // xmm1_4
  char v92; // r9
  float v94; // xmm2_4
  float v95; // xmm1_4
  float v96; // xmm2_4
  float v97; // xmm2_4
  __int64 v98; // rcx
  __int64 *v99; // rax
  __int64 v100; // rcx
  float v101; // xmm2_4
  float v102; // xmm2_4
  float v103; // xmm1_4
  float v104; // xmm1_4
  float v105; // xmm2_4
  float v106; // xmm2_4
  float v107; // xmm1_4
  float v108; // xmm1_4
  float v109; // xmm2_4
  float v110; // xmm2_4
  float v111; // xmm2_4
  float v112; // xmm2_4
  int v113; // ebx
  float X[6]; // [rsp+38h] [rbp-49h] BYREF

  v4 = 0;
  v8 = 0LL;
  *(_OWORD *)X = *a4;
  if ( *((_BYTE *)this + 1012) )
    return v4;
  v9 = X[2];
  v10 = X[0];
  if ( X[2] < X[0] || (v11 = X[3], v12 = X[1], X[3] < X[1]) )
  {
    v13 = (_OWORD *)((char *)this + 996);
    goto LABEL_174;
  }
  v13 = (_OWORD *)((char *)this + 996);
  if ( *((float *)this + 249) > X[0] )
    v10 = *((float *)this + 249);
  if ( *((float *)this + 250) > X[1] )
    v12 = *((float *)this + 250);
  if ( X[2] > *((float *)this + 251) )
    v9 = *((float *)this + 251);
  if ( X[3] > *((float *)this + 252) )
    v11 = *((float *)this + 252);
  if ( v9 <= v10 || v11 <= v12 )
    return v4;
  if ( *((_BYTE *)this + 1013) )
  {
LABEL_174:
    v113 = *((_DWORD *)this + 248);
    CDirtyRegion::Initialize(this, *((_QWORD *)this + 2), v13, 1);
    *((_DWORD *)this + 248) = v113;
    return v4;
  }
  v14 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v10) & _xmm);
  if ( v14 < 8388608.0 )
    v10 = (float)(int)floorf_0(v10);
  X[0] = v10;
  v15 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v12) & _xmm);
  if ( v15 < 8388608.0 )
    v12 = (float)(int)floorf_0(v12);
  X[1] = v12;
  v16 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v9) & _xmm);
  if ( v16 < 8388608.0 )
    v9 = (float)(int)ceilf_0(v9);
  X[2] = v9;
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v11) & _xmm) < 8388608.0 )
    v11 = (float)(int)ceilf_0(v11);
  X[3] = v11;
  v17 = *(_OWORD *)X;
  if ( a2 )
  {
    v18 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
    if ( v18 == WPF::ProcessHeapImpl::Alloc )
      v19 = (__int64 *)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x30uLL);
    else
      v19 = (__int64 *)v18(WPF::g_pProcessHeap, 48LL);
    v8 = v19;
    if ( !v19 )
    {
      v4 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x217u);
      return v4;
    }
    v19[2] = (__int64)a2;
    v20 = *(__int64 (__fastcall **)(CBitmapOfDeviceBitmaps *))(*(_QWORD *)a2 + 8LL);
    if ( v20 == CBitmapOfDeviceBitmaps::AddRef )
      CBitmapOfDeviceBitmaps::AddRef(a2);
    else
      v20(a2);
    *((_BYTE *)v8 + 24) = a3;
    *(_OWORD *)((char *)v8 + 28) = v17;
    v8[1] = 0LL;
    *v8 = 0LL;
  }
  v21 = v9 <= v10 || v11 <= v12;
  v22 = (float *)((char *)this + 836);
  v23 = (float *)((char *)this + 868);
  v24 = 2LL;
  v25 = (float)(v9 - v10) * (float)(v11 - v12);
  v26 = (float)((float)(v9 - v10) * 0.5) + v10;
  v27 = (float)((float)(v11 - v12) * 0.5) + v12;
  do
  {
    v28 = 0.0;
    if ( *((_BYTE *)v23 + 8) )
    {
      if ( !v21 )
        v28 = FLOAT_3_4028235e38;
    }
    else if ( !v21 )
    {
      v94 = (float)((float)(*v23 - v27) * (float)(*v23 - v27))
          + (float)((float)(*(v23 - 1) - v26) * (float)(*(v23 - 1) - v26));
      if ( v94 != 0.0 )
        v28 = (float)(v25 + v23[1]) / v94;
    }
    *(v22 - 1) = v28;
    v29 = 0.0;
    if ( *((_BYTE *)v23 + 24) )
    {
      if ( !v21 )
        v29 = FLOAT_3_4028235e38;
    }
    else if ( !v21 )
    {
      v95 = (float)((float)(v23[4] - v27) * (float)(v23[4] - v27))
          + (float)((float)(v23[3] - v26) * (float)(v23[3] - v26));
      if ( v95 != 0.0 )
        v29 = (float)(v25 + v23[5]) / v95;
    }
    *v22 = v29;
    v30 = 0.0;
    if ( *((_BYTE *)v23 + 40) )
    {
      if ( !v21 )
        v30 = FLOAT_3_4028235e38;
    }
    else if ( !v21 )
    {
      v96 = (float)((float)(v23[8] - v27) * (float)(v23[8] - v27))
          + (float)((float)(v23[7] - v26) * (float)(v23[7] - v26));
      if ( v96 != 0.0 )
        v30 = (float)(v25 + v23[9]) / v96;
    }
    v22[1] = v30;
    v31 = 0.0;
    if ( *((_BYTE *)v23 + 56) )
    {
      if ( !v21 )
        v31 = FLOAT_3_4028235e38;
    }
    else if ( !v21 )
    {
      v97 = (float)((float)(v23[12] - v27) * (float)(v23[12] - v27))
          + (float)((float)(v23[11] - v26) * (float)(v23[11] - v26));
      if ( v97 != 0.0 )
        v31 = (float)(v25 + v23[13]) / v97;
    }
    v22[2] = v31;
    v23 += 16;
    v22 += 4;
    --v24;
  }
  while ( v24 );
  v32 = FLOAT_N1_0;
  v33 = 8;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  v37 = 210LL;
  do
  {
    v38 = 0;
    if ( v33 >= 4 )
    {
      do
      {
        if ( *((float *)this + v38 + v37 - 2) > v32 )
        {
          v32 = *((float *)this + v38 + v37 - 2);
          v34 = v33;
          v35 = v38;
          v36 = 1;
        }
        if ( *((float *)this + v38 + v37 - 1) > v32 )
        {
          v32 = *((float *)this + v38 + v37 - 1);
          v35 = v38 + 1;
          v34 = v33;
          v36 = 1;
        }
        if ( *((float *)this + v38 + v37) > v32 )
        {
          v32 = *((float *)this + v38 + v37);
          v35 = v38 + 2;
          v34 = v33;
          v36 = 1;
        }
        if ( *((float *)this + v38 + v37 + 1) > v32 )
        {
          v32 = *((float *)this + v38 + v37 + 1);
          v35 = v38 + 3;
          v34 = v33;
          v36 = 1;
        }
        v38 += 4;
      }
      while ( v38 < v33 - 3 );
    }
    if ( v38 < v33 )
    {
      v39 = (float *)((char *)this + 4 * v37 + 4 * v38 - 8);
      do
      {
        if ( *v39 > v32 )
        {
          v32 = *v39;
          v34 = v33;
          v35 = v38;
          v36 = 1;
        }
        ++v39;
        ++v38;
      }
      while ( v38 < v33 );
    }
    v37 -= 8LL;
    --v33;
  }
  while ( v33 );
  if ( !v36 )
    MilUnexpectedErrorWithAsimovEvent(-2147467259, L"Invalid dirty region");
  if ( v34 == 8 )
  {
    v40 = v35;
    if ( v8 )
    {
      v41 = (__int64 *)((char *)this + 16 * v35 + 448);
      v42 = *v41;
      *v8 = *v41;
      v8[1] = (__int64)v41;
      if ( *(__int64 **)(v42 + 8) != v41 )
        __fastfail(3u);
      *(_QWORD *)(v42 + 8) = v8;
      *v41 = (__int64)v8;
    }
    else
    {
      TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe((char *)this + 16 * v35 + 152, X);
      v11 = X[3];
      v9 = X[2];
      v12 = X[1];
      v10 = X[0];
    }
    *(_QWORD *)X = __PAIR64__(LODWORD(v12), LODWORD(v10));
    *(_QWORD *)&X[2] = __PAIR64__(LODWORD(v11), LODWORD(v9));
    TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(X, (char *)this + 16 * v40 + 24);
    v45 = X[0];
    if ( X[2] > X[0] )
    {
      v46 = X[1];
      if ( X[3] > X[1]
        && (X[0] < *(float *)v43
         || X[1] < *(float *)(v43 + 4)
         || *(float *)(v43 + 8) < X[2]
         || *(float *)(v43 + 12) < X[3]) )
      {
        v47 = 0;
        v48 = 2 * (v44 + 54);
        v49 = X[3] - X[1];
        v50 = X[2] - X[0];
        *(_OWORD *)v43 = *(_OWORD *)X;
        *((_BYTE *)this + 8 * v48 + 12) = 0;
        *((float *)this + 2 * v48 + 2) = v49 * v50;
        *((float *)this + 2 * v48 + 1) = (float)(v49 * 0.5) + v46;
        *((float *)this + 2 * v48) = (float)(v50 * 0.5) + v45;
        if ( v35 >= 3 )
        {
          do
          {
            v51 = *((_BYTE *)this + 16 * v44 + 876);
            v52 = 0.0;
            v53 = v47;
            v54 = (float *)((char *)this + 16 * v47 + 864);
            if ( *((_BYTE *)v54 + 12) )
            {
              if ( !v51 )
                v52 = FLOAT_3_4028235e38;
            }
            else if ( !v51 )
            {
              v55 = v54[1] - *((float *)this + 4 * v44 + 217);
              v56 = (float)(v55 * v55)
                  + (float)((float)(*v54 - *((float *)this + 4 * v44 + 216))
                          * (float)(*v54 - *((float *)this + 4 * v44 + 216)));
              if ( v56 != 0.0 )
                v52 = (float)(v54[2] + *((float *)this + 4 * v44 + 218)) / v56;
            }
            *((float *)this + 8 * v44 + v47 + 144) = v52;
            v57 = *((_BYTE *)this + 16 * v44 + 876);
            v58 = 0.0;
            v59 = (float *)((char *)this + 16 * v47 + 880);
            if ( *((_BYTE *)v59 + 12) )
            {
              if ( !v57 )
                v58 = FLOAT_3_4028235e38;
            }
            else if ( !v57 )
            {
              v60 = v59[1] - *((float *)this + 4 * v44 + 217);
              v61 = (float)(v60 * v60)
                  + (float)((float)(*v59 - *((float *)this + 4 * v44 + 216))
                          * (float)(*v59 - *((float *)this + 4 * v44 + 216)));
              if ( v61 != 0.0 )
                v58 = (float)(v59[2] + *((float *)this + 4 * v44 + 218)) / v61;
            }
            v62 = 0.0;
            *((float *)this + 8 * v44 + v47 + 145) = v58;
            v63 = *((_BYTE *)this + 16 * v44 + 876);
            v64 = (float *)((char *)this + 16 * v47 + 896);
            if ( *((_BYTE *)v64 + 12) )
            {
              if ( !v63 )
                v62 = FLOAT_3_4028235e38;
            }
            else if ( !v63 )
            {
              v65 = v64[1] - *((float *)this + 4 * v44 + 217);
              v66 = (float)(v65 * v65)
                  + (float)((float)(*v64 - *((float *)this + 4 * v44 + 216))
                          * (float)(*v64 - *((float *)this + 4 * v44 + 216)));
              if ( v66 != 0.0 )
                v62 = (float)(v64[2] + *((float *)this + 4 * v44 + 218)) / v66;
            }
            v47 += 3;
            *((float *)this + 8 * v44 + v53 + 146) = v62;
          }
          while ( v47 < v35 - 2 );
        }
        if ( v47 < v35 )
        {
          v67 = (float *)((char *)this + 32 * v44 + 4 * v47 + 576);
          v68 = (float *)((char *)this + 16 * v47 + 868);
          v69 = v35 - v47;
          do
          {
            v70 = 0.0;
            v71 = *((_BYTE *)this + 16 * v44 + 876);
            if ( *((_BYTE *)v68 + 8) )
            {
              if ( !v71 )
                v70 = FLOAT_3_4028235e38;
            }
            else if ( !v71 )
            {
              v72 = *v68 - *((float *)this + 4 * v44 + 217);
              v73 = (float)(v72 * v72)
                  + (float)((float)(*(v68 - 1) - *((float *)this + 4 * v44 + 216))
                          * (float)(*(v68 - 1) - *((float *)this + 4 * v44 + 216)));
              if ( v73 != 0.0 )
                v70 = (float)(v68[1] + *((float *)this + 4 * v44 + 218)) / v73;
            }
            *v67 = v70;
            v68 += 4;
            ++v67;
            --v69;
          }
          while ( v69 );
        }
        v74 = v35 + 1;
        if ( v35 + 1 < 8 )
        {
          if ( 8 - v74 >= 5 )
          {
            v75 = (float *)((char *)this + 16 * v74 + 868);
            v76 = (float *)((char *)this + 32 * v74 + 4 * v44 + 608);
            v77 = (3 - v74) / 5 + 1;
            v74 += v77 + 4 * v77;
            do
            {
              v78 = 0.0;
              v79 = *((_BYTE *)this + 16 * v44 + 876);
              if ( *((_BYTE *)v75 + 8) )
              {
                if ( !v79 )
                  v78 = FLOAT_3_4028235e38;
              }
              else if ( !v79 )
              {
                v101 = *v75 - *((float *)this + 4 * v44 + 217);
                v102 = (float)(v101 * v101)
                     + (float)((float)(*(v75 - 1) - *((float *)this + 4 * v44 + 216))
                             * (float)(*(v75 - 1) - *((float *)this + 4 * v44 + 216)));
                if ( v102 != 0.0 )
                  v78 = (float)(*((float *)this + 4 * v44 + 218) + v75[1]) / v102;
              }
              *(v76 - 8) = v78;
              v80 = 0.0;
              v81 = *((_BYTE *)this + 16 * v44 + 876);
              if ( *((_BYTE *)v75 + 24) )
              {
                if ( !v81 )
                  v80 = FLOAT_3_4028235e38;
              }
              else if ( !v81 )
              {
                v103 = v75[4] - *((float *)this + 4 * v44 + 217);
                v104 = (float)(v103 * v103)
                     + (float)((float)(v75[3] - *((float *)this + 4 * v44 + 216))
                             * (float)(v75[3] - *((float *)this + 4 * v44 + 216)));
                if ( v104 != 0.0 )
                  v80 = (float)(*((float *)this + 4 * v44 + 218) + v75[5]) / v104;
              }
              *v76 = v80;
              v82 = 0.0;
              v83 = *((_BYTE *)this + 16 * v44 + 876);
              if ( *((_BYTE *)v75 + 40) )
              {
                if ( !v83 )
                  v82 = FLOAT_3_4028235e38;
              }
              else if ( !v83 )
              {
                v105 = v75[8] - *((float *)this + 4 * v44 + 217);
                v106 = (float)(v105 * v105)
                     + (float)((float)(v75[7] - *((float *)this + 4 * v44 + 216))
                             * (float)(v75[7] - *((float *)this + 4 * v44 + 216)));
                if ( v106 != 0.0 )
                  v82 = (float)(*((float *)this + 4 * v44 + 218) + v75[9]) / v106;
              }
              v76[8] = v82;
              v84 = 0.0;
              v85 = *((_BYTE *)this + 16 * v44 + 876);
              if ( *((_BYTE *)v75 + 56) )
              {
                if ( !v85 )
                  v84 = FLOAT_3_4028235e38;
              }
              else if ( !v85 )
              {
                v107 = v75[12] - *((float *)this + 4 * v44 + 217);
                v108 = (float)(v107 * v107)
                     + (float)((float)(v75[11] - *((float *)this + 4 * v44 + 216))
                             * (float)(v75[11] - *((float *)this + 4 * v44 + 216)));
                if ( v108 != 0.0 )
                  v84 = (float)(*((float *)this + 4 * v44 + 218) + v75[13]) / v108;
              }
              v76[16] = v84;
              v86 = 0.0;
              v87 = *((_BYTE *)this + 16 * v44 + 876);
              if ( *((_BYTE *)v75 + 72) )
              {
                if ( !v87 )
                  v86 = FLOAT_3_4028235e38;
              }
              else if ( !v87 )
              {
                v109 = v75[16] - *((float *)this + 4 * v44 + 217);
                v110 = (float)(v109 * v109)
                     + (float)((float)(v75[15] - *((float *)this + 4 * v44 + 216))
                             * (float)(v75[15] - *((float *)this + 4 * v44 + 216)));
                if ( v110 != 0.0 )
                  v86 = (float)(*((float *)this + 4 * v44 + 218) + v75[17]) / v110;
              }
              v76[24] = v86;
              v75 += 20;
              v76 += 40;
              --v77;
            }
            while ( v77 );
          }
          if ( v74 < 8 )
          {
            v88 = (float *)((char *)this + 16 * v74 + 868);
            v89 = (float *)((char *)this + 32 * v74 + 4 * v44 + 576);
            v90 = 8 - v74;
            do
            {
              v91 = 0.0;
              v92 = *((_BYTE *)this + 16 * v44 + 876);
              if ( *((_BYTE *)v88 + 8) )
              {
                if ( !v92 )
                  v91 = FLOAT_3_4028235e38;
              }
              else if ( !v92 )
              {
                v111 = *v88 - *((float *)this + 4 * v44 + 217);
                v112 = (float)(v111 * v111)
                     + (float)((float)(*(v88 - 1) - *((float *)this + 4 * v44 + 216))
                             * (float)(*(v88 - 1) - *((float *)this + 4 * v44 + 216)));
                if ( v112 != 0.0 )
                  v91 = (float)(v88[1] + *((float *)this + 4 * v44 + 218)) / v112;
              }
              *v89 = v91;
              v88 += 4;
              v89 += 8;
              --v90;
            }
            while ( v90 );
          }
        }
      }
    }
  }
  else
  {
    CDirtyRegion::Merge(this, v34, v35);
    *(_OWORD *)((char *)this + 16 * v35 + 24) = v17;
    CDirtyRegion::CalcDirtyRegionCachedData(v98, X, (char *)this + 16 * v35 + 864);
    CDirtyRegion::UpdateAcceleration(this, v35);
    if ( v8 )
    {
      v99 = (__int64 *)((char *)this + 16 * v35 + 448);
      v100 = *v99;
      *v8 = *v99;
      v8[1] = (__int64)v99;
      if ( *(__int64 **)(v100 + 8) != v99 )
        __fastfail(3u);
      *(_QWORD *)(v100 + 8) = v8;
      *v99 = (__int64)v8;
    }
    else
    {
      *(_OWORD *)((char *)this + 16 * v35 + 152) = v17;
    }
  }
  return v4;
}
