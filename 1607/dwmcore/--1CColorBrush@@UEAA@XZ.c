/*
 * XREFs of ??1CColorBrush@@UEAA@XZ @ 0x18012B1C4
 * Callers:
 *     ??_ECColorBrush@@UEAAPEAXI@Z @ 0x18012B6D0 (--_ECColorBrush@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?ReleasePrimitiveCaches@CSpriteVisualContent@@IEAAXXZ @ 0x180158148 (-ReleasePrimitiveCaches@CSpriteVisualContent@@IEAAXXZ.c)
 */

void __fastcall CColorBrush::~CColorBrush(CColorBrush *this)
{
  *(_QWORD *)this = &CColorBrush::`vftable';
  CSpriteVisualContent::ReleasePrimitiveCaches(this);
  CResource::~CResource(this);
}
