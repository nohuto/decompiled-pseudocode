/*
 * XREFs of ?BuildRoundedRectangleShape@CRoundedRectangleShape@@AEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x18014B3AC
 * Callers:
 *     ?GetD2DGeometry@CRoundedRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x18014B850 (-GetD2DGeometry@CRoundedRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 * Callees:
 *     ?Is2DAffine@CBaseMatrix@@QEBAHH@Z @ 0x180022410 (-Is2DAffine@CBaseMatrix@@QEBAHH@Z.c)
 *     ?HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z @ 0x180055DD4 (-HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?CreateRectangleGeometry@CD2DFactory@@QEAAJAEBUD2D_RECT_F@@PEAPEAUID2D1RectangleGeometry@@@Z @ 0x1800DD448 (-CreateRectangleGeometry@CD2DFactory@@QEAAJAEBUD2D_RECT_F@@PEAPEAUID2D1RectangleGeometry@@@Z.c)
 *     ?Transform@CBaseMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z @ 0x1800DEA3C (-Transform@CBaseMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z.c)
 *     ?BuildD2DRoundedCornerGeometry@CRoundedRectangleShape@@CAJMMUD2D_POINT_2F@@0W4RoundedCornerType@1@PEAPEAUID2D1Geometry@@@Z @ 0x18014AD10 (-BuildD2DRoundedCornerGeometry@CRoundedRectangleShape@@CAJMMUD2D_POINT_2F@@0W4RoundedCornerType@.c)
 */

__int64 __fastcall CRoundedRectangleShape::BuildRoundedRectangleShape(
        struct D2D_RECT_F *this,
        const struct CMILMatrix *a2,
        struct ID2D1Geometry **a3)
{
  int D2DFactoryNoRef; // eax
  unsigned int v7; // edi
  int v8; // edx
  CBaseMatrix *v9; // rcx
  FLOAT left; // xmm2_4
  FLOAT right; // xmm0_4
  int v12; // eax
  int v13; // eax
  int v14; // eax
  CD3DDeviceManager *v15; // rcx
  CD2DFactory *v16; // rax
  int v17; // eax
  __int64 v18; // xmm0_8
  __int64 v19; // xmm1_8
  int v20; // eax
  CD3DDeviceManager *v21; // rcx
  int v22; // eax
  CD3DDeviceManager *v23; // rcx
  int v24; // eax
  CD3DDeviceManager *v25; // rcx
  int v26; // eax
  CD2DFactory *v27; // rsi
  CD2DFactory *v29; // [rsp+38h] [rbp-49h] BYREF
  __int64 v30; // [rsp+40h] [rbp-41h] BYREF
  CD2DFactory *v31; // [rsp+48h] [rbp-39h] BYREF
  struct ID2D1RectangleGeometry *v32; // [rsp+50h] [rbp-31h] BYREF
  struct D2D_RECT_F v33; // [rsp+58h] [rbp-29h] BYREF
  FLOAT v34; // [rsp+68h] [rbp-19h]
  FLOAT bottom; // [rsp+6Ch] [rbp-15h]
  FLOAT v36; // [rsp+70h] [rbp-11h]
  FLOAT v37; // [rsp+74h] [rbp-Dh]
  _DWORD v38[8]; // [rsp+78h] [rbp-9h] BYREF

