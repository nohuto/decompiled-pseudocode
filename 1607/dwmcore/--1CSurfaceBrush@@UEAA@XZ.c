/*
 * XREFs of ??1CSurfaceBrush@@UEAA@XZ @ 0x18013967C
 * Callers:
 *     ??_GCSurfaceBrush@@UEAAPEAXI@Z @ 0x18013EF20 (--_GCSurfaceBrush@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008E09C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?ReleasePrimitiveCaches@CSpriteVisualContent@@IEAAXXZ @ 0x180158148 (-ReleasePrimitiveCaches@CSpriteVisualContent@@IEAAXXZ.c)
 */

void __fastcall CSurfaceBrush::~CSurfaceBrush(CSurfaceBrush *this)
{
  *(_QWORD *)this = &CSurfaceBrush::`vftable'{for `CSpriteVisualContent'};
  *((_QWORD *)this + 15) = &CLinearGradientBrush::`vftable'{for `IVisualListenerInfoProvider'};
  CSpriteVisualContent::ReleasePrimitiveCaches(this);
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 18));
  *((_QWORD *)this + 18) = 0LL;
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 21));
  *((_QWORD *)this + 21) = 0LL;
  CResource::~CResource(this);
}
