/*
 * XREFs of ?OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x18002DBB0
 * Callers:
 *     <none>
 * Callees:
 *     ?OrientToGravity@MPCMath@@YA?AUfloat4x4@Numerics@Foundation@Windows@@AEBU2345@M@Z @ 0x18002CD08 (-OrientToGravity@MPCMath@@YA-AUfloat4x4@Numerics@Foundation@Windows@@AEBU2345@M@Z.c)
 *     ?UpdateScroll@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x18002E160 (-UpdateScroll@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?UpdateZoom@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x18002E350 (-UpdateZoom@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?EndGesture@MPCGamepadProcessor@@AEAAXXZ @ 0x18002E500 (-EndGesture@MPCGamepadProcessor@@AEAAXXZ.c)
 *     ?GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ @ 0x18004A724 (-GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ.c)
 *     ?ShouldHandleMPCInput@MPCGamepadInputHelper@@QEAA_NXZ @ 0x18004A750 (-ShouldHandleMPCInput@MPCGamepadInputHelper@@QEAA_NXZ.c)
 *     ?ShouldUseGazeAndCommit@MPCGamepadInputHelper@@QEAA_NPEAUInputInfo@@@Z @ 0x18004A784 (-ShouldUseGazeAndCommit@MPCGamepadInputHelper@@QEAA_NPEAUInputInfo@@@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18004AC9C (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x18004EBF0 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@@Z @ 0x18004F62C (-DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@@Z.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 */

