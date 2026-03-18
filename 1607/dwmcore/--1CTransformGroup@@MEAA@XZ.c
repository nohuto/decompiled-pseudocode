/*
 * XREFs of ??1CTransformGroup@@MEAA@XZ @ 0x1800230C8
 * Callers:
 *     ??_GCTransformGroup@@MEAAPEAXI@Z @ 0x180022C20 (--_GCTransformGroup@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifiers@CTransformGroup@@UEAAXXZ @ 0x180023030 (-UnRegisterNotifiers@CTransformGroup@@UEAAXXZ.c)
 *     ??1CCyclicResourceListEntry@@IEAA@XZ @ 0x18009EE70 (--1CCyclicResourceListEntry@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CTransformGroup::~CTransformGroup(CTransformGroup *this)
{
  CCyclicResourceListEntry *v2; // rdi

  *(_QWORD *)this = &CTransformGroup::`vftable'{for `CTransform'};
  v2 = (CTransformGroup *)((char *)this + 216);
  *((_QWORD *)this + 27) = &CTransformGroup::`vftable'{for `CCyclicResourceListEntry'};
  CTransformGroup::UnRegisterNotifiers(this);
  if ( *((_QWORD *)this + 32) )
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    *((_QWORD *)this + 32) = 0LL;
  }
  CCyclicResourceListEntry::~CCyclicResourceListEntry(v2);
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
}
