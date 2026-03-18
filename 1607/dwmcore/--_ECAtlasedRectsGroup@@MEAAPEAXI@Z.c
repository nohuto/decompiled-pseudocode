/*
 * XREFs of ??_ECAtlasedRectsGroup@@MEAAPEAXI@Z @ 0x18009D0E0
 * Callers:
 *     ?Release@CAtlasedRects@@UEAAKXZ @ 0x18009BC80 (-Release@CAtlasedRects@@UEAAKXZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180061620 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ??1CAtlasedRects@@MEAA@XZ @ 0x18009C4C0 (--1CAtlasedRects@@MEAA@XZ.c)
 *     ?UnRegisterNotifiers@CAtlasedRectsGroup@@UEAAXXZ @ 0x18009D6B0 (-UnRegisterNotifiers@CAtlasedRectsGroup@@UEAAXXZ.c)
 *     ??1CCyclicResourceListEntry@@IEAA@XZ @ 0x18009EE70 (--1CCyclicResourceListEntry@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CAtlasedRectsGroup *__fastcall CAtlasedRectsGroup::`vector deleting destructor'(CAtlasedRectsGroup *this, char a2)
{
  CCyclicResourceListEntry *v3; // rbx
  void (__fastcall *v5)(WPF::ProcessHeapImpl *, void *); // rax

  *(_QWORD *)this = &CAtlasedRectsGroup::`vftable'{for `CResource'};
  v3 = (CAtlasedRectsGroup *)((char *)this + 192);
  *((_QWORD *)this + 14) = &CAtlasedRectsMesh::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 24) = &CAtlasedRectsGroup::`vftable';
  CAtlasedRectsGroup::UnRegisterNotifiers(this);
  CCyclicResourceListEntry::~CCyclicResourceListEntry(v3);
  CAtlasedRects::~CAtlasedRects(this);
  if ( (a2 & 1) != 0 )
  {
    v5 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v5 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this);
    else
      v5(WPF::g_pProcessHeap, this);
  }
  return this;
}
