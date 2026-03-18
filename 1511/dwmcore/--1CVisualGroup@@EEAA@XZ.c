/*
 * XREFs of ??1CVisualGroup@@EEAA@XZ @ 0x180124820
 * Callers:
 *     ??_GCVisualGroup@@EEAAPEAXI@Z @ 0x180124850 (--_GCVisualGroup@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifiers@CVisualGroup@@UEAAXXZ @ 0x180124A50 (-UnRegisterNotifiers@CVisualGroup@@UEAAXXZ.c)
 */

void __fastcall CVisualGroup::~CVisualGroup(CVisualGroup *this)
{
  *(_QWORD *)this = &CVisualGroup::`vftable';
  CVisualGroup::UnRegisterNotifiers(this);
  CResource::~CResource(this);
}
