/*
 * XREFs of ?GenerateGeometry@Mesh@@QEAAJ_N0PEAVCVertexXYAAColorDUV2@@PEAHGPEAG2@Z @ 0x1800929B0
 * Callers:
 *     ?AppendGeometry@CDrawListPrimitiveBuilder@@IEAAJ_N0@Z @ 0x18009644C (-AppendGeometry@CDrawListPrimitiveBuilder@@IEAAJ_N0@Z.c)
 * Callees:
 *     ?InitMeshGraph@Mesh@@AEAAJXZ @ 0x180002488 (-InitMeshGraph@Mesh@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GenerateAntialiasBorder@Mesh@@AEBAX_NPEAVCVertexXYAAColorDUV2@@HPEAHPEAGH2@Z @ 0x180090FAC (-GenerateAntialiasBorder@Mesh@@AEBAX_NPEAVCVertexXYAAColorDUV2@@HPEAHPEAGH2@Z.c)
 *     ?GenerateTriangles@Mesh@@AEBAJPEAGHPEAH@Z @ 0x1800915B0 (-GenerateTriangles@Mesh@@AEBAJPEAGHPEAH@Z.c)
 *     memcpy_0 @ 0x1800BF662 (memcpy_0.c)
 */

__int64 __fastcall Mesh::GenerateGeometry(
        Mesh *this,
        char a2,
        char a3,
        struct CVertexXYAAColorDUV2 *a4,
        int *a5,
        signed __int16 a6,
        unsigned __int16 *a7,
        int *a8)
{
  signed __int16 v8; // r14
  int v9; // edi
  int v10; // eax
  int v11; // r15d
  __m128i v14; // xmm6
  unsigned __int16 *v15; // r13
  __int64 v16; // rdx
  __int64 v17; // rax
  int v18; // esi
  __int64 v19; // r14
  char *v20; // rdx
  __int64 v21; // r8
  __m128 v22; // xmm0
  __m128 v23; // xmm1
  int v24; // xmm2_4
  __int64 v25; // rax
  float v26; // xmm2_4
  float v27; // xmm0_4
  float v28; // xmm1_4
  int v29; // ecx
  float v30; // xmm0_4
  double v31; // xmm0_8
  float v32; // xmm1_4
  unsigned int v33; // ecx
  float v34; // xmm0_4
  int v35; // r11d
  __int64 v36; // rdi
  char *v37; // r9
  _DWORD *v38; // r10
  double v39; // xmm3_8
  int v40; // edx
  float v41; // xmm1_4
  float *v42; // rbx
  __int64 v43; // rsi
  __int64 *v44; // r8
  __int64 v45; // r13
  double *v46; // rax
  __int64 v47; // rcx
  unsigned __int16 *v48; // r13
  __int64 result; // rax
  bool v50; // r10
  __int64 v51; // r9
  __int64 *v52; // rcx
  unsigned __int64 *v53; // rax
  float v54; // xmm10_4
  float v55; // xmm6_4
  float v56; // xmm11_4
  float v57; // xmm7_4
  float v58; // xmm12_4
  float v59; // xmm9_4
  float v60; // xmm15_4
  float v61; // xmm13_4
  float v62; // xmm14_4
  __int64 v63; // xmm2_8
  float v64; // xmm4_4
  float v65; // xmm5_4
  float v66; // xmm8_4
  float v67; // xmm1_4
  float v68; // xmm2_4
  bool v69; // cc
  float v70; // xmm9_4
  float v71; // xmm6_4
  float v72; // xmm7_4
  float v73; // xmm1_4
  float v74; // xmm2_4
  float v75; // xmm1_4
  float v76; // xmm4_4
  float v77; // xmm0_4
  float v78; // xmm5_4
  unsigned __int64 v79; // xmm1_8
  int v80; // edx
  __m128i v81; // xmm6
  int v82; // eax
  unsigned __int16 *v83; // rcx
  __int64 v84; // rdx
  int inited; // eax
  unsigned int v86; // esi
  int v87; // edx
  int Triangles; // eax
  int v89; // ecx
  int v90; // xmm0_4
  double v91; // xmm0_8
  float v92; // xmm1_4
  int v93; // [rsp+38h] [rbp-D0h]
  int v94[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v95; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v96; // [rsp+58h] [rbp-B0h]
  __m128i v97; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v98; // [rsp+158h] [rbp+50h] BYREF
  __int64 v99; // [rsp+170h] [rbp+68h]

  v99 = (__int64)a4;
  v8 = a6;
  v9 = 0;
  v10 = *((_DWORD *)this + 48);
  v11 = 0;
  v94[0] = 0;
  v14 = _mm_cvtsi32_si128(a6);
  v97 = _mm_shuffle_epi32(_mm_unpacklo_epi16(v14, v14), 0);
  LODWORD(v98) = 0;
  if ( (v10 & 1) == 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0xFC6u);
    return 2147500037LL;
  }
  v15 = a7;
  if ( !a2 )
    goto LABEL_9;
  v16 = *((_QWORD *)this + 3);
  if ( !v16 || (v10 & 0x10) != 0 || (v10 & 8) != 0 )
  {
    inited = Mesh::InitMeshGraph(this);
    v86 = inited;
    if ( inited < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, inited, 0xFEDu);
    }
    else
    {
      v87 = *(_DWORD *)(*((_QWORD *)this + 2) + 100LL)
          + 2 * (*(_DWORD *)(*((_QWORD *)this + 2) + 92LL) - *(_DWORD *)(*((_QWORD *)this + 2) + 104LL));
      if ( v87 <= 0 )
        goto LABEL_8;
      Triangles = Mesh::GenerateTriangles(this, v15, 3 * v87, (int *)&v98);
      v86 = Triangles;
      if ( Triangles >= 0 )
      {
        v11 = v98;
        goto LABEL_8;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, Triangles, 0xFF5u);
    }
    return v86;
  }
  v17 = *(int *)(v16 + 128);
  if ( (int)v17 > 0 )
  {
    memcpy_0(a7, *(const void **)(v16 + 112), 2 * v17);
    v11 = *(_DWORD *)(*((_QWORD *)this + 3) + 128LL);
    LODWORD(v98) = v11;
LABEL_8:
    a4 = (struct CVertexXYAAColorDUV2 *)v99;
  }
