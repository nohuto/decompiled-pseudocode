/*
 * XREFs of ?Compute@?$LinearInterpolation@VCartesianCoordinateSpace@Animations@Components@@@Animations@Components@@UEAAXMW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x1800836F0
 * Callers:
 *     ?Calculate@Sequence@Animations@Components@@QEAAXXZ @ 0x180085810 (-Calculate@Sequence@Animations@Components@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall Components::Animations::LinearInterpolation<Components::Animations::CartesianCoordinateSpace>::Compute(
        __int64 a1,
        double a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _OWORD *a6)
{
  int v6; // ecx
  __m128 v7; // xmm2
  int v8; // edx
  __int64 v9; // rax
  int v10; // edx
  __int64 v11; // rax
  __m128d v12; // xmm1
  __int64 result; // rax
  __int128 v14; // xmm1
  __int128 v15; // [rsp+0h] [rbp-70h]
  __int64 v16; // [rsp+10h] [rbp-60h]
  __int64 v17; // [rsp+18h] [rbp-58h]
  __int128 v18; // [rsp+20h] [rbp-50h]
  __int64 v19; // [rsp+30h] [rbp-40h]
  __int64 v20; // [rsp+38h] [rbp-38h]
  __int128 v21; // [rsp+40h] [rbp-30h]
  __int128 v22; // [rsp+50h] [rbp-20h]

  v6 = 0;
  v18 = 0uLL;
  v7 = _mm_shuffle_ps(*(__m128 *)&a2, *(__m128 *)&a2, 0);
  v8 = 0;
  v19 = 0LL;
  v9 = 0LL;
  v20 = 0LL;
  do
  {
    v8 += 2;
    *(__int128 *)((char *)&v18 + 8 * v9) = (__int128)_mm_mul_pd(*(__m128d *)(a5 + 8 * v9), _mm_cvtps_pd(v7));
    v9 = v8;
  }
  while ( (unsigned __int64)v8 < 4 );
  v10 = 0;
  v15 = 0uLL;
  v11 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v12 = _mm_cvtps_pd(_mm_sub_ps((__m128)_xmm, v7));
  do
  {
    v10 += 2;
    *(__int128 *)((char *)&v15 + 8 * v11) = (__int128)_mm_mul_pd(*(__m128d *)(a4 + 8 * v11), v12);
    v11 = v10;
  }
  while ( (unsigned __int64)v10 < 4 );
  v21 = 0uLL;
  result = 0LL;
  v22 = 0uLL;
  do
  {
    v6 += 2;
    *(__int128 *)((char *)&v21 + 8 * result) = (__int128)_mm_add_pd(
                                                           *(__m128d *)((char *)&v15 + 8 * result),
                                                           *(__m128d *)((char *)&v18 + 8 * result));
    result = v6;
  }
  while ( (unsigned __int64)v6 < 4 );
  v14 = v22;
  *a6 = v21;
  a6[1] = v14;
  return result;
}