void __fastcall MPCGamepadProcessor::OnGazeUpdate(MPCGamepadProcessor *this, struct InputInfo *a2)
{
  MPCGamepadInputHelper *Instance; // rax
  MPCGamepadInputHelper *v5; // rax
  bool ShouldUseGazeAndCommit; // al
  _OWORD *v7; // rcx
  _OWORD *v8; // rax
  __int64 v9; // rdx
  __int128 v10; // xmm1
  int v11; // xmm0_4
  int v12; // xmm1_4
  int v13; // eax
  MPCGestureHandler *v14; // rcx
  __int128 v15; // xmm0
  float v16; // xmm0_4
  float v17; // xmm1_4
  float v18; // xmm0_4
  struct MPCHolographicInputManager *v19; // rax
  _OWORD *v20; // rcx
  __int64 v21; // rdx
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int64 v31; // rax
  double v32; // xmm1_8
  double v33; // xmm2_8
  double v34; // xmm1_8
  float v35; // xmm0_4
  float v36; // xmm4_4
  __m128 v37; // xmm2
  float v38; // xmm0_4
  __m128 v39; // xmm0
  __m128 v40; // xmm1
  float v41; // xmm2_4
  __m128 v42; // xmm2
  float v43; // xmm0_4
  __m128 v44; // xmm0
  __m128 v45; // xmm1
  float v46; // xmm2_4
  __m128 v47; // xmm2
  float v48; // xmm0_4
  __m128 v49; // xmm2
  __m128 v50; // xmm0
  __m128 v51; // xmm1
  __int128 v52; // xmm1
  __int128 v53; // xmm0
  __int128 v54; // xmm1
  float v55[16]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v56[1248]; // [rsp+70h] [rbp-90h] BYREF
  int v57; // [rsp+550h] [rbp+450h]
  int v58; // [rsp+560h] [rbp+460h]
  int v59; // [rsp+564h] [rbp+464h]
  __int128 v60; // [rsp+568h] [rbp+468h]
  int v61; // [rsp+578h] [rbp+478h]
  bool v62; // [rsp+57Ch] [rbp+47Ch]
  __int128 v63; // [rsp+648h] [rbp+548h]
  __int128 v64; // [rsp+658h] [rbp+558h]
  __int128 v65; // [rsp+668h] [rbp+568h]
  __int128 v66; // [rsp+678h] [rbp+578h]
  _OWORD v67[4]; // [rsp+8A0h] [rbp+7A0h] BYREF

  Instance = MPCGamepadInputHelper::GetInstance();
  if ( MPCGamepadInputHelper::ShouldHandleMPCInput(Instance) )
  {
    v5 = MPCGamepadInputHelper::GetInstance();
    ShouldUseGazeAndCommit = MPCGamepadInputHelper::ShouldUseGazeAndCommit(v5, a2);
    *((_BYTE *)this + 2508) = ShouldUseGazeAndCommit;
    if ( ShouldUseGazeAndCommit && *((_BYTE *)a2 + 785) && MPCInputProviderBase::IsPrimary(this) )
    {
      v7 = (_OWORD *)((char *)this + 2208);
      v8 = (_OWORD *)((char *)a2 + 784);
      v9 = 2LL;
      do
      {
        *v7 = *v8;
        v7[1] = v8[1];
        v7[2] = v8[2];
        v7[3] = v8[3];
        v7[4] = v8[4];
        v7[5] = v8[5];
        v7[6] = v8[6];
        v7 += 8;
        v10 = v8[7];
        v8 += 8;
        *(v7 - 1) = v10;
        --v9;
      }
      while ( v9 );
      *v7 = *v8;
      v7[1] = v8[1];
      *((_QWORD *)v7 + 4) = *((_QWORD *)v8 + 4);
      if ( *((_BYTE *)a2 + 787) )
      {
        MPCGamepadProcessor::UpdateScroll((MPCGamepadProcessor *)((char *)this - 24), a2);
        MPCGamepadProcessor::UpdateZoom((MPCGamepadProcessor *)((char *)this - 24), a2);
        if ( !*((_DWORD *)this + 626) )
        {
          v11 = *((_DWORD *)a2 + 197);
          v12 = *((_DWORD *)a2 + 198);
          v13 = *((_DWORD *)a2 + 204);
          v62 = *((_BYTE *)a2 + 1073) != 0;
          v14 = (MPCGestureHandler *)*((_QWORD *)this + 22);
          v58 = v11;
          v15 = *(_OWORD *)((char *)a2 + 796);
          v61 = v13;
          v59 = v12;
          v60 = v15;
          v57 = 4;
          MPCGestureHandler::DownLevelTo2D(v14, (struct InputInfo *)v56);
        }
      }
    }
    else if ( *((_DWORD *)this + 626) )
    {
      MPCGamepadProcessor::EndGesture((MPCGamepadProcessor *)((char *)this - 24));
    }
    v16 = *((double *)this + 264);
    LODWORD(v17) = COERCE_UNSIGNED_INT(*((double *)this + 263)) ^ _xmm;
    *((float *)this + 639) = (float)(v16 + *((float *)this + 639)) * 0.5;
    v18 = *((double *)this + 265);
    *((float *)this + 640) = (float)(v18 + *((float *)this + 640)) * 0.5;
    *((float *)this + 641) = (float)((float)(v17 + (float)*((double *)this + 262)) + *((float *)this + 641)) * 0.5;
    v19 = MPCHolographicInputManager::GetInstance();
    v20 = v56;
    v21 = 16LL;
    do
    {
      v22 = *((_OWORD *)v19 + 1);
      *v20 = *(_OWORD *)v19;
      v23 = *((_OWORD *)v19 + 2);
      v20[1] = v22;
      v24 = *((_OWORD *)v19 + 3);
      v20[2] = v23;
      v25 = *((_OWORD *)v19 + 4);
      v20[3] = v24;
      v26 = *((_OWORD *)v19 + 5);
      v20[4] = v25;
      v27 = *((_OWORD *)v19 + 6);
      v20[5] = v26;
      v28 = *((_OWORD *)v19 + 7);
      v19 = (struct MPCHolographicInputManager *)((char *)v19 + 128);
      v20[6] = v27;
      v20 += 8;
      *(v20 - 1) = v28;
      --v21;
    }
    while ( v21 );
    v29 = *((_OWORD *)v19 + 1);
    *v20 = *(_OWORD *)v19;
    v30 = *((_OWORD *)v19 + 2);
    v20[1] = v29;
    v20[2] = v30;
    v67[0] = v63;
    v67[1] = v64;
    v67[2] = v65;
    v67[3] = v66;
    MPCMath::OrientToGravity((__int64)v55, (__int64)v67, 0.89999998);
    v31 = *((_QWORD *)a2 + 2);
    v32 = (double)(int)v31;
    if ( v31 < 0 )
      v32 = v32 + 1.844674407370955e19;
    v33 = *((double *)this + 324);
    v34 = v32 * *((double *)this + 323);
    if ( v33 == 0.0 )
      v35 = FLOAT_1_0;
    else
      v35 = (float)(v34 - v33) / 0.02;
    v36 = v35;
    *((float *)this + 650) = v35;
    *((double *)this + 324) = v34;
    v37 = (__m128)*((unsigned int *)this + 639);
    v38 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v37.m128_f32[0]) & _xmm);
    if ( v38 >= *((float *)this + 628) )
    {
      v37.m128_f32[0] = v37.m128_f32[0] * *((float *)this + 632);
      v39 = v37;
      v40 = v37;
      v39.m128_f32[0] = (float)((float)(v37.m128_f32[0] * v55[0]) * v36) + *((float *)this + 636);
      v40.m128_f32[0] = (float)((float)(v37.m128_f32[0] * v55[1]) * v36) + *((float *)this + 637);
      v41 = (float)((float)(v37.m128_f32[0] * v55[2]) * v36) + *((float *)this + 638);
      *((_QWORD *)this + 318) = _mm_unpacklo_ps(v39, v40).m128_u64[0];
      *((float *)this + 638) = v41;
      *((float *)this + 642) = (float)((float)(*((float *)this + 639) * *((float *)this + 632)) * v36)
                             + *((float *)this + 642);
    }
    v42 = (__m128)*((unsigned int *)this + 640);
    v43 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v42.m128_f32[0]) & _xmm);
    if ( v43 >= *((float *)this + 628) )
    {
      v42.m128_f32[0] = v42.m128_f32[0] * *((float *)this + 632);
      v44 = v42;
      v45 = v42;
      v44.m128_f32[0] = (float)((float)(v42.m128_f32[0] * v55[4]) * v36) + *((float *)this + 636);
      v45.m128_f32[0] = (float)((float)(v42.m128_f32[0] * v55[5]) * v36) + *((float *)this + 637);
      v46 = (float)((float)(v42.m128_f32[0] * v55[6]) * v36) + *((float *)this + 638);
      *((_QWORD *)this + 318) = _mm_unpacklo_ps(v44, v45).m128_u64[0];
      *((float *)this + 638) = v46;
      *((float *)this + 643) = (float)((float)(*((float *)this + 632) * *((float *)this + 640)) * v36)
                             + *((float *)this + 643);
    }
    v47 = (__m128)*((unsigned int *)this + 641);
    v48 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v47.m128_f32[0]) & _xmm);
    if ( v48 >= *((float *)this + 628) )
    {
      v47.m128_f32[0] = v47.m128_f32[0] * *((float *)this + 632);
      v49 = _mm_xor_ps(v47, (__m128)_xmm);
      v50 = v49;
      v51 = v49;
      v50.m128_f32[0] = (float)((float)(v49.m128_f32[0] * v55[8]) * v36) + *((float *)this + 636);
      v51.m128_f32[0] = (float)((float)(v49.m128_f32[0] * v55[9]) * v36) + *((float *)this + 637);
      v49.m128_f32[0] = (float)((float)(v49.m128_f32[0] * v55[10]) * v36) + *((float *)this + 638);
      *((_QWORD *)this + 318) = _mm_unpacklo_ps(v50, v51).m128_u64[0];
      *((_DWORD *)this + 638) = v49.m128_i32[0];
      *((float *)this + 644) = (float)((float)(*((float *)this + 641) * *((float *)this + 632)) * v36)
                             + *((float *)this + 644);
    }
    v52 = *((_OWORD *)this + 131);
    *((_OWORD *)this + 134) = *((_OWORD *)this + 130);
    v53 = *((_OWORD *)this + 132);
    *((_OWORD *)this + 135) = v52;
    v54 = *((_OWORD *)this + 133);
    *((_OWORD *)this + 136) = v53;
    *((_OWORD *)this + 137) = v54;
  }
  else if ( *((_DWORD *)this + 626) )
  {
    MPCGamepadProcessor::EndGesture((MPCGamepadProcessor *)((char *)this - 24));
  }
}
