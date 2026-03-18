/*
 * XREFs of ?_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180079BB0
 * Callers:
 *     ?CollectAdditionalDirtyRegion@CVisual@@MEAAJPEAVCDirtyRegion@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UPageInPixels@2@@@W4Enum@MilBitmapInterpolationMode@@PEBV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x1800497D0 (-CollectAdditionalDirtyRegion@CVisual@@MEAAJPEAVCDirtyRegion@@PEBV-$CMatrix@ULocalRenderingHPC@C.c)
 *     ?PostSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18004F330 (-PostSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180050490 (-PreSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180079840 (-Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180036C00 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?SetFullDirty@CDirtyRegion@@QEAAXXZ @ 0x18007969C (-SetFullDirty@CDirtyRegion@@QEAAXXZ.c)
 *     ?UpdateAcceleration@CDirtyRegion@@AEAAXI@Z @ 0x1800798C8 (-UpdateAcceleration@CDirtyRegion@@AEAAXI@Z.c)
 *     ?Merge@CDirtyRegion@@AEAAXII@Z @ 0x180079AAC (-Merge@CDirtyRegion@@AEAAXII@Z.c)
 *     ?CalcDirtyRegionCachedData@CDirtyRegion@@AEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUDirtyRegionCachedData@1@@Z @ 0x18007A76C (-CalcDirtyRegionCachedData@CDirtyRegion@@AEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNo.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AssertW@@YAXPEBG000K@Z @ 0x1800BC5A0 (-AssertW@@YAXPEBG000K@Z.c)
 *     ceilf_0 @ 0x1800BC85A (ceilf_0.c)
 *     floorf_0 @ 0x1800BC87E (floorf_0.c)
 *     ?MilUnexpectedErrorWithAsimovEvent@@YAXJPEBG@Z @ 0x180138878 (-MilUnexpectedErrorWithAsimovEvent@@YAXJPEBG@Z.c)
 */

