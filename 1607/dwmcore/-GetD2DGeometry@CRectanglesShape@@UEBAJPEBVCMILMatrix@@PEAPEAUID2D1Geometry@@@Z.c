/*
 * XREFs of ?GetD2DGeometry@CRectanglesShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180097C30
 * Callers:
 *     ?D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800017D4 (-D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18002C4F0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180064E80 (-PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@1PEA_N@Z @ 0x180067DF0 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ?GetTightBounds@CRectanglesShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180097A50 (-GetTightBounds@CRectanglesShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 * Callees:
 *     ?Transform@CMILMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z @ 0x1800160F4 (-Transform@CMILMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z.c)
 *     ?HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z @ 0x180035774 (-HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?EnsureD2DGeometry@CRectanglesShape@@IEBAJXZ @ 0x1800976B4 (-EnsureD2DGeometry@CRectanglesShape@@IEBAJXZ.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRectanglesShape::GetD2DGeometry(
        CRectanglesShape *this,
        const struct CMILMatrix *a2,
        struct ID2D1Geometry **a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  int D2DFactoryNoRef; // eax
  int v10; // eax
  int v11; // eax
  unsigned int i; // ebx
  __int64 v13; // rax
  int v14; // xmm2_4
  int v15; // xmm0_4
  int v16; // eax
  struct ID2D1Geometry *v17; // rax
  __int64 v18; // [rsp+30h] [rbp-29h] BYREF
  struct ID2D1Geometry *v19; // [rsp+38h] [rbp-21h] BYREF
  struct CD2DFactory *v20; // [rsp+40h] [rbp-19h] BYREF
  int v21; // [rsp+48h] [rbp-11h] BYREF
  int v22; // [rsp+4Ch] [rbp-Dh]
  int v23; // [rsp+50h] [rbp-9h]
  int v24; // [rsp+54h] [rbp-5h]
  int v25; // [rsp+58h] [rbp-1h]
  int v26; // [rsp+5Ch] [rbp+3h]
  int v27; // [rsp+60h] [rbp+7h]
  int v28; // [rsp+64h] [rbp+Bh]
  _DWORD v29[8]; // [rsp+68h] [rbp+Fh] BYREF

  v19 = 0LL;
  v18 = 0LL;
  if ( a2 )
  {
    D2DFactoryNoRef = CD3DDeviceManager::HandleGetD2DFactoryNoRef(this, &v20);
    v7 = D2DFactoryNoRef;
    if ( D2DFactoryNoRef < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DFactoryNoRef, 0x3Cu);
    }
    else
    {
      v10 = (*(__int64 (__fastcall **)(_QWORD, struct ID2D1Geometry **))(**((_QWORD **)v20 + 3) + 80LL))(
              *((_QWORD *)v20 + 3),
              &v19);
      v7 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x3Eu);
      }
      else
      {
        v11 = (*(__int64 (__fastcall **)(struct ID2D1Geometry *, __int64 *))(*(_QWORD *)v19 + 136LL))(v19, &v18);
        v7 = v11;
        if ( v11 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x40u);
        }
        else
        {
          for ( i = 0; i < *((_DWORD *)this + 8); ++i )
          {
            v13 = *((_QWORD *)this + 1);
            v14 = *(_DWORD *)(v13 + 16LL * i);
            v15 = *(_DWORD *)(v13 + 16LL * i + 8);
            v22 = *(_DWORD *)(v13 + 16LL * i + 4);
            v24 = v22;
            v26 = *(_DWORD *)(v13 + 16LL * i + 12);
            v28 = v26;
            v21 = v14;
            v23 = v15;
            v25 = v15;
            v27 = v14;
            CMILMatrix::Transform(a2, (const struct MilPoint2F *)&v21, (struct MilPoint2F *)v29, 4);
            (*(void (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)v18 + 40LL))(
              v18,
              _mm_unpacklo_ps((__m128)v29[0], (__m128)v29[1]).m128_u64[0],
              0LL);
            (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v18 + 80LL))(
              v18,
              _mm_unpacklo_ps((__m128)v29[2], (__m128)v29[3]).m128_u64[0]);
            (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v18 + 80LL))(
              v18,
              _mm_unpacklo_ps((__m128)v29[4], (__m128)v29[5]).m128_u64[0]);
            (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v18 + 80LL))(
              v18,
              _mm_unpacklo_ps((__m128)v29[6], (__m128)v29[7]).m128_u64[0]);
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 64LL))(v18, 1LL);
          }
          v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 72LL))(v18);
          v7 = v16;
          if ( v16 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x62u);
          }
          else
          {
            v17 = v19;
            v19 = 0LL;
            *a3 = v17;
          }
        }
      }
    }
  }
  else
  {
    v6 = CRectanglesShape::EnsureD2DGeometry(this);
    v7 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x33u);
    }
    else
    {
      *a3 = (struct ID2D1Geometry *)*((_QWORD *)this + 7);
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 8LL))(*((_QWORD *)this + 7));
    }
  }
  if ( v19 )
  {
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v19 + 16LL))(v19);
    v19 = 0LL;
  }
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  return v7;
}
