/*
 * XREFs of ?Merge@CDirtyRegion@@AEAAXII@Z @ 0x180071150
 * Callers:
 *     ?Optimize@CDirtyRegion@@QEAAXW4DirtyRegionOptimization@@@Z @ 0x18000CB24 (-Optimize@CDirtyRegion@@QEAAXW4DirtyRegionOptimization@@@Z.c)
 *     ?_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800718D0 (-_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ?PreRender@CDesktopRenderTarget@@UEAAJXZ @ 0x180075FA0 (-PreRender@CDesktopRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18004BAF0 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 */

void __fastcall CDirtyRegion::Merge(CDirtyRegion *this, unsigned int a2, unsigned int a3)
{
  __int64 v3; // r14
  __int64 v4; // rbp
  __int64 v5; // rdi
  __int64 v6; // r15
  _QWORD *v7; // rdx
  __int64 v8; // r9
  __int64 v9; // r10
  float v10; // xmm5_4
  float v11; // xmm2_4
  __int64 v12; // r8
  float v13; // xmm4_4
  float v14; // xmm3_4
  bool v15; // cc
  bool v16; // al
  float v17; // xmm2_4
  float v18; // xmm3_4
  unsigned int v19; // r11d
  __int64 v20; // rcx
  float *v21; // rdx
  unsigned int v22; // eax
  __int64 v23; // rbx
  float v24; // xmm1_4
  char v25; // al
  float v26; // xmm3_4
  float v27; // xmm3_4
  float v28; // xmm3_4
  char v29; // al
  float v30; // xmm1_4
  float v31; // xmm1_4
  float v32; // xmm1_4
  char v33; // al
  float v34; // xmm3_4
  float v35; // xmm3_4
  float v36; // xmm1_4
  char v37; // al
  float v38; // xmm3_4
  float v39; // xmm3_4
  __int64 v40; // rdx
  __int64 v41; // rcx
  float *v42; // rbx
  float v43; // xmm1_4
  char v44; // al
  float v45; // xmm3_4
  float v46; // xmm3_4
  __int64 v47; // r10
  __int64 v48; // rbx
  float *v49; // rsi
  unsigned int v50; // edx
  __int64 v51; // rcx
  float v52; // xmm1_4
  char v53; // al
  float v54; // xmm3_4
  char v55; // al
  float v56; // xmm1_4
  char v57; // al
  float v58; // xmm3_4
  char v59; // al
  float v60; // xmm1_4
  char v61; // al
  float v62; // xmm1_4
  char v63; // al
  __int64 v64; // rdx
  float *v65; // rcx
  __int64 v66; // rax
  float v67; // xmm1_4
  char v68; // r10
  __int64 v69; // r9
  _QWORD *v70; // r10
  _QWORD *v71; // rdx
  float v72; // xmm3_4
  float v73; // xmm3_4
  float v74; // xmm1_4
  float v75; // xmm1_4
  float v76; // xmm3_4
  float v77; // xmm3_4
  float v78; // xmm1_4
  float v79; // xmm1_4
  float v80; // xmm3_4
  float v81; // xmm3_4
  float v82; // xmm3_4
  float v83; // xmm3_4
  float v84; // xmm3_4
  float v85; // xmm3_4
  __m128 v86; // [rsp+20h] [rbp-28h] BYREF

  v3 = a2;
  v4 = 16LL * a2;
  v5 = 16LL * a3;
  v6 = a3;
  v86 = *(__m128 *)((char *)this + v4 + 24);
  TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(v86.m128_f32, (float *)((char *)this + v5 + 24));
  v10 = v86.m128_f32[0];
  v11 = v86.m128_f32[3];
  v12 = 2 * (v9 + 161);
  v13 = v86.m128_f32[1];
  v14 = _mm_shuffle_ps(v86, v86, 170).m128_f32[0];
  v15 = v14 <= v86.m128_f32[0];
  *(__m128 *)(v8 + v4 + 24) = v86;
  v16 = v15 || v11 <= v13;
  *(_BYTE *)(v8 + 16 * (v9 + 161) + 12) = v16;
  v17 = v11 - v13;
  v18 = v14 - v10;
  v19 = 0;
  *(float *)(v8 + 16 * (v9 + 161) + 8) = v17 * v18;
  *(float *)(v8 + 16 * (v9 + 161) + 4) = (float)(v17 * 0.5) + v13;
  *(float *)(v8 + 16 * (v9 + 161)) = (float)(v18 * 0.5) + v10;
  *(_BYTE *)(v5 + v8 + 2588) = 1;
  *(_QWORD *)(v5 + v8 + 2580) = 0LL;
  *(_DWORD *)(v8 + 16 * (v6 + 161)) = 0;
  v7[1] = 0LL;
  *v7 = 0LL;
  if ( (unsigned int)v9 >= 4 )
  {
    v20 = v8 + 2580;
    v21 = (float *)(32 * v9 + v8 + 2292);
    v22 = ((unsigned int)(v9 - 4) >> 2) + 1;
    v23 = v22;
    v19 = 4 * v22;
    do
    {
      v24 = 0.0;
      v25 = *(_BYTE *)(v8 + 16 * (v9 + 161) + 12);
      if ( *(_BYTE *)(v20 + 8) )
      {
        if ( !v25 )
          v24 = FLOAT_3_4028235e38;
      }
      else if ( !v25 )
      {
        v26 = *(float *)v20 - *(float *)(v8 + 16 * (v9 + 161) + 4);
        v27 = (float)(v26 * v26)
            + (float)((float)(*(float *)(v20 - 4) - *(float *)(v8 + 16 * (v9 + 161)))
                    * (float)(*(float *)(v20 - 4) - *(float *)(v8 + 16 * (v9 + 161))));
        if ( v27 != 0.0 )
          v24 = (float)(*(float *)(v20 + 4) + *(float *)(v8 + 16 * (v9 + 161) + 8)) / v27;
      }
      *(v21 - 1) = v24;
      v28 = 0.0;
      v29 = *(_BYTE *)(v8 + 16 * (v9 + 161) + 12);
      if ( *(_BYTE *)(v20 + 24) )
      {
        if ( !v29 )
          v28 = FLOAT_3_4028235e38;
      }
      else if ( !v29 )
      {
        v30 = *(float *)(v20 + 16) - *(float *)(v8 + 16 * (v9 + 161) + 4);
        v31 = (float)(v30 * v30)
            + (float)((float)(*(float *)(v20 + 12) - *(float *)(v8 + 16 * (v9 + 161)))
                    * (float)(*(float *)(v20 + 12) - *(float *)(v8 + 16 * (v9 + 161))));
        if ( v31 != 0.0 )
          v28 = (float)(*(float *)(v20 + 20) + *(float *)(v8 + 16 * (v9 + 161) + 8)) / v31;
      }
      *v21 = v28;
      v32 = 0.0;
      v33 = *(_BYTE *)(v8 + 16 * (v9 + 161) + 12);
      if ( *(_BYTE *)(v20 + 40) )
      {
        if ( !v33 )
          v32 = FLOAT_3_4028235e38;
      }
      else if ( !v33 )
      {
        v34 = *(float *)(v20 + 32) - *(float *)(v8 + 16 * (v9 + 161) + 4);
        v35 = (float)(v34 * v34)
            + (float)((float)(*(float *)(v20 + 28) - *(float *)(v8 + 16 * (v9 + 161)))
                    * (float)(*(float *)(v20 + 28) - *(float *)(v8 + 16 * (v9 + 161))));
        if ( v35 != 0.0 )
          v32 = (float)(*(float *)(v20 + 36) + *(float *)(v8 + 16 * (v9 + 161) + 8)) / v35;
      }
      v21[1] = v32;
      v36 = 0.0;
      v37 = *(_BYTE *)(v8 + 16 * (v9 + 161) + 12);
      if ( *(_BYTE *)(v20 + 56) )
      {
        if ( !v37 )
          v36 = FLOAT_3_4028235e38;
      }
      else if ( !v37 )
      {
        v38 = *(float *)(v20 + 48) - *(float *)(v8 + 16 * (v9 + 161) + 4);
        v39 = (float)(v38 * v38)
            + (float)((float)(*(float *)(v20 + 44) - *(float *)(v8 + 16 * (v9 + 161)))
                    * (float)(*(float *)(v20 + 44) - *(float *)(v8 + 16 * (v9 + 161))));
        if ( v39 != 0.0 )
          v36 = (float)(*(float *)(v20 + 52) + *(float *)(v8 + 16 * (v9 + 161) + 8)) / v39;
      }
      v21[2] = v36;
      v20 += 64LL;
      v21 += 4;
      --v23;
    }
    while ( v23 );
  }
  if ( v19 < (unsigned int)v9 )
  {
    v40 = 16LL * v19 + v8 + 2580;
    v41 = (unsigned int)v9 - v19;
    v42 = (float *)(v8 + 4 * (v19 + 8 * v9 + 572));
    do
    {
      v43 = 0.0;
      v44 = *(_BYTE *)(v8 + 16 * (v9 + 161) + 12);
      if ( *(_BYTE *)(v40 + 8) )
      {
        if ( !v44 )
          v43 = FLOAT_3_4028235e38;
      }
      else if ( !v44 )
      {
        v45 = *(float *)v40 - *(float *)(v8 + 16 * (v9 + 161) + 4);
        v46 = (float)(v45 * v45)
            + (float)((float)(*(float *)(v40 - 4) - *(float *)(v8 + 16 * (v9 + 161)))
                    * (float)(*(float *)(v40 - 4) - *(float *)(v8 + 16 * (v9 + 161))));
        if ( v46 != 0.0 )
          v43 = (float)(*(float *)(v40 + 4) + *(float *)(v8 + 16 * (v9 + 161) + 8)) / v46;
      }
      *v42 = v43;
      v40 += 16LL;
      ++v42;
      --v41;
    }
    while ( v41 );
  }
  v47 = (unsigned int)(v9 + 1);
  if ( (unsigned int)v47 < 8 )
  {
    if ( (unsigned int)(8 - v47) >= 6 )
    {
      v48 = 16LL * (unsigned int)v47 + v8 + 2580;
      v49 = (float *)(v8 + 4 * (v3 + 580 + 8 * v47));
      v50 = (2 - (int)v47) / 6u + 1;
      v51 = v50;
      v47 = (unsigned int)v47 + 6 * v50;
      do
      {
        v52 = 0.0;
        v53 = *(_BYTE *)(v8 + 8 * v12 + 12);
        if ( *(_BYTE *)(v48 + 8) )
        {
          if ( !v53 )
            v52 = FLOAT_3_4028235e38;
        }
        else if ( !v53 )
        {
          v72 = *(float *)v48 - *(float *)(v8 + 8 * v12 + 4);
          v73 = (float)(v72 * v72)
              + (float)((float)(*(float *)(v48 - 4) - *(float *)(v8 + 8 * v12))
                      * (float)(*(float *)(v48 - 4) - *(float *)(v8 + 8 * v12)));
          if ( v73 != 0.0 )
            v52 = (float)(*(float *)(v8 + 8 * v12 + 8) + *(float *)(v48 + 4)) / v73;
        }
        *(v49 - 8) = v52;
        v54 = 0.0;
        v55 = *(_BYTE *)(v8 + 8 * v12 + 12);
        if ( *(_BYTE *)(v48 + 24) )
        {
          if ( !v55 )
            v54 = FLOAT_3_4028235e38;
        }
        else if ( !v55 )
        {
          v74 = *(float *)(v48 + 16) - *(float *)(v8 + 8 * v12 + 4);
          v75 = (float)(v74 * v74)
              + (float)((float)(*(float *)(v48 + 12) - *(float *)(v8 + 8 * v12))
                      * (float)(*(float *)(v48 + 12) - *(float *)(v8 + 8 * v12)));
          if ( v75 != 0.0 )
            v54 = (float)(*(float *)(v8 + 8 * v12 + 8) + *(float *)(v48 + 20)) / v75;
        }
        *v49 = v54;
        v56 = 0.0;
        v57 = *(_BYTE *)(v8 + 8 * v12 + 12);
        if ( *(_BYTE *)(v48 + 40) )
        {
          if ( !v57 )
            v56 = FLOAT_3_4028235e38;
        }
        else if ( !v57 )
        {
          v76 = *(float *)(v48 + 32) - *(float *)(v8 + 8 * v12 + 4);
          v77 = (float)(v76 * v76)
              + (float)((float)(*(float *)(v48 + 28) - *(float *)(v8 + 8 * v12))
                      * (float)(*(float *)(v48 + 28) - *(float *)(v8 + 8 * v12)));
          if ( v77 != 0.0 )
            v56 = (float)(*(float *)(v8 + 8 * v12 + 8) + *(float *)(v48 + 36)) / v77;
        }
        v49[8] = v56;
        v58 = 0.0;
        v59 = *(_BYTE *)(v8 + 8 * v12 + 12);
        if ( *(_BYTE *)(v48 + 56) )
        {
          if ( !v59 )
            v58 = FLOAT_3_4028235e38;
        }
        else if ( !v59 )
        {
          v78 = *(float *)(v48 + 48) - *(float *)(v8 + 8 * v12 + 4);
          v79 = (float)(v78 * v78)
              + (float)((float)(*(float *)(v48 + 44) - *(float *)(v8 + 8 * v12))
                      * (float)(*(float *)(v48 + 44) - *(float *)(v8 + 8 * v12)));
          if ( v79 != 0.0 )
            v58 = (float)(*(float *)(v8 + 8 * v12 + 8) + *(float *)(v48 + 52)) / v79;
        }
        v49[16] = v58;
        v60 = 0.0;
        v61 = *(_BYTE *)(v8 + 8 * v12 + 12);
        if ( *(_BYTE *)(v48 + 72) )
        {
          if ( !v61 )
            v60 = FLOAT_3_4028235e38;
        }
        else if ( !v61 )
        {
          v80 = *(float *)(v48 + 64) - *(float *)(v8 + 8 * v12 + 4);
          v81 = (float)(v80 * v80)
              + (float)((float)(*(float *)(v48 + 60) - *(float *)(v8 + 8 * v12))
                      * (float)(*(float *)(v48 + 60) - *(float *)(v8 + 8 * v12)));
          if ( v81 != 0.0 )
            v60 = (float)(*(float *)(v8 + 8 * v12 + 8) + *(float *)(v48 + 68)) / v81;
        }
        v49[24] = v60;
        v62 = 0.0;
        v63 = *(_BYTE *)(v8 + 8 * v12 + 12);
        if ( *(_BYTE *)(v48 + 88) )
        {
          if ( !v63 )
            v62 = FLOAT_3_4028235e38;
        }
        else if ( !v63 )
        {
          v82 = *(float *)(v48 + 80) - *(float *)(v8 + 8 * v12 + 4);
          v83 = (float)(v82 * v82)
              + (float)((float)(*(float *)(v48 + 76) - *(float *)(v8 + 8 * v12))
                      * (float)(*(float *)(v48 + 76) - *(float *)(v8 + 8 * v12)));
          if ( v83 != 0.0 )
            v62 = (float)(*(float *)(v8 + 8 * v12 + 8) + *(float *)(v48 + 84)) / v83;
        }
        v49[32] = v62;
        v48 += 96LL;
        v49 += 48;
        --v51;
      }
      while ( v51 );
    }
    if ( (unsigned int)v47 < 8 )
    {
      v64 = 16LL * (unsigned int)v47 + v8 + 2580;
      v65 = (float *)(v8 + 4 * (v3 + 572 + 8 * v47));
      v66 = (unsigned int)(8 - v47);
      do
      {
        v67 = 0.0;
        v68 = *(_BYTE *)(v8 + 8 * v12 + 12);
        if ( *(_BYTE *)(v64 + 8) )
        {
          if ( !v68 )
            v67 = FLOAT_3_4028235e38;
        }
        else if ( !v68 )
        {
          v84 = *(float *)v64 - *(float *)(v8 + 8 * v12 + 4);
          v85 = (float)(v84 * v84)
              + (float)((float)(*(float *)(v64 - 4) - *(float *)(v8 + 8 * v12))
                      * (float)(*(float *)(v64 - 4) - *(float *)(v8 + 8 * v12)));
          if ( v85 != 0.0 )
            v67 = (float)(*(float *)(v64 + 4) + *(float *)(v8 + 8 * v12 + 8)) / v85;
        }
        *v65 = v67;
        v64 += 16LL;
        v65 += 8;
        --v66;
      }
      while ( v66 );
    }
  }
  TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe((float *)(v4 + v8 + 152), (float *)(v5 + v8 + 152));
  v70 = (_QWORD *)(v5 + v69 + 584);
  v71[1] = 0LL;
  *v71 = 0LL;
  if ( (_QWORD *)*v70 != v70 )
  {
    **(_QWORD **)(v69 + 16 * (v3 + 37)) = *v70;
    *(_QWORD *)(*v70 + 8LL) = *(_QWORD *)(v69 + 16 * (v3 + 37));
    **(_QWORD **)(v69 + 16 * (v6 + 37)) = v4 + v69 + 584;
    *(_QWORD *)(v69 + 16 * (v3 + 37)) = *(_QWORD *)(v69 + 16 * (v6 + 37));
    v70[1] = v70;
    *v70 = v70;
  }
}
