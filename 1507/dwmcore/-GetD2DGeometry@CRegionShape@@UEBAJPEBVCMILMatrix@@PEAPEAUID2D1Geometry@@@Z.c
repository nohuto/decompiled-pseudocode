/*
 * XREFs of ?GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1800785F0
 * Callers:
 *     ?CreateFastHitTestRegion@CPrimitiveGroup@@AEBAJPEA_N@Z @ 0x18000C3F4 (-CreateFastHitTestRegion@CPrimitiveGroup@@AEBAJPEA_N@Z.c)
 *     ?D2DGeometryFromGeometry@CDrawingContext@@AEAAJPEBUD2D_SIZE_F@@AEAVCGeometry@@PEBVCMILMatrix@@PEAPEAUID2D1Geometry@@PEA_N@Z @ 0x180010918 (-D2DGeometryFromGeometry@CDrawingContext@@AEAAJPEBUD2D_SIZE_F@@AEAVCGeometry@@PEBVCMILMatrix@@PE.c)
 *     ?FillShapeWithBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@AEBVCShape@@PEAUID2D1Bitmap1@@AEBUD2D_MATRIX_3X2_F@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_EXTEND_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x180071DB0 (-FillShapeWithBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@AEBVCShape@@PEAUID2D1Bitmap1@@AEBUD.c)
 *     ?GetTightBounds@CShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180077FF0 (-GetTightBounds@CShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqu.c)
 *     ?FillPathWithBrush@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@@PEBVCShape@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UDeviceHPC@2@@@PEBV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@PEAVCMILBrush@@MAEBV?$CMatrix@UBaseSampling@CoordinateSpace@@UDeviceHPC@2@@@W4Enum@MilCompositingMode@@@Z @ 0x180081B58 (-FillPathWithBrush@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCCont.c)
 * Callees:
 *     ?GetRectangles@CRegionShape@@QEBAXPEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x180004E04 (-GetRectangles@CRegionShape@@QEBAXPEAV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@Rec.c)
 *     ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x180051CE0 (--_H@YAXPEAX_KHP6APEAX0@Z@Z.c)
 *     ?HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z @ 0x180055DD4 (-HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z.c)
 *     ?AddTransformedRectToD2DRgnGeometrySink@@YAXAEBUMilRectF@@PEBVCMILMatrix@@PEAUID2D1GeometrySink@@@Z @ 0x18005BBFC (-AddTransformedRectToD2DRgnGeometrySink@@YAXAEBUMilRectF@@PEBVCMILMatrix@@PEAUID2D1GeometrySink@.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetRectCount@CRegionShape@@QEBAIXZ @ 0x180078558 (-GetRectCount@CRegionShape@@QEBAIXZ.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CRegionShape::GetD2DGeometry(
        CRegionShape *this,
        const struct CMILMatrix *a2,
        struct ID2D1Geometry **a3)
{
  unsigned int v6; // esi
  int *v7; // r14
  __int64 v8; // rdi
  void (__fastcall *v9)(WPF::ProcessHeapImpl *, void *); // rbx
  unsigned __int64 RectCount; // r13
  __int64 v12; // rdi
  Mesh::MeshLine *v13; // rax
  unsigned int v14; // eax
  CD3DDeviceManager *v15; // rcx
  int D2DFactoryNoRef; // eax
  int v17; // eax
  int v18; // eax
  unsigned int i; // ebx
  float v20; // xmm1_4
  __m128i v21; // xmm0
  float v22; // xmm1_4
  int v23; // eax
  struct ID2D1Geometry *v24; // [rsp+30h] [rbp-68h] BYREF
  struct ID2D1GeometrySink *v25; // [rsp+38h] [rbp-60h] BYREF
  struct CD2DFactory *v26; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int32 v27; // [rsp+48h] [rbp-50h]
  float v28; // [rsp+4Ch] [rbp-4Ch]

  v24 = 0LL;
  v25 = 0LL;
  v6 = 0;
  v7 = 0LL;
  if ( a2 )
  {
    v26 = 0LL;
    RectCount = (unsigned int)CRegionShape::GetRectCount(this);
    v12 = 16 * RectCount;
    if ( !is_mul_ok(RectCount, 0x10uLL) )
      v12 = -1LL;
    v13 = (Mesh::MeshLine *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                       + 8LL))(
                              WPF::g_pProcessHeap,
                              v12);
    v7 = (int *)v13;
    if ( v13 )
    {
      `vector constructor iterator'(
        v13,
        16LL,
        RectCount,
        (void (__fastcall *)(Mesh::MeshLine *))TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>);
      v14 = CRegionShape::GetRectCount(this);
      CRegionShape::GetRectangles(this, (__int64)v7, v14);
      D2DFactoryNoRef = CD3DDeviceManager::HandleGetD2DFactoryNoRef(v15, &v26);
      v6 = D2DFactoryNoRef;
      if ( D2DFactoryNoRef >= 0 )
      {
        v17 = (*(__int64 (__fastcall **)(_QWORD, struct ID2D1Geometry **))(**((_QWORD **)v26 + 3) + 80LL))(
                *((_QWORD *)v26 + 3),
                &v24);
        v6 = v17;
        if ( v17 >= 0 )
        {
          v18 = (*(__int64 (__fastcall **)(struct ID2D1Geometry *, struct ID2D1GeometrySink **))(*(_QWORD *)v24 + 136LL))(
                  v24,
                  &v25);
          v6 = v18;
          if ( v18 >= 0 )
          {
            for ( i = 0; i < (unsigned int)CRegionShape::GetRectCount(this); ++i )
            {
              v20 = (float)v7[4 * i + 1];
              *(float *)&v26 = (float)v7[4 * i];
              v21 = _mm_cvtsi32_si128(v7[4 * i + 2]);
              *((float *)&v26 + 1) = v20;
              v22 = (float)v7[4 * i + 3];
              v27 = _mm_cvtepi32_ps(v21).m128_u32[0];
              v28 = v22;
              AddTransformedRectToD2DRgnGeometrySink((const struct MilRectF *)&v26, a2, v25);
            }
            v23 = (*(__int64 (__fastcall **)(struct ID2D1GeometrySink *))(*(_QWORD *)v25 + 72LL))(v25);
            v6 = v23;
            if ( v23 >= 0 )
            {
              *a3 = v24;
              goto LABEL_28;
            }
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0x126u);
          }
          else
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x114u);
          }
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x113u);
        }
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DFactoryNoRef, 0x111u);
      }
    }
    else
    {
      v6 = -2147024882;
      v7 = 0LL;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x107u);
    }
  }
  else
  {
    *a3 = (struct ID2D1Geometry *)*((_QWORD *)this + 1);
    v8 = *((_QWORD *)this + 1);
    if ( !v8 )
      goto LABEL_7;
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v8 + 8LL))(*((_QWORD *)this + 1));
  }
  if ( !v24 )
    goto LABEL_5;
  (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v24 + 16LL))(v24);
LABEL_28:
  v24 = 0LL;
LABEL_5:
  if ( v25 )
  {
    (*(void (__fastcall **)(struct ID2D1GeometrySink *))(*(_QWORD *)v25 + 16LL))(v25);
    v25 = 0LL;
  }
LABEL_7:
  v9 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v9 == WPF::ProcessHeapImpl::Free )
  {
    if ( v7 )
      HeapFree(g_hProcessHeap, 0, v7);
  }
  else
  {
    v9(WPF::g_pProcessHeap, v7);
  }
  return v6;
}
