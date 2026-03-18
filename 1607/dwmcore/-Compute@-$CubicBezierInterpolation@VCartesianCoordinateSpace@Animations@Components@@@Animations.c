/*
 * XREFs of ?Compute@?$CubicBezierInterpolation@VCartesianCoordinateSpace@Animations@Components@@@Animations@Components@@UEAAXMW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x180031C50
 * Callers:
 *     ?Calculate@Sequence@Animations@Components@@QEAAXXZ @ 0x180085810 (-Calculate@Sequence@Animations@Components@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 */

__int64 __fastcall Components::Animations::CubicBezierInterpolation<Components::Animations::CartesianCoordinateSpace>::Compute(
        float *a1,
        float a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _OWORD *a6)
{
  int v6; // r10d
  float v7; // xmm10_4
  double v9; // xmm7_8
  int v10; // edx
  int v11; // r9d
  double v12; // xmm14_8
  double v13; // xmm0_8
  unsigned int v14; // ecx
  double v15; // xmm10_8
  __int128 v16; // xmm11
  __int128 v17; // xmm6
  unsigned int v18; // eax
  double v19; // xmm4_8
  double v20; // xmm5_8
  double i; // xmm0_8
  double v22; // xmm1_8
  unsigned int v23; // eax
  double v24; // xmm3_8
  double v25; // xmm1_8
  unsigned int v26; // eax
  double v27; // xmm0_8
  unsigned int v28; // eax
  double v29; // xmm1_8
  double v30; // xmm2_8
  double v31; // xmm3_8
  double v32; // xmm2_8
  double v33; // xmm0_8
  unsigned int v34; // eax
  double v35; // xmm1_8
  double v36; // xmm4_8
  __int128 v37; // xmm0
  double v38; // xmm2_8
  double v39; // xmm1_8
  unsigned int v40; // eax
  double v41; // xmm3_8
  double j; // xmm0_8
  double v43; // xmm1_8
  unsigned int v44; // eax
  double v45; // xmm4_8
  double k; // xmm0_8
  int v47; // ecx
  __int64 v48; // rax
  int v49; // r8d
  __m128 v50; // xmm2
  __m128 v51; // xmm4
  __m128d v52; // xmm1
  __int64 v53; // rax
  int v54; // ecx
  __int64 v55; // rax
  int v56; // edx
  __m128d v57; // xmm1
  __int64 v58; // rax
  __int64 result; // rax
  __int64 v60; // rax
  __int128 v61; // xmm1
  double v62; // [rsp+8h] [rbp-100h]
  _BYTE v63[40]; // [rsp+10h] [rbp-F8h] BYREF
  _QWORD v64[4]; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v65; // [rsp+58h] [rbp-B0h]
  __int128 v66; // [rsp+68h] [rbp-A0h]

  v6 = 0;
  v16 = 0LL;
  v7 = a1[4];
  v9 = DOUBLE_1_0;
  v10 = 0;
  v11 = 2;
  v12 = a1[6];
  v62 = a1[5];
  v13 = a1[7];
  v14 = 3;
  v15 = v7;
  *(double *)&v16 = a2;
  *(double *)v63 = v13;
  v17 = v16;
  do
  {
    v18 = 2;
    v19 = 1.0 - *(double *)&v17;
    v20 = DOUBLE_1_0;
    for ( i = 1.0 - *(double *)&v17; ; i = i * i )
    {
      if ( (v18 & 1) != 0 )
        v20 = v20 * i;
      v18 >>= 1;
      if ( !v18 )
        break;
    }
    v22 = *(double *)&v17;
    v23 = 2;
    v24 = DOUBLE_1_0;
    while ( 1 )
    {
      if ( (v23 & 1) != 0 )
        v24 = v24 * v22;
      v23 >>= 1;
      if ( !v23 )
        break;
      v22 = v22 * v22;
    }
    v25 = *(double *)&v17;
    v26 = 3;
    v27 = DOUBLE_1_0;
    while ( 1 )
    {
      if ( (v26 & 1) != 0 )
        v27 = v27 * v25;
      v26 >>= 1;
      if ( !v26 )
        break;
      v25 = v25 * v25;
    }
    v28 = 2;
    v29 = 1.0 - *(double *)&v17;
    v30 = v19 * 3.0 * v24;
    v31 = DOUBLE_1_0;
    v32 = v30 * v12 + v20 * 3.0 * *(double *)&v17 * v15 + v27;
    while ( 1 )
    {
      if ( (v28 & 1) != 0 )
        v31 = v31 * v29;
      v28 >>= 1;
      if ( !v28 )
        break;
      v29 = v29 * v29;
    }
    v33 = *(double *)&v17;
    v34 = 2;
    v35 = DOUBLE_1_0;
    while ( 1 )
    {
      if ( (v34 & 1) != 0 )
        v35 = v35 * v33;
      v34 >>= 1;
      if ( !v34 )
        break;
      v33 = v33 * v33;
    }
    v36 = v19 * 6.0 * *(double *)&v17 * (v12 - v15) + v31 * 3.0 * v15 + v35 * 3.0 * (1.0 - v12);
    if ( v36 >= -0.000001 && v36 <= 0.000001 )
      break;
    *((_QWORD *)&v37 + 1) = *((_QWORD *)&v17 + 1);
    v38 = (v32 - *(double *)&v16) / v36;
    *(double *)&v37 = *(double *)&v17 - v38;
    v39 = *(double *)&v17 - (*(double *)&v17 - v38);
    v17 = v37;
    if ( v39 >= -0.000001 && v39 <= 0.000001 )
      break;
    ++v10;
  }
  while ( v10 < 30 );
  v40 = 2;
  v41 = DOUBLE_1_0;
  for ( j = 1.0 - *(double *)&v17; ; j = j * j )
  {
    if ( (v40 & 1) != 0 )
      v41 = v41 * j;
    v40 >>= 1;
    if ( !v40 )
      break;
  }
  v43 = *(double *)&v17;
  v44 = 2;
  v45 = DOUBLE_1_0;
  while ( 1 )
  {
    if ( (v44 & 1) != 0 )
      v45 = v45 * v43;
    v44 >>= 1;
    if ( !v44 )
      break;
    v43 = v43 * v43;
  }
  for ( k = *(double *)&v17; ; k = k * k )
  {
    if ( (v14 & 1) != 0 )
      v9 = v9 * k;
    v14 >>= 1;
    if ( !v14 )
      break;
  }
  v47 = 0;
  v48 = 0LL;
  v49 = 2;
  memset(v64, 0, sizeof(v64));
  v50 = 0LL;
  v50.m128_f32[0] = v41 * 3.0 * *(double *)&v17 * v62 + (1.0 - *(double *)&v17) * 3.0 * v45 * *(double *)v63 + v9;
  v51 = _mm_shuffle_ps(v50, v50, 0);
  v52 = _mm_cvtps_pd(v51);
  do
  {
    v47 += 4;
    *(__m128d *)&v64[v48] = _mm_mul_pd(*(__m128d *)(a5 + 8 * v48), v52);
    v53 = v49;
    v49 += 4;
    *(__m128d *)&v64[v53] = _mm_mul_pd(*(__m128d *)(a5 + 8 * v53), v52);
    v48 = v47;
  }
  while ( (unsigned __int64)v47 < 4 );
  memset(&v63[8], 0, 32);
  v54 = 0;
  v55 = 0LL;
  v56 = 2;
  v57 = _mm_cvtps_pd(_mm_sub_ps((__m128)_xmm, v51));
  do
  {
    v54 += 4;
    *(__m128d *)&v63[8 * v55 + 8] = _mm_mul_pd(*(__m128d *)(a4 + 8 * v55), v57);
    v58 = v56;
    v56 += 4;
    *(__m128d *)&v63[8 * v58 + 8] = _mm_mul_pd(*(__m128d *)(a4 + 8 * v58), v57);
    v55 = v54;
  }
  while ( (unsigned __int64)v54 < 4 );
  v65 = 0LL;
  result = 0LL;
  v66 = 0LL;
  do
  {
    v6 += 4;
    *(__int128 *)((char *)&v65 + 8 * result) = (__int128)_mm_add_pd(
                                                           *(__m128d *)&v63[8 * result + 8],
                                                           *(__m128d *)&v64[result]);
    v60 = v11;
    v11 += 4;
    *(__int128 *)((char *)&v65 + 8 * v60) = (__int128)_mm_add_pd(*(__m128d *)&v63[8 * v60 + 8], *(__m128d *)&v64[v60]);
    result = v6;
  }
  while ( (unsigned __int64)v6 < 4 );
  v61 = v66;
  *a6 = v65;
  a6[1] = v61;
  return result;
}
