/*
 * XREFs of ?GetD2DGeometry@CRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180078F90
 * Callers:
 *     ?D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18000D5F4 (-D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1800782D0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?GetTightBounds@CRectangleShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180078DC0 (-GetTightBounds@CRectangleShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@.c)
 * Callees:
 *     ?HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z @ 0x180055DD4 (-HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?Transform@CBaseMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z @ 0x1800DEA3C (-Transform@CBaseMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z.c)
 */

__int64 __fastcall CRectangleShape::GetD2DGeometry(
        CRectangleShape *this,
        const struct CMILMatrix *a2,
        struct ID2D1Geometry **a3)
{
  _QWORD *v5; // rsi
  int v6; // r14d
  int v7; // eax
  int v8; // eax
  int v10; // xmm2_4
  unsigned int v11; // xmm0_4
  CD3DDeviceManager *v12; // rcx
  int D2DFactoryNoRef; // eax
  unsigned int v14; // [rsp+28h] [rbp-59h]
  __int64 v15; // [rsp+38h] [rbp-49h] BYREF
  struct ID2D1Geometry *v16; // [rsp+40h] [rbp-41h] BYREF
  struct CD2DFactory *v17; // [rsp+48h] [rbp-39h] BYREF
  __int128 v18; // [rsp+50h] [rbp-31h] BYREF
  unsigned int v19; // [rsp+60h] [rbp-21h]
  int v20; // [rsp+64h] [rbp-1Dh]
  int v21; // [rsp+68h] [rbp-19h]
  int v22; // [rsp+6Ch] [rbp-15h]
  _DWORD v23[8]; // [rsp+70h] [rbp-11h] BYREF

  v16 = 0LL;
  v15 = 0LL;
  if ( a2 )
  {
    v10 = *((_DWORD *)this + 2);
    v11 = *((_DWORD *)this + 4);
    DWORD1(v18) = *((_DWORD *)this + 3);
    v20 = *((_DWORD *)this + 5);
    v22 = v20;
    LODWORD(v18) = v10;
    *((_QWORD *)&v18 + 1) = __PAIR64__(DWORD1(v18), v11);
    v19 = v11;
    v21 = v10;
    v17 = 0LL;
    CBaseMatrix::Transform(a2, (const struct MilPoint2F *)&v18, (struct MilPoint2F *)v23, 4u);
    D2DFactoryNoRef = CD3DDeviceManager::HandleGetD2DFactoryNoRef(v12, &v17);
    v6 = D2DFactoryNoRef;
    if ( D2DFactoryNoRef >= 0 )
    {
      D2DFactoryNoRef = (*(__int64 (__fastcall **)(_QWORD, struct ID2D1Geometry **))(**((_QWORD **)v17 + 3) + 80LL))(
                          *((_QWORD *)v17 + 3),
                          &v16);
      v6 = D2DFactoryNoRef;
      if ( D2DFactoryNoRef >= 0 )
      {
        D2DFactoryNoRef = (*(__int64 (__fastcall **)(struct ID2D1Geometry *, __int64 *))(*(_QWORD *)v16 + 136LL))(
                            v16,
                            &v15);
        v6 = D2DFactoryNoRef;
        if ( D2DFactoryNoRef >= 0 )
        {
          (*(void (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)v15 + 40LL))(
            v15,
            _mm_unpacklo_ps((__m128)v23[0], (__m128)v23[1]).m128_u64[0],
            0LL);
          (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v15 + 80LL))(
            v15,
            _mm_unpacklo_ps((__m128)v23[2], (__m128)v23[3]).m128_u64[0]);
          (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v15 + 80LL))(
            v15,
            _mm_unpacklo_ps((__m128)v23[4], (__m128)v23[5]).m128_u64[0]);
          (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v15 + 80LL))(
            v15,
            _mm_unpacklo_ps((__m128)v23[6], (__m128)v23[7]).m128_u64[0]);
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 64LL))(v15, 1LL);
          D2DFactoryNoRef = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 72LL))(v15);
          v6 = D2DFactoryNoRef;
          if ( D2DFactoryNoRef >= 0 )
          {
            *a3 = v16;
            goto LABEL_25;
          }
          v14 = 142;
        }
        else
        {
          v14 = 133;
        }
      }
      else
      {
        v14 = 132;
      }
    }
    else
    {
      v14 = 130;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DFactoryNoRef, v14);
  }
  else
  {
    v5 = (_QWORD *)((char *)this + 24);
    v6 = 0;
    if ( !*((_QWORD *)this + 3) )
    {
      v17 = 0LL;
      v7 = CD3DDeviceManager::HandleGetD2DFactoryNoRef(this, &v17);
      v6 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xB5u);
      }
      else
      {
        v18 = *(_OWORD *)((char *)this + 8);
        v8 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, _QWORD *))(**((_QWORD **)v17 + 3) + 40LL))(
               *((_QWORD *)v17 + 3),
               &v18,
               v5);
        v6 = v8;
        if ( v8 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xB8u);
      }
    }
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x69u);
    }
    else
    {
      *a3 = (struct ID2D1Geometry *)*v5;
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 8LL))(*v5);
    }
  }
  if ( !v16 )
    goto LABEL_9;
  (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v16 + 16LL))(v16);
LABEL_25:
  v16 = 0LL;
LABEL_9:
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  return (unsigned int)v6;
}
