/*
 * XREFs of ??_ECAtlasedRectsGroup@@MEAAPEAXI@Z @ 0x1800260C0
 * Callers:
 *     ?Release@CAtlasedRects@@UEAAKXZ @ 0x180025300 (-Release@CAtlasedRects@@UEAAKXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CAtlasedRects@@MEAA@XZ @ 0x1800253CC (--1CAtlasedRects@@MEAA@XZ.c)
 *     ?UnRegisterNotifiers@CAtlasedRectsGroup@@UEAAXXZ @ 0x1800267C0 (-UnRegisterNotifiers@CAtlasedRectsGroup@@UEAAXXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180051F80 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ??1CCyclicResourceListEntry@@IEAA@XZ @ 0x18006747C (--1CCyclicResourceListEntry@@IEAA@XZ.c)
 */

CAtlasedRectsGroup *__fastcall CAtlasedRectsGroup::`vector deleting destructor'(CAtlasedRectsGroup *this, char a2)
{
  void (*v4)(WPF::ProcessHeapImpl *__hidden, void *); // rdi

  *(_QWORD *)this = &CAtlasedRectsGroup::`vftable'{for `CResource'};
  *((_QWORD *)this + 5) = &CAtlasedRectsMesh::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 15) = &CAtlasedRectsGroup::`vftable';
  CAtlasedRectsGroup::UnRegisterNotifiers(this);
  CCyclicResourceListEntry::~CCyclicResourceListEntry((CAtlasedRectsGroup *)((char *)this + 120));
  CAtlasedRects::~CAtlasedRects(this);
  if ( (a2 & 1) != 0 )
  {
    v4 = *(void (**)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v4 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this);
    else
      ((void (__fastcall *)(WPF::ProcessHeapImpl *, CAtlasedRectsGroup *))v4)(WPF::g_pProcessHeap, this);
  }
  return this;
}
