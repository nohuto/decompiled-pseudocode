/*
 * XREFs of ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18004DF0C
 * Callers:
 *     ?TryOptimizedPaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18001665C (-TryOptimizedPaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?UpdateHWDrawListCache@CPrimitiveGroupDrawListGenerator@@QEAAJ_KPEAVCDrawListPrimitiveBuilder@@W4D2D1_ANTIALIAS_MODE@@PEBVCMILMatrix@@PEAVCShape@@_NPEAVCHWDrawListCache@@@Z @ 0x18002F770 (-UpdateHWDrawListCache@CPrimitiveGroupDrawListGenerator@@QEAAJ_KPEAVCDrawListPrimitiveBuilder@@W.c)
 *     ?Initialize@CpuClipShape@@QEAAJPEAVCScopedClipStack@@PEBVCMILMatrix@@@Z @ 0x180058D48 (-Initialize@CpuClipShape@@QEAAJPEAVCScopedClipStack@@PEBVCMILMatrix@@@Z.c)
 *     ?GetTopCpuClipInScope@CScopedClipStack@@QEAAJPEAPEAVCShape@@@Z @ 0x1800590A0 (-GetTopCpuClipInScope@CScopedClipStack@@QEAAJPEAPEAVCShape@@@Z.c)
 *     ?GetShapeDataCoreNoRef@CGeometryGroup@@UEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z @ 0x1801354F0 (-GetShapeDataCoreNoRef@CGeometryGroup@@UEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z.c)
 * Callees:
 *     ?CopyComplex@CComplexShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18001C4DC (-CopyComplex@CComplexShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Is2DAxisAlignedPreserving@CBaseMatrix@@QEBAHXZ @ 0x180047260 (-Is2DAxisAlignedPreserving@CBaseMatrix@@QEBAHXZ.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x18004DB78 (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ?GetTightBounds@CShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x18004DC10 (-GetTightBounds@CShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqu.c)
 *     ??_ECRegionShape@@UEAAPEAXI@Z @ 0x18004E3D0 (--_ECRegionShape@@UEAAPEAXI@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180052010 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?GetTightBounds@CRectangleShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180058270 (-GetTightBounds@CRectangleShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??0CComplexShape@@QEAA@PEAUID2D1Geometry@@@Z @ 0x1800B0394 (--0CComplexShape@@QEAA@PEAUID2D1Geometry@@@Z.c)
 *     ??1CComplexShape@@UEAA@XZ @ 0x1800B0520 (--1CComplexShape@@UEAA@XZ.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?CopyRegion@CRegionShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x180158C20 (-CopyRegion@CRegionShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CShape::CopyShape(CShape *this, const struct CMILMatrix *a2, struct CShape **a3)
{
  unsigned int v3; // edi
  struct CComplexShape *v4; // r15
  bool v8; // zf
  __int64 v9; // rax
  __int64 (__fastcall *v10)(CRegionShape *, __int64, CBaseMatrix *); // rbx
  int TightBounds; // eax
  void *(__fastcall *v12)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rsi
  struct CComplexShape *v13; // rax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  CRegionShape *v21; // rcx
  unsigned int v22; // [rsp+20h] [rbp-40h]
  struct ID2D1Geometry *v23; // [rsp+30h] [rbp-30h] BYREF
  struct CRegionShape *v24[2]; // [rsp+38h] [rbp-28h] BYREF
  struct CComplexShape *v25[2]; // [rsp+48h] [rbp-18h] BYREF

  v3 = 0;
  v4 = 0LL;
  v24[0] = 0LL;
  v23 = 0LL;
  v25[0] = 0LL;
  if ( a2 && !(unsigned int)CBaseMatrix::Is2DAxisAlignedPreserving(a2) )
  {
    if ( (*(unsigned int (__fastcall **)(CShape *))(*(_QWORD *)this + 8LL))(this) != 3 )
    {
      v15 = (*(__int64 (__fastcall **)(CShape *, _QWORD, struct ID2D1Geometry **))(*(_QWORD *)this + 16LL))(
              this,
              0LL,
              &v23);
      v3 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xFCu);
        goto LABEL_12;
      }
      CComplexShape::CComplexShape((CComplexShape *)v24, v23);
      v16 = CComplexShape::CopyComplex((CComplexShape *)v24, a2, v25);
      v3 = v16;
      if ( v16 >= 0 )
      {
        *a3 = v25[0];
        CComplexShape::~CComplexShape((CComplexShape *)v24);
        goto LABEL_12;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0xFFu);
      CComplexShape::~CComplexShape((CComplexShape *)v24);
      goto LABEL_26;
    }
    v17 = CComplexShape::CopyComplex(this, a2, v25);
    v3 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0xF5u);
LABEL_26:
      v4 = v25[0];
      goto LABEL_41;
    }
LABEL_27:
    v13 = v25[0];
    goto LABEL_11;
  }
  v8 = !CShape::IsAxisAlignedRectangle(this);
  v9 = *(_QWORD *)this;
  if ( v8 )
  {
    v18 = (*(__int64 (__fastcall **)(CShape *))(v9 + 8))(this) - 2;
    if ( !v18 )
    {
      v20 = CRegionShape::CopyRegion(this, a2, v24);
      v3 = v20;
      if ( v20 >= 0 )
      {
        v21 = 0LL;
        *a3 = v24[0];
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0x11Au);
        v21 = v24[0];
      }
      if ( !v21 )
        goto LABEL_12;
      CRegionShape::`vector deleting destructor'(v21, 1u);
      goto LABEL_41;
    }
    if ( v18 != 1 )
    {
LABEL_41:
      if ( v4 )
        (**(void (__fastcall ***)(struct CComplexShape *, __int64))v4)(v4, 1LL);
      goto LABEL_12;
    }
    v19 = CComplexShape::CopyComplex(this, a2, v25);
    v3 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x131u);
      goto LABEL_26;
    }
    goto LABEL_27;
  }
  v10 = *(__int64 (__fastcall **)(CRegionShape *, __int64, CBaseMatrix *))(v9 + 24);
  if ( (char *)v10 == (char *)CRectangleShape::GetTightBounds )
  {
    TightBounds = CRectangleShape::GetTightBounds(this);
  }
  else if ( v10 == CShape::GetTightBounds )
  {
    TightBounds = CShape::GetTightBounds(this, (__int64)v24, a2);
  }
  else
  {
    TightBounds = v10(this, (__int64)v24, a2);
  }
  v3 = TightBounds;
  if ( TightBounds < 0 )
  {
    v22 = 264;
  }
  else
  {
    v12 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
    if ( v12 == WPF::ProcessHeapImpl::Alloc )
      v13 = (struct CComplexShape *)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x20uLL);
    else
      v13 = (struct CComplexShape *)v12(WPF::g_pProcessHeap, 32uLL);
    if ( v13 )
    {
      *((_QWORD *)v13 + 3) = 0LL;
      *(_QWORD *)v13 = &CRectangleShape::`vftable';
      *(_OWORD *)v25 = *(_OWORD *)v24;
      *(_OWORD *)((char *)v13 + 8) = *(_OWORD *)v24;
LABEL_11:
      *a3 = v13;
      goto LABEL_12;
    }
    v3 = -2147024882;
    v22 = 266;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, v22);
LABEL_12:
  if ( v23 )
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v23 + 16LL))(v23);
  return v3;
}
