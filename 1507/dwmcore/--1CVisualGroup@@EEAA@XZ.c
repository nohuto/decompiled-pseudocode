/*
 * XREFs of ??1CVisualGroup@@EEAA@XZ @ 0x180106D1C
 * Callers:
 *     ??_GCVisualGroup@@EEAAPEAXI@Z @ 0x180106D50 (--_GCVisualGroup@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifiers@CVisualGroup@@UEAAXXZ @ 0x180107450 (-UnRegisterNotifiers@CVisualGroup@@UEAAXXZ.c)
 */

void __fastcall CVisualGroup::~CVisualGroup(CVisualGroup *this)
{
  *(_QWORD *)this = &CVisualGroup::`vftable';
  CVisualGroup::UnRegisterNotifiers(this);
  CResource::~CResource(this);
}
