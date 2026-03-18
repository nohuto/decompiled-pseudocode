/*
 * XREFs of ?GetD2DGeometry@CRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180058470
 * Callers:
 *     ?D2DGeometryFromGeometry@CDrawingContext@@AEAAJPEBUD2D_SIZE_F@@AEAVCGeometry@@PEBVCMILMatrix@@PEAPEAUID2D1Geometry@@PEA_N@Z @ 0x18000E278 (-D2DGeometryFromGeometry@CDrawingContext@@AEAAJPEBUD2D_SIZE_F@@AEAVCGeometry@@PEBVCMILMatrix@@PE.c)
 *     ?D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180016944 (-D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?GetTightBounds@CRectangleShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180058270 (-GetTightBounds@CRectangleShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@.c)
 * Callees:
 *     ?Transform@CBaseMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z @ 0x18001401C (-Transform@CBaseMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z @ 0x180071954 (-HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall CRectangleShape::GetD2DGeometry(
        CRectangleShape *this,
        const struct CMILMatrix *a2,
        struct ID2D1Geometry **a3)
{
  int v5; // esi
  int v6; // eax
  __int64 v7; // rdi
  int v8; // eax
  int v9; // xmm1_4
  int v10; // xmm2_4
  int v11; // xmm0_4
  CD3DDeviceManager *v12; // rcx
  int D2DFactoryNoRef; // eax
  struct ID2D1Geometry *v14; // rax
  unsigned int v16; // [rsp+28h] [rbp-79h]
  __int64 v17; // [rsp+38h] [rbp-69h] BYREF
  struct ID2D1Geometry *v18; // [rsp+40h] [rbp-61h] BYREF
  signed __int64 v19; // [rsp+48h] [rbp-59h] BYREF
  struct CD2DFactory *v20; // [rsp+50h] [rbp-51h] BYREF
  struct CD2DFactory *v21; // [rsp+58h] [rbp-49h] BYREF
  __int128 v22; // [rsp+60h] [rbp-41h]
  __int128 v23; // [rsp+70h] [rbp-31h] BYREF
  _DWORD v24[5]; // [rsp+80h] [rbp-21h] BYREF
  int v25; // [rsp+94h] [rbp-Dh]
  int v26; // [rsp+98h] [rbp-9h]
  int v27; // [rsp+9Ch] [rbp-5h]
  _DWORD v28[8]; // [rsp+A0h] [rbp-1h] BYREF

  v18 = 0LL;
  v17 = 0LL;
  if ( a2 )
  {
    v9 = *((_DWORD *)this + 3);
    v10 = *((_DWORD *)this + 2);
    v11 = *((_DWORD *)this + 4);
    v20 = 0LL;
    v24[1] = v9;
    v24[3] = v9;
    v25 = *((_DWORD *)this + 5);
    v27 = v25;
    v24[0] = v10;
    v24[2] = v11;
    v24[4] = v11;
    v26 = v10;
    CBaseMatrix::Transform(a2, (const struct MilPoint2F *)v24, (struct MilPoint2F *)v28, 4);
    D2DFactoryNoRef = CD3DDeviceManager::HandleGetD2DFactoryNoRef(v12, &v20);
    v5 = D2DFactoryNoRef;
    if ( D2DFactoryNoRef >= 0 )
    {
      D2DFactoryNoRef = (*(__int64 (__fastcall **)(_QWORD, struct ID2D1Geometry **))(**((_QWORD **)v20 + 3) + 80LL))(
                          *((_QWORD *)v20 + 3),
                          &v18);
      v5 = D2DFactoryNoRef;
      if ( D2DFactoryNoRef >= 0 )
      {
        D2DFactoryNoRef = (*(__int64 (__fastcall **)(struct ID2D1Geometry *, __int64 *))(*(_QWORD *)v18 + 136LL))(
                            v18,
                            &v17);
        v5 = D2DFactoryNoRef;
        if ( D2DFactoryNoRef >= 0 )
        {
          (*(void (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)v17 + 40LL))(
            v17,
            _mm_unpacklo_ps((__m128)v28[0], (__m128)v28[1]).m128_u64[0],
            0LL);
          (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v17 + 80LL))(
            v17,
            _mm_unpacklo_ps((__m128)v28[2], (__m128)v28[3]).m128_u64[0]);
          (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v17 + 80LL))(
            v17,
            _mm_unpacklo_ps((__m128)v28[4], (__m128)v28[5]).m128_u64[0]);
          (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v17 + 80LL))(
            v17,
            _mm_unpacklo_ps((__m128)v28[6], (__m128)v28[7]).m128_u64[0]);
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 64LL))(v17, 1LL);
          D2DFactoryNoRef = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 72LL))(v17);
          v5 = D2DFactoryNoRef;
          if ( D2DFactoryNoRef >= 0 )
          {
            v14 = v18;
            v18 = 0LL;
            *a3 = v14;
            goto LABEL_25;
          }
          v16 = 142;
        }
        else
        {
          v16 = 133;
        }
      }
      else
      {
        v16 = 132;
      }
    }
    else
    {
      v16 = 130;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DFactoryNoRef, v16);
  }
  else
  {
    v5 = 0;
    if ( !*((_QWORD *)this + 3) )
    {
      v21 = 0LL;
      v19 = 0LL;
      v6 = CD3DDeviceManager::HandleGetD2DFactoryNoRef(this, &v21);
      v5 = v6;
      if ( v6 >= 0 )
      {
        v23 = *(_OWORD *)((char *)this + 8);
        v7 = *((_QWORD *)v21 + 3);
        v22 = v23;
        v8 = (*(__int64 (__fastcall **)(__int64, __int128 *, signed __int64 *))(*(_QWORD *)v7 + 40LL))(v7, &v23, &v19);
        v5 = v8;
        if ( v8 >= 0 )
        {
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)this + 3, v19, 0LL) && v19 )
            (*(void (__fastcall **)(signed __int64))(*(_QWORD *)v19 + 16LL))(v19);
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xBAu);
        }
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xB9u);
      }
    }
    if ( v5 >= 0 )
    {
      *a3 = (struct ID2D1Geometry *)*((_QWORD *)this + 3);
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 8LL))(*((_QWORD *)this + 3));
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x69u);
    }
  }
LABEL_25:
  if ( v18 )
  {
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v18 + 16LL))(v18);
    v18 = 0LL;
  }
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  return (unsigned int)v5;
}
