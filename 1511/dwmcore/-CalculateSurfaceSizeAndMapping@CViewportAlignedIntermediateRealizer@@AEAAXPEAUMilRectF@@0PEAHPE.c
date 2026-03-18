/*
 * XREFs of ?CalculateSurfaceSizeAndMapping@CViewportAlignedIntermediateRealizer@@AEAAXPEAUMilRectF@@0PEAHPEAI2PEAVCMILMatrix@@PEAVCMilPoint2F@@@Z @ 0x180137EB8
 * Callers:
 *     ?Realize@CViewportAlignedIntermediateRealizer@@QEAAJPEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingContext@@PEAVCMILMatrix@@PEAH@Z @ 0x1801381F0 (-Realize@CViewportAlignedIntermediateRealizer@@QEAAJPEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingC.c)
 * Callees:
 *     ?AdjustSurfaceSizeAndMapping1D@CViewportAlignedIntermediateRealizer@@AEAAXIPEAIPEAM1@Z @ 0x180137B00 (-AdjustSurfaceSizeAndMapping1D@CViewportAlignedIntermediateRealizer@@AEAAXIPEAIPEAM1@Z.c)
 *     ?CalculateSurfaceSizeAndMapping1D@CViewportAlignedIntermediateRealizer@@AEAAXW4Enum@TileMode1D@@MMMMPEAHPEAIPEAM33@Z @ 0x180137D24 (-CalculateSurfaceSizeAndMapping1D@CViewportAlignedIntermediateRealizer@@AEAAXW4Enum@TileMode1D@@.c)
 */

void __fastcall CViewportAlignedIntermediateRealizer::CalculateSurfaceSizeAndMapping(
        CViewportAlignedIntermediateRealizer *this,
        struct MilRectF *a2,
        struct MilRectF *a3,
        int *a4,
        unsigned int *a5,
        unsigned int *a6,
        struct CMILMatrix *a7,
        struct CMilPoint2F *a8)
{
  __int64 v11; // rdx
  __int64 v12; // rcx
  CViewportAlignedIntermediateRealizer *v13; // rcx
  CViewportAlignedIntermediateRealizer *v14; // rcx

  *((_DWORD *)a7 + 14) = 0;
  *((_DWORD *)a7 + 12) = 0;
  *((_DWORD *)a7 + 13) = 0;
  *((_QWORD *)a7 + 4) = 0LL;
  *((_QWORD *)a7 + 3) = 0LL;
  *(_QWORD *)((char *)a7 + 12) = 0LL;
  *(_QWORD *)((char *)a7 + 4) = 0LL;
  *((_DWORD *)a7 + 15) = 1065353216;
  *((_DWORD *)a7 + 5) = 1065353216;
  *(_DWORD *)a7 = 1065353216;
  *((_QWORD *)a7 + 5) = 1065353216LL;
  CViewportAlignedIntermediateRealizer::CalculateSurfaceSizeAndMapping1D(
    1065353216LL,
    (__int64)a2,
    *(float *)a2,
    *((float *)a2 + 2),
    *(float *)a3,
    *((float *)a3 + 2),
    a4,
    (int *)a5,
    (float *)a7,
    (float *)a7 + 12,
    a8);
  if ( !*a4 )
  {
    CViewportAlignedIntermediateRealizer::CalculateSurfaceSizeAndMapping1D(
      v12,
      v11,
      *((float *)a2 + 1),
      *((float *)a2 + 3),
      *((float *)a3 + 1),
      *((float *)a3 + 3),
      a4,
      (int *)a6,
      (float *)a7 + 5,
      (float *)a7 + 13,
      (_DWORD *)a8 + 1);
    if ( !*a4 )
    {
      CViewportAlignedIntermediateRealizer::AdjustSurfaceSizeAndMapping1D(v13, *a6, a5, (float *)a7, (float *)a7 + 12);
      CViewportAlignedIntermediateRealizer::AdjustSurfaceSizeAndMapping1D(
        v14,
        *a5,
        a6,
        (float *)a7 + 5,
        (float *)a7 + 13);
    }
  }
}
