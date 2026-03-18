/*
 * XREFs of ?GetShapeDataWorker@CGeometry@@AEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18002C9C0
 * Callers:
 *     ?GetShapeData@CGeometry@@QEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18000DB24 (-GetShapeData@CGeometry@@QEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180027F90 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x180028480 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionIn.c)
 *     ?GetShapeDataNoRef@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z @ 0x18002CBC0 (-GetShapeDataNoRef@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z.c)
 *     ?GetBoundsSafe@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18002CC68 (-GetBoundsSafe@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 *     ?PreSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005E1E0 (-PreSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180062AD0 (-PreSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180064E80 (-PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@1PEA_N@Z @ 0x180067DF0 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 * Callees:
 *     ?GetRealization@CComponentTransform2D@@QEAAXAEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180020928 (-GetRealization@CComponentTransform2D@@QEAAXAEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18002C4F0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?GetShapeDataCore@CRgnGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18002FB50 (-GetShapeDataCore@CRgnGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetShapeDataCore@CRectangleGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180095DF0 (-GetShapeDataCore@CRectangleGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800B1980 (-Release@CShapePtr@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGeometry::GetShapeDataWorker(CGeometry *this, const struct D2D_SIZE_F *a2, struct CShapePtr *a3)
{
  const struct D2D_SIZE_F *v6; // rdx
  int (*v7)(CRgnGeometry *__hidden, const struct D2D_SIZE_F *, struct CShapePtr *); // rax
  int ShapeDataCore; // eax
  unsigned int v9; // edi
  CComponentTransform2D *v10; // rcx
  struct ID2D1RegionGeometry **v12; // rcx
  int v13; // eax
  D2D_SIZE_F v14; // [rsp+30h] [rbp-49h] BYREF
  __int64 v15; // [rsp+40h] [rbp-39h] BYREF
  int v16; // [rsp+48h] [rbp-31h]
  int v17; // [rsp+4Ch] [rbp-2Dh]
  __int64 v18; // [rsp+50h] [rbp-29h]
  __int64 v19; // [rsp+58h] [rbp-21h]
  __int64 v20; // [rsp+60h] [rbp-19h]
  int v21; // [rsp+68h] [rbp-11h]
  int v22; // [rsp+6Ch] [rbp-Dh]
  __int64 v23; // [rsp+70h] [rbp-9h]
  int v24; // [rsp+78h] [rbp-1h]
  int v25; // [rsp+7Ch] [rbp+3h]
  int v26; // [rsp+80h] [rbp+7h]
  struct D2D_MATRIX_3X2_F v27; // [rsp+90h] [rbp+17h] BYREF

  v6 = (const struct D2D_SIZE_F *)((unsigned __int64)a2 & -(__int64)(*((_BYTE *)this + 168) != 0));
  v7 = *(int (**)(CRgnGeometry *__hidden, const struct D2D_SIZE_F *, struct CShapePtr *))(*(_QWORD *)this + 120LL);
  if ( v7 == CRgnGeometry::GetShapeDataCore )
  {
    ShapeDataCore = CRgnGeometry::GetShapeDataCore(this, v6, a3);
  }
  else if ( (char *)v7 == (char *)CRectangleGeometry::GetShapeDataCore )
  {
    ShapeDataCore = CRectangleGeometry::GetShapeDataCore(this, v6, a3);
  }
  else
  {
    ShapeDataCore = ((__int64 (__fastcall *)(CGeometry *, const struct D2D_SIZE_F *))v7)(this, v6);
  }
  v9 = ShapeDataCore;
  if ( ShapeDataCore < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, ShapeDataCore, 0x93u);
  }
  else
  {
    v10 = (CComponentTransform2D *)*((_QWORD *)this + 17);
    if ( v10 )
    {
      v14 = 0LL;
      if ( a2 )
        v14 = *a2;
      if ( *(_QWORD *)a3 )
      {
        CComponentTransform2D::GetRealization(v10, &v14, &v27);
        v12 = *(struct ID2D1RegionGeometry ***)a3;
        v26 = 0;
        v16 = 0;
        v17 = 0;
        v19 = 0LL;
        v20 = 0LL;
        v22 = 0;
        v24 = 0;
        v18 = *(_QWORD *)&v27.m[1][0];
        v15 = *(_QWORD *)&v27.m11;
        v23 = *(_QWORD *)&v27.m[2][0];
        v21 = 1065353216;
        v25 = 1065353216;
        v13 = CShape::CopyShape(v12, (const struct CMILMatrix *)&v15, (struct CShape **)&v14);
        v9 = v13;
        if ( v13 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xA6u);
        }
        else
        {
          CShapePtr::Release(a3);
          *(D2D_SIZE_F *)a3 = v14;
          *((_BYTE *)a3 + 8) = 1;
        }
      }
    }
  }
  return v9;
}