LABEL_9:
  if ( *((int *)this + 3) > 0 )
  {
    v18 = 0;
    v19 = 3LL;
    v20 = (char *)a4 + 32;
    v21 = 0LL;
    do
    {
      v22 = (__m128)*(unsigned int *)(v21 + *(_QWORD *)this);
      v22.m128_f32[0] = v22.m128_f32[0] + *((float *)this + 10);
      v23 = (__m128)*(unsigned int *)(v21 + *(_QWORD *)this + 4);
      v23.m128_f32[0] = v23.m128_f32[0] + *((float *)this + 11);
      *((_DWORD *)v20 - 6) = 1065353216;
      *((_DWORD *)v20 + 2) = 0;
      *((_DWORD *)v20 + 3) = 1065353216;
      *(_QWORD *)v20 = _mm_unpacklo_ps(v22, v23).m128_u64[0];
      v24 = *((_DWORD *)v20 + 1);
      *((_DWORD *)v20 - 8) = *(_DWORD *)v20;
      *((_DWORD *)v20 - 7) = v24;
      v25 = *(_QWORD *)this;
      v26 = *(float *)(v21 + *(_QWORD *)this + 16) * 255.0;
      v27 = (float)(*(float *)(v21 + *(_QWORD *)this + 20) * 255.0) + 6291456.25;
      v28 = *(float *)(v21 + *(_QWORD *)this + 12) * 255.0;
      if ( *((char *)this + 192) < 0 )
      {
        *(float *)v94 = (float)(*(float *)(v21 + *(_QWORD *)this + 20) * 255.0) + 6291456.25;
        v89 = LODWORD(v27) << 23;
        *(float *)&v90 = v26 + 6291456.25;
        v94[1] = v90;
        v91 = v28;
        v92 = *(float *)(v21 + v25 + 8);
        *(float *)&v91 = v91 + 6291456.25;
        LODWORD(v95) = LODWORD(v91);
        v33 = ((int)(LODWORD(v91) << 10) >> 3) | (v94[1] << 15) & 0xFFFF00FF | v89 & 0xFF0000FF;
        v34 = (float)(v92 * 255.0) + 6291456.25;
        *(float *)&v96 = v34;
      }
      else
      {
        *(float *)&v96 = (float)(*(float *)(v21 + *(_QWORD *)this + 20) * 255.0) + 6291456.25;
        v29 = LODWORD(v27) << 23;
        v30 = v26 + 6291456.25;
        *(float *)&v95 = v30;
        v31 = v28;
        v32 = *(float *)(v21 + v25 + 8);
        *(float *)&v31 = v31 + 6291456.25;
        v94[1] = LODWORD(v31);
        v33 = ((int)(LODWORD(v31) << 10) >> 3) | ((_DWORD)v95 << 15) & 0xFFFF00FF | v29 & 0xFF0000FF;
        v34 = (float)(v32 * 255.0) + 6291456.25;
        *(float *)v94 = v34;
      }
      v35 = 0;
      v36 = 0LL;
      *((_DWORD *)v20 - 5) = ((int)(LODWORD(v34) << 10) >> 11) | v33 & 0xFFFFFF00;
      if ( *((int *)this + 12) > 0 )
      {
        v37 = v20 - 16;
        v38 = (_DWORD *)((char *)this + 104);
        do
        {
          if ( *v38 )
          {
            *((_QWORD *)v37 + 4) = *(_QWORD *)(*(_QWORD *)this + 8 * (v36 + v19));
            *(_QWORD *)v37 = *(_QWORD *)(*(_QWORD *)this + 8 * (v36 + v19));
          }
          ++v35;
          ++v36;
          v37 += 8;
          v38 += 14;
        }
        while ( v35 < *((_DWORD *)this + 12) );
      }
      ++v18;
      v20 += 64;
      v21 += 40LL;
      v19 += 5LL;
    }
    while ( v18 < *((_DWORD *)this + 3) );
    a4 = (struct CVertexXYAAColorDUV2 *)v99;
    v8 = a6;
    v9 = *((_DWORD *)this + 3);
    v94[0] = v9;
  }
  if ( (*((_BYTE *)this + 192) & 0x40) != 0 )
  {
    Mesh::GenerateAntialiasBorder(this, a3, a4, (__int64)a4, v94, v15, v93, (int *)&v98);
    v9 = v94[0];
    v11 = v98;
  }
  v39 = DOUBLE_0_0;
  v40 = 0;
  v41 = FLOAT_1_0;
  v42 = (float *)((char *)this + 92);
  v43 = -32 - v99;
  v44 = (__int64 *)(v99 + 48);
  v45 = -v99;
  do
  {
    if ( *((_DWORD *)v42 + 3) )
    {
      v50 = *(v42 - 1) != 0.0 || *v42 != 0.0 || v42[1] != v41 || v42[2] != v41;
      if ( v9 > 0 )
      {
        v51 = (unsigned int)v9;
        v52 = v44;
        v53 = (unsigned __int64 *)v44;
        do
        {
          v54 = *(v42 - 7);
          v55 = *(v42 - 10);
          v56 = *(v42 - 6);
          v57 = *(v42 - 9);
          v58 = *(v42 - 5);
          v59 = *(v42 - 8);
          v60 = *(v42 - 2);
          v61 = *(v42 - 4);
          v62 = *(v42 - 3);
          v95 = *(__int64 *)((char *)v52 + v43 - v45);
          v63 = _xmm;
          v64 = (float)((float)(v55 * *(float *)&v95) + (float)(v54 * *((float *)&v95 + 1))) + v61;
          v65 = (float)((float)(v57 * *(float *)&v95) + (float)(v56 * *((float *)&v95 + 1))) + v62;
          v66 = (float)((float)(v59 * *(float *)&v95) + (float)(v58 * *((float *)&v95 + 1))) + v60;
          v67 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v66) & _xmm);
          if ( v67 >= 0.00012207031 )
          {
            v68 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v66 - 1.0)) & _xmm);
            v69 = v68 >= 0.00012207031;
            v63 = _xmm;
            if ( v69 )
            {
              v64 = v64 / v66;
              v65 = v65 / v66;
            }
          }
          v95 = *v52;
          v70 = (float)((float)(v59 * *(float *)&v95) + (float)(v58 * *((float *)&v95 + 1))) + v60;
          v98 = __PAIR64__(LODWORD(v65), LODWORD(v64));
          v71 = (float)((float)(v55 * *(float *)&v95) + (float)(v54 * *((float *)&v95 + 1))) + v61;
          v72 = (float)((float)(v57 * *(float *)&v95) + (float)(v56 * *((float *)&v95 + 1))) + v62;
          v73 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v70) & v63);
          if ( v73 >= 0.00012207031 )
          {
            v74 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v70 - 1.0)) & v63);
            if ( v74 >= 0.00012207031 )
            {
              v71 = v71 / v70;
              v72 = v72 / v70;
            }
          }
          v96 = __PAIR64__(LODWORD(v72), LODWORD(v71));
          if ( v50 )
          {
            v75 = v42[1];
            if ( v64 > v75 )
              v76 = v42[1];
            else
              v76 = fmaxf(v64, *(v42 - 1));
            v77 = v42[2];
            *(float *)&v98 = v76;
            if ( v65 > v77 )
              v78 = v77;
            else
              v78 = fmaxf(v65, *v42);
            *((float *)&v98 + 1) = v78;
            if ( v71 <= v75 )
              v75 = fmaxf(v71, *(v42 - 1));
            *(float *)&v96 = v75;
            if ( v72 <= v77 )
              v77 = fmaxf(v72, *v42);
            *((float *)&v96 + 1) = v77;
          }
          v52 += 8;
          v79 = v96;
          *(v53 - 4) = v98;
          *v53 = v79;
          v53 += 8;
          --v51;
        }
        while ( v51 );
        v39 = DOUBLE_0_0;
        v41 = FLOAT_1_0;
      }
    }
    else if ( v9 > 0 )
    {
      v46 = (double *)v44;
      v47 = (unsigned int)v9;
      do
      {
        *(v46 - 4) = v39;
        *v46 = v39;
        v46 += 8;
        --v47;
      }
      while ( v47 );
    }
    ++v40;
    ++v44;
    v42 += 14;
  }
  while ( (unsigned __int64)v40 < 2 );
  v48 = a7;
  if ( v8 )
  {
    v80 = 0;
    if ( v11 > 0 )
    {
      if ( (unsigned int)v11 >= 0x10 )
      {
        v81 = _mm_load_si128(&v97);
        do
        {
          *(__m128i *)&v48[v80] = _mm_add_epi16(_mm_loadu_si128((const __m128i *)&v48[v80]), v81);
          v82 = v80 + 8;
          v80 += 16;
          *(__m128i *)&v48[v82] = _mm_add_epi16(_mm_loadu_si128((const __m128i *)&v48[v82]), v81);
        }
        while ( v80 < v11 - (v11 & 0xF) );
      }
      if ( v80 < v11 )
      {
        v83 = &v48[v80];
        v84 = (unsigned int)(v11 - v80);
        do
        {
          *v83++ += v8;
          --v84;
        }
        while ( v84 );
      }
    }
  }
  result = 0LL;
  *a5 = v9;
  *a8 = v11;
  return result;
}
