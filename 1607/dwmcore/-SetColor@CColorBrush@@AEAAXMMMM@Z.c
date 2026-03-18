/*
 * XREFs of ?SetColor@CColorBrush@@AEAAXMMMM@Z @ 0x1801394E0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?SetProperty@CColorBrush@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180139560 (-SetProperty@CColorBrush@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x18008DB00 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?ReleasePrimitiveCaches@CSpriteVisualContent@@IEAAXXZ @ 0x180158148 (-ReleasePrimitiveCaches@CSpriteVisualContent@@IEAAXXZ.c)
 */

void __fastcall CColorBrush::SetColor(CColorBrush *this, float a2, float a3, float a4, float a5)
{
  if ( *((float *)this + 30) != a2
    || *((float *)this + 31) != a3
    || *((float *)this + 32) != a4
    || *((float *)this + 33) != a5 )
  {
    *((float *)this + 30) = a2;
    *((float *)this + 31) = a3;
    *((float *)this + 32) = a4;
    *((float *)this + 33) = a5;
    CSpriteVisualContent::ReleasePrimitiveCaches(this);
    CResource::InvalidateAnimationSources(this, 0);
  }
}
