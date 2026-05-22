/*
 * XREFs of ?UpdateGazeSensorData@MPCHolographicInputManager@@AEAAXPEAUInputInfo@@@Z @ 0x18004BCB0
 * Callers:
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAUIInputDisplay@@PEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIInputTarget@@@Z @ 0x18004B610 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAUIInputDisplay@@PEAUInputInfo@@PEAUIMPCInput.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000326C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z @ 0x18003CCD4 (-invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z.c)
 */

void __fastcall MPCHolographicInputManager::UpdateGazeSensorData(
        MPCHolographicInputManager *this,
        struct InputInfo *a2,
        struct Windows::Foundation::Numerics::float4x4 *a3)
{
  __int64 v3; // rcx
  const char *v4; // r9
  __m128 v5; // xmm5
  __m128 v6; // xmm2
  float v7; // xmm6_4
  __m128 v8; // xmm5
  __m128 v9; // xmm2
  float v10; // xmm1_4
  float v11; // [rsp+28h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]

  if ( *((_DWORD *)a2 + 176) == 8 )
  {
    *(_OWORD *)this = *((_OWORD *)a2 + 81);
    *((_OWORD *)this + 1) = *((_OWORD *)a2 + 82);
    *((_OWORD *)this + 2) = *((_OWORD *)a2 + 83);
    *((_OWORD *)this + 3) = *((_OWORD *)a2 + 84);
    if ( !Windows::Foundation::Numerics::invert(this, (MPCHolographicInputManager *)((char *)this + 64), a3) )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x1A2,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
        v4);
      JUMPOUT(0x18004BE8CLL);
    }
    *(_QWORD *)(v3 + 128) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    *(_DWORD *)(v3 + 136) = 0;
    *(_QWORD *)(v3 + 140) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    *(float *)(v3 + 148) = FLOAT_N1_0;
    v5 = (__m128)*(unsigned int *)(v3 + 128);
    v6 = v5;
    v5.m128_f32[0] = (float)((float)((float)(v5.m128_f32[0] * *(float *)v3)
                                   + (float)(*(float *)(v3 + 132) * *(float *)(v3 + 16)))
                           + (float)(*(float *)(v3 + 136) * *(float *)(v3 + 32)))
                   + *(float *)(v3 + 48);
    v6.m128_f32[0] = (float)((float)((float)(v6.m128_f32[0] * *(float *)(v3 + 4))
                                   + (float)(*(float *)(v3 + 132) * *(float *)(v3 + 20)))
                           + (float)(*(float *)(v3 + 136) * *(float *)(v3 + 36)))
                   + *(float *)(v3 + 52);
    v7 = (float)((float)((float)(*(float *)(v3 + 132) * *(float *)(v3 + 24))
                       + (float)(*(float *)(v3 + 128) * *(float *)(v3 + 8)))
               + (float)(*(float *)(v3 + 136) * *(float *)(v3 + 40)))
       + *(float *)(v3 + 56);
    *(_QWORD *)(v3 + 152) = _mm_unpacklo_ps(v5, v6).m128_u64[0];
    *(float *)(v3 + 160) = v7;
    v8 = (__m128)*(unsigned int *)(v3 + 140);
    v9 = v8;
    v8.m128_f32[0] = (float)((float)(v8.m128_f32[0] * *(float *)v3) + (float)(*(float *)(v3 + 144) * *(float *)(v3 + 16)))
                   + (float)(*(float *)(v3 + 148) * *(float *)(v3 + 32));
    v10 = *(float *)(v3 + 148);
    v9.m128_f32[0] = (float)((float)(v9.m128_f32[0] * *(float *)(v3 + 4))
                           + (float)(*(float *)(v3 + 144) * *(float *)(v3 + 20)))
                   + (float)(v10 * *(float *)(v3 + 36));
    v11 = (float)((float)(*(float *)(v3 + 144) * *(float *)(v3 + 24))
                + (float)(*(float *)(v3 + 140) * *(float *)(v3 + 8)))
        + (float)(v10 * *(float *)(v3 + 40));
    *(_QWORD *)(v3 + 164) = _mm_unpacklo_ps(v8, v9).m128_u64[0];
    *(float *)(v3 + 172) = v11;
  }
}
