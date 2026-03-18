/*
 * XREFs of ?GetD2DGeometry@CComplexShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180002950
 * Callers:
 *     ?D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800017D4 (-D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?AppendGeometry@GeometrySink@CDrawListPrimitiveBuilder@@QEAAJPEBVCShape@@AEBUContentInfo@Mesh@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_EDGE_FLAGS@@AEBUD2D_RECT_F@@_N5@Z @ 0x180002C9C (-AppendGeometry@GeometrySink@CDrawListPrimitiveBuilder@@QEAAJPEBVCShape@@AEBUContentInfo@Mesh@@W.c)
 *     ?GetTightBounds@CShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x18002C340 (-GetTightBounds@CShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqu.c)
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x180058840 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z.c)
 * Callees:
 *     ?HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z @ 0x180035774 (-HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x18005A580 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?TransformGeometry@CTransformingGeometrySink@@SAJPEBVCMILMatrix@@PEBUID2D1Geometry@@PEAPEAU3@@Z @ 0x18018A338 (-TransformGeometry@CTransformingGeometrySink@@SAJPEBVCMILMatrix@@PEBUID2D1Geometry@@PEAPEAU3@@Z.c)
 */

__int64 __fastcall CComplexShape::GetD2DGeometry(
        CComplexShape *this,
        const struct CMILMatrix *a2,
        struct ID2D1Geometry **a3)
{
  struct CD2DFactory *v3; // rbx
  struct CD2DFactory *v5; // rcx
  const struct CMILMatrix *v7; // r9
  unsigned int v8; // edi
  CD3DDeviceManager *v10; // rcx
  int *v11; // r9
  int v12; // xmm0_4
  __m128 v13; // xmm2
  __m128 v14; // xmm1
  int D2DFactoryNoRef; // eax
  int v16; // eax
  int v17; // eax
  struct CD2DFactory *v18; // [rsp+30h] [rbp-30h] BYREF
  struct CD2DFactory *v19; // [rsp+38h] [rbp-28h] BYREF
  _DWORD v20[4]; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int64 v21; // [rsp+50h] [rbp-10h]

  v3 = 0LL;
  v5 = (struct CD2DFactory *)*((_QWORD *)this + 1);
  v18 = 0LL;
  v7 = a2;
  v8 = 0;
  if ( v5 )
  {
    if ( a2 )
    {
      LOBYTE(a2) = 1;
      if ( (unsigned __int8)CMILMatrix::Is2DAffine<1>(v7, a2) )
      {
        v12 = *v11;
        v13 = (__m128)(unsigned int)v11[13];
        v20[1] = v11[1];
        v20[3] = v11[5];
        v14 = (__m128)(unsigned int)v11[12];
        v20[0] = v12;
        v20[2] = v11[4];
        v18 = 0LL;
        v21 = _mm_unpacklo_ps(v14, v13).m128_u64[0];
        D2DFactoryNoRef = CD3DDeviceManager::HandleGetD2DFactoryNoRef(v10, &v18);
        v8 = D2DFactoryNoRef;
        if ( D2DFactoryNoRef < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DFactoryNoRef, 0xE3u);
          return v8;
        }
        v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *, struct CD2DFactory **))(**((_QWORD **)v18 + 3) + 72LL))(
                *((_QWORD *)v18 + 3),
                *((_QWORD *)this + 1),
                v20,
                &v19);
        v8 = v16;
        if ( v16 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0xEAu);
          return v8;
        }
        v3 = v19;
      }
      else
      {
        v17 = CTransformingGeometrySink::TransformGeometry(v10, *((const struct ID2D1Geometry **)this + 1), &v18);
        v8 = v17;
        if ( v17 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0xF0u);
          return v8;
        }
        v3 = v18;
      }
    }
    else
    {
      v3 = v5;
      (*(void (__fastcall **)(struct CD2DFactory *, _QWORD, struct ID2D1Geometry **, _QWORD))(*(_QWORD *)v5 + 8LL))(
        v5,
        0LL,
        a3,
        0LL);
    }
  }
  *a3 = v3;
  return v8;
}
