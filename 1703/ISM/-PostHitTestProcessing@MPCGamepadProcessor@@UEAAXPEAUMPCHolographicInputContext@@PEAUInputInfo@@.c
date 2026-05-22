/*
 * XREFs of ?PostHitTestProcessing@MPCGamepadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x18002D8E0
 * Callers:
 *     <none>
 * Callees:
 *     ?SendMPCInput@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@_N1@Z @ 0x18002E8C8 (-SendMPCInput@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@_N1@Z.c)
 *     ?ClearControllerProcessorState@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x18002EB60 (-ClearControllerProcessorState@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ @ 0x18004A724 (-GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ.c)
 *     ?ShouldUseGazeAndCommit@MPCGamepadInputHelper@@QEAA_NPEAUInputInfo@@@Z @ 0x18004A784 (-ShouldUseGazeAndCommit@MPCGamepadInputHelper@@QEAA_NPEAUInputInfo@@@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18004AC9C (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x18004EBF0 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCGamepadProcessor::PostHitTestProcessing(
        MPCGamepadProcessor *this,
        struct MPCHolographicInputContext *a2,
        struct InputInfo *a3)
{
  MPCGamepadInputHelper *Instance; // rax
  bool ShouldUseGazeAndCommit; // al
  struct InputInfo *v7; // rdx
  bool v8; // di
  int v9; // eax
  bool v10; // r14
  bool v11; // cl
  bool v12; // di
  bool v13; // r14
  struct MPCHolographicInputManager *v14; // rax
  struct MPCHolographicInputManager *v15; // rax
  __int64 v16; // rdx
  char *v17; // rcx
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm1
  float v26; // xmm3_4
  __m128 v27; // xmm5
  __m128 v28; // xmm6
  float v29; // xmm4_4
  __m128 v30; // xmm2
  __int128 v31; // xmm0
  char v32; // [rsp+38h] [rbp-D0h] BYREF
  float v33; // [rsp+610h] [rbp+508h]
  float v34; // [rsp+614h] [rbp+50Ch]
  float v35; // [rsp+618h] [rbp+510h]
  float v36; // [rsp+620h] [rbp+518h]
  float v37; // [rsp+624h] [rbp+51Ch]
  float v38; // [rsp+628h] [rbp+520h]
  float v39; // [rsp+630h] [rbp+528h]
  float v40; // [rsp+634h] [rbp+52Ch]
  float v41; // [rsp+638h] [rbp+530h]
  float v42; // [rsp+640h] [rbp+538h]
  float v43; // [rsp+644h] [rbp+53Ch]
  float v44; // [rsp+648h] [rbp+540h]

  Instance = MPCGamepadInputHelper::GetInstance();
  ShouldUseGazeAndCommit = MPCGamepadInputHelper::ShouldUseGazeAndCommit(Instance, a3);
  v8 = ShouldUseGazeAndCommit;
  if ( !*((_BYTE *)this + 2510) && ShouldUseGazeAndCommit )
    MPCGamepadProcessor::ClearControllerProcessorState((MPCGamepadProcessor *)((char *)this - 24), v7);
  v9 = *((_DWORD *)this + 518) | *((_DWORD *)this + 522);
  *((_BYTE *)this + 2510) = v8;
  v10 = (v9 & 0x40000000) == 0;
  if ( MPCInputProviderBase::IsPrimary(this) )
  {
    v11 = v10 && v8;
    v12 = (*((_DWORD *)this + 518) & 4) != 0;
    v13 = (*((_DWORD *)this + 522) & 4) != 0;
    if ( v11 )
      MPCGamepadProcessor::SendMPCInput(
        (MPCGamepadProcessor *)((char *)this - 24),
        a3,
        (*((_DWORD *)this + 522) & 4) != 0,
        (*((_DWORD *)this + 518) & 4) != 0);
    else
      (*(void (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 19) + 48LL))(
        *((_QWORD *)this + 19),
        (char *)this + 184);
    if ( v13 && !v12 )
    {
      v14 = MPCHolographicInputManager::GetInstance();
      *(_QWORD *)((char *)this + 2532) = *((_QWORD *)v14 + 22);
      *((_DWORD *)this + 635) = *((_DWORD *)v14 + 46);
      v15 = MPCHolographicInputManager::GetInstance();
      v16 = 16LL;
      v17 = &v32;
      do
      {
        v18 = *((_OWORD *)v15 + 1);
        *(_OWORD *)v17 = *(_OWORD *)v15;
        v19 = *((_OWORD *)v15 + 2);
        *((_OWORD *)v17 + 1) = v18;
        v20 = *((_OWORD *)v15 + 3);
        *((_OWORD *)v17 + 2) = v19;
        v21 = *((_OWORD *)v15 + 4);
        *((_OWORD *)v17 + 3) = v20;
        v22 = *((_OWORD *)v15 + 5);
        *((_OWORD *)v17 + 4) = v21;
        v23 = *((_OWORD *)v15 + 6);
        *((_OWORD *)v17 + 5) = v22;
        v24 = *((_OWORD *)v15 + 7);
        v15 = (struct MPCHolographicInputManager *)((char *)v15 + 128);
        *((_OWORD *)v17 + 6) = v23;
        v17 += 128;
        *((_OWORD *)v17 - 1) = v24;
        --v16;
      }
      while ( v16 );
      v25 = *((_OWORD *)v15 + 1);
      v26 = *((float *)this + 634);
      v27 = (__m128)*((unsigned int *)this + 633);
      v28 = (__m128)LODWORD(v26);
      v29 = *((float *)this + 635);
      v30 = v27;
      *(_OWORD *)v17 = *(_OWORD *)v15;
      v31 = *((_OWORD *)v15 + 2);
      *((_OWORD *)v17 + 1) = v25;
      *((_OWORD *)v17 + 2) = v31;
      v28.m128_f32[0] = (float)((float)((float)(v26 * v36) + (float)(v27.m128_f32[0] * v33)) + (float)(v29 * v39)) + v42;
      v30.m128_f32[0] = (float)((float)((float)(v27.m128_f32[0] * v34) + (float)(v26 * v37)) + (float)(v29 * v40)) + v43;
      v27.m128_f32[0] = (float)((float)((float)(v27.m128_f32[0] * v35) + (float)(v26 * v38)) + (float)(v29 * v41)) + v44;
      *((_QWORD *)this + 318) = _mm_unpacklo_ps(v28, v30).m128_u64[0];
      *((_DWORD *)this + 638) = v27.m128_i32[0];
      *((_QWORD *)this + 321) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
      *((_DWORD *)this + 644) = 0;
    }
  }
  else if ( !v10 )
  {
    (*(void (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 19) + 48LL))(
      *((_QWORD *)this + 19),
      (char *)this + 184);
  }
  *((_DWORD *)this + 518) = *((_DWORD *)this + 522);
}
