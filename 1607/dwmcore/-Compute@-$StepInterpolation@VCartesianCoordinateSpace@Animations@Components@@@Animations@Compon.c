/*
 * XREFs of ?Compute@?$StepInterpolation@VCartesianCoordinateSpace@Animations@Components@@@Animations@Components@@UEAAXMW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x180005A30
 * Callers:
 *     ?Calculate@Sequence@Animations@Components@@QEAAXXZ @ 0x180085810 (-Calculate@Sequence@Animations@Components@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     floorf_0 @ 0x1800BF60E (floorf_0.c)
 */

__int64 __fastcall Components::Animations::StepInterpolation<Components::Animations::CartesianCoordinateSpace>::Compute(
        __int64 a1,
        float a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _OWORD *a6)
{
  int v8; // ecx
  int v9; // edx
  int v10; // ecx
  int v11; // r10d
  __int64 v12; // rax
  __m128d v13; // xmm1
  int v14; // edx
  int v15; // r8d
  __m128 v16; // xmm4
  __m128 v17; // xmm3
  __m128d v18; // xmm1
  __int64 v19; // rax
  int v20; // edx
  __int64 v21; // rax
  int v22; // r8d
  __m128d v23; // xmm1
  __int64 v24; // rax
  __int64 result; // rax
  __int64 v26; // rax
  __int128 v27; // xmm1
  _OWORD v28[2]; // [rsp+28h] [rbp-39h] BYREF
  _OWORD v29[2]; // [rsp+48h] [rbp-19h] BYREF
  __int128 v30; // [rsp+68h] [rbp+7h]
  __int128 v31; // [rsp+78h] [rbp+17h]

  v8 = (int)floorf_0(a2 / *(float *)(a1 + 36));
  if ( a2 == 1.0 )
    --v8;
  v9 = v8 + *(_DWORD *)(a1 + 20);
  if ( a2 == 0.0 && *(_DWORD *)(a1 + 28) )
  {
    --v9;
  }
  else if ( a2 == 1.0 && *(_DWORD *)(a1 + 32) )
  {
    ++v9;
  }
  v10 = 0;
  v11 = 2;
  v12 = 0LL;
  v13 = (__m128d)COERCE_UNSIGNED_INT64((double)v9);
  v14 = 0;
  v15 = 2;
  v13.m128d_f64[0] = v13.m128d_f64[0] / (double)*(int *)(a1 + 16);
  v16 = _mm_cvtpd_ps(v13);
  v17 = _mm_shuffle_ps(v16, v16, 0);
  v18 = _mm_cvtps_pd(v17);
  memset(v29, 0, sizeof(v29));
  do
  {
    v14 += 4;
    *(__m128d *)((char *)v29 + 8 * v12) = _mm_mul_pd(*(__m128d *)(a5 + 8 * v12), v18);
    v19 = v15;
    v15 += 4;
    *(__m128d *)((char *)v29 + 8 * v19) = _mm_mul_pd(*(__m128d *)(a5 + 8 * v19), v18);
    v12 = v14;
  }
  while ( (unsigned __int64)v14 < 4 );
  memset(v28, 0, sizeof(v28));
  v20 = 0;
  v21 = 0LL;
  v22 = 2;
  v23 = _mm_cvtps_pd(_mm_sub_ps((__m128)_xmm, v17));
  do
  {
    v20 += 4;
    *(__m128d *)((char *)v28 + 8 * v21) = _mm_mul_pd(*(__m128d *)(a4 + 8 * v21), v23);
    v24 = v22;
    v22 += 4;
    *(__m128d *)((char *)v28 + 8 * v24) = _mm_mul_pd(*(__m128d *)(a4 + 8 * v24), v23);
    v21 = v20;
  }
  while ( (unsigned __int64)v20 < 4 );
  v30 = 0LL;
  result = 0LL;
  v31 = 0LL;
  do
  {
    v10 += 4;
    *(__int128 *)((char *)&v30 + 8 * result) = (__int128)_mm_add_pd(
                                                           *(__m128d *)((char *)v28 + 8 * result),
                                                           *(__m128d *)((char *)v29 + 8 * result));
    v26 = v11;
    v11 += 4;
    *(__int128 *)((char *)&v30 + 8 * v26) = (__int128)_mm_add_pd(
                                                        *(__m128d *)((char *)v28 + 8 * v26),
                                                        *(__m128d *)((char *)v29 + 8 * v26));
    result = v10;
  }
  while ( (unsigned __int64)v10 < 4 );
  v27 = v31;
  *a6 = v30;
  a6[1] = v27;
  return result;
}