  v32 = 0LL;
  v31 = 0LL;
  v30 = 0LL;
  v29 = 0LL;
  D2DFactoryNoRef = CD3DDeviceManager::HandleGetD2DFactoryNoRef((CD3DDeviceManager *)this, &v29);
  v7 = D2DFactoryNoRef;
  if ( D2DFactoryNoRef < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DFactoryNoRef, 0xE4u);
    goto LABEL_28;
  }
  if ( !a2 || (unsigned int)CBaseMatrix::Is2DAffine(a2, 1) )
  {
    v33 = this[1];
    v17 = CD2DFactory::CreateRectangleGeometry(v29, &v33, &v32);
    v7 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0xEEu);
      goto LABEL_28;
    }
    v16 = v32;
    v32 = 0LL;
  }
  else
  {
    left = this[1].left;
    right = this[1].right;
    v33.top = this[1].top;
    v33.bottom = v33.top;
    bottom = this[1].bottom;
    v37 = bottom;
    v33.left = left;
    v33.right = right;
    v34 = right;
    v36 = left;
    CBaseMatrix::Transform(v9, (const struct MilPoint2F *)&v33, (struct MilPoint2F *)v38, v8 + 3);
    v12 = (*(__int64 (__fastcall **)(_QWORD, CD2DFactory **))(**((_QWORD **)v29 + 3) + 80LL))(
            *((_QWORD *)v29 + 3),
            &v31);
    v7 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x100u);
      goto LABEL_28;
    }
    v13 = (*(__int64 (__fastcall **)(CD2DFactory *, __int64 *))(*(_QWORD *)v31 + 136LL))(v31, &v30);
    v7 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x101u);
      goto LABEL_28;
    }
    (*(void (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)v30 + 40LL))(
      v30,
      _mm_unpacklo_ps((__m128)v38[0], (__m128)v38[1]).m128_u64[0],
      0LL);
    (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v30 + 80LL))(
      v30,
      _mm_unpacklo_ps((__m128)v38[2], (__m128)v38[3]).m128_u64[0]);
    (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v30 + 80LL))(
      v30,
      _mm_unpacklo_ps((__m128)v38[4], (__m128)v38[5]).m128_u64[0]);
    (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v30 + 80LL))(
      v30,
      _mm_unpacklo_ps((__m128)v38[6], (__m128)v38[7]).m128_u64[0]);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v30 + 64LL))(v30, 1LL);
    v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v30 + 72LL))(v30);
    v7 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x10Bu);
      goto LABEL_28;
    }
    v16 = v31;
    v31 = 0LL;
  }
  v18 = _mm_unpacklo_ps((__m128)LODWORD(this[1].right), (__m128)LODWORD(this[1].top)).m128_u64[0];
  v19 = _mm_unpacklo_ps((__m128)LODWORD(this[1].left), (__m128)LODWORD(this[1].bottom)).m128_u64[0];
  v29 = v16;
  v20 = CRoundedRectangleShape::BuildD2DRoundedCornerGeometry(v15, this[2].left, v19, v18, 0, &v29);
  v7 = v20;
  if ( v20 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0x118u);
LABEL_24:
    v27 = v29;
    goto LABEL_26;
  }
  v22 = CRoundedRectangleShape::BuildD2DRoundedCornerGeometry(
          v21,
          this[2].bottom,
          _mm_unpacklo_ps((__m128)LODWORD(this[1].left), (__m128)LODWORD(this[1].top)).m128_i64[0],
          _mm_unpacklo_ps((__m128)LODWORD(this[1].right), (__m128)LODWORD(this[1].bottom)).m128_i64[0],
          1,
          &v29);
  v7 = v22;
  if ( v22 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0x11Fu);
    goto LABEL_24;
  }
  v24 = CRoundedRectangleShape::BuildD2DRoundedCornerGeometry(
          v23,
          this[3].right,
          _mm_unpacklo_ps((__m128)LODWORD(this[1].right), (__m128)LODWORD(this[1].top)).m128_i64[0],
          _mm_unpacklo_ps((__m128)LODWORD(this[1].left), (__m128)LODWORD(this[1].bottom)).m128_i64[0],
          2,
          &v29);
  v7 = v24;
  if ( v24 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, 0x126u);
    goto LABEL_24;
  }
  v26 = CRoundedRectangleShape::BuildD2DRoundedCornerGeometry(
          v25,
          this[3].top,
          _mm_unpacklo_ps((__m128)LODWORD(this[1].right), (__m128)LODWORD(this[1].bottom)).m128_i64[0],
          _mm_unpacklo_ps((__m128)LODWORD(this[1].left), (__m128)LODWORD(this[1].top)).m128_i64[0],
          3,
          &v29);
  v7 = v26;
  if ( v26 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0x12Du);
    goto LABEL_24;
  }
  v27 = 0LL;
  *a3 = v29;
LABEL_26:
  if ( v27 )
    (*(void (__fastcall **)(CD2DFactory *))(*(_QWORD *)v27 + 16LL))(v27);
LABEL_28:
  if ( v32 )
  {
    (*(void (__fastcall **)(struct ID2D1RectangleGeometry *))(*(_QWORD *)v32 + 16LL))(v32);
    v32 = 0LL;
  }
  if ( v31 )
  {
    (*(void (__fastcall **)(CD2DFactory *))(*(_QWORD *)v31 + 16LL))(v31);
    v31 = 0LL;
  }
  if ( v30 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
  return v7;
}
