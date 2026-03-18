/*
 * XREFs of ?CalculateSurfaceSizeAndMapping@CDeviceAlignedIntermediateRealizer@@AEAAXPEAUMilRectF@@PEAI1PEAVCMILMatrix@@@Z @ 0x1801221C4
 * Callers:
 *     ?Realize@CDeviceAlignedIntermediateRealizer@@QEAAJPEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingContext@@PEAVCMILMatrix@@PEAH@Z @ 0x180122290 (-Realize@CDeviceAlignedIntermediateRealizer@@QEAAJPEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingCon.c)
 * Callees:
 *     ?AdjustSurfaceSizeAndMappingForMaxIntermediateSize1D@CDeviceAlignedIntermediateRealizer@@CAXPEAIPEAM1@Z @ 0x1801220FC (-AdjustSurfaceSizeAndMappingForMaxIntermediateSize1D@CDeviceAlignedIntermediateRealizer@@CAXPEAI.c)
 *     ?CalculateSurfaceSizeAndMapping1D@CDeviceAlignedIntermediateRealizer@@AEAAXMMPEAIPEAM1@Z @ 0x18012213C (-CalculateSurfaceSizeAndMapping1D@CDeviceAlignedIntermediateRealizer@@AEAAXMMPEAIPEAM1@Z.c)
 */

void __fastcall CDeviceAlignedIntermediateRealizer::CalculateSurfaceSizeAndMapping(
        CDeviceAlignedIntermediateRealizer *this,
        struct MilRectF *a2,
        unsigned int *a3,
        unsigned int *a4,
        struct CMILMatrix *a5)
{
  CDeviceAlignedIntermediateRealizer *v8; // rcx
  float *v9; // r10
  float *v10; // r8
  float *v11; // r11
  float *v12; // r10

  *((_DWORD *)a5 + 14) = 0;
  *((_DWORD *)a5 + 12) = 0;
  *((_DWORD *)a5 + 13) = 0;
  *((_QWORD *)a5 + 4) = 0LL;
  *((_QWORD *)a5 + 3) = 0LL;
  *(_QWORD *)((char *)a5 + 12) = 0LL;
  *(_QWORD *)((char *)a5 + 4) = 0LL;
  *((_DWORD *)a5 + 15) = 1065353216;
  *((_DWORD *)a5 + 5) = 1065353216;
  *(_DWORD *)a5 = 1065353216;
  *((_QWORD *)a5 + 5) = 1065353216LL;
  CDeviceAlignedIntermediateRealizer::CalculateSurfaceSizeAndMapping1D(
    this,
    *(float *)a2,
    COERCE_DOUBLE((unsigned __int64)*((_DWORD *)a2 + 2)),
    a3,
    (float *)a5,
    (float *)a5 + 12);
  CDeviceAlignedIntermediateRealizer::CalculateSurfaceSizeAndMapping1D(
    v8,
    *((float *)a2 + 1),
    COERCE_DOUBLE((unsigned __int64)*((_DWORD *)a2 + 3)),
    a4,
    v9,
    (float *)a5 + 13);
  CDeviceAlignedIntermediateRealizer::AdjustSurfaceSizeAndMappingForMaxIntermediateSize1D(a3, v11, v10);
  CDeviceAlignedIntermediateRealizer::AdjustSurfaceSizeAndMappingForMaxIntermediateSize1D(a4, v12, (float *)a5 + 13);
}
