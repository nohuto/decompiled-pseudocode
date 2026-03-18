/*
 * XREFs of ??1CTransformGroup@@MEAA@XZ @ 0x18001A438
 * Callers:
 *     ??_GCTransformGroup@@MEAAPEAXI@Z @ 0x18001A060 (--_GCTransformGroup@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1CCyclicResourceListEntry@@IEAA@XZ @ 0x180017CF8 (--1CCyclicResourceListEntry@@IEAA@XZ.c)
 *     ?UnRegisterNotifiers@CTransformGroup@@UEAAXXZ @ 0x18001A240 (-UnRegisterNotifiers@CTransformGroup@@UEAAXXZ.c)
 */

void __fastcall CTransformGroup::~CTransformGroup(CTransformGroup *this)
{
  *(_QWORD *)this = &CTransformGroup::`vftable'{for `CTransform'};
  *((_QWORD *)this + 13) = &CTransform3DGroup::`vftable'{for `CCyclicResourceListEntry'};
  CTransformGroup::UnRegisterNotifiers(this);
  CCyclicResourceListEntry::~CCyclicResourceListEntry((CTransformGroup *)((char *)this + 104));
  CResource::~CResource(this);
}
