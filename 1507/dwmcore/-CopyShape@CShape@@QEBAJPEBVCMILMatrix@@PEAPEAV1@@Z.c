/*
 * XREFs of ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1800782D0
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180023CC0 (-PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?Initialize@CpuClipShape@@QEAAJPEAVCScopedClipStack@@PEBVCMILMatrix@@@Z @ 0x1800735A4 (-Initialize@CpuClipShape@@QEAAJPEAVCScopedClipStack@@PEBVCMILMatrix@@@Z.c)
 *     ?GetTopCpuClipInScope@CScopedClipStack@@QEAAJPEAPEAVCShape@@@Z @ 0x180073A60 (-GetTopCpuClipInScope@CScopedClipStack@@QEAAJPEAPEAVCShape@@@Z.c)
 *     ?UpdateHWDrawListCache@CPrimitiveGroupDrawListGenerator@@QEAAJ_KPEAVCDrawListPrimitiveBuilder@@W4D2D1_ANTIALIAS_MODE@@PEBVCMILMatrix@@PEAVCShape@@_NPEAVCHWDrawListCache@@@Z @ 0x18007627C (-UpdateHWDrawListCache@CPrimitiveGroupDrawListGenerator@@QEAAJ_KPEAVCDrawListPrimitiveBuilder@@W.c)
 *     ?TryOptimizedPaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800788C0 (-TryOptimizedPaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?GetShapeDataCoreNoRef@CGeometryGroup@@UEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z @ 0x18011FA90 (-GetShapeDataCoreNoRef@CGeometryGroup@@UEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z.c)
 * Callees:
 *     ?CopyComplex@CComplexShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18000DDCC (-CopyComplex@CComplexShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?Is2DAffine@CBaseMatrix@@QEBAHH@Z @ 0x180022410 (-Is2DAffine@CBaseMatrix@@QEBAHH@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180031390 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ??0CComplexShape@@QEAA@PEAUID2D1Geometry@@@Z @ 0x18005BA14 (--0CComplexShape@@QEAA@PEAUID2D1Geometry@@@Z.c)
 *     ??1CComplexShape@@UEAA@XZ @ 0x18005BBA0 (--1CComplexShape@@UEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetTightBounds@CShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180077FF0 (-GetTightBounds@CShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqu.c)
 *     ?GetRectCount@CRegionShape@@QEBAIXZ @ 0x180078558 (-GetRectCount@CRegionShape@@QEBAIXZ.c)
 *     ??_ECRegionShape@@UEAAPEAXI@Z @ 0x1800786E0 (--_ECRegionShape@@UEAAPEAXI@Z.c)
 *     ?GetTightBounds@CRectangleShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180078DC0 (-GetTightBounds@CRectangleShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@.c)
 *     ?GetD2DGeometry@CRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180078F90 (-GetD2DGeometry@CRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?CopyRegion@CRegionShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18014A7A0 (-CopyRegion@CRegionShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CShape::CopyShape(CShape *this, const struct CMILMatrix *a2, struct CShape **a3)
{
  struct CComplexShape *v6; // r15
  unsigned int v7; // esi
  float v8; // xmm1_4
  __int64 (__fastcall *v9)(CComplexShape *, __int64, CBaseMatrix *); // rbx
  int TightBounds; // eax
  LPVOID (__fastcall *v11)(WPF::ProcessHeapImpl *, SIZE_T); // rdi
  char *v12; // rax
  __int128 v13; // xmm0
  int (*v15)(CRectangleShape *__hidden, const struct CMILMatrix *, struct ID2D1Geometry **); // rbx
  int D2DGeometry; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  struct ID2D1Geometry *v22; // [rsp+30h] [rbp-48h] BYREF
  struct CComplexShape *v23[2]; // [rsp+38h] [rbp-40h] BYREF
  CRegionShape *v24[2]; // [rsp+48h] [rbp-30h] BYREF

  v6 = 0LL;
  v24[0] = 0LL;
  v7 = 0;
  v23[0] = 0LL;
  v22 = 0LL;
  if ( a2 )
  {
    if ( !(unsigned int)CBaseMatrix::Is2DAffine(a2, 1)
      || ((v8 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)a2 + 1)) & _xmm), v8 >= 0.00012207031)
       || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)a2 + 4)) & _xmm) >= 0.00012207031)
      && ((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)a2) & _xmm) >= 0.00012207031
       || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)a2 + 5)) & _xmm) >= 0.00012207031) )
    {
      if ( (*(unsigned int (__fastcall **)(CShape *))(*(_QWORD *)this + 8LL))(this) != 3 )
      {
        v15 = *(int (**)(CRectangleShape *__hidden, const struct CMILMatrix *, struct ID2D1Geometry **))(*(_QWORD *)this + 16LL);
        if ( v15 == CRectangleShape::GetD2DGeometry )
          D2DGeometry = CRectangleShape::GetD2DGeometry(this, 0LL, &v22);
        else
          D2DGeometry = ((__int64 (__fastcall *)(CShape *, _QWORD, struct ID2D1Geometry **))v15)(this, 0LL, &v22);
        v7 = D2DGeometry;
        if ( D2DGeometry < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DGeometry, 0xF0u);
          goto LABEL_13;
        }
        CComplexShape::CComplexShape((CComplexShape *)v24, v22);
        v17 = CComplexShape::CopyComplex((CComplexShape *)v24, a2, v23);
        v7 = v17;
        if ( v17 >= 0 )
        {
          *a3 = v23[0];
          CComplexShape::~CComplexShape((CComplexShape *)v24);
          goto LABEL_13;
        }
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0xF3u);
        CComplexShape::~CComplexShape((CComplexShape *)v24);
        goto LABEL_32;
      }
      v18 = CComplexShape::CopyComplex(this, a2, v23);
      v7 = v18;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0xE9u);
LABEL_32:
        v6 = v23[0];
        goto LABEL_33;
      }
      goto LABEL_35;
    }
  }
  if ( !(*(unsigned int (__fastcall **)(CShape *))(*(_QWORD *)this + 8LL))(this)
    || (*(unsigned int (__fastcall **)(CShape *))(*(_QWORD *)this + 8LL))(this) == 2
    && CRegionShape::GetRectCount(this) == 1 )
  {
    v9 = *(__int64 (__fastcall **)(CComplexShape *, __int64, CBaseMatrix *))(*(_QWORD *)this + 24LL);
    if ( (char *)v9 == (char *)CRectangleShape::GetTightBounds )
    {
      TightBounds = CRectangleShape::GetTightBounds(this);
    }
    else if ( v9 == CShape::GetTightBounds )
    {
      TightBounds = CShape::GetTightBounds(this, (__int64)v24, a2);
    }
    else
    {
      TightBounds = v9(this, (__int64)v24, a2);
    }
    v7 = TightBounds;
    if ( TightBounds < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, TightBounds, 0xFCu);
    }
    else
    {
      v11 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
      if ( v11 == WPF::ProcessHeapImpl::Alloc )
        v12 = (char *)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x20uLL);
      else
        v12 = (char *)v11(WPF::g_pProcessHeap, 32LL);
      if ( v12 )
      {
        *((_QWORD *)v12 + 3) = 0LL;
        *(_QWORD *)v12 = &CRectangleShape::`vftable';
        v13 = *(_OWORD *)v24;
        *(_OWORD *)(v12 + 8) = *(_OWORD *)v24;
        *a3 = (struct CShape *)v12;
        *(_OWORD *)v23 = v13;
      }
      else
      {
        v7 = -2147024882;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xFEu);
      }
    }
    goto LABEL_13;
  }
  v19 = (*(__int64 (__fastcall **)(CShape *))(*(_QWORD *)this + 8LL))(this) - 2;
  if ( v19 )
  {
    if ( v19 != 1 )
    {
LABEL_33:
      if ( v6 )
        (**(void (__fastcall ***)(struct CComplexShape *, __int64))v6)(v6, 1LL);
      goto LABEL_13;
    }
    v20 = CComplexShape::CopyComplex(this, a2, v23);
    v7 = v20;
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0x125u);
      goto LABEL_32;
    }
LABEL_35:
    *a3 = v23[0];
    goto LABEL_13;
  }
  v21 = CRegionShape::CopyRegion(this, a2, v24);
  v7 = v21;
  if ( v21 >= 0 )
  {
    *a3 = v24[0];
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0x10Eu);
    if ( v24[0] )
      CRegionShape::`vector deleting destructor'(v24[0], 1u);
  }
LABEL_13:
  if ( v22 )
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v22 + 16LL))(v22);
  return v7;
}
