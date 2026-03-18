/*
 * XREFs of ??1CMaskBrush@@MEAA@XZ @ 0x18013E7C0
 * Callers:
 *     ??_ECMaskBrush@@MEAAPEAXI@Z @ 0x18013E820 (--_ECMaskBrush@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008E09C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CMaskBrush::~CMaskBrush(CMaskBrush *this)
{
  *(_QWORD *)this = &CMaskBrush::`vftable'{for `CSpriteVisualContent'};
  *((_QWORD *)this + 15) = &CMaskBrush::`vftable'{for `IVisualListenerInfoProvider'};
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 17));
  *((_QWORD *)this + 17) = 0LL;
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 16));
  *((_QWORD *)this + 16) = 0LL;
  CResource::~CResource(this);
}
