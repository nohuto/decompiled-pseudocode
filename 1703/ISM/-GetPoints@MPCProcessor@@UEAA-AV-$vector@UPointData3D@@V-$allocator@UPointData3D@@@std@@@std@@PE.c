/*
 * XREFs of ?GetPoints@MPCProcessor@@UEAA?AV?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@PEAUMPCHolographicInputContext@@@Z @ 0x180047FC0
 * Callers:
 *     <none>
 * Callees:
 *     ??$emplace_back@AEBUPointData3D@@@?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@QEAAXAEBUPointData3D@@@Z @ 0x18002F094 (--$emplace_back@AEBUPointData3D@@@-$vector@UPointData3D@@V-$allocator@UPointData3D@@@std@@@std@@.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall MPCProcessor::GetPoints(__int64 a1, _QWORD *a2, float *a3)
{
  __int64 *v5; // rdi
  __int64 *v6; // rbx
  __m128 v7; // xmm5
  __m128 v8; // xmm6
  __m128 v9; // xmm7
  __m128 v10; // xmm8
  float v11; // xmm11_4
  __m128 v12; // xmm9
  float v13; // xmm10_4
  __m128 v14; // xmm3
  __m128 v15; // xmm2
  __int64 *v16; // rax
  __int64 *i; // rax
  __int64 v19; // [rsp+30h] [rbp-D8h]
  float v20; // [rsp+38h] [rbp-D0h]
  __int128 v21; // [rsp+48h] [rbp-C0h] BYREF
  int v22; // [rsp+58h] [rbp-B0h]
  BOOL v23; // [rsp+5Ch] [rbp-ACh]
  __int64 v24; // [rsp+60h] [rbp-A8h]
  __int64 v25; // [rsp+68h] [rbp-A0h]
  __int64 v26; // [rsp+70h] [rbp-98h]
  int v27; // [rsp+78h] [rbp-90h]
  __int64 v28; // [rsp+7Ch] [rbp-8Ch]
  __int64 v29; // [rsp+84h] [rbp-84h]
  __int64 v30; // [rsp+8Ch] [rbp-7Ch]
  __int16 v31; // [rsp+94h] [rbp-74h]
  char v32; // [rsp+96h] [rbp-72h]
  float v33; // [rsp+A0h] [rbp-68h]
  __int64 v34; // [rsp+A8h] [rbp-60h]

  v34 = -2LL;
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  v5 = *(__int64 **)(a1 + 152);
  v6 = (__int64 *)*v5;
  while ( v6 != v5 )
  {
    v19 = v6[168];
    v20 = *((float *)v6 + 338);
    v7 = *(__m128 *)(v6 + 231);
    v8 = *(__m128 *)(v6 + 233);
    v9 = *(__m128 *)(v6 + 235);
    v10 = *(__m128 *)(v6 + 237);
    v11 = (float)((float)((float)(*(float *)&v19 * v7.m128_f32[0]) + (float)(*((float *)&v19 + 1) * v8.m128_f32[0]))
                + (float)(v20 * v9.m128_f32[0]))
        + v10.m128_f32[0];
    v12 = (__m128)(unsigned int)v19;
    v12.m128_f32[0] = (float)((float)((float)(*(float *)&v19 * _mm_shuffle_ps(v7, v7, 85).m128_f32[0])
                                    + (float)(*((float *)&v19 + 1) * _mm_shuffle_ps(v8, v8, 85).m128_f32[0]))
                            + (float)(v20 * _mm_shuffle_ps(v9, v9, 85).m128_f32[0]))
                    + _mm_shuffle_ps(v10, v10, 85).m128_f32[0];
    v13 = (float)((float)((float)(*(float *)&v19 * _mm_shuffle_ps(v7, v7, 170).m128_f32[0])
                        + (float)(*((float *)&v19 + 1) * _mm_shuffle_ps(v8, v8, 170).m128_f32[0]))
                + (float)(v20 * _mm_shuffle_ps(v9, v9, 170).m128_f32[0]))
        + _mm_shuffle_ps(v10, v10, 170).m128_f32[0];
    v14 = v12;
    v14.m128_f32[0] = (float)((float)((float)(v12.m128_f32[0] * a3[4]) + (float)(v11 * *a3)) + (float)(v13 * a3[8]))
                    + a3[12];
    v15 = v12;
    v15.m128_f32[0] = (float)((float)((float)(v12.m128_f32[0] * a3[5]) + (float)(v11 * a3[1])) + (float)(v13 * a3[9]))
                    + a3[13];
    v33 = (float)((float)((float)(v11 * a3[2]) + (float)(v12.m128_f32[0] * a3[6])) + (float)(v13 * a3[10])) + a3[14];
    HIDWORD(v21) = *((_DWORD *)v6 + 335);
    v22 = 6;
    *(_QWORD *)&v21 = _mm_unpacklo_ps(v14, v15).m128_u64[0];
    *((float *)&v21 + 2) = v33;
    v23 = *((_BYTE *)v6 + 1928) != 0;
    v31 = 0;
    v24 = 0LL;
    v25 = 0x3F80000000000000LL;
    v26 = 0LL;
    v27 = 0;
    v32 = 0;
    v28 = 0LL;
    v29 = 0LL;
    v30 = 0LL;
    std::vector<PointData3D>::emplace_back<PointData3D const &>((__int64)a2, &v21);
    if ( !*((_BYTE *)v6 + 25) )
    {
      v16 = (__int64 *)v6[2];
      if ( *((_BYTE *)v16 + 25) )
      {
        for ( i = (__int64 *)v6[1]; !*((_BYTE *)i + 25) && v6 == (__int64 *)i[2]; i = (__int64 *)i[1] )
          v6 = i;
        v6 = i;
      }
      else
      {
        do
        {
          v6 = v16;
          v16 = (__int64 *)*v16;
        }
        while ( !*((_BYTE *)v16 + 25) );
      }
    }
  }
  return a2;
}
