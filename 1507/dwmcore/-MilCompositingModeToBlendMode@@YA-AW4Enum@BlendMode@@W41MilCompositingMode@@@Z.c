/*
 * XREFs of ?MilCompositingModeToBlendMode@@YA?AW4Enum@BlendMode@@W41MilCompositingMode@@@Z @ 0x1800FEFA4
 * Callers:
 *     ?AppendHWDrawListEntries@CHWDrawListCache@@QEAAJPEAVID2DContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@_N@Z @ 0x1800DE1F0 (-AppendHWDrawListEntries@CHWDrawListCache@@QEAAJPEAVID2DContext@@AEBVCMILMatrix@@MW4Enum@MilComp.c)
 *     ?DrawPrimitiveMesh@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCPrimitive@@AEBUD2D_MATRIX_3X2_F@@AEBUD2D_RECT_F@@@Z @ 0x1800F294C (-DrawPrimitiveMesh@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCPrimitive@@AEBUD2D_MATRIX_3X2_F@@AEBU.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MilCompositingModeToBlendMode(int a1)
{
  int v1; // ecx
  int v2; // ecx

  if ( a1 )
  {
    v1 = a1 - 1;
    if ( !v1 )
      return 5LL;
    v2 = v1 - 1;
    if ( !v2 )
      return 21LL;
    if ( v2 == 2 )
      return 22LL;
  }
  return 0LL;
}
