/*
 * XREFs of ?GetShapeData@CGeometry@@QEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18000DB24
 * Callers:
 *     ?PreSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18000AB10 (-PreSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?GetShapeDataCore@CCombinedGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180020280 (-GetShapeDataCore@CCombinedGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 * Callees:
 *     ?GetShapeDataWorker@CGeometry@@AEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18002C9C0 (-GetShapeDataWorker@CGeometry@@AEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800B1980 (-Release@CShapePtr@@QEAAXXZ.c)
 */

__int64 __fastcall CGeometry::GetShapeData(CGeometry *this, const struct D2D_SIZE_F *a2, struct CShapePtr *a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rsi
  int ShapeDataWorker; // eax

  v3 = 0;
  if ( *((_BYTE *)this + 168) || (*((_BYTE *)this + 32) & 1) != 0 || (v5 = *((_QWORD *)this + 19)) == 0 )
  {
    ShapeDataWorker = CGeometry::GetShapeDataWorker(this, a2, a3);
    v3 = ShapeDataWorker;
    if ( ShapeDataWorker < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, ShapeDataWorker, 0x4Du);
  }
  else
  {
    CShapePtr::Release(a3);
    *(_QWORD *)a3 = v5;
    *((_BYTE *)a3 + 8) = 0;
  }
  return v3;
}
