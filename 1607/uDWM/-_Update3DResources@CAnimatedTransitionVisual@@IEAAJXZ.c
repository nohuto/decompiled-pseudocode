/*
 * XREFs of ?_Update3DResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18008C95C
 * Callers:
 *     ?Validate3DVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18008C654 (-Validate3DVisual@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z @ 0x180041D38 (-GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     ??DMatrix4x4F@D2D1@@QEBA?AV01@AEBV01@@Z @ 0x18008BD2C (--DMatrix4x4F@D2D1@@QEBA-AV01@AEBV01@@Z.c)
 *     ?PerspectiveProjection@Matrix4x4F@D2D1@@SA?AV12@M@Z @ 0x18008BF34 (-PerspectiveProjection@Matrix4x4F@D2D1@@SA-AV12@M@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::_Update3DResources(CAnimatedTransitionVisual *this)
{
  float v2; // xmm6_4
  float v3; // xmm4_4
  float v4; // xmm4_4
  __int128 *v5; // rax
  __int128 v6; // xmm2
  __int128 v7; // xmm0
  __int128 v8; // xmm2
  const struct D2D1::Matrix4x4F *v9; // rax
  __int128 *v10; // rax
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  int v14; // xmm5_4
  __m128 *v15; // rax
  __m128 v16; // xmm2
  __m128 v17; // xmm3
  __m128 v18; // xmm4
  __m128 v19; // xmm5
  __int64 v20; // rax
  int v21; // eax
  unsigned int v22; // ebx
  __int64 v23; // rax
  LONG v24; // ecx
  __int64 v25; // rax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  __int128 v30; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v31; // [rsp+48h] [rbp-C0h]
  __int128 v32; // [rsp+58h] [rbp-B0h]
  __int128 v33; // [rsp+68h] [rbp-A0h]
  struct tagRECT v34; // [rsp+78h] [rbp-90h] BYREF
  int v35; // [rsp+88h] [rbp-80h] BYREF
  __int64 v36; // [rsp+8Ch] [rbp-7Ch]
  __int64 v37; // [rsp+94h] [rbp-74h]
  int v38; // [rsp+9Ch] [rbp-6Ch]
  __int64 v39; // [rsp+A0h] [rbp-68h]
  __int64 v40; // [rsp+A8h] [rbp-60h]
  int v41; // [rsp+B0h] [rbp-58h]
  int v42; // [rsp+B4h] [rbp-54h]
  float v43; // [rsp+B8h] [rbp-50h]
  int v44; // [rsp+BCh] [rbp-4Ch]
  int v45; // [rsp+C0h] [rbp-48h]
  int v46; // [rsp+C4h] [rbp-44h]
  _BYTE v47[64]; // [rsp+C8h] [rbp-40h] BYREF
  _OWORD v48[4]; // [rsp+108h] [rbp+0h] BYREF

  CTransitionVisualController::GetMonitorRectFromRectImpl((const struct tagRECT *)((char *)this + 840), &v34);
  v36 = 0LL;
  v37 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  v42 = 0;
  v45 = 0;
  v35 = 1065353216;
  v38 = 1065353216;
  v41 = 1065353216;
  v46 = 1065353216;
  v30 = _xmm;
  v32 = _xmm;
  v2 = (float)((float)((float)v34.right - (float)v34.left) * 0.5) + (float)v34.left;
  v31 = _xmm;
  v33 = _xmm;
  LODWORD(v43) = LODWORD(v2) ^ _xmm;
  v44 = COERCE_UNSIGNED_INT((float)((float)((float)v34.bottom - (float)v34.top) * 0.5) + (float)v34.top) ^ _xmm;
  D2D1::Matrix4x4F::operator*(
    (struct D2D1::Matrix4x4F *)&v30,
    (D2D1::Matrix4x4F *)v47,
    (const struct D2D1::Matrix4x4F *)&v35);
  v4 = v3 * *((float *)this + 230);
  v6 = v5[1];
  v30 = *v5;
  v7 = v5[2];
  v31 = v6;
  v8 = v5[3];
  v32 = v7;
  v33 = v8;
  v9 = (const struct D2D1::Matrix4x4F *)D2D1::Matrix4x4F::PerspectiveProjection((__int64)v47, v4);
  D2D1::Matrix4x4F::operator*((struct D2D1::Matrix4x4F *)&v30, (D2D1::Matrix4x4F *)&v35, v9);
  v11 = v10[1];
  v30 = *v10;
  v12 = v10[2];
  v31 = v11;
  v13 = v10[3];
  v36 = 0LL;
  v37 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  v42 = 0;
  v32 = v12;
  v33 = v13;
  v35 = 1065353216;
  v38 = 1065353216;
  v41 = 1065353216;
  v45 = 0;
  v43 = v2;
  v44 = v14;
  v46 = 1065353216;
  D2D1::Matrix4x4F::operator*(
    (struct D2D1::Matrix4x4F *)&v30,
    (D2D1::Matrix4x4F *)v47,
    (const struct D2D1::Matrix4x4F *)&v35);
  v16 = *v15;
  v17 = v15[1];
  v18 = v15[2];
  v19 = v15[3];
  v20 = *((_QWORD *)this + 35);
  LODWORD(v30) = v16.m128_i32[0];
  DWORD2(v30) = _mm_shuffle_ps(v16, v16, 170).m128_u32[0];
  DWORD1(v30) = _mm_shuffle_ps(v16, v16, 85).m128_u32[0];
  DWORD1(v31) = _mm_shuffle_ps(v17, v17, 85).m128_u32[0];
  DWORD2(v31) = _mm_shuffle_ps(v17, v17, 170).m128_u32[0];
  DWORD2(v32) = _mm_shuffle_ps(v18, v18, 170).m128_u32[0];
  DWORD1(v32) = _mm_shuffle_ps(v18, v18, 85).m128_u32[0];
  DWORD1(v33) = _mm_shuffle_ps(v19, v19, 85).m128_u32[0];
  LODWORD(v31) = v17.m128_i32[0];
  DWORD2(v33) = _mm_shuffle_ps(v19, v19, 170).m128_u32[0];
  LODWORD(v32) = v18.m128_i32[0];
  LODWORD(v33) = v19.m128_i32[0];
  HIDWORD(v30) = _mm_shuffle_ps(v16, v16, 255).m128_u32[0];
  v48[0] = v30;
  HIDWORD(v31) = _mm_shuffle_ps(v17, v17, 255).m128_u32[0];
  v48[1] = v31;
  HIDWORD(v32) = _mm_shuffle_ps(v18, v18, 255).m128_u32[0];
  v48[2] = v32;
  HIDWORD(v33) = _mm_shuffle_ps(v19, v19, 255).m128_u32[0];
  v48[3] = v33;
  v21 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _OWORD *))(**(_QWORD **)(v20 + 16) + 1064LL))(
          *(_QWORD *)(v20 + 16),
          *(unsigned int *)(v20 + 24),
          v48);
  v22 = v21;
  if ( v21 >= 0 )
  {
    v23 = *((_QWORD *)this + 35);
    v34.left = *(_DWORD *)(*((_QWORD *)this + 34) + 24LL);
    v24 = *(_DWORD *)(v23 + 24);
    v25 = *((_QWORD *)this + 36);
    v34.top = v24;
    v26 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct tagRECT *, __int64))(**(_QWORD **)(v25 + 16) + 1072LL))(
            *(_QWORD *)(v25 + 16),
            *(unsigned int *)(v25 + 24),
            &v34,
            2LL);
    v22 = v26;
    if ( v26 >= 0 )
    {
      v27 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))(**(_QWORD **)(*((_QWORD *)this + 37)
                                                                                            + 16LL)
                                                                              + 944LL))(
              *(_QWORD *)(*((_QWORD *)this + 37) + 16LL),
              *(unsigned int *)(*((_QWORD *)this + 37) + 24LL),
              *(unsigned int *)(*((_QWORD *)this + 36) + 24LL),
              0LL,
              *(_DWORD *)(*((_QWORD *)this + 36) + 24LL));
      v22 = v27;
      if ( v27 >= 0 )
      {
        v28 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 3) + 16LL) + 360LL))(
                *(_QWORD *)(*((_QWORD *)this + 3) + 16LL),
                *(unsigned int *)(*((_QWORD *)this + 3) + 24LL),
                *(unsigned int *)(*((_QWORD *)this + 37) + 24LL));
        v22 = v28;
        if ( v28 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v28, 0x769u);
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v27, 0x765u);
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v26, 0x75Du);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v21, 0x751u);
  }
  return v22;
}
