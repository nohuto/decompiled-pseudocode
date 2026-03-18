/*
 * XREFs of ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18002C4F0
 * Callers:
 *     ?GetShapeDataWorker@CGeometry@@AEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18002C9C0 (-GetShapeDataWorker@CGeometry@@AEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@1PEA_N@Z @ 0x180067DF0 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ?UpdateHWDrawListCache@CPrimitiveGroupDrawListGenerator@@QEAAJ_KPEAVCDrawListPrimitiveBuilder@@W4D2D1_ANTIALIAS_MODE@@PEBVCMILMatrix@@PEAVCShape@@_NPEAVCDrawListCache@@@Z @ 0x180094B10 (-UpdateHWDrawListCache@CPrimitiveGroupDrawListGenerator@@QEAAJ_KPEAVCDrawListPrimitiveBuilder@@W.c)
 *     ?TryOptimizedPaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180095374 (-TryOptimizedPaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?GetTopCpuClipInScope@CScopedClipStack@@QEAAJPEAPEAVCShape@@@Z @ 0x1800982D4 (-GetTopCpuClipInScope@CScopedClipStack@@QEAAJPEAPEAVCShape@@@Z.c)
 *     ?Initialize@CpuClipShape@@QEAAJPEAVCScopedClipStack@@PEBVCMILMatrix@@@Z @ 0x1800986DC (-Initialize@CpuClipShape@@QEAAJPEAVCScopedClipStack@@PEBVCMILMatrix@@@Z.c)
 *     ?ComputeLayout@CSurfaceBrush@@AEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@PEAULayoutData@1@PEAPEAVCShape@@@Z @ 0x1801399CC (-ComputeLayout@CSurfaceBrush@@AEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@PEAULayoutData@1@PEAPEA.c)
 *     ?GetShapeDataCore@CGeometryGroup@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180157CB0 (-GetShapeDataCore@CGeometryGroup@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 * Callees:
 *     ??0CComplexShape@@QEAA@PEAUID2D1Geometry@@@Z @ 0x180002908 (--0CComplexShape@@QEAA@PEAUID2D1Geometry@@@Z.c)
 *     ?Create@CRegionShape@@SAJPEAUID2D1RegionGeometry@@PEAPEAV1@@Z @ 0x18001D7AC (-Create@CRegionShape@@SAJPEAUID2D1RegionGeometry@@PEAPEAV1@@Z.c)
 *     ?IsRectangles@CRegionShape@@UEBA_NPEAI@Z @ 0x18002BE80 (-IsRectangles@CRegionShape@@UEBA_NPEAI@Z.c)
 *     ?GetRectangles@CRegionShape@@UEBA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x18002BFA0 (-GetRectangles@CRegionShape@@UEBA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rec.c)
 *     ??_ECRegionShape@@UEAAPEAXI@Z @ 0x18002C1F0 (--_ECRegionShape@@UEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x180058CF0 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059E20 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x18005A260 (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180061620 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800616B0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?IsRectangles@CRectanglesShape@@UEBA_NPEAI@Z @ 0x1800976A0 (-IsRectangles@CRectanglesShape@@UEBA_NPEAI@Z.c)
 *     ?BuildFromRectFs@CRectanglesShape@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x180097924 (-BuildFromRectFs@CRectanglesShape@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ?GetRectangles@CRectanglesShape@@UEBA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x180097A10 (-GetRectangles@CRectanglesShape@@UEBA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?GetD2DGeometry@CRectanglesShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180097C30 (-GetD2DGeometry@CRectanglesShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ??_GCRectanglesShape@@UEAAPEAXI@Z @ 0x180097E80 (--_GCRectanglesShape@@UEAAPEAXI@Z.c)
 *     ?Reset@CRectanglesShape@@IEAAXXZ @ 0x180097F5C (-Reset@CRectanglesShape@@IEAAXXZ.c)
 *     ?AddMultipleAndSet@?$DynArray@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0A@@@QEAAJPEFBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x18009A468 (-AddMultipleAndSet@-$DynArray@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquen.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CShape::CopyShape(
        struct ID2D1RegionGeometry **this,
        const struct CMILMatrix *a2,
        struct CShape **a3)
{
  unsigned int v3; // ebx
  CRegionShape *v4; // r12
  struct CShape *v5; // rdi
  char *v6; // r15
  char (__fastcall *v10)(CRegionShape *, unsigned int *); // rax
  char IsRectangles; // al
  unsigned __int64 v12; // rdx
  void *(__fastcall *v13)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  char *v14; // rax
  __int64 v15; // rdx
  bool (__fastcall *v16)(CRegionShape *, __int64, unsigned int); // rax
  char *v17; // rbx
  void *(__fastcall *v18)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  struct CShape *v19; // rax
  unsigned int v20; // ebx
  int v21; // eax
  void (*v22)(WPF::ProcessHeapImpl *__hidden, void *); // rax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int (*v27)(CRectanglesShape *__hidden, const struct CMILMatrix *, struct ID2D1Geometry **); // rax
  int D2DGeometry; // eax
  void *(__fastcall *v29)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  CComplexShape *v30; // rax
  __int64 v31; // rax
  int v32; // r9d
  struct CShape *v33; // rax
  __int64 v34; // rax
  __int128 v35; // xmm0
  unsigned int v36; // [rsp+20h] [rbp-40h]
  unsigned int v37; // [rsp+20h] [rbp-40h]
  unsigned int v38; // [rsp+30h] [rbp-30h] BYREF
  struct ID2D1Geometry *v39; // [rsp+38h] [rbp-28h] BYREF
  CRegionShape *v40[2]; // [rsp+40h] [rbp-20h] BYREF

  v3 = 0;
  v4 = 0LL;
  v39 = 0LL;
  v5 = 0LL;
  *a3 = 0LL;
  v6 = 0LL;
  v40[0] = 0LL;
  if ( !a2 || (unsigned __int8)CMILMatrix::IsIdentity<0>(a2) )
  {
    v24 = (*((__int64 (__fastcall **)(struct ID2D1RegionGeometry **))*this + 1))(this);
    if ( v24 )
    {
      v25 = v24 - 1;
      if ( v25 )
      {
        if ( v25 == 1 )
        {
          v26 = CRegionShape::Create(this[1], v40);
          v3 = v26;
          if ( v26 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0x110u);
            v4 = v40[0];
            goto LABEL_76;
          }
          *a3 = v40[0];
        }
        goto LABEL_21;
      }
      v31 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
              WPF::g_pProcessHeap,
              64LL);
      v5 = (struct CShape *)v31;
      if ( v31 )
      {
        *(_QWORD *)v31 = &CRectanglesShape::`vftable';
        *(_DWORD *)(v31 + 32) = 0;
        *(_QWORD *)(v31 + 8) = v31 + 40;
        *(_QWORD *)(v31 + 16) = v31 + 40;
        *(_DWORD *)(v31 + 24) = 1;
        *(_DWORD *)(v31 + 28) = 1;
        *(_QWORD *)(v31 + 56) = 0LL;
      }
      else
      {
        v5 = 0LL;
      }
      if ( v5 )
      {
        v21 = CRectanglesShape::BuildFromRectFs(v5, this[1], *((unsigned int *)this + 8));
        v3 = v21;
        if ( v21 >= 0 )
          goto LABEL_20;
        v37 = 259;
        goto LABEL_60;
      }
      v36 = 257;
    }
    else
    {
      v34 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
              WPF::g_pProcessHeap,
              72LL);
      if ( v34 )
      {
        *(_QWORD *)v34 = &CRoundedRectangleShape::`vftable';
        *(_OWORD *)(v34 + 8) = *(_OWORD *)(this + 1);
        *(_OWORD *)(v34 + 24) = *(_OWORD *)(this + 3);
        v35 = *(_OWORD *)(this + 5);
        *(_QWORD *)(v34 + 56) = 0LL;
        *(_QWORD *)(v34 + 64) = 0LL;
        *(_OWORD *)(v34 + 40) = v35;
      }
      *a3 = (struct CShape *)v34;
      if ( v34 )
        goto LABEL_21;
      v36 = 247;
    }
LABEL_58:
    v3 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, v36);
    goto LABEL_22;
  }
  v10 = (char (__fastcall *)(CRegionShape *, unsigned int *))*((_QWORD *)*this + 4);
  if ( (char *)v10 == (char *)CRectanglesShape::IsRectangles )
  {
    IsRectangles = CRectanglesShape::IsRectangles((CRectanglesShape *)this, &v38);
  }
  else if ( v10 == CRegionShape::IsRectangles )
  {
    IsRectangles = CRegionShape::IsRectangles((CRegionShape *)this, &v38);
  }
  else
  {
    IsRectangles = v10((CRegionShape *)this, &v38);
  }
  if ( !IsRectangles || !(unsigned __int8)CMILMatrix::Is2DAxisAlignedPreserving<1>(a2) )
    goto LABEL_21;
  if ( !v38 )
  {
    v33 = (struct CShape *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                      + 8LL))(
                             WPF::g_pProcessHeap,
                             16LL);
    if ( v33 )
    {
      *((_QWORD *)v33 + 1) = 0LL;
      *(_QWORD *)v33 = &CRegionShape::`vftable';
    }
    *a3 = v33;
    if ( v33 )
      goto LABEL_21;
    v36 = 308;
    goto LABEL_58;
  }
  v12 = 16LL * v38;
  if ( !is_mul_ok(v38, 0x10uLL) )
    v12 = -1LL;
  v13 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
  if ( v13 == WPF::ProcessHeapImpl::Alloc )
    v14 = (char *)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v12);
  else
    v14 = (char *)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, unsigned __int64, WPF::ProcessHeapImpl *))v13)(
                    WPF::g_pProcessHeap,
                    v12,
                    WPF::g_pProcessHeap);
  v6 = v14;
  v15 = (__int64)v14;
  v16 = (bool (__fastcall *)(CRegionShape *, __int64, unsigned int))*((_QWORD *)*this + 5);
  if ( (char *)v16 == (char *)CRectanglesShape::GetRectangles )
  {
    CRectanglesShape::GetRectangles(this, v15, v38);
  }
  else if ( v16 == CRegionShape::GetRectangles )
  {
    CRegionShape::GetRectangles((CRegionShape *)this, v15, v38);
  }
  else
  {
    v16((CRegionShape *)this, v15, v38);
  }
  if ( v38 )
  {
    do
    {
      v17 = &v6[16 * (unsigned int)v5];
      CMILMatrix::Transform2DBoundsHelper<0>(a2, v17, v40);
      LODWORD(v5) = (_DWORD)v5 + 1;
      *(_OWORD *)v17 = *(_OWORD *)v40;
    }
    while ( (unsigned int)v5 < v38 );
  }
  v18 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
  if ( v18 == WPF::ProcessHeapImpl::Alloc )
    v19 = (struct CShape *)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x40uLL);
  else
    v19 = (struct CShape *)v18(WPF::g_pProcessHeap, 64uLL);
  v5 = v19;
  if ( !v19 )
  {
    v36 = 298;
    goto LABEL_58;
  }
  *(_QWORD *)v19 = &CRectanglesShape::`vftable';
  *((_DWORD *)v19 + 8) = 0;
  *((_QWORD *)v19 + 1) = (char *)v19 + 40;
  *((_QWORD *)v19 + 2) = (char *)v19 + 40;
  *((_DWORD *)v19 + 6) = 1;
  *((_DWORD *)v19 + 7) = 1;
  *((_QWORD *)v19 + 7) = 0LL;
  v20 = v38;
  CRectanglesShape::Reset(v19);
  v21 = DynArray<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,0>::AddMultipleAndSet(
          (char *)v5 + 8,
          v6,
          v20);
  v3 = v21;
  if ( v21 >= 0 )
  {
LABEL_20:
    *a3 = v5;
    v5 = 0LL;
LABEL_21:
    if ( *a3 )
      goto LABEL_22;
    v27 = (int (*)(CRectanglesShape *__hidden, const struct CMILMatrix *, struct ID2D1Geometry **))*((_QWORD *)*this + 2);
    if ( v27 == CRectanglesShape::GetD2DGeometry )
      D2DGeometry = CRectanglesShape::GetD2DGeometry((CRectanglesShape *)this, a2, &v39);
    else
      D2DGeometry = ((__int64 (__fastcall *)(struct ID2D1RegionGeometry **, const struct CMILMatrix *, struct ID2D1Geometry **))v27)(
                      this,
                      a2,
                      &v39);
    v3 = D2DGeometry;
    if ( D2DGeometry >= 0 )
    {
      v29 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                     + 8LL);
      if ( v29 == WPF::ProcessHeapImpl::Alloc )
        v30 = (CComplexShape *)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x10uLL);
      else
        v30 = (CComplexShape *)v29(WPF::g_pProcessHeap, 16uLL);
      if ( v30 )
        v30 = CComplexShape::CComplexShape(v30, v39);
      if ( v30 )
      {
        *a3 = v30;
        goto LABEL_22;
      }
      v36 = 317;
      goto LABEL_58;
    }
    v37 = 314;
    v32 = D2DGeometry;
    goto LABEL_74;
  }
  v37 = 300;
LABEL_60:
  v32 = v21;
LABEL_74:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v32, v37);
  if ( !v5 )
    goto LABEL_22;
  CRectanglesShape::`scalar deleting destructor'(v5, 1u);
LABEL_76:
  if ( v4 )
    CRegionShape::`vector deleting destructor'(v4, 1);
LABEL_22:
  v22 = *(void (**)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v22 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v6);
  else
    ((void (__fastcall *)(WPF::ProcessHeapImpl *, char *))v22)(WPF::g_pProcessHeap, v6);
  if ( v39 )
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v39 + 16LL))(v39);
  return v3;
}
