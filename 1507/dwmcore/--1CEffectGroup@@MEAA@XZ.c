/*
 * XREFs of ??1CEffectGroup@@MEAA@XZ @ 0x18003C7F0
 * Callers:
 *     ??_ECEffectGroup@@MEAAPEAXI@Z @ 0x18003C710 (--_ECEffectGroup@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180048420 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CEffectGroup::~CEffectGroup(CEffectGroup *this)
{
  bool v1; // zf

  v1 = *((_QWORD *)this + 7) == 0LL;
  *(_QWORD *)this = &CEffectGroup::`vftable';
  if ( !v1 )
  {
    CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 7));
    *((_QWORD *)this + 7) = 0LL;
  }
  CResource::~CResource(this);
}
