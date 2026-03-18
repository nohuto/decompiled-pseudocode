/*
 * XREFs of ?MilCompositingModeToBlendMode@@YA?AW4Enum@BlendMode@@W41MilCompositingMode@@@Z @ 0x180117D70
 * Callers:
 *     ?AppendHWDrawListEntries@CHWDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@_N@Z @ 0x1800FA918 (-AppendHWDrawListEntries@CHWDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@Mil.c)
 *     ?DrawCommonRenderingEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCSpriteVisualContent@@AEBUD2D_SIZE_F@@@Z @ 0x18010C250 (-DrawCommonRenderingEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCSpriteVisualContent@@AEBUD2D_.c)
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
