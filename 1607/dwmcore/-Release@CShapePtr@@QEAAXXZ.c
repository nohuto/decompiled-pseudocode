/*
 * XREFs of ?Release@CShapePtr@@QEAAXXZ @ 0x1800B1980
 * Callers:
 *     ?PreSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18000AB10 (-PreSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?GetShapeData@CGeometry@@QEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18000DB24 (-GetShapeData@CGeometry@@QEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?GetShapeDataCore@CCombinedGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180020280 (-GetShapeDataCore@CCombinedGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?GetShapeDataWorker@CGeometry@@AEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18002C9C0 (-GetShapeDataWorker@CGeometry@@AEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ??1CGeometry@@MEAA@XZ @ 0x18002CB48 (--1CGeometry@@MEAA@XZ.c)
 *     ?GetShapeDataCore@CRgnGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18002FB50 (-GetShapeDataCore@CRgnGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@1PEA_N@Z @ 0x180067DF0 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ?FreeCpuClipStackState@CScopedClipStack@@AEAAXPEAUCpuClipStackState@1@@Z @ 0x180111F44 (-FreeCpuClipStackState@CScopedClipStack@@AEAAXPEAUCpuClipStackState@1@@Z.c)
 *     ?GetShapeDataCore@CGeometryGroup@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180157CB0 (-GetShapeDataCore@CGeometryGroup@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 * Callees:
 *     ??_ECRegionShape@@UEAAPEAXI@Z @ 0x18002C1F0 (--_ECRegionShape@@UEAAPEAXI@Z.c)
 *     ??_GCRectanglesShape@@UEAAPEAXI@Z @ 0x180097E80 (--_GCRectanglesShape@@UEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CShapePtr::Release(CRegionShape **this)
{
  CRegionShape *v2; // rcx
  CRectanglesShape *(__fastcall *v3)(CRectanglesShape *, char); // rax

  if ( *((_BYTE *)this + 8) )
  {
    v2 = *this;
    if ( v2 )
    {
      v3 = **(CRectanglesShape *(__fastcall ***)(CRectanglesShape *, char))v2;
      if ( v3 == CRegionShape::`vector deleting destructor' )
      {
        CRegionShape::`vector deleting destructor'(v2, 1);
      }
      else if ( v3 == CRectanglesShape::`scalar deleting destructor' )
      {
        CRectanglesShape::`scalar deleting destructor'(v2, 1);
      }
      else
      {
        v3(v2, 1);
      }
    }
  }
  *this = 0LL;
  *((_BYTE *)this + 8) = 0;
}
