/*
 * XREFs of ??1CSpriteVisual@@UEAA@XZ @ 0x180138E18
 * Callers:
 *     ??_GCSpriteVisual@@UEAAPEAXI@Z @ 0x180138E60 (--_GCSpriteVisual@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008E09C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CSpriteVisual::~CSpriteVisual(struct CResource **this)
{
  *this = (struct CResource *)&CSpriteVisual::`vftable';
  CResource::UnRegisterNotifierInternal((CResource *)this, this[69]);
  this[69] = 0LL;
  CVisual::~CVisual(this);
}
