/*
 * XREFs of ?CreateSlowHitTestRegion@CPrimitiveGroup@@AEBAJXZ @ 0x18010C1D4
 * Callers:
 *     ?EnsureHitTestRegion@CPrimitiveGroup@@AEBAJXZ @ 0x18000C8D8 (-EnsureHitTestRegion@CPrimitiveGroup@@AEBAJXZ.c)
 * Callees:
 *     ?HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z @ 0x180055DD4 (-HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ @ 0x180076D04 (-IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?AddFilledPolygonToD2DSink@CPrimitiveGroup@@CAXPEAUID2D1GeometrySink@@PEAUD2D_POINT_2F@@@Z @ 0x18010BBF8 (-AddFilledPolygonToD2DSink@CPrimitiveGroup@@CAXPEAUID2D1GeometrySink@@PEAUD2D_POINT_2F@@@Z.c)
 */

__int64 __fastcall CPrimitiveGroup::CreateSlowHitTestRegion(CPrimitiveGroup *this)
{
  CPrimitiveGroup *v1; // rsi
  int D2DFactoryNoRef; // eax
  unsigned int v3; // edi
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rdi
  _BYTE *v6; // rcx
  unsigned __int64 v7; // rax
  bool v8; // zf
  FLOAT v9; // xmm2_4
  int v10; // xmm0_4
  unsigned __int64 v11; // rax
  struct D2D_POINT_2F *v12; // rcx
  __int64 v13; // rdx
  __m128 v14; // xmm3
  __m128 x_low; // xmm2
  __int64 v16; // rdx
  char v17; // di
  unsigned int v18; // ecx
  unsigned int v19; // eax
  unsigned int v20; // r13d
  __int64 v21; // rbx
  unsigned __int64 v22; // rcx
  char v23; // r12
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // r14
  unsigned __int64 v26; // rax
  unsigned int v27; // ecx
  __int64 v28; // rsi
  unsigned int v29; // r15d
  __int64 v30; // rax
  FLOAT v31; // xmm2_4
  int v32; // xmm0_4
  float *v33; // rcx
  struct CD2DFactory **v34; // rax
  __int64 v35; // rdx
  __m128 v36; // xmm3
  __m128 v37; // xmm2
  __int64 v38; // rax
  unsigned int v40; // [rsp+28h] [rbp-39h]
  struct ID2D1GeometrySink *v41; // [rsp+38h] [rbp-29h] BYREF
  __int64 v42; // [rsp+40h] [rbp-21h] BYREF
  struct CD2DFactory *v43; // [rsp+48h] [rbp-19h] BYREF
  struct D2D_POINT_2F v44; // [rsp+50h] [rbp-11h]
  CPrimitiveGroup *v45; // [rsp+58h] [rbp-9h]
  __int64 v46; // [rsp+60h] [rbp-1h]
  struct D2D_POINT_2F v47; // [rsp+68h] [rbp+7h] BYREF
  int v48; // [rsp+70h] [rbp+Fh]
  FLOAT y; // [rsp+74h] [rbp+13h]
  int v50; // [rsp+78h] [rbp+17h]
  int v51; // [rsp+7Ch] [rbp+1Bh]
  FLOAT v52; // [rsp+80h] [rbp+1Fh]
  int v53; // [rsp+84h] [rbp+23h]

  v42 = 0LL;
  v41 = 0LL;
  v1 = this;
  v45 = this;
  D2DFactoryNoRef = CD3DDeviceManager::HandleGetD2DFactoryNoRef(this, &v43);
  v3 = D2DFactoryNoRef;
  if ( D2DFactoryNoRef < 0 )
  {
    v40 = 1343;
    goto LABEL_42;
  }
  D2DFactoryNoRef = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)v43 + 3) + 80LL))(
                      *((_QWORD *)v43 + 3),
                      &v42);
  v3 = D2DFactoryNoRef;
  if ( D2DFactoryNoRef < 0 )
  {
    v40 = 1345;
    goto LABEL_42;
  }
  D2DFactoryNoRef = (*(__int64 (__fastcall **)(__int64, struct ID2D1GeometrySink **))(*(_QWORD *)v42 + 136LL))(
                      v42,
                      &v41);
  v3 = D2DFactoryNoRef;
  if ( D2DFactoryNoRef < 0 )
  {
    v40 = 1347;
    goto LABEL_42;
  }
  (*(void (__fastcall **)(struct ID2D1GeometrySink *, __int64))(*(_QWORD *)v41 + 24LL))(v41, 1LL);
  v4 = *((_QWORD *)v1 + 48);
  v5 = v4 + *((_QWORD *)v1 + 49);
  while ( v4 < v5 )
  {
    v6 = (_BYTE *)(v4 + 16);
    v7 = v4;
    v4 += 17LL;
    if ( (unsigned __int64)v6 > v5 || v4 > v5 )
    {
      v3 = -2147467259;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x557u);
      goto LABEL_45;
    }
    v8 = *v6 == 0;
    v9 = *(float *)v7;
    v10 = *(_DWORD *)(v7 + 8);
    v47.y = *(FLOAT *)(v7 + 4);
    y = v47.y;
    v51 = *(_DWORD *)(v7 + 12);
    v53 = v51;
    v47.x = v9;
    v48 = v10;
    v50 = v10;
    v52 = v9;
    if ( !v8 )
    {
      v11 = v4;
      v4 += 24LL;
      if ( v4 > v5 )
      {
        v3 = -2147467259;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x574u);
        goto LABEL_45;
      }
      v12 = &v47;
      v13 = 4LL;
      do
      {
        v14 = (__m128)*(unsigned int *)(v11 + 8);
        v44 = *v12;
        x_low = (__m128)LODWORD(v44.x);
        v14.m128_f32[0] = (float)((float)(v14.m128_f32[0] * v44.y) + (float)(*(float *)v11 * v44.x))
                        + *(float *)(v11 + 16);
        x_low.m128_f32[0] = (float)((float)(v44.x * *(float *)(v11 + 4)) + (float)(v44.y * *(float *)(v11 + 12)))
                          + *(float *)(v11 + 20);
        *v12++ = (struct D2D_POINT_2F)_mm_unpacklo_ps(v14, x_low).m128_u64[0];
        --v13;
      }
      while ( v13 );
    }
    CPrimitiveGroup::AddFilledPolygonToD2DSink(v41, &v47);
  }
  v16 = *((_QWORD *)v1 + 44);
  v17 = 0;
  v18 = *((_DWORD *)v1 + 90);
  v19 = 0;
  v46 = v16;
  LODWORD(v44.x) = v18;
  while ( 1 )
  {
    v20 = v19 + 144;
    if ( v19 + 144 > v18 )
      break;
    v21 = v16 + v19;
    v22 = *(unsigned int *)(v21 + 16);
    if ( (*(_BYTE *)(v21 + 4) & 0x40) == 0 || (_DWORD)v22 == *((_DWORD *)v1 + 79) )
    {
      v23 = 0;
      if ( v17 || (*(_BYTE *)(v21 + 4) & 2) != 0 )
        goto LABEL_36;
    }
    else
    {
      v23 = 1;
    }
    v24 = *((_QWORD *)v1 + 47);
    if ( v22 >= v24
      || (v25 = 148LL * *(unsigned int *)(v21 + 20), v25 > 0xFFFFFFFF)
      || (v26 = (unsigned int)(v25 + v22), (unsigned int)v26 < (unsigned int)v25)
      || v26 > v24 )
    {
      v3 = -2147467259;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x5A6u);
      goto LABEL_45;
    }
    v27 = 0;
    v28 = *(unsigned int *)(v21 + 16) + *((_QWORD *)v1 + 46);
    while ( 1 )
    {
      v29 = v27 + 148;
      if ( v27 + 148 > (unsigned int)v25 )
        break;
      v30 = v28 + v27;
      v31 = *(float *)v30;
      v32 = *(_DWORD *)(v30 + 8);
      v47.y = *(FLOAT *)(v30 + 4);
      y = v47.y;
      v51 = *(_DWORD *)(v30 + 12);
      v53 = v51;
      v47.x = v31;
      v48 = v32;
      v50 = v32;
      v52 = v31;
      if ( !D2D1::Matrix3x2F::IsIdentity((D2D1::Matrix3x2F *)(v30 + 16)) )
      {
        v34 = (struct CD2DFactory **)&v47;
        v35 = 4LL;
        do
        {
          v43 = *v34;
          v36 = (__m128)HIDWORD(v43);
          v37 = (__m128)(unsigned int)v43;
          v36.m128_f32[0] = (float)((float)(*((float *)&v43 + 1) * v33[2]) + (float)(*v33 * *(float *)&v43)) + v33[4];
          v37.m128_f32[0] = (float)((float)(*(float *)&v43 * v33[1]) + (float)(*((float *)&v43 + 1) * v33[3])) + v33[5];
          *v34++ = (struct CD2DFactory *)_mm_unpacklo_ps(v36, v37).m128_u64[0];
          --v35;
        }
        while ( v35 );
      }
      CPrimitiveGroup::AddFilledPolygonToD2DSink(v41, &v47);
      v27 = v29;
    }
    v1 = v45;
    v16 = v46;
LABEL_36:
    v18 = LODWORD(v44.x);
    if ( (*(_BYTE *)(v21 + 4) & 0x40) != 0 )
      v17 = v23;
    v19 = v20;
  }
  D2DFactoryNoRef = (*(__int64 (__fastcall **)(struct ID2D1GeometrySink *))(*(_QWORD *)v41 + 72LL))(v41);
  v3 = D2DFactoryNoRef;
  if ( D2DFactoryNoRef >= 0 )
  {
    v38 = v42;
    v42 = 0LL;
    *((_QWORD *)v1 + 7) = v38;
    *((_BYTE *)v1 + 64) = 1;
  }
  else
  {
    v40 = 1495;
LABEL_42:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DFactoryNoRef, v40);
  }
LABEL_45:
  if ( v41 )
    (*(void (__fastcall **)(struct ID2D1GeometrySink *))(*(_QWORD *)v41 + 16LL))(v41);
  if ( v42 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
  return v3;
}
