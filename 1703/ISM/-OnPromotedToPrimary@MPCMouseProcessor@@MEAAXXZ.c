/*
 * XREFs of ?OnPromotedToPrimary@MPCMouseProcessor@@MEAAXXZ @ 0x180042530
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18004AC9C (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 */

void __fastcall MPCMouseProcessor::OnPromotedToPrimary(MPCMouseProcessor *this)
{
  struct MPCHolographicInputManager *Instance; // rax
  struct MPCHolographicInputManager *v3; // rax
  __int64 v4; // rdx
  char *v5; // rcx
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm1
  float v14; // xmm3_4
  __m128 v15; // xmm5
  __m128 v16; // xmm6
  float v17; // xmm4_4
  __m128 v18; // xmm2
  __int128 v19; // xmm0
  char v20; // [rsp+38h] [rbp-D0h] BYREF
  float v21; // [rsp+610h] [rbp+508h]
  float v22; // [rsp+614h] [rbp+50Ch]
  float v23; // [rsp+618h] [rbp+510h]
  float v24; // [rsp+620h] [rbp+518h]
  float v25; // [rsp+624h] [rbp+51Ch]
  float v26; // [rsp+628h] [rbp+520h]
  float v27; // [rsp+630h] [rbp+528h]
  float v28; // [rsp+634h] [rbp+52Ch]
  float v29; // [rsp+638h] [rbp+530h]
  float v30; // [rsp+640h] [rbp+538h]
  float v31; // [rsp+644h] [rbp+53Ch]
  float v32; // [rsp+648h] [rbp+540h]

  Instance = MPCHolographicInputManager::GetInstance();
  *((_QWORD *)this + 35) = *((_QWORD *)Instance + 22);
  *((_DWORD *)this + 72) = *((_DWORD *)Instance + 46);
  v3 = MPCHolographicInputManager::GetInstance();
  v4 = 16LL;
  v5 = &v20;
  do
  {
    v6 = *((_OWORD *)v3 + 1);
    *(_OWORD *)v5 = *(_OWORD *)v3;
    v7 = *((_OWORD *)v3 + 2);
    *((_OWORD *)v5 + 1) = v6;
    v8 = *((_OWORD *)v3 + 3);
    *((_OWORD *)v5 + 2) = v7;
    v9 = *((_OWORD *)v3 + 4);
    *((_OWORD *)v5 + 3) = v8;
    v10 = *((_OWORD *)v3 + 5);
    *((_OWORD *)v5 + 4) = v9;
    v11 = *((_OWORD *)v3 + 6);
    *((_OWORD *)v5 + 5) = v10;
    v12 = *((_OWORD *)v3 + 7);
    v3 = (struct MPCHolographicInputManager *)((char *)v3 + 128);
    *((_OWORD *)v5 + 6) = v11;
    v5 += 128;
    *((_OWORD *)v5 - 1) = v12;
    --v4;
  }
  while ( v4 );
  v13 = *((_OWORD *)v3 + 1);
  v14 = *((float *)this + 71);
  v15 = (__m128)*((unsigned int *)this + 70);
  v16 = (__m128)LODWORD(v14);
  v17 = *((float *)this + 72);
  v18 = v15;
  *(_OWORD *)v5 = *(_OWORD *)v3;
  v19 = *((_OWORD *)v3 + 2);
  *((_OWORD *)v5 + 1) = v13;
  *((_OWORD *)v5 + 2) = v19;
  v16.m128_f32[0] = (float)((float)((float)(v14 * v24) + (float)(v15.m128_f32[0] * v21)) + (float)(v17 * v27)) + v30;
  v18.m128_f32[0] = (float)((float)((float)(v15.m128_f32[0] * v22) + (float)(v14 * v25)) + (float)(v17 * v28)) + v31;
  v15.m128_f32[0] = (float)((float)((float)(v15.m128_f32[0] * v23) + (float)(v14 * v26)) + (float)(v17 * v29)) + v32;
  *(_QWORD *)((char *)this + 292) = _mm_unpacklo_ps(v16, v18).m128_u64[0];
  *((_DWORD *)this + 75) = v15.m128_i32[0];
  *((_QWORD *)this + 38) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  *((_DWORD *)this + 78) = 0;
}
