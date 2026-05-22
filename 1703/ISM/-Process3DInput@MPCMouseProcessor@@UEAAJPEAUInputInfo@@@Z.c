/*
 * XREFs of ?Process3DInput@MPCMouseProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180041670
 * Callers:
 *     <none>
 * Callees:
 *     ?OrientToGravity@MPCMath@@YA?AUfloat4x4@Numerics@Foundation@Windows@@AEBU2345@M@Z @ 0x18002CD08 (-OrientToGravity@MPCMath@@YA-AUfloat4x4@Numerics@Foundation@Windows@@AEBU2345@M@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18004AC9C (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCMouseProcessor::Process3DInput(MPCMouseProcessor *this, struct InputInfo *a2)
{
  struct MPCHolographicInputManager *Instance; // rax
  __int64 v5; // rdi
  _OWORD *v6; // rcx
  __int64 v7; // rdx
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __m128 v17; // xmm0
  __m128 v18; // xmm2
  __m128 v19; // xmm1
  float v20; // eax
  __m128 v21; // xmm2
  __m128 v22; // xmm2
  __m128 v23; // xmm0
  __m128 v24; // xmm1
  float v25; // eax
  __m128 v26; // xmm2
  __m128 v27; // xmm2
  __m128 v28; // xmm0
  __m128 v29; // xmm1
  __int16 v30; // ax
  struct MPCHolographicInputManager *v31; // rax
  struct MPCHolographicInputManager *v32; // rax
  _OWORD *v33; // rcx
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  __int128 v41; // xmm1
  float v42; // xmm3_4
  __m128 v43; // xmm5
  __m128 v44; // xmm6
  float v45; // xmm4_4
  __m128 v46; // xmm2
  __int128 v47; // xmm0
  float v49[16]; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v50[1496]; // [rsp+78h] [rbp-90h] BYREF
  __int128 v51; // [rsp+650h] [rbp+548h]
  __int128 v52; // [rsp+660h] [rbp+558h]
  __int128 v53; // [rsp+670h] [rbp+568h]
  float v54[138]; // [rsp+680h] [rbp+578h]
  _OWORD v55[4]; // [rsp+8A8h] [rbp+7A0h] BYREF

  Instance = MPCHolographicInputManager::GetInstance();
  v5 = 16LL;
  v6 = v50;
  v7 = 16LL;
  do
  {
    v8 = *((_OWORD *)Instance + 1);
    *v6 = *(_OWORD *)Instance;
    v9 = *((_OWORD *)Instance + 2);
    v6[1] = v8;
    v10 = *((_OWORD *)Instance + 3);
    v6[2] = v9;
    v11 = *((_OWORD *)Instance + 4);
    v6[3] = v10;
    v12 = *((_OWORD *)Instance + 5);
    v6[4] = v11;
    v13 = *((_OWORD *)Instance + 6);
    v6[5] = v12;
    v14 = *((_OWORD *)Instance + 7);
    Instance = (struct MPCHolographicInputManager *)((char *)Instance + 128);
    v6[6] = v13;
    v6 += 8;
    *(v6 - 1) = v14;
    --v7;
  }
  while ( v7 );
  v15 = *((_OWORD *)Instance + 1);
  *v6 = *(_OWORD *)Instance;
  v16 = *((_OWORD *)Instance + 2);
  v6[1] = v15;
  v6[2] = v16;
  v55[0] = v51;
  v55[1] = v52;
  v55[2] = v53;
  v55[3] = *(_OWORD *)v54;
  MPCMath::OrientToGravity((__int64)v49, (__int64)v55, 0.89999998);
  v17 = (__m128)COERCE_UNSIGNED_INT((float)*((int *)this + 62));
  v17.m128_f32[0] = v17.m128_f32[0] * *((float *)this + 57);
  v18 = v17;
  v19 = v17;
  v18.m128_f32[0] = (float)(v17.m128_f32[0] * v49[0]) + *((float *)this + 69);
  v19.m128_f32[0] = (float)(v17.m128_f32[0] * v49[1]) + *((float *)this + 70);
  v20 = (float)(v17.m128_f32[0] * v49[2]) + *((float *)this + 71);
  *(_QWORD *)((char *)this + 276) = _mm_unpacklo_ps(v18, v19).m128_u64[0];
  *((float *)this + 71) = v20;
  v21 = (__m128)COERCE_UNSIGNED_INT((float)*((int *)this + 63));
  v21.m128_f32[0] = v21.m128_f32[0] * *((float *)this + 57);
  v22 = _mm_xor_ps(v21, (__m128)_xmm);
  v23 = v22;
  v24 = v22;
  v23.m128_f32[0] = (float)(v22.m128_f32[0] * v49[4]) + *((float *)this + 69);
  v24.m128_f32[0] = (float)(v22.m128_f32[0] * v49[5]) + *((float *)this + 70);
  v25 = (float)(v22.m128_f32[0] * v49[6]) + *((float *)this + 71);
  *(_QWORD *)((char *)this + 276) = _mm_unpacklo_ps(v23, v24).m128_u64[0];
  *((float *)this + 71) = v25;
  v26 = (__m128)COERCE_UNSIGNED_INT((float)*((int *)this + 64));
  v26.m128_f32[0] = v26.m128_f32[0] * *((float *)this + 58);
  v27 = _mm_xor_ps(v26, (__m128)_xmm);
  v28 = v27;
  v29 = v27;
  v28.m128_f32[0] = (float)(v27.m128_f32[0] * v49[8]) + *((float *)this + 69);
  v29.m128_f32[0] = (float)(v27.m128_f32[0] * v49[9]) + *((float *)this + 70);
  v27.m128_f32[0] = (float)(v27.m128_f32[0] * v49[10]) + *((float *)this + 71);
  *(_QWORD *)((char *)this + 276) = _mm_unpacklo_ps(v28, v29).m128_u64[0];
  *((_DWORD *)this + 71) = v27.m128_i32[0];
  v27.m128_i32[0] = *((_DWORD *)this + 57);
  v29.m128_f32[0] = (float)*((int *)this + 63);
  *((float *)this + 72) = (float)((float)*((int *)this + 62) * v27.m128_f32[0]) + *((float *)this + 72);
  *((float *)this + 73) = *((float *)this + 73) - (float)(v29.m128_f32[0] * v27.m128_f32[0]);
  *((float *)this + 74) = (float)((float)*((int *)this + 64) * *((float *)this + 58)) + *((float *)this + 74);
  v30 = *((_WORD *)a2 + 354);
  if ( (v30 & 1) != 0 )
    *((_DWORD *)this + 75) |= 1u;
  if ( (v30 & 2) != 0 )
    *((_DWORD *)this + 75) &= ~1u;
  if ( (v30 & 4) != 0 )
    *((_DWORD *)this + 75) |= 2u;
  if ( (v30 & 8) != 0 )
    *((_DWORD *)this + 75) &= ~2u;
  if ( (v30 & 0x10) != 0 )
    *((_DWORD *)this + 75) |= 4u;
  if ( (v30 & 0x20) != 0 )
    *((_DWORD *)this + 75) &= ~4u;
  if ( (*((_BYTE *)a2 + 708) & 0x15) != 0 )
  {
    v31 = MPCHolographicInputManager::GetInstance();
    *((_QWORD *)this + 33) = *((_QWORD *)v31 + 22);
    *((_DWORD *)this + 68) = *((_DWORD *)v31 + 46);
    v32 = MPCHolographicInputManager::GetInstance();
    v33 = v50;
    do
    {
      v34 = *((_OWORD *)v32 + 1);
      *v33 = *(_OWORD *)v32;
      v35 = *((_OWORD *)v32 + 2);
      v33[1] = v34;
      v36 = *((_OWORD *)v32 + 3);
      v33[2] = v35;
      v37 = *((_OWORD *)v32 + 4);
      v33[3] = v36;
      v38 = *((_OWORD *)v32 + 5);
      v33[4] = v37;
      v39 = *((_OWORD *)v32 + 6);
      v33[5] = v38;
      v40 = *((_OWORD *)v32 + 7);
      v32 = (struct MPCHolographicInputManager *)((char *)v32 + 128);
      v33[6] = v39;
      v33 += 8;
      *(v33 - 1) = v40;
      --v5;
    }
    while ( v5 );
    v41 = *((_OWORD *)v32 + 1);
    v42 = *((float *)this + 67);
    v43 = (__m128)*((unsigned int *)this + 66);
    v44 = (__m128)LODWORD(v42);
    v45 = *((float *)this + 68);
    v46 = v43;
    *v33 = *(_OWORD *)v32;
    v47 = *((_OWORD *)v32 + 2);
    v33[1] = v41;
    v33[2] = v47;
    v44.m128_f32[0] = (float)((float)((float)(v42 * *(float *)&v52) + (float)(v43.m128_f32[0] * *(float *)&v51))
                            + (float)(v45 * *(float *)&v53))
                    + v54[0];
    v46.m128_f32[0] = (float)((float)((float)(v43.m128_f32[0] * *((float *)&v51 + 1))
                                    + (float)(v42 * *((float *)&v52 + 1)))
                            + (float)(v45 * *((float *)&v53 + 1)))
                    + v54[1];
    v43.m128_f32[0] = (float)((float)((float)(v43.m128_f32[0] * *((float *)&v51 + 2))
                                    + (float)(v42 * *((float *)&v52 + 2)))
                            + (float)(v45 * *((float *)&v53 + 2)))
                    + v54[2];
    *(_QWORD *)((char *)this + 276) = _mm_unpacklo_ps(v44, v46).m128_u64[0];
    *((_DWORD *)this + 71) = v43.m128_i32[0];
    *((_QWORD *)this + 36) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    *((_DWORD *)this + 74) = 0;
  }
  return (*(__int64 (__fastcall **)(_QWORD, struct InputInfo *))(**((_QWORD **)this + 21) + 48LL))(
           *((_QWORD *)this + 21),
           a2);
}
