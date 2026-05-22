/*
 * XREFs of ?PerformLowPassFilterStabilization@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z @ 0x18004E4D0
 * Callers:
 *     ?StabilizeInput@RayStabilizer@@QEAAXPEAUInputInfo@@@Z @ 0x18004E23C (-StabilizeInput@RayStabilizer@@QEAAXPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?end@?$deque@VRayStabilizationResult@@V?$allocator@VRayStabilizationResult@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@VRayStabilizationResult@@@std@@@std@@@2@XZ @ 0x1800462C0 (-end@-$deque@VRayStabilizationResult@@V-$allocator@VRayStabilizationResult@@@std@@@std@@QEAA-AV-.c)
 *     ?begin@?$deque@UPoseDelta@MPCSixDofProcessor@@V?$allocator@UPoseDelta@MPCSixDofProcessor@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UPoseDelta@MPCSixDofProcessor@@@std@@@std@@@2@XZ @ 0x1800462DC (-begin@-$deque@UPoseDelta@MPCSixDofProcessor@@V-$allocator@UPoseDelta@MPCSixDofProcessor@@@std@@.c)
 *     ??E?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@VRayStabilizationResult@@@std@@@std@@@std@@QEAA?AV01@H@Z @ 0x18004E7B4 (--E-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@VRayStabilizationResult@@@std@@@std@@@.c)
 *     ?GetAtStep@RayStabilizationResult@@QEBA?AUTargetingRay@@_K@Z @ 0x180050734 (-GetAtStep@RayStabilizationResult@@QEBA-AUTargetingRay@@_K@Z.c)
 */

void __fastcall RayStabilizer::PerformLowPassFilterStabilization(
        RayStabilizer *this,
        struct RayStabilizationResult *a2)
{
  __int64 v2; // rsi
  unsigned int v5; // ebx
  unsigned __int64 v6; // rdi
  float v7; // xmm6_4
  float v8; // xmm10_4
  float v9; // xmm11_4
  float v10; // xmm12_4
  float v11; // xmm7_4
  float v12; // xmm8_4
  float v13; // xmm9_4
  unsigned int i; // r14d
  int v15; // ebx
  _QWORD *v16; // rax
  bool v17; // al
  __int64 v18; // rcx
  float v19; // xmm3_4
  __int64 v20; // rcx
  __m128 v21; // xmm3
  __m128 v22; // xmm2
  __m128 v23; // xmm1
  __m128 v24; // xmm3
  __int32 v25; // xmm0_4
  __m128 v26; // xmm1
  __int64 v27; // [rsp+28h] [rbp-69h] BYREF
  float v28; // [rsp+30h] [rbp-61h]
  float v29; // [rsp+34h] [rbp-5Dh]
  float v30; // [rsp+38h] [rbp-59h]
  float v31; // [rsp+3Ch] [rbp-55h]
  __int128 v32; // [rsp+40h] [rbp-51h] BYREF
  __int128 v33; // [rsp+50h] [rbp-41h]

  v2 = *(unsigned int *)a2;
  v5 = 0;
  RayStabilizationResult::GetAtStep(a2, &v27, v2 - 1);
  v6 = *((_QWORD *)this + 4);
  if ( v6 > 3 )
    v6 = 3LL;
  v7 = (float)((int)v6 + 1);
  if ( (__int64)(v6 + 1) < 0 )
    v7 = v7 + 1.8446744e19;
  v8 = *(float *)&v27 * v7;
  v9 = *((float *)&v27 + 1) * v7;
  v10 = v28 * v7;
  v11 = v29 * v7;
  v12 = v30 * v7;
  v13 = v31 * v7;
  std::deque<MPCSixDofProcessor::PoseDelta>::begin(this, &v32);
  for ( i = 0; ; ++i )
  {
    v15 = v5 | 1;
    v16 = std::deque<RayStabilizationResult>::end(this, &v27);
    v17 = (_QWORD)v33 != v16[2] && i < v6;
    v5 = v15 & 0xFFFFFFFE;
    if ( !v17 )
      break;
    v18 = v32;
    if ( (_QWORD)v32 )
      v18 = *(_QWORD *)v32;
    RayStabilizationResult::GetAtStep(
      *(_QWORD *)(*(_QWORD *)(v18 + 8) + 8 * (v33 & (*(_QWORD *)(v18 + 16) - 1LL))),
      &v27,
      v2 - 1);
    v19 = (float)(int)(v6 - i);
    if ( (__int64)(v6 - i) < 0 )
      v19 = v19 + 1.8446744e19;
    v7 = v7 + v19;
    v8 = (float)(*(float *)&v27 * v19) + v8;
    v9 = (float)(*((float *)&v27 + 1) * v19) + v9;
    v10 = (float)(v28 * v19) + v10;
    v11 = (float)(v29 * v19) + v11;
    v12 = (float)(v30 * v19) + v12;
    v13 = (float)(v31 * v19) + v13;
    std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<RayStabilizationResult>>>::operator++(&v32, &v27);
  }
  v20 = 3LL * *(unsigned int *)a2;
  v21 = _mm_movelh_ps(
          _mm_unpacklo_ps(
            (__m128)COERCE_UNSIGNED_INT(v11 * (float)(1.0 / v7)),
            (__m128)COERCE_UNSIGNED_INT(v12 * (float)(1.0 / v7))),
          (__m128)COERCE_UNSIGNED_INT(v13 * (float)(1.0 / v7)));
  *(float *)&v32 = v8 * (float)(1.0 / v7);
  v22 = _mm_mul_ps(v21, v21);
  *((float *)&v32 + 1) = v9 * (float)(1.0 / v7);
  *((float *)&v32 + 2) = v10 * (float)(1.0 / v7);
  v23 = _mm_shuffle_ps(v22, v22, 102);
  v22.m128_f32[0] = (float)(v22.m128_f32[0] + v23.m128_f32[0]) + _mm_shuffle_ps(v23, v23, 85).m128_f32[0];
  v24 = _mm_div_ps(v21, _mm_sqrt_ps(_mm_shuffle_ps(v22, v22, 0)));
  LODWORD(v27) = v24.m128_i32[0];
  HIDWORD(v27) = _mm_shuffle_ps(v24, v24, 85).m128_u32[0];
  v25 = v24.m128_i32[0];
  v26 = (__m128)HIDWORD(v27);
  v24.m128_i32[0] = _mm_shuffle_ps(v24, v24, 170).m128_u32[0];
  HIDWORD(v32) = v25;
  v28 = v24.m128_f32[0];
  *(_OWORD *)((char *)a2 + 8 * v20 + 4) = v32;
  *(_QWORD *)((char *)a2 + 8 * v20 + 20) = _mm_unpacklo_ps(v26, (__m128)v24.m128_u32[0]).m128_u64[0];
  ++*(_DWORD *)a2;
}
