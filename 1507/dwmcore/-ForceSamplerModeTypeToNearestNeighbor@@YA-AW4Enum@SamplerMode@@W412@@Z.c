/*
 * XREFs of ?ForceSamplerModeTypeToNearestNeighbor@@YA?AW4Enum@SamplerMode@@W412@@Z @ 0x18000E5EC
 * Callers:
 *     ?DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@PEAVCVisual@@_NPEAI@Z @ 0x18002B200 (-DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@PEAVCVisual@@_NPEAI@Z.c)
 *     ?AppendHWDrawListEntries@CHWDrawListCache@@QEAAJPEAVID2DContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@_N@Z @ 0x1800DE1F0 (-AppendHWDrawListEntries@CHWDrawListCache@@QEAAJPEAVID2DContext@@AEBVCMILMatrix@@MW4Enum@MilComp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ForceSamplerModeTypeToNearestNeighbor(int a1)
{
  __int64 result; // rax

  result = (unsigned int)(a1 - 9);
  if ( a1 < 9 )
    return (unsigned int)a1;
  return result;
}
