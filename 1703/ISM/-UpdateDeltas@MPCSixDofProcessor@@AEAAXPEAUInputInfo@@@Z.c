/*
 * XREFs of ?UpdateDeltas@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x1800451F8
 * Callers:
 *     ?Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180045950 (-Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180001914 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?end@?$deque@VRayStabilizationResult@@V?$allocator@VRayStabilizationResult@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@VRayStabilizationResult@@@std@@@std@@@2@XZ @ 0x1800462C0 (-end@-$deque@VRayStabilizationResult@@V-$allocator@VRayStabilizationResult@@@std@@@std@@QEAA-AV-.c)
 *     ?begin@?$deque@UPoseDelta@MPCSixDofProcessor@@V?$allocator@UPoseDelta@MPCSixDofProcessor@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UPoseDelta@MPCSixDofProcessor@@@std@@@std@@@2@XZ @ 0x1800462DC (-begin@-$deque@UPoseDelta@MPCSixDofProcessor@@V-$allocator@UPoseDelta@MPCSixDofProcessor@@@std@@.c)
 *     ??G?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UPoseDelta@MPCSixDofProcessor@@@std@@@std@@@std@@QEBA?AV01@_J@Z @ 0x180046434 (--G-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@UPoseDelta@MPCSixDofProcessor@@@std@@@.c)
 *     ?_Growmap@?$deque@UPoseDelta@MPCSixDofProcessor@@V?$allocator@UPoseDelta@MPCSixDofProcessor@@@std@@@std@@IEAAX_K@Z @ 0x180046474 (-_Growmap@-$deque@UPoseDelta@MPCSixDofProcessor@@V-$allocator@UPoseDelta@MPCSixDofProcessor@@@st.c)
 *     ??2@YAPEAX_K@Z @ 0x18009DFE0 (--2@YAPEAX_K@Z.c)
 *     atan2f_0 @ 0x18009EACE (atan2f_0.c)
 *     sqrtf_0 @ 0x18009EAE6 (sqrtf_0.c)
 */

