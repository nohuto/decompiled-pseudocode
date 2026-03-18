/*
 * XREFs of ??1CNineGridBrush@@MEAA@XZ @ 0x18013F790
 * Callers:
 *     ??_GCNineGridBrush@@MEAAPEAXI@Z @ 0x18013F7E0 (--_GCNineGridBrush@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008E09C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CNineGridBrush::~CNineGridBrush(CNineGridBrush *this)
{
  *(_QWORD *)this = &CNineGridBrush::`vftable'{for `CSpriteVisualContent'};
  *((_QWORD *)this + 15) = &CNineGridBrush::`vftable'{for `IVisualListenerInfoProvider'};
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 16));
  *((_QWORD *)this + 16) = 0LL;
  CResource::~CResource(this);
}
