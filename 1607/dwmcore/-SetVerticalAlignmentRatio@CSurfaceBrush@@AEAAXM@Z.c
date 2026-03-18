/*
 * XREFs of ?SetVerticalAlignmentRatio@CSurfaceBrush@@AEAAXM@Z @ 0x18013AE90
 * Callers:
 *     ?SetProperty@CSurfaceBrush@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18013AD90 (-SetProperty@CSurfaceBrush@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x18008DB00 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?ReleasePrimitiveCaches@CSpriteVisualContent@@IEAAXXZ @ 0x180158148 (-ReleasePrimitiveCaches@CSpriteVisualContent@@IEAAXXZ.c)
 */

void __fastcall CSurfaceBrush::SetVerticalAlignmentRatio(CSurfaceBrush *this, float a2)
{
  if ( *((float *)this + 33) != a2 )
  {
    *((float *)this + 33) = a2;
    CSpriteVisualContent::ReleasePrimitiveCaches(this);
    CResource::InvalidateAnimationSources(this, 3);
  }
}