void __fastcall MPCSixDofProcessor::UpdateDeltas(MPCSixDofProcessor *this, struct InputInfo *a2, _DWORD *a3)
{
  __int64 v4; // rdi
  float v6; // xmm3_4
  float v7; // xmm1_4
  float v8; // xmm2_4
  float v9; // xmm0_4
  float v10; // xmm3_4
  __m128 v11; // xmm1
  __m128 v12; // xmm3
  __m128 v13; // xmm0
  __m128 v14; // xmm1
  __m128 v15; // xmm5
  __m128 v16; // xmm4
  __m128 v17; // xmm1
  __m128 v18; // xmm6
  float v19; // xmm2_4
  float v20; // xmm2_4
  __int32 v21; // r13d
  char *v22; // rbx
  int v23; // esi
  __int64 v24; // r12
  __int64 v25; // rcx
  __int64 v26; // rax
  _QWORD *v27; // rdx
  __int64 v28; // rax
  _QWORD *v29; // rdx
  __int64 v30; // rax
  bool v31; // zf
  int v32; // eax
  __int64 v33; // r12
  __int64 v34; // rcx
  float v35; // xmm3_4
  float v36; // xmm0_4
  float v37; // xmm1_4
  __int64 v38; // rcx
  __int64 i; // rdx
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rdx
  _DWORD *v47; // r8
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rax
  _DWORD *v53; // r8
  __int64 v54; // [rsp+20h] [rbp-60h] BYREF
  __int32 v55; // [rsp+28h] [rbp-58h]
  __int64 v56; // [rsp+30h] [rbp-50h]
  __int64 *v57; // [rsp+38h] [rbp-48h] BYREF
  float v58; // [rsp+40h] [rbp-40h]
  __int64 v59; // [rsp+48h] [rbp-38h]
  _BYTE v60[32]; // [rsp+50h] [rbp-30h] BYREF

  v4 = 0LL;
  if ( *((float *)this + 43) <= (float)((float)(*((_DWORD *)a2 + 2) - *((_DWORD *)this + 60)) * 0.001) )
  {
    v22 = (char *)this + 200;
    while ( *((_QWORD *)this + 29) )
    {
      v31 = (*((_QWORD *)this + 29))-- == 1LL;
      if ( v31 )
        *((_QWORD *)this + 28) = 0LL;
    }
    v33 = *((_QWORD *)this + 27);
    v23 = 1;
    while ( v33 )
    {
      v34 = *((_QWORD *)this + 26);
      --v33;
      if ( *(_QWORD *)(v34 + 8 * v33) )
        std::_Deallocate(*(char **)(v34 + 8 * v33), 1uLL, 0xCuLL);
    }
    if ( *((_QWORD *)this + 26) )
      std::_Deallocate(*((char **)this + 26), *((_QWORD *)this + 27), 8uLL);
    *((_QWORD *)this + 27) = 0LL;
    *((_QWORD *)this + 26) = 0LL;
  }
  else
  {
    if ( *((_QWORD *)this + 29) )
    {
      v6 = *((float *)this + 64);
      v7 = *((float *)this + 66);
      v8 = *((float *)this + 67);
      v9 = *((float *)this + 65) * *((float *)this + 65);
      LODWORD(v54) = *((_DWORD *)a2 + 2);
      v10 = (float)((float)(v6 * v6) + v9) + (float)(v7 * v7);
      v11 = (__m128)LODWORD(FLOAT_1_0);
      v11.m128_f32[0] = 1.0 / (float)(v10 + (float)(v8 * v8));
      v12 = (__m128)_mm_loadu_si128((const __m128i *)((char *)a2 + 1368));
      v13 = _mm_mul_ps(*((__m128 *)this + 16), _mm_shuffle_ps(v11, v11, 0));
      v14 = _mm_shuffle_ps(v12, v12, 27);
      v15 = _mm_mul_ps(v13, (__m128)`DirectX::XMQuaternionConjugate'::`2'::NegativeOne3);
      v16 = _mm_mul_ps(_mm_shuffle_ps(v15, v15, 0), v14);
      v17 = _mm_shuffle_ps(v14, v14, 177);
      v18 = _mm_add_ps(
              _mm_add_ps(
                _mm_mul_ps(
                  _mm_mul_ps(_mm_shuffle_ps(v17, v17, 27), _mm_shuffle_ps(v15, v15, 170)),
                  (__m128)`DirectX::XMQuaternionMultiply'::`2'::ControlYXWZ),
                _mm_mul_ps(
                  _mm_mul_ps(_mm_shuffle_ps(v15, v15, 85), v17),
                  (__m128)`DirectX::XMQuaternionMultiply'::`2'::ControlZWXY)),
              _mm_add_ps(
                _mm_mul_ps(_mm_shuffle_ps(v15, v15, 255), v12),
                _mm_mul_ps(v16, (__m128)`DirectX::XMQuaternionMultiply'::`2'::ControlWZYX)));
      v19 = _mm_shuffle_ps(v18, v18, 85).m128_f32[0];
      v12.m128_f32[0] = _mm_shuffle_ps(v18, v18, 170).m128_f32[0];
      v13.m128_f32[0] = sqrtf_0(
                          (float)((float)(v18.m128_f32[0] * v18.m128_f32[0]) + (float)(v19 * v19))
                        + (float)(v12.m128_f32[0] * v12.m128_f32[0]));
      v13.m128_f32[0] = atan2f_0(v13.m128_f32[0], _mm_shuffle_ps(v18, v18, 255).m128_f32[0]);
      v20 = *((float *)this + 61);
      v58 = *((float *)a2 + 348);
      v13.m128_f32[0] = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v13.m128_f32[0] * 114.59157)) & _xmm);
      v17.m128_i32[0] = *((_DWORD *)this + 63);
      v55 = v13.m128_i32[0];
      v57 = (__int64 *)*((_QWORD *)a2 + 173);
      v21 = v13.m128_i32[0];
      HIDWORD(v54) = sqrtf_0(
                       (float)((float)((float)(*((float *)this + 62) - *((float *)&v57 + 1))
                                     * (float)(*((float *)this + 62) - *((float *)&v57 + 1)))
                             + (float)((float)(v20 - *(float *)&v57) * (float)(v20 - *(float *)&v57)))
                     + (float)((float)(v17.m128_f32[0] - v58) * (float)(v17.m128_f32[0] - v58)));
    }
    else
    {
      v21 = 0;
      v54 = 0LL;
    }
    v22 = (char *)this + 200;
    v23 = 1;
    if ( *((_QWORD *)this + 27) <= (unsigned __int64)(*((_QWORD *)this + 29) + 1LL) )
      std::deque<MPCSixDofProcessor::PoseDelta>::_Growmap((char *)this + 200);
    *((_QWORD *)this + 28) &= *((_QWORD *)this + 27) - 1LL;
    v24 = (*((_QWORD *)this + 27) - 1LL) & (*((_QWORD *)this + 29) + *((_QWORD *)this + 28));
    if ( !*(_QWORD *)(*((_QWORD *)this + 26) + 8 * v24) )
      *(_QWORD *)(*((_QWORD *)this + 26) + 8 * v24) = operator new(0xCuLL);
    v25 = *(_QWORD *)(*((_QWORD *)this + 26) + 8 * v24);
    if ( v25 )
    {
      *(_QWORD *)v25 = v54;
      *(_DWORD *)(v25 + 8) = v21;
    }
    ++*((_QWORD *)this + 29);
    while ( *((_QWORD *)this + 29) > 1uLL )
    {
      v26 = std::deque<RayStabilizationResult>::end((char *)this + 200, &v57);
      v27 = (_QWORD *)std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<MPCSixDofProcessor::PoseDelta>>>::operator-(
                        v26,
                        &v54);
      v28 = *v27 ? *(_QWORD *)*v27 : 0LL;
      v29 = (_QWORD *)std::deque<MPCSixDofProcessor::PoseDelta>::begin(
                        (char *)this + 200,
                        v60,
                        *(_QWORD *)(*(_QWORD *)(v28 + 8) + 8 * (v27[2] & (*(_QWORD *)(v28 + 16) - 1LL))));
      v30 = *v29 ? *(_QWORD *)*v29 : 0LL;
      if ( (float)((float)(*a3 - **(_DWORD **)(*(_QWORD *)(v30 + 8) + 8 * (v29[2] & (*(_QWORD *)(v30 + 16) - 1LL))))
                 * 0.001) <= *((float *)this + 42) )
        break;
      v31 = (*((_QWORD *)this + 29))-- == 1LL;
      if ( v31 )
        *((_QWORD *)this + 28) = 0LL;
      else
        ++*((_QWORD *)this + 28);
    }
    *((_DWORD *)this + 60) = *((_DWORD *)a2 + 2);
    v32 = *((_DWORD *)a2 + 348);
    *(_QWORD *)((char *)this + 244) = *((_QWORD *)a2 + 173);
    *((_DWORD *)this + 63) = v32;
    *((__m128i *)this + 16) = _mm_loadu_si128((const __m128i *)((char *)a2 + 1368));
  }
  if ( (*((_DWORD *)a2 + 330) & *((_DWORD *)a2 + 329)) != 0
    || *((_BYTE *)a2 + 1351) && *((float *)a2 + 335) > *((float *)this + 48)
    || *((_BYTE *)a2 + 1352)
    && ((v35 = *((float *)this + 47),
         (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(0.5 - *((float *)a2 + 333))) & _xmm) > v35)
     || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(0.5 - *((float *)a2 + 334))) & _xmm) > v35) )
  {
    *((_BYTE *)this + 272) = 1;
  }
  else if ( *((_QWORD *)this + 29) <= 1uLL )
  {
    *((_BYTE *)this + 272) = 0;
  }
  else
  {
    v36 = 0.0;
    v37 = 0.0;
    std::deque<MPCSixDofProcessor::PoseDelta>::begin(v22, &v57, a3);
    std::deque<RayStabilizationResult>::end(v38, &v54);
    for ( i = v59; i != v56; v37 = v37 + *(float *)(v42 + 8) )
    {
      v40 = 0LL;
      if ( v57 )
        v40 = *v57;
      v41 = i++ & (*(_QWORD *)(v40 + 16) - 1LL);
      v42 = *(_QWORD *)(*(_QWORD *)(v40 + 8) + 8 * v41);
      v36 = v36 + *(float *)(v42 + 4);
    }
    v43 = std::deque<RayStabilizationResult>::end(v22, v60);
    v44 = std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<MPCSixDofProcessor::PoseDelta>>>::operator-(
            v43,
            &v57);
    if ( *(_QWORD *)v44 )
      v45 = **(_QWORD **)v44;
    else
      v45 = 0LL;
    v46 = std::deque<MPCSixDofProcessor::PoseDelta>::begin(
            v22,
            &v54,
            *(_QWORD *)(*(_QWORD *)(v45 + 8) + 8 * (*(_QWORD *)(v44 + 16) & (*(_QWORD *)(v45 + 16) - 1LL))));
    if ( *(_QWORD *)v46 )
      v48 = **(_QWORD **)v46;
    else
      v48 = 0LL;
    if ( (unsigned int)(*v47
                      - **(_DWORD **)(*(_QWORD *)(v48 + 8) + 8 * (*(_QWORD *)(v46 + 16) & (*(_QWORD *)(v48 + 16) - 1LL)))) > 1 )
    {
      v49 = std::deque<RayStabilizationResult>::end(v22, v60);
      v50 = std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<MPCSixDofProcessor::PoseDelta>>>::operator-(
              v49,
              &v57);
      if ( *(_QWORD *)v50 )
        v51 = **(_QWORD **)v50;
      else
        v51 = 0LL;
      v52 = std::deque<MPCSixDofProcessor::PoseDelta>::begin(
              v22,
              &v54,
              *(_QWORD *)(*(_QWORD *)(v51 + 8) + 8 * (*(_QWORD *)(v50 + 16) & (*(_QWORD *)(v51 + 16) - 1LL))));
      if ( *(_QWORD *)v52 )
        v4 = **(_QWORD **)v52;
      v23 = *v53 - **(_DWORD **)(*(_QWORD *)(v4 + 8) + 8 * (*(_QWORD *)(v52 + 16) & (*(_QWORD *)(v4 + 16) - 1LL)));
    }
    *((_BYTE *)this + 272) = (float)((float)((float)(v37 * *((float *)this + 44)) + (float)(v36 * *((float *)this + 45)))
                                   / (float)((float)v23 * 0.001)) > *((float *)this + 46);
  }
}