__int64 __fastcall CDirtyRegion::_Add(CDirtyRegion *this, volatile signed __int32 *a2, __int64 a3, __int128 *a4)
{
  unsigned int v4; // r12d
  char v5; // r15
  __int64 *v8; // r14
  float v9; // xmm9_4
  float v10; // xmm7_4
  float v11; // xmm8_4
  float v12; // xmm6_4
  float v13; // xmm1_4
  float v14; // xmm1_4
  float v15; // xmm1_4
  LPVOID (__fastcall *v16)(WPF::ProcessHeapImpl *, SIZE_T); // rsi
  __int64 *v17; // rax
  __int64 (__fastcall *v18)(CVisual *); // rsi
  __int128 v19; // xmm10
  bool v20; // dl
  float v21; // xmm9_4
  float v22; // xmm8_4
  __int64 v23; // r8
  float *v24; // rcx
  float *v25; // rax
  float v26; // xmm3_4
  float v27; // xmm9_4
  float v28; // xmm8_4
  float v29; // xmm1_4
  float v30; // xmm2_4
  float v31; // xmm1_4
  float v32; // xmm1_4
  float v33; // xmm1_4
  unsigned int v34; // edx
  unsigned int v35; // edi
  unsigned int v36; // r15d
  char v37; // r10
  __int64 v38; // r9
  unsigned int v39; // r8d
  float *v40; // rax
  __int64 v41; // r11
  __int64 *v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // r11
  float v46; // xmm5_4
  float v47; // xmm2_4
  unsigned int v48; // ecx
  __int64 v49; // r8
  float v50; // xmm1_4
  float v51; // xmm4_4
  char v52; // r9
  float v53; // xmm2_4
  __int64 v54; // rdx
  float *v55; // rax
  float v56; // xmm1_4
  float v57; // xmm1_4
  char v58; // r9
  float v59; // xmm2_4
  float *v60; // rax
  float v61; // xmm1_4
  float v62; // xmm1_4
  __int64 v63; // rdx
  float v64; // xmm2_4
  char v65; // cl
  float *v66; // rax
  float v67; // xmm1_4
  float v68; // xmm1_4
  unsigned int v69; // r9d
  float *v70; // r10
  float *v71; // rcx
  __int64 v72; // rdx
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
  __int64 *v94; // rax
  __int64 v95; // rcx
  float v96; // xmm2_4
  float v97; // xmm2_4
  float v98; // xmm1_4
  float v99; // xmm1_4
  float v100; // xmm2_4
  float v101; // xmm2_4
  float v102; // xmm1_4
  float v103; // xmm1_4
  float v104; // xmm2_4
  float v105; // xmm2_4
  float v106; // xmm2_4
  float v107; // xmm2_4
  __int128 X; // [rsp+38h] [rbp-39h] BYREF
  float v109[28]; // [rsp+48h] [rbp-29h] BYREF

  v4 = 0;
  v5 = a3;
  v8 = 0LL;
  X = *a4;
  if ( *((_BYTE *)this + 1012) )
    return v4;
  v9 = *((float *)&X + 2);
  v10 = *(float *)&X;
  if ( *((float *)&X + 2) < *(float *)&X )
    goto LABEL_169;
  v11 = *((float *)&X + 3);
  v12 = *((float *)&X + 1);
  if ( *((float *)&X + 3) < *((float *)&X + 1) )
    goto LABEL_169;
  if ( *((float *)this + 249) > *(float *)&X )
    v10 = *((float *)this + 249);
  if ( *((float *)this + 250) > *((float *)&X + 1) )
    v12 = *((float *)this + 250);
  if ( *((float *)&X + 2) > *((float *)this + 251) )
    v9 = *((float *)this + 251);
  if ( *((float *)&X + 3) > *((float *)this + 252) )
    v11 = *((float *)this + 252);
  if ( v9 <= v10 || v11 <= v12 )
    return v4;
  if ( *((_BYTE *)this + 1013) )
  {
LABEL_169:
    CDirtyRegion::SetFullDirty(this, (__int64)a2, a3, (__int64)a4);
    return v4;
  }
  v13 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v10) & _xmm);
  if ( v13 < 8388608.0 )
    v10 = (float)(int)floorf_0(v10);
  *(float *)&X = v10;
  v14 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v12) & _xmm);
  if ( v14 < 8388608.0 )
    v12 = (float)(int)floorf_0(v12);
  *((float *)&X + 1) = v12;
  v15 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v9) & _xmm);
  if ( v15 < 8388608.0 )
    v9 = (float)(int)ceilf_0(v9);
  *((float *)&X + 2) = v9;
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v11) & _xmm) < 8388608.0 )
    v11 = (float)(int)ceilf_0(v11);
  *((float *)&X + 3) = v11;
  if ( a2 )
  {
    v16 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
    if ( v16 == WPF::ProcessHeapImpl::Alloc )
      v17 = (__int64 *)HeapAlloc(g_hProcessHeap, 0, 0x30uLL);
    else
      v17 = (__int64 *)v16(WPF::g_pProcessHeap, 48LL);
    v8 = v17;
    if ( !v17 )
    {
      v4 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x217u);
      return v4;
    }
    v17[2] = (__int64)a2;
    v18 = *(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)a2 + 8LL);
    if ( v18 == CVisual::AddRef )
    {
      if ( *((int *)a2 + 2) < 0 )
        AssertW(
          L"Tried to AddRef an object which has previously been freed (refcount went to 0).",
          0LL,
          L"CMILCOMBase::InternalAddRef",
          L"windows\\dwm\\common\\shared\\milcom.cpp",
          0x1Fu);
      _InterlockedIncrement(a2 + 2);
    }
    else
    {
      v18((CVisual *)a2);
    }
    v19 = X;
    *((_BYTE *)v8 + 24) = v5;
    v8[1] = 0LL;
    *(_OWORD *)((char *)v8 + 28) = v19;
    *v8 = 0LL;
  }
  else
  {
    v19 = X;
  }
  v20 = v9 <= v10 || v11 <= v12;
  v21 = v9 - v10;
  v22 = v11 - v12;
  v23 = 2LL;
  v24 = (float *)((char *)this + 836);
  v25 = (float *)((char *)this + 868);
  v26 = v21 * v22;
  v27 = (float)(v21 * 0.5) + v10;
  v28 = (float)(v22 * 0.5) + v12;
  do
  {
    v29 = 0.0;
    if ( *((_BYTE *)v25 + 8) )
    {
      if ( !v20 )
        v29 = FLOAT_3_4028235e38;
    }
    else if ( !v20 )
    {
      v89 = (float)((float)(*v25 - v28) * (float)(*v25 - v28))
          + (float)((float)(*(v25 - 1) - v27) * (float)(*(v25 - 1) - v27));
      if ( v89 != 0.0 )
        v29 = (float)(v26 + v25[1]) / v89;
    }
    *(v24 - 1) = v29;
    v30 = 0.0;
    if ( *((_BYTE *)v25 + 24) )
    {
      if ( !v20 )
        v30 = FLOAT_3_4028235e38;
    }
    else if ( !v20 )
    {
      v90 = (float)((float)(v25[4] - v28) * (float)(v25[4] - v28))
          + (float)((float)(v25[3] - v27) * (float)(v25[3] - v27));
      if ( v90 != 0.0 )
        v30 = (float)(v26 + v25[5]) / v90;
    }
    *v24 = v30;
    v31 = 0.0;
    if ( *((_BYTE *)v25 + 40) )
    {
      if ( !v20 )
        v31 = FLOAT_3_4028235e38;
    }
    else if ( !v20 )
    {
      v91 = (float)((float)(v25[8] - v28) * (float)(v25[8] - v28))
          + (float)((float)(v25[7] - v27) * (float)(v25[7] - v27));
      if ( v91 != 0.0 )
        v31 = (float)(v26 + v25[9]) / v91;
    }
    v24[1] = v31;
    v32 = 0.0;
    if ( *((_BYTE *)v25 + 56) )
    {
      if ( !v20 )
        v32 = FLOAT_3_4028235e38;
    }
    else if ( !v20 )
    {
      v92 = (float)((float)(v25[12] - v28) * (float)(v25[12] - v28))
          + (float)((float)(v25[11] - v27) * (float)(v25[11] - v27));
      if ( v92 != 0.0 )
        v32 = (float)(v26 + v25[13]) / v92;
    }
    v24[2] = v32;
    v25 += 16;
    v24 += 4;
    --v23;
  }
  while ( v23 );
  v33 = FLOAT_N1_0;
  v34 = 8;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  v38 = 210LL;
  do
  {
    v39 = 0;
    if ( v34 >= 4 )
    {
      do
      {
        if ( *((float *)this + v39 + v38 - 2) > v33 )
        {
          v33 = *((float *)this + v39 + v38 - 2);
          v35 = v34;
          v36 = v39;
          v37 = 1;
        }
        if ( *((float *)this + v39 + v38 - 1) > v33 )
        {
          v33 = *((float *)this + v39 + v38 - 1);
          v36 = v39 + 1;
          v35 = v34;
          v37 = 1;
        }
        if ( *((float *)this + v39 + v38) > v33 )
        {
          v33 = *((float *)this + v39 + v38);
          v36 = v39 + 2;
          v35 = v34;
          v37 = 1;
        }
        if ( *((float *)this + v39 + v38 + 1) > v33 )
        {
          v33 = *((float *)this + v39 + v38 + 1);
          v36 = v39 + 3;
          v35 = v34;
          v37 = 1;
        }
        v39 += 4;
      }
      while ( v39 < v34 - 3 );
    }
    if ( v39 < v34 )
    {
      v40 = (float *)((char *)this + 4 * v38 + 4 * v39 - 8);
      do
      {
        if ( *v40 > v33 )
        {
          v33 = *v40;
          v35 = v34;
          v36 = v39;
          v37 = 1;
        }
        ++v40;
        ++v39;
      }
      while ( v39 < v34 );
    }
    v38 -= 8LL;
    --v34;
  }
  while ( v34 );
  if ( !v37 )
    MilUnexpectedErrorWithAsimovEvent(-2147467259, L"Invalid dirty region");
  if ( v35 == 8 )
  {
    v41 = v36;
    if ( v8 )
    {
      v42 = (__int64 *)((char *)this + 16 * v36 + 448);
      v43 = *v42;
      *v8 = *v42;
      v8[1] = (__int64)v42;
      if ( *(__int64 **)(v43 + 8) != v42 )
        __fastfail(3u);
      *(_QWORD *)(v43 + 8) = v8;
      *v42 = (__int64)v8;
    }
    else
    {
      TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe((float *)this + 4 * v36 + 38, (float *)&X);
    }
    *(_OWORD *)v109 = X;
    TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(v109, (float *)this + 4 * v41 + 6);
    v46 = v109[0];
    if ( v109[2] > v109[0] )
    {
      v47 = v109[1];
      if ( v109[3] > v109[1]
        && (v109[0] < *(float *)v44
         || v109[1] < *(float *)(v44 + 4)
         || *(float *)(v44 + 8) < v109[2]
         || *(float *)(v44 + 12) < v109[3]) )
      {
        v48 = 0;
        v49 = 2 * (v45 + 54);
        v50 = v109[3] - v109[1];
        v51 = v109[2] - v109[0];
        *(_OWORD *)v44 = *(_OWORD *)v109;
        *((_BYTE *)this + 8 * v49 + 12) = 0;
        *((float *)this + 2 * v49 + 2) = v50 * v51;
        *((float *)this + 2 * v49 + 1) = (float)(v50 * 0.5) + v47;
        *((float *)this + 2 * v49) = (float)(v51 * 0.5) + v46;
        if ( v36 >= 2 )
        {
          do
          {
            v52 = *((_BYTE *)this + 16 * v45 + 876);
            v53 = 0.0;
            v54 = v48;
            v55 = (float *)((char *)this + 16 * v48 + 864);
            if ( *((_BYTE *)v55 + 12) )
            {
              if ( !v52 )
                v53 = FLOAT_3_4028235e38;
            }
            else if ( !v52 )
            {
              v56 = v55[1] - *((float *)this + 4 * v45 + 217);
              v57 = (float)(v56 * v56)
                  + (float)((float)(*v55 - *((float *)this + 4 * v45 + 216))
                          * (float)(*v55 - *((float *)this + 4 * v45 + 216)));
              if ( v57 != 0.0 )
                v53 = (float)(v55[2] + *((float *)this + 4 * v45 + 218)) / v57;
            }
            *((float *)this + 8 * v45 + v48 + 144) = v53;
            v58 = *((_BYTE *)this + 16 * v45 + 876);
            v59 = 0.0;
            v60 = (float *)((char *)this + 16 * v48 + 880);
            if ( *((_BYTE *)v60 + 12) )
            {
              if ( !v58 )
                v59 = FLOAT_3_4028235e38;
            }
            else if ( !v58 )
            {
              v61 = v60[1] - *((float *)this + 4 * v45 + 217);
              v62 = (float)(v61 * v61)
                  + (float)((float)(*v60 - *((float *)this + 4 * v45 + 216))
                          * (float)(*v60 - *((float *)this + 4 * v45 + 216)));
              if ( v62 != 0.0 )
                v59 = (float)(v60[2] + *((float *)this + 4 * v45 + 218)) / v62;
            }
            v48 += 2;
            *((float *)this + 8 * v45 + v54 + 145) = v59;
          }
          while ( v48 < v36 - 1 );
        }
        if ( v48 < v36 )
        {
          v63 = v48;
          v64 = 0.0;
          v65 = *((_BYTE *)this + 16 * v45 + 876);
          v66 = (float *)((char *)this + 16 * v63 + 864);
          if ( *((_BYTE *)v66 + 12) )
          {
            if ( !v65 )
              v64 = FLOAT_3_4028235e38;
          }
          else if ( !v65 )
          {
            v67 = v66[1] - *((float *)this + 4 * v45 + 217);
            v68 = (float)(v67 * v67)
                + (float)((float)(*v66 - *((float *)this + 4 * v45 + 216))
                        * (float)(*v66 - *((float *)this + 4 * v45 + 216)));
            if ( v68 != 0.0 )
              v64 = (float)(v66[2] + *((float *)this + 4 * v45 + 218)) / v68;
          }
          *((float *)this + 8 * v45 + v63 + 144) = v64;
        }
        v69 = v36 + 1;
        if ( v36 + 1 < 8 )
        {
          if ( 8 - v69 >= 5 )
          {
            v70 = (float *)((char *)this + 16 * v69 + 868);
            v71 = (float *)((char *)this + 32 * v69 + 4 * v45 + 608);
            v72 = (3 - v69) / 5 + 1;
            v69 += v72 + 4 * v72;
            do
            {
              v73 = 0.0;
              v74 = *((_BYTE *)this + 16 * v45 + 876);
              if ( *((_BYTE *)v70 + 8) )
              {
                if ( !v74 )
                  v73 = FLOAT_3_4028235e38;
              }
              else if ( !v74 )
              {
                v96 = *v70 - *((float *)this + 4 * v45 + 217);
                v97 = (float)(v96 * v96)
                    + (float)((float)(*(v70 - 1) - *((float *)this + 4 * v45 + 216))
                            * (float)(*(v70 - 1) - *((float *)this + 4 * v45 + 216)));
                if ( v97 != 0.0 )
                  v73 = (float)(*((float *)this + 4 * v45 + 218) + v70[1]) / v97;
              }
              *(v71 - 8) = v73;
              v75 = 0.0;
              v76 = *((_BYTE *)this + 16 * v45 + 876);
              if ( *((_BYTE *)v70 + 24) )
              {
                if ( !v76 )
                  v75 = FLOAT_3_4028235e38;
              }
              else if ( !v76 )
              {
                v98 = v70[4] - *((float *)this + 4 * v45 + 217);
                v99 = (float)(v98 * v98)
                    + (float)((float)(v70[3] - *((float *)this + 4 * v45 + 216))
                            * (float)(v70[3] - *((float *)this + 4 * v45 + 216)));
                if ( v99 != 0.0 )
                  v75 = (float)(*((float *)this + 4 * v45 + 218) + v70[5]) / v99;
              }
              *v71 = v75;
              v77 = 0.0;
              v78 = *((_BYTE *)this + 16 * v45 + 876);
              if ( *((_BYTE *)v70 + 40) )
              {
                if ( !v78 )
                  v77 = FLOAT_3_4028235e38;
              }
              else if ( !v78 )
              {
                v100 = v70[8] - *((float *)this + 4 * v45 + 217);
                v101 = (float)(v100 * v100)
                     + (float)((float)(v70[7] - *((float *)this + 4 * v45 + 216))
                             * (float)(v70[7] - *((float *)this + 4 * v45 + 216)));
                if ( v101 != 0.0 )
                  v77 = (float)(*((float *)this + 4 * v45 + 218) + v70[9]) / v101;
              }
              v71[8] = v77;
              v79 = 0.0;
              v80 = *((_BYTE *)this + 16 * v45 + 876);
              if ( *((_BYTE *)v70 + 56) )
              {
                if ( !v80 )
                  v79 = FLOAT_3_4028235e38;
              }
              else if ( !v80 )
              {
                v102 = v70[12] - *((float *)this + 4 * v45 + 217);
                v103 = (float)(v102 * v102)
                     + (float)((float)(v70[11] - *((float *)this + 4 * v45 + 216))
                             * (float)(v70[11] - *((float *)this + 4 * v45 + 216)));
                if ( v103 != 0.0 )
                  v79 = (float)(*((float *)this + 4 * v45 + 218) + v70[13]) / v103;
              }
              v71[16] = v79;
              v81 = 0.0;
              v82 = *((_BYTE *)this + 16 * v45 + 876);
              if ( *((_BYTE *)v70 + 72) )
              {
                if ( !v82 )
                  v81 = FLOAT_3_4028235e38;
              }
              else if ( !v82 )
              {
                v104 = v70[16] - *((float *)this + 4 * v45 + 217);
                v105 = (float)(v104 * v104)
                     + (float)((float)(v70[15] - *((float *)this + 4 * v45 + 216))
                             * (float)(v70[15] - *((float *)this + 4 * v45 + 216)));
                if ( v105 != 0.0 )
                  v81 = (float)(*((float *)this + 4 * v45 + 218) + v70[17]) / v105;
              }
              v71[24] = v81;
              v70 += 20;
              v71 += 40;
              --v72;
            }
            while ( v72 );
          }
          if ( v69 < 8 )
          {
            v83 = (float *)((char *)this + 16 * v69 + 868);
            v84 = (float *)((char *)this + 32 * v69 + 4 * v45 + 576);
            v85 = 8 - v69;
            do
            {
              v86 = 0.0;
              v87 = *((_BYTE *)this + 16 * v45 + 876);
              if ( *((_BYTE *)v83 + 8) )
              {
                if ( !v87 )
                  v86 = FLOAT_3_4028235e38;
              }
              else if ( !v87 )
              {
                v106 = *v83 - *((float *)this + 4 * v45 + 217);
                v107 = (float)(v106 * v106)
                     + (float)((float)(*(v83 - 1) - *((float *)this + 4 * v45 + 216))
                             * (float)(*(v83 - 1) - *((float *)this + 4 * v45 + 216)));
                if ( v107 != 0.0 )
                  v86 = (float)(v83[1] + *((float *)this + 4 * v45 + 218)) / v107;
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
    CDirtyRegion::Merge(this, v35, v36);
    *(_OWORD *)((char *)this + 16 * v36 + 24) = v19;
    CDirtyRegion::CalcDirtyRegionCachedData(v93, &X, (char *)this + 16 * v36 + 864);
    CDirtyRegion::UpdateAcceleration(this, v36);
    if ( v8 )
    {
      v94 = (__int64 *)((char *)this + 16 * v36 + 448);
      v95 = *v94;
      *v8 = *v94;
      v8[1] = (__int64)v94;
      if ( *(__int64 **)(v95 + 8) != v94 )
        __fastfail(3u);
      *(_QWORD *)(v95 + 8) = v8;
      *v94 = (__int64)v8;
    }
    else
    {
      *(_OWORD *)((char *)this + 16 * v36 + 152) = v19;
    }
  }
  return v4;
}
