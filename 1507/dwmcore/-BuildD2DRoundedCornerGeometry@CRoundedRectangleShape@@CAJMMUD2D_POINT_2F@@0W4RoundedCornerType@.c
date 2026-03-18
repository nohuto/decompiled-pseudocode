/*
 * XREFs of ?BuildD2DRoundedCornerGeometry@CRoundedRectangleShape@@CAJMMUD2D_POINT_2F@@0W4RoundedCornerType@1@PEAPEAUID2D1Geometry@@@Z @ 0x18014AD10
 * Callers:
 *     ?BuildRoundedRectangleShape@CRoundedRectangleShape@@AEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x18014B3AC (-BuildRoundedRectangleShape@CRoundedRectangleShape@@AEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@.c)
 * Callees:
 *     ?HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z @ 0x180055DD4 (-HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CRoundedRectangleShape::BuildD2DRoundedCornerGeometry(
        CD3DDeviceManager *a1,
        float a2,
        __int64 a3,
        __int64 a4,
        int a5,
        _QWORD *a6)
{
  float v6; // xmm0_4
  float v7; // xmm11_4
  float v8; // xmm9_4
  unsigned int v9; // edi
  float v10; // xmm8_4
  float v12; // xmm7_4
  float v13; // xmm6_4
  int D2DFactoryNoRef; // eax
  struct CD2DFactory *v15; // rsi
  float v16; // xmm0_4
  float v17; // xmm0_4
  float v18; // xmm6_4
  float v19; // xmm10_4
  float v20; // xmm1_4
  float v21; // xmm0_4
  float v22; // xmm0_4
  float v23; // xmm0_4
  float v24; // xmm0_4
  float v25; // xmm0_4
  unsigned int v27; // [rsp+20h] [rbp-E0h]
  struct CD2DFactory *v28; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v29; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v30; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v31; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v32; // [rsp+50h] [rbp-B0h]
  __int64 v33; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v34; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v35; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v36[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v37; // [rsp+80h] [rbp-80h]
  __int64 v38; // [rsp+88h] [rbp-78h]
  __int64 v39; // [rsp+A0h] [rbp-60h]
  __m128d v40; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v41; // [rsp+C0h] [rbp-40h]
  int v42; // [rsp+C8h] [rbp-38h]

  v36[1] = a4;
  v7 = v6;
  v8 = *(float *)&a4;
  v38 = a3;
  v9 = 0;
  v35 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v36[0] = 0LL;
  v28 = 0LL;
  v10 = *((float *)&a4 + 1);
  LODWORD(v12) = a3;
  v13 = *((float *)&a3 + 1);
  v37 = a4;
  if ( v6 <= 0.0 || a2 <= 0.0 || !*a6 )
    return v9;
  D2DFactoryNoRef = CD3DDeviceManager::HandleGetD2DFactoryNoRef(a1, &v28);
  v9 = D2DFactoryNoRef;
  if ( D2DFactoryNoRef < 0 )
  {
    v27 = 87;
LABEL_54:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DFactoryNoRef, v27);
    goto LABEL_59;
  }
  v15 = v28;
  D2DFactoryNoRef = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)v28 + 3) + 80LL))(
                      *((_QWORD *)v28 + 3),
                      &v35);
  v9 = D2DFactoryNoRef;
  if ( D2DFactoryNoRef < 0 )
  {
    v27 = 90;
    goto LABEL_54;
  }
  D2DFactoryNoRef = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v35 + 136LL))(v35, &v33);
  v9 = D2DFactoryNoRef;
  if ( D2DFactoryNoRef < 0 )
  {
    v27 = 91;
    goto LABEL_54;
  }
  D2DFactoryNoRef = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)v15 + 3) + 80LL))(
                      *((_QWORD *)v15 + 3),
                      &v34);
  v9 = D2DFactoryNoRef;
  if ( D2DFactoryNoRef < 0 )
  {
    v27 = 92;
    goto LABEL_54;
  }
  D2DFactoryNoRef = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v34 + 136LL))(v34, v36);
  v9 = D2DFactoryNoRef;
  if ( D2DFactoryNoRef < 0 )
  {
    v27 = 93;
    goto LABEL_54;
  }
  v32 = 0LL;
  v30 = 0LL;
  v28 = 0LL;
  v31 = 0LL;
  v29 = 0LL;
  switch ( a5 )
  {
    case 0:
      v20 = v6 + v10;
      if ( v13 <= (float)(v6 + v10) )
        v25 = v6 + v10;
      else
        v25 = v13;
      *((float *)&v32 + 1) = v25;
      v22 = v12 + a2;
      *(float *)&v32 = v12;
      *((float *)&v30 + 1) = v10;
      *(float *)&v30 = v12 + a2;
      if ( v8 > (float)(v12 + a2) )
        v22 = v8;
      *((float *)&v28 + 1) = v13;
      v19 = v13 - v10;
      v18 = v8 - v12;
      goto LABEL_43;
    case 1:
      if ( (float)(v8 - v6) <= v12 )
        v23 = v8 - v6;
      else
        v23 = v12;
      v32 = __PAIR64__(LODWORD(v13), LODWORD(v23));
      v24 = v13 + a2;
      *(float *)&v30 = v8;
      *((float *)&v30 + 1) = v13 + a2;
      if ( v10 > (float)(v13 + a2) )
        v24 = v10;
      *((float *)&v31 + 1) = v13;
      v28 = (struct CD2DFactory *)__PAIR64__(LODWORD(v24), LODWORD(v12));
      v19 = v8 - v12;
      *(float *)&v31 = v8 - v7;
      v29 = __PAIR64__(LODWORD(a2), LODWORD(v7));
      v18 = v10 - v13;
LABEL_44:
      (*(void (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)v33 + 40LL))(v33, v32, 0LL);
      if ( v19 > v7 )
        (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v33 + 80LL))(v33, v31);
      v39 = 0x100000000LL;
      v40 = _mm_unpacklo_pd((__m128d)v30, (__m128d)v29);
      v41 = 0x100000000LL;
      v42 = 0;
      (*(void (__fastcall **)(__int64, __m128d *))(*(_QWORD *)v33 + 112LL))(v33, &v40);
      if ( v18 > a2 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v33 + 80LL))(v33, v37);
      (*(void (__fastcall **)(__int64, struct CD2DFactory *))(*(_QWORD *)v33 + 80LL))(v33, v28);
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v33 + 64LL))(v33, 1LL);
      D2DFactoryNoRef = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v33 + 72LL))(v33);
      v9 = D2DFactoryNoRef;
      if ( D2DFactoryNoRef >= 0 )
      {
        D2DFactoryNoRef = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD, _DWORD, _QWORD))(*(_QWORD *)*a6 + 88LL))(
                            *a6,
                            v35,
                            1LL,
                            0LL,
                            0,
                            v36[0]);
        v9 = D2DFactoryNoRef;
        if ( D2DFactoryNoRef >= 0 )
        {
          D2DFactoryNoRef = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v36[0] + 72LL))(v36[0]);
          v9 = D2DFactoryNoRef;
          if ( D2DFactoryNoRef >= 0 )
          {
            if ( *a6 )
            {
              (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a6 + 16LL))(*a6);
              *a6 = 0LL;
            }
            *a6 = v34;
            v34 = 0LL;
            goto LABEL_59;
          }
          v27 = 187;
        }
        else
        {
          v27 = 185;
        }
      }
      else
      {
        v27 = 174;
      }
      goto LABEL_54;
    case 2:
      v20 = v10 - v6;
      if ( (float)(v10 - v6) <= v13 )
        v21 = v10 - v6;
      else
        v21 = v13;
      *((float *)&v32 + 1) = v21;
      v22 = v12 - a2;
      *(float *)&v32 = v12;
      *((float *)&v30 + 1) = v10;
      *(float *)&v30 = v12 - a2;
      if ( (float)(v12 - a2) > v8 )
        v22 = v8;
      *((float *)&v28 + 1) = v13;
      v19 = v10 - v13;
      v18 = v12 - v8;
LABEL_43:
      v29 = __PAIR64__(LODWORD(v7), LODWORD(a2));
      v31 = __PAIR64__(LODWORD(v20), LODWORD(v12));
      *(float *)&v28 = v22;
      goto LABEL_44;
    case 3:
      if ( v12 <= (float)(v8 + v6) )
        v16 = v8 + v6;
      else
        v16 = v12;
      v32 = __PAIR64__(LODWORD(v13), LODWORD(v16));
      v17 = v13 - a2;
      *(float *)&v30 = v8;
      *((float *)&v30 + 1) = v13 - a2;
      if ( (float)(v13 - a2) > v10 )
        v17 = v10;
      v28 = (struct CD2DFactory *)__PAIR64__(LODWORD(v17), LODWORD(v12));
      *((float *)&v31 + 1) = v13;
      v18 = v13 - v10;
      *(float *)&v31 = v8 + v7;
      v29 = __PAIR64__(LODWORD(a2), LODWORD(v7));
      v19 = v12 - v8;
      goto LABEL_44;
  }
  v9 = -2147024809;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x93u);
LABEL_59:
  if ( v35 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
    v35 = 0LL;
  }
  if ( v33 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
    v33 = 0LL;
  }
  if ( v34 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
    v34 = 0LL;
  }
  if ( v36[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v36[0] + 16LL))(v36[0]);
  return v9;
}
