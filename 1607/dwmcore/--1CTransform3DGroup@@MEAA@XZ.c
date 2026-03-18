/*
 * XREFs of ??1CTransform3DGroup@@MEAA@XZ @ 0x180021BE8
 * Callers:
 *     ??_ECTransform3DGroup@@MEAAPEAXI@Z @ 0x180021AA0 (--_ECTransform3DGroup@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifiers@CTransform3DGroup@@UEAAXXZ @ 0x180021B60 (-UnRegisterNotifiers@CTransform3DGroup@@UEAAXXZ.c)
 *     ??1CCyclicResourceListEntry@@IEAA@XZ @ 0x18009EE70 (--1CCyclicResourceListEntry@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CTransform3DGroup::~CTransform3DGroup(CTransform3DGroup *this)
{
  CCyclicResourceListEntry *v2; // rdi

  *(_QWORD *)this = &CTransform3DGroup::`vftable'{for `CTransform3D'};
  v2 = (CTransform3DGroup *)((char *)this + 216);
  *((_QWORD *)this + 27) = &CTransform3DGroup::`vftable'{for `CCyclicResourceListEntry'};
  CTransform3DGroup::UnRegisterNotifiers(this);
  if ( *((_QWORD *)this + 32) )
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    *((_QWORD *)this + 32) = 0LL;
  }
  CCyclicResourceListEntry::~CCyclicResourceListEntry(v2);
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
}
