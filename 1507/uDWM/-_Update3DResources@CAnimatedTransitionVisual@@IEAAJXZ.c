/*
 * XREFs of ?_Update3DResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180089E60
 * Callers:
 *     ?Validate3DVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180089B24 (-Validate3DVisual@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z @ 0x180009228 (-GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z.c)
 *     ?SendWithData@CResource@@QEAAJPEAXI0I@Z @ 0x180017918 (-SendWithData@CResource@@QEAAJPEAXI0I@Z.c)
 *     ?Send@CResource@@QEAAJPEAXI@Z @ 0x180017A34 (-Send@CResource@@QEAAJPEAXI@Z.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     memset_0 @ 0x1800498C6 (memset_0.c)
 *     ??DMatrix4x4F@D2D1@@QEBA?AV01@AEBV01@@Z @ 0x180088F5C (--DMatrix4x4F@D2D1@@QEBA-AV01@AEBV01@@Z.c)
 *     ?PerspectiveProjection@Matrix4x4F@D2D1@@SA?AV12@M@Z @ 0x180089354 (-PerspectiveProjection@Matrix4x4F@D2D1@@SA-AV12@M@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::_Update3DResources(CAnimatedTransitionVisual *this)
{
  float v2; // xmm6_4
  __int128 *v3; // rax
  __int128 v4; // xmm2
  __int128 v5; // xmm0
  __int128 v6; // xmm2
  float v7; // xmm4_4
  const struct D2D1::Matrix4x4F *v8; // rax
  __int128 *v9; // rax
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  int v13; // xmm5_4
  __m128 *v14; // rax
  __m128 v15; // xmm2
  __m128 v16; // xmm3
  __m128 v17; // xmm4
  __m128 v18; // xmm5
  CResource *v19; // rcx
  int v20; // eax
  unsigned int v21; // ebx
  __int64 v22; // rax
  LONG v23; // ecx
  __int64 v24; // rax
  int v25; // eax
  float v26; // xmm0_4
  CResource *v27; // rcx
  int v28; // eax
  CResource *v29; // rcx
  __int64 v30; // rax
  int v31; // eax
  __int128 v33; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v34; // [rsp+48h] [rbp-C0h]
  __int128 v35; // [rsp+58h] [rbp-B0h]
  __int128 v36; // [rsp+68h] [rbp-A0h]
  int v37; // [rsp+78h] [rbp-90h] BYREF
  __int64 v38; // [rsp+7Ch] [rbp-8Ch]
  __int64 v39; // [rsp+84h] [rbp-84h]
  int v40; // [rsp+8Ch] [rbp-7Ch]
  __int64 v41; // [rsp+90h] [rbp-78h]
  __int64 v42; // [rsp+98h] [rbp-70h]
  int v43; // [rsp+A0h] [rbp-68h]
  int v44; // [rsp+A4h] [rbp-64h]
  int v45; // [rsp+A8h] [rbp-60h]
  float v46; // [rsp+ACh] [rbp-5Ch]
  int v47; // [rsp+B0h] [rbp-58h]
  int v48; // [rsp+B4h] [rbp-54h]
  struct tagRECT v49; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE v50[20]; // [rsp+C8h] [rbp-40h] BYREF
  int v51; // [rsp+DCh] [rbp-2Ch]
  int v52; // [rsp+E8h] [rbp-20h] BYREF
  _BYTE v53[4]; // [rsp+ECh] [rbp-1Ch] BYREF
  __int128 v54; // [rsp+F0h] [rbp-18h]
  __int128 v55; // [rsp+100h] [rbp-8h]
  __int128 v56; // [rsp+110h] [rbp+8h]
  __int128 v57; // [rsp+120h] [rbp+18h]

  CTransitionVisualController::GetMonitorRectFromRectImpl((const struct tagRECT *)((char *)this + 840), &v49);
  v2 = (float)((float)((float)v49.bottom - (float)v49.top) * 0.5) + (float)v49.top;
  v38 = 0LL;
  v39 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  v44 = 0;
  v47 = 0;
  v33 = _xmm;
  v34 = _xmm;
  v35 = _xmm;
  v36 = _xmm;
  v45 = COERCE_UNSIGNED_INT((float)((float)((float)v49.right - (float)v49.left) * 0.5) + (float)v49.left) ^ _xmm;
  LODWORD(v46) = LODWORD(v2) ^ _xmm;
  v37 = 1065353216;
  v40 = 1065353216;
  v43 = 1065353216;
  v48 = 1065353216;
  D2D1::Matrix4x4F::operator*(
    (struct D2D1::Matrix4x4F *)&v33,
    (D2D1::Matrix4x4F *)&v52,
    (const struct D2D1::Matrix4x4F *)&v37);
  v4 = v3[1];
  v33 = *v3;
  v5 = v3[2];
  v34 = v4;
  v6 = v3[3];
  v35 = v5;
  v36 = v6;
  v8 = (const struct D2D1::Matrix4x4F *)D2D1::Matrix4x4F::PerspectiveProjection((__int64)&v52, v7);
  D2D1::Matrix4x4F::operator*((struct D2D1::Matrix4x4F *)&v33, (D2D1::Matrix4x4F *)&v37, v8);
  v10 = v9[1];
  v33 = *v9;
  v11 = v9[2];
  v34 = v10;
  v12 = v9[3];
  v38 = 0LL;
  v39 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  v44 = 0;
  v47 = 0;
  v35 = v11;
  v36 = v12;
  v45 = v13;
  v46 = v2;
  v37 = 1065353216;
  v40 = 1065353216;
  v43 = 1065353216;
  v48 = 1065353216;
  D2D1::Matrix4x4F::operator*(
    (struct D2D1::Matrix4x4F *)&v33,
    (D2D1::Matrix4x4F *)&v52,
    (const struct D2D1::Matrix4x4F *)&v37);
  v15 = *v14;
  v16 = v14[1];
  v17 = v14[2];
  v18 = v14[3];
  LODWORD(v33) = *v14;
  HIDWORD(v33) = v14->m128_i32[3];
  DWORD1(v33) = _mm_shuffle_ps(v15, v15, 85).m128_u32[0];
  DWORD2(v33) = _mm_shuffle_ps(v15, v15, 170).m128_u32[0];
  LODWORD(v34) = v16.m128_i32[0];
  DWORD1(v34) = _mm_shuffle_ps(v16, v16, 85).m128_u32[0];
  *((_QWORD *)&v34 + 1) = __PAIR64__(v14[1].m128_i32[3], _mm_shuffle_ps(v16, v16, 170).m128_u32[0]);
  DWORD1(v35) = _mm_shuffle_ps(v17, v17, 85).m128_u32[0];
  DWORD2(v35) = _mm_shuffle_ps(v17, v17, 170).m128_u32[0];
  LODWORD(v35) = v17.m128_i32[0];
  v17.m128_i32[0] = v14[2].m128_i32[3];
  LODWORD(v36) = v18.m128_i32[0];
  HIDWORD(v36) = v14[3].m128_i32[3];
  HIDWORD(v35) = v17.m128_i32[0];
  DWORD1(v36) = _mm_shuffle_ps(v18, v18, 85).m128_u32[0];
  DWORD2(v36) = _mm_shuffle_ps(v18, v18, 170).m128_u32[0];
  v52 = 234;
  memset_0(v53, 0, 0x44uLL);
  v19 = (CResource *)*((_QWORD *)this + 35);
  v54 = v33;
  v55 = v34;
  v56 = v35;
  v57 = v36;
  v20 = CResource::Send(v19, &v52, 0x48u);
  v21 = v20;
  if ( v20 >= 0 )
  {
    v22 = *((_QWORD *)this + 34);
    *(_QWORD *)v50 = _mm_load_si128((const __m128i *)&_xmm).m128i_u64[0];
    *(_QWORD *)&v50[8] = 8LL;
    v23 = *(_DWORD *)(v22 + 24);
    v24 = *((_QWORD *)this + 35);
    v49.left = v23;
    v49.top = *(_DWORD *)(v24 + 24);
    v25 = CResource::SendWithData(*((CResource **)this + 36), v50, 0x10u, &v49, 8u);
    v21 = v25;
    if ( v25 >= 0 )
    {
      v26 = *((float *)this + 182);
      *(_DWORD *)v50 = 151;
      *(_OWORD *)&v50[4] = 0uLL;
      v51 = 0;
      v51 = *(_DWORD *)(*((_QWORD *)this + 36) + 24LL);
      v27 = (CResource *)*((_QWORD *)this + 37);
      *(double *)&v50[8] = v26;
      v28 = CResource::Send(v27, v50, 0x18u);
      v21 = v28;
      if ( v28 >= 0 )
      {
        v29 = (CResource *)*((_QWORD *)this + 3);
        *(_QWORD *)&v49.top = 0LL;
        v30 = *((_QWORD *)this + 37);
        v49.left = 45;
        v49.right = *(_DWORD *)(v30 + 24);
        v31 = CResource::Send(v29, &v49, 0xCu);
        v21 = v31;
        if ( v31 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v31, 0x765u);
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v28, 0x761u);
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v25, 0x759u);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v20, 0x747u);
  }
  return v21;
}
