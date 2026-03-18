/*
 * XREFs of ??1CEffectGroup@@MEAA@XZ @ 0x1800560EC
 * Callers:
 *     ??_ECEffectGroup@@MEAAPEAXI@Z @ 0x180055F00 (--_ECEffectGroup@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008E09C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CEffectGroup::~CEffectGroup(CEffectGroup *this)
{
  bool v1; // zf

  v1 = *((_QWORD *)this + 19) == 0LL;
  *(_QWORD *)this = &CEffectGroup::`vftable';
  if ( !v1 )
  {
    CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 19));
    *((_QWORD *)this + 19) = 0LL;
  }
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
}
