/*
 * XREFs of ?D2DExtendModeFromExtendMode@@YA?AW4D2D1_EXTEND_MODE@@W4Enum@ExtendMode@@@Z @ 0x180117D9C
 * Callers:
 *     ?DrawCommonRenderingEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCSpriteVisualContent@@AEBUD2D_SIZE_F@@@Z @ 0x18010C250 (-DrawCommonRenderingEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCSpriteVisualContent@@AEBUD2D_.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall D2DExtendModeFromExtendMode(char a1)
{
  if ( a1 )
  {
    if ( a1 == 1 )
      return 1LL;
    if ( a1 == 2 )
      return 2LL;
  }
  return 0LL;
}
