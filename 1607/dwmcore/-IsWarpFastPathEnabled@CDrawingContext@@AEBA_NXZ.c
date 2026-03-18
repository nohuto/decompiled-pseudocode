/*
 * XREFs of ?IsWarpFastPathEnabled@CDrawingContext@@AEBA_NXZ @ 0x18010791C
 * Callers:
 *     ?DrawCommonRenderingEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCSpriteVisualContent@@AEBUD2D_SIZE_F@@@Z @ 0x180122310 (-DrawCommonRenderingEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCSpriteVisualContent@@AEBUD2D_.c)
 * Callees:
 *     ?HasLighting@CLightStack@@QEBA_NXZ @ 0x18001D788 (-HasLighting@CLightStack@@QEBA_NXZ.c)
 */

bool __fastcall CDrawingContext::IsWarpFastPathEnabled(CDrawingContext *this)
{
  char v1; // bl

  v1 = 0;
  if ( *((_BYTE *)this + 6537) && !CCommonRegistryData::m_fUseHWDrawListEntriesOnWARP )
    return !CLightStack::HasLighting((CDrawingContext *)((char *)this + 728));
  return v1;
}
