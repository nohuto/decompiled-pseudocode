/*
 * XREFs of ?AdjustSurfaceSizeAndMapping1D@CViewportAlignedIntermediateRealizer@@AEAAXIPEAIPEAM1@Z @ 0x180122594
 * Callers:
 *     ?CalculateSurfaceSizeAndMapping@CViewportAlignedIntermediateRealizer@@AEAAXPEAUMilRectF@@0PEAHPEAI2PEAVCMILMatrix@@PEAVCMilPoint2F@@@Z @ 0x18012294C (-CalculateSurfaceSizeAndMapping@CViewportAlignedIntermediateRealizer@@AEAAXPEAUMilRectF@@0PEAHPE.c)
 * Callees:
 *     <none>
 */

void __fastcall CViewportAlignedIntermediateRealizer::AdjustSurfaceSizeAndMapping1D(
        CViewportAlignedIntermediateRealizer *this,
        unsigned int a2,
        unsigned int *a3,
        float *a4,
        float *a5)
{
  int v5; // ecx
  int v6; // eax
  float v7; // xmm2_4

  v5 = 2046;
  if ( *a3 > 0x7FE )
  {
    if ( a2 > 0x7FE )
      v5 = 2048;
    v6 = *a3;
    *a3 = v5;
    v7 = (float)v5 / (float)v6;
    *a4 = v7 * *a4;
    *a5 = v7 * *a5;
  }
}
