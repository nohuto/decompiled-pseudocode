/*
 * XREFs of ??_ECGeometry2DGroup@@MEAAPEAXI@Z @ 0x18012B810
 * Callers:
 *     <none>
 * Callees:
 *     ??1CCyclicResourceListEntry@@IEAA@XZ @ 0x18009EE70 (--1CCyclicResourceListEntry@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??1CGeometry2D@@MEAA@XZ @ 0x18012B1F0 (--1CGeometry2D@@MEAA@XZ.c)
 *     ?UnRegisterNotifiers@CGeometry2DGroup@@UEAAXXZ @ 0x180151AF0 (-UnRegisterNotifiers@CGeometry2DGroup@@UEAAXXZ.c)
 */

CGeometry2DGroup *__fastcall CGeometry2DGroup::`vector deleting destructor'(CGeometry2DGroup *this, char a2)
{
  CCyclicResourceListEntry *v3; // rbx

  *(_QWORD *)this = &CGeometry2DGroup::`vftable'{for `CGeometry2D'};
  v3 = (CGeometry2DGroup *)((char *)this + 128);
  *((_QWORD *)this + 16) = &CGeometry2DGroup::`vftable'{for `CCyclicResourceListEntry'};
  CGeometry2DGroup::UnRegisterNotifiers(this);
  CCyclicResourceListEntry::~CCyclicResourceListEntry(v3);
  CGeometry2D::~CGeometry2D(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CGeometry2DGroup *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
