/*
 * XREFs of ??0CMILMatrix@@QEAA@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x180076174
 * Callers:
 *     ?FillRectangleWithSolidColor@CD2DContext@@MEAAJPEBVID2DContextOwner@@AEBUD2D_RECT_F@@AEBU_D3DCOLORVALUE@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x180071CB0 (-FillRectangleWithSolidColor@CD2DContext@@MEAAJPEBVID2DContextOwner@@AEBUD2D_RECT_F@@AEBU_D3DCOL.c)
 *     ?FillShapeWithBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@AEBVCShape@@PEAUID2D1Bitmap1@@AEBUD2D_MATRIX_3X2_F@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_EXTEND_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x180071DB0 (-FillShapeWithBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@AEBVCShape@@PEAUID2D1Bitmap1@@AEBUD.c)
 *     ?DrawBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@PEBUD2D_RECT_F@@2MW4D2D1_ANTIALIAS_MODE@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1800721B0 (-DrawBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@PEBUD2D_RECT_F@@2MW4D2D1_A.c)
 *     ?Initialize@CpuClipShape@@QEAAJPEAVCScopedClipStack@@PEBVCMILMatrix@@@Z @ 0x1800735A4 (-Initialize@CpuClipShape@@QEAAJPEAVCScopedClipStack@@PEBVCMILMatrix@@@Z.c)
 *     ?UpdateHWDrawListCache@CPrimitiveGroupDrawListGenerator@@QEAAJ_KPEAVCDrawListPrimitiveBuilder@@W4D2D1_ANTIALIAS_MODE@@PEBVCMILMatrix@@PEAVCShape@@_NPEAVCHWDrawListCache@@@Z @ 0x18007627C (-UpdateHWDrawListCache@CPrimitiveGroupDrawListGenerator@@QEAAJ_KPEAVCDrawListPrimitiveBuilder@@W.c)
 *     ?AppendRect@CDrawListPrimitiveBuilder@@QEAAJAEBUD2D_RECT_F@@PEBVMatrix3x2F@D2D1@@W4D2D1_EDGE_FLAGS@@W4D2D1_ANTIALIAS_MODE@@_N4PEBUD2D1_COMPOSITOR_PRIMITIVE_LAYER_STATE@@PEAVCShape@@4@Z @ 0x180076F50 (-AppendRect@CDrawListPrimitiveBuilder@@QEAAJAEBUD2D_RECT_F@@PEBVMatrix3x2F@D2D1@@W4D2D1_EDGE_FLA.c)
 *     ?CalculateSwapChainRotation@CPrimitive@@AEBA_NMMW4DXGI_MODE_ROTATION@@PEAVCMILMatrix@@PEA_N@Z @ 0x180116D30 (-CalculateSwapChainRotation@CPrimitive@@AEBA_NMMW4DXGI_MODE_ROTATION@@PEAVCMILMatrix@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

CMILMatrix *__fastcall CMILMatrix::CMILMatrix(CMILMatrix *this, const struct D2D_MATRIX_3X2_F *a2)
{
  FLOAT m22; // eax

  if ( a2 )
  {
    *(_QWORD *)this = *(_QWORD *)&a2->m11;
    *((_QWORD *)this + 1) = 0LL;
    *((_DWORD *)this + 4) = LODWORD(a2->m21);
    m22 = a2->m22;
    *((_QWORD *)this + 5) = 1065353216LL;
    *((FLOAT *)this + 5) = m22;
    *((_QWORD *)this + 3) = 0LL;
    *((_QWORD *)this + 4) = 0LL;
    *((_DWORD *)this + 12) = LODWORD(a2->dx);
    *(_QWORD *)((char *)this + 52) = LODWORD(a2->dy);
  }
  else
  {
    *(_QWORD *)((char *)this + 52) = 0LL;
    *((_DWORD *)this + 10) = 1065353216;
    *((_DWORD *)this + 5) = 1065353216;
    *(_DWORD *)this = 1065353216;
    *(_QWORD *)((char *)this + 44) = 0LL;
    *((_QWORD *)this + 4) = 0LL;
    *((_QWORD *)this + 3) = 0LL;
    *(_QWORD *)((char *)this + 12) = 0LL;
    *(_QWORD *)((char *)this + 4) = 0LL;
  }
  *((_DWORD *)this + 15) = 1065353216;
  return this;
}
