/*
 * XREFs of ??1CEffectGroup@@MEAA@XZ @ 0x18004E74C
 * Callers:
 *     ??_ECEffectGroup@@MEAAPEAXI@Z @ 0x18004E490 (--_ECEffectGroup@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008596C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CEffectGroup::~CEffectGroup(CEffectGroup *this)
{
  bool v1; // zf

  v1 = *((_QWORD *)this + 9) == 0LL;
  *(_QWORD *)this = &CEffectGroup::`vftable';
  if ( !v1 )
  {
    CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 9));
    *((_QWORD *)this + 9) = 0LL;
  }
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
}
