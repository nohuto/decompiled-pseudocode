/*
 * XREFs of ?ProcessPoints@MPCClickerProcessor@@IEAAXPEAUInputInfo@@@Z @ 0x1800498A0
 * Callers:
 *     ?hydroOnInputReport@MPCClickerProcessor@@AEAAJPEAUInputInfo@@@Z @ 0x180049670 (-hydroOnInputReport@MPCClickerProcessor@@AEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18004AC9C (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 */

void __fastcall MPCClickerProcessor::ProcessPoints(MPCClickerProcessor *this, struct InputInfo *a2)
{
  bool v2; // zf
  float v5; // xmm6_4
  float v6; // xmm7_4
  float v7; // xmm0_4
  float v8; // xmm1_4
  float v9; // xmm2_4
  float v10; // xmm0_4
  float v11; // xmm0_4
  struct MPCHolographicInputManager *Instance; // rax
  __int64 v13; // rsi
  _OWORD *v14; // rcx
  __int64 v15; // rdx
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  float v23; // xmm4_4
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  float v26; // xmm1_4
  float v27; // xmm0_4
  __m128 v28; // xmm3
  float v29; // xmm0_4
  __m128 v30; // xmm2
  float v31; // eax
  float v32; // xmm1_4
  __m128 v33; // xmm0
  __m128 v34; // xmm3
  __m128 v35; // xmm2
  float v36; // eax
  float v37; // xmm1_4
  __m128 v38; // xmm0
  __m128 v39; // xmm3
  __m128 v40; // xmm2
  float v41; // eax
  float v42; // xmm1_4
  float v43; // xmm4_4
  float v44; // xmm1_4
  char v45; // cl
  struct MPCHolographicInputManager *v46; // rax
  struct MPCHolographicInputManager *v47; // rax
  _OWORD *v48; // rcx
  __int128 v49; // xmm1
  __int128 v50; // xmm0
  __int128 v51; // xmm1
  __int128 v52; // xmm0
  __int128 v53; // xmm1
  __int128 v54; // xmm0
  __int128 v55; // xmm1
  __int128 v56; // xmm1
  __int128 v57; // xmm0
  __m128 v58; // xmm7
  __m128 v59; // xmm5
  float v60; // xmm2_4
  __int64 v61; // [rsp+28h] [rbp-E0h]
  float v62; // [rsp+30h] [rbp-D8h]
  _BYTE v63[1496]; // [rsp+38h] [rbp-D0h] BYREF
  float v64; // [rsp+610h] [rbp+508h]
  float v65; // [rsp+614h] [rbp+50Ch]
  float v66; // [rsp+618h] [rbp+510h]
  float v67; // [rsp+620h] [rbp+518h]
  float v68; // [rsp+624h] [rbp+51Ch]
  float v69; // [rsp+628h] [rbp+520h]
  float v70; // [rsp+630h] [rbp+528h]
  float v71; // [rsp+634h] [rbp+52Ch]
  float v72; // [rsp+638h] [rbp+530h]
  float v73; // [rsp+640h] [rbp+538h]
  float v74; // [rsp+644h] [rbp+53Ch]
  float v75; // [rsp+648h] [rbp+540h]

  v2 = *((_BYTE *)this + 2108) == 0;
  v5 = 0.0;
  v6 = 0.0;
  v7 = (float)(*((float *)a2 + 325) + *((float *)this + 522)) * 0.5;
  v8 = (float)(*((float *)a2 + 326) + *((float *)this + 523)) * 0.5;
  *((float *)this + 522) = v7;
  *((float *)this + 523) = v8;
  if ( !v2 )
  {
    v6 = v7 - *((float *)this + 524);
    v5 = v8 - *((float *)this + 525);
  }
  v9 = *((float *)this + 536);
  v10 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v7) & _xmm);
  if ( v9 > v10 )
    v6 = 0.0;
  v11 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v8) & _xmm);
  if ( v9 > v11 )
    v5 = 0.0;
  Instance = MPCHolographicInputManager::GetInstance();
  v13 = 16LL;
  v14 = v63;
  v15 = 16LL;
  do
  {
    v16 = *((_OWORD *)Instance + 1);
    *v14 = *(_OWORD *)Instance;
    v17 = *((_OWORD *)Instance + 2);
    v14[1] = v16;
    v18 = *((_OWORD *)Instance + 3);
    v14[2] = v17;
    v19 = *((_OWORD *)Instance + 4);
    v14[3] = v18;
    v20 = *((_OWORD *)Instance + 5);
    v14[4] = v19;
    v21 = *((_OWORD *)Instance + 6);
    v14[5] = v20;
    v22 = *((_OWORD *)Instance + 7);
    Instance = (struct MPCHolographicInputManager *)((char *)Instance + 128);
    v14[6] = v21;
    v14 += 8;
    *(v14 - 1) = v22;
    --v15;
  }
  while ( v15 );
  v23 = 0.0;
  v24 = *((_OWORD *)Instance + 1);
  *v14 = *(_OWORD *)Instance;
  v25 = *((_OWORD *)Instance + 2);
  v14[1] = v24;
  v14[2] = v25;
  if ( *((_BYTE *)a2 + 1350) )
  {
    if ( (*((_BYTE *)a2 + 1320) & 0x40) != 0 )
    {
      v26 = *((float *)a2 + 332);
      v27 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v26) & _xmm);
      if ( v27 > *((float *)this + 537) )
      {
        v23 = (float)(v26 + *((float *)this + 526)) * 0.5;
        *((float *)this + 526) = v23;
      }
    }
  }
  v28 = (__m128)LODWORD(v64);
  v29 = v6 * *((float *)this + 534);
  v30 = (__m128)LODWORD(v65);
  v28.m128_f32[0] = (float)(v64 * v29) + *((float *)this + 528);
  v30.m128_f32[0] = (float)(v65 * v29) + *((float *)this + 529);
  v31 = (float)(v66 * v29) + *((float *)this + 530);
  v32 = v69;
  v33 = v28;
  v34 = (__m128)LODWORD(v67);
  *((_QWORD *)this + 264) = _mm_unpacklo_ps(v33, v30).m128_u64[0];
  v35 = (__m128)LODWORD(v68);
  *((float *)this + 530) = v31;
  v33.m128_f32[0] = v5 * *((float *)this + 534);
  v34.m128_f32[0] = (float)(v34.m128_f32[0] * v33.m128_f32[0]) + *((float *)this + 528);
  v35.m128_f32[0] = (float)(v35.m128_f32[0] * v33.m128_f32[0]) + *((float *)this + 529);
  v36 = (float)(v32 * v33.m128_f32[0]) + *((float *)this + 530);
  v37 = v72;
  v38 = v34;
  v39 = (__m128)LODWORD(v70);
  v38.m128_u64[0] = _mm_unpacklo_ps(v38, v35).m128_u64[0];
  v40 = (__m128)LODWORD(v71);
  *((_QWORD *)this + 264) = v38.m128_u64[0];
  *((float *)this + 530) = v36;
  v38.m128_i32[0] = COERCE_UNSIGNED_INT(v23 * *((float *)this + 535)) ^ _xmm;
  v39.m128_f32[0] = (float)(v39.m128_f32[0] * v38.m128_f32[0]) + *((float *)this + 528);
  v40.m128_f32[0] = (float)(v40.m128_f32[0] * v38.m128_f32[0]) + *((float *)this + 529);
  v41 = (float)(v37 * v38.m128_f32[0]) + *((float *)this + 530);
  *((_QWORD *)this + 264) = _mm_unpacklo_ps(v39, v40).m128_u64[0];
  *((float *)this + 530) = v41;
  v42 = *((float *)this + 534);
  v38.m128_f32[0] = v42;
  v43 = v23 * *((float *)this + 535);
  *((_DWORD *)this + 524) = *((_DWORD *)this + 522);
  *((_DWORD *)this + 525) = *((_DWORD *)this + 523);
  *((_BYTE *)this + 2108) = 1;
  v44 = (float)(v42 * v5) + *((float *)this + 532);
  *((float *)this + 531) = (float)(v38.m128_f32[0] * v6) + *((float *)this + 531);
  v38.m128_f32[0] = *((float *)this + 533) - v43;
  *((float *)this + 532) = v44;
  *((_DWORD *)this + 533) = v38.m128_i32[0];
  v45 = *((_BYTE *)a2 + 1296);
  *((_DWORD *)this + 520) = v45 == 1;
  if ( v45 == 1 && !*((_DWORD *)this + 521) )
  {
    v46 = MPCHolographicInputManager::GetInstance();
    v61 = *((_QWORD *)v46 + 22);
    v62 = *((float *)v46 + 46);
    v47 = MPCHolographicInputManager::GetInstance();
    v48 = v63;
    do
    {
      v49 = *((_OWORD *)v47 + 1);
      *v48 = *(_OWORD *)v47;
      v50 = *((_OWORD *)v47 + 2);
      v48[1] = v49;
      v51 = *((_OWORD *)v47 + 3);
      v48[2] = v50;
      v52 = *((_OWORD *)v47 + 4);
      v48[3] = v51;
      v53 = *((_OWORD *)v47 + 5);
      v48[4] = v52;
      v54 = *((_OWORD *)v47 + 6);
      v48[5] = v53;
      v55 = *((_OWORD *)v47 + 7);
      v47 = (struct MPCHolographicInputManager *)((char *)v47 + 128);
      v48[6] = v54;
      v48 += 8;
      *(v48 - 1) = v55;
      --v13;
    }
    while ( v13 );
    v56 = *((_OWORD *)v47 + 1);
    *v48 = *(_OWORD *)v47;
    v57 = *((_OWORD *)v47 + 2);
    *((_BYTE *)this + 2108) = 0;
    v48[1] = v56;
    v48[2] = v57;
    v58 = (__m128)LODWORD(v67);
    v59 = (__m128)LODWORD(v65);
    v58.m128_f32[0] = (float)((float)((float)(v67 * *((float *)&v61 + 1)) + (float)(v64 * *(float *)&v61))
                            + (float)(v70 * v62))
                    + v73;
    v59.m128_f32[0] = (float)((float)((float)(v65 * *(float *)&v61) + (float)(v68 * *((float *)&v61 + 1)))
                            + (float)(v71 * v62))
                    + v74;
    v60 = (float)((float)((float)(v66 * *(float *)&v61) + (float)(v69 * *((float *)&v61 + 1))) + (float)(v72 * v62))
        + v75;
    *((_QWORD *)this + 264) = _mm_unpacklo_ps(v58, v59).m128_u64[0];
    *(_QWORD *)((char *)this + 2124) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    *((float *)this + 530) = v60;
    *((_DWORD *)this + 533) = 0;
  }
  *((_DWORD *)this + 521) = *((_DWORD *)this + 520);
}
