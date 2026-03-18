/*
 * XREFs of ?GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x18002C100
 * Callers:
 *     ?D2DGeometryFromGeometry@CDrawingContext@@AEAAJPEBUD2D_SIZE_F@@AEAVCGeometry@@PEBVCMILMatrix@@PEAPEAUID2D1Geometry@@PEA_N@Z @ 0x180004874 (-D2DGeometryFromGeometry@CDrawingContext@@AEAAJPEBUD2D_SIZE_F@@AEAVCGeometry@@PEBVCMILMatrix@@PE.c)
 *     ?CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ @ 0x18000E2BC (-CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ.c)
 *     ?GetTightBounds@CShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x18002C340 (-GetTightBounds@CShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqu.c)
 *     ?FillPathWithBrush@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@@PEBVCShape@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UDeviceHPC@2@@@PEBV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@PEAVCMILBrush@@MAEBV?$CMatrix@UBaseSampling@CoordinateSpace@@UDeviceHPC@2@@@W4Enum@MilCompositingMode@@@Z @ 0x18002DE30 (-FillPathWithBrush@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCCont.c)
 *     ?FillShapeWithBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@AEBVCShape@@PEAUID2D1Bitmap1@@AEBUD2D_MATRIX_3X2_F@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_EXTEND_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x18007D350 (-FillShapeWithBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@AEBVCShape@@PEAUID2D1Bitmap1@@AEBUD.c)
 * Callees:
 *     ?GetRectCount@CRegionShape@@QEBAIXZ @ 0x18002C0DC (-GetRectCount@CRegionShape@@QEBAIXZ.c)
 *     ?HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z @ 0x180035774 (-HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800A30EC (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?AddTransformedRectToD2DRgnGeometrySink@@YAXAEBUMilRectF@@PEBVCMILMatrix@@PEAUID2D1GeometrySink@@@Z @ 0x180164184 (-AddTransformedRectToD2DRgnGeometrySink@@YAXAEBUMilRectF@@PEBVCMILMatrix@@PEAUID2D1GeometrySink@.c)
 *     ?CreateEmptyPathGeometry@CShape@@SAJPEAPEAUID2D1PathGeometry@@@Z @ 0x180189BCC (-CreateEmptyPathGeometry@CShape@@SAJPEAPEAUID2D1PathGeometry@@@Z.c)
 *     ?GetPixelAlignedRectangles@CRegionShape@@QEBAXPEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x18018A468 (-GetPixelAlignedRectangles@CRegionShape@@QEBAXPEAV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CM.c)
 */

__int64 __fastcall CRegionShape::GetD2DGeometry(
        CRegionShape *this,
        const struct CMILMatrix *a2,
        struct ID2D1Geometry **a3)
{
  struct ID2D1Geometry *v4; // rcx
  unsigned int v7; // ebx
  TemporaryConfiguration *v8; // rdi
  void (*v9)(WPF::ProcessHeapImpl *__hidden, void *); // rax
  int v11; // eax
  unsigned __int64 RectCount; // rbx
  __int64 v13; // rax
  TemporaryConfiguration *v14; // rax
  unsigned int v15; // eax
  CD3DDeviceManager *v16; // rcx
  int D2DFactoryNoRef; // eax
  int v18; // eax
  int v19; // eax
  unsigned int i; // ebx
  __int64 j; // rdx
  int v22; // eax
  struct ID2D1PathGeometry *v23; // [rsp+30h] [rbp-58h] BYREF
  struct ID2D1GeometrySink *v24; // [rsp+38h] [rbp-50h] BYREF
  struct CD2DFactory *v25[2]; // [rsp+40h] [rbp-48h] BYREF

  v4 = (struct ID2D1Geometry *)*((_QWORD *)this + 1);
  v23 = 0LL;
  v24 = 0LL;
  v7 = 0;
  v8 = 0LL;
  if ( v4 )
  {
    if ( !a2 )
      goto LABEL_3;
    v25[0] = 0LL;
    RectCount = (unsigned int)CRegionShape::GetRectCount(this);
    v13 = 16 * RectCount;
    if ( !is_mul_ok(RectCount, 0x10uLL) )
      v13 = -1LL;
    v14 = (TemporaryConfiguration *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                               + 8LL))(
                                      WPF::g_pProcessHeap,
                                      v13);
    v8 = v14;
    if ( !v14 )
    {
      v7 = -2147024882;
      v8 = 0LL;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x105u);
      goto LABEL_5;
    }
    `vector constructor iterator'(
      v14,
      0x10uLL,
      (unsigned int)RectCount,
      (void *(*)(void *))COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo);
    v15 = CRegionShape::GetRectCount(this);
    CRegionShape::GetPixelAlignedRectangles(this, v8, v15);
    D2DFactoryNoRef = CD3DDeviceManager::HandleGetD2DFactoryNoRef(v16, v25);
    v7 = D2DFactoryNoRef;
    if ( D2DFactoryNoRef < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DFactoryNoRef, 0x10Cu);
      goto LABEL_5;
    }
    v18 = (*(__int64 (__fastcall **)(_QWORD, struct ID2D1PathGeometry **))(**((_QWORD **)v25[0] + 3) + 80LL))(
            *((_QWORD *)v25[0] + 3),
            &v23);
    v7 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x10Eu);
      goto LABEL_5;
    }
    v19 = (*(__int64 (__fastcall **)(struct ID2D1PathGeometry *, struct ID2D1GeometrySink **))(*(_QWORD *)v23 + 136LL))(
            v23,
            &v24);
    v7 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x10Fu);
      goto LABEL_5;
    }
    for ( i = 0; i < (unsigned int)CRegionShape::GetRectCount(this); ++i )
    {
      for ( j = 0LL; j < 4; ++j )
        *((float *)v25 + j) = (float)*(int *)((char *)v25
                                            + 4 * j
                                            + (TemporaryConfiguration *)((char *)v8 + 16 * i)
                                            - (TemporaryConfiguration *)v25);
      AddTransformedRectToD2DRgnGeometrySink((const struct MilRectF *)v25, a2, v24);
    }
    v22 = (*(__int64 (__fastcall **)(struct ID2D1GeometrySink *))(*(_QWORD *)v24 + 72LL))(v24);
    v7 = v22;
    if ( v22 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0x11Fu);
      goto LABEL_5;
    }
  }
  else
  {
    v11 = CShape::CreateEmptyPathGeometry(&v23);
    v7 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xF5u);
      goto LABEL_5;
    }
  }
  v4 = v23;
LABEL_3:
  *a3 = v4;
  if ( v4 )
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v4 + 8LL))(v4);
LABEL_5:
  if ( v23 )
    (*(void (__fastcall **)(struct ID2D1PathGeometry *))(*(_QWORD *)v23 + 16LL))(v23);
  if ( v24 )
    (*(void (__fastcall **)(struct ID2D1GeometrySink *))(*(_QWORD *)v24 + 16LL))(v24);
  v9 = *(void (**)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v9 == WPF::ProcessHeapImpl::Free )
  {
    if ( v8 )
      HeapFree(g_hProcessHeap, 0, v8);
  }
  else
  {
    ((void (__fastcall *)(WPF::ProcessHeapImpl *, TemporaryConfiguration *))v9)(WPF::g_pProcessHeap, v8);
  }
  return v7;
}
