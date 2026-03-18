/*
 * XREFs of ??1CTransform3DGroup@@MEAA@XZ @ 0x180060640
 * Callers:
 *     ??_ECTransform3DGroup@@MEAAPEAXI@Z @ 0x1800603C0 (--_ECTransform3DGroup@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1CCyclicResourceListEntry@@IEAA@XZ @ 0x180017CF8 (--1CCyclicResourceListEntry@@IEAA@XZ.c)
 *     ?UnRegisterNotifiers@CTransform3DGroup@@UEAAXXZ @ 0x1800605A0 (-UnRegisterNotifiers@CTransform3DGroup@@UEAAXXZ.c)
 */

void __fastcall CTransform3DGroup::~CTransform3DGroup(CTransform3DGroup *this)
{
  *(_QWORD *)this = &CTransform3DGroup::`vftable'{for `CTransform3D'};
  *((_QWORD *)this + 13) = &CTransform3DGroup::`vftable'{for `CCyclicResourceListEntry'};
  CTransform3DGroup::UnRegisterNotifiers(this);
  CCyclicResourceListEntry::~CCyclicResourceListEntry((CTransform3DGroup *)((char *)this + 104));
  CResource::~CResource(this);
}
