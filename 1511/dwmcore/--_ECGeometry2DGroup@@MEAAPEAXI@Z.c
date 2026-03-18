/*
 * XREFs of ??_ECGeometry2DGroup@@MEAAPEAXI@Z @ 0x180113380
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CCyclicResourceListEntry@@IEAA@XZ @ 0x18006747C (--1CCyclicResourceListEntry@@IEAA@XZ.c)
 *     ??1CGeometry2D@@MEAA@XZ @ 0x180112D18 (--1CGeometry2D@@MEAA@XZ.c)
 *     ?UnRegisterNotifiers@CGeometry2DGroup@@UEAAXXZ @ 0x18012FFF0 (-UnRegisterNotifiers@CGeometry2DGroup@@UEAAXXZ.c)
 */

CGeometry2DGroup *__fastcall CGeometry2DGroup::`vector deleting destructor'(CGeometry2DGroup *this, char a2)
{
  *(_QWORD *)this = &CGeometry2DGroup::`vftable'{for `CGeometry2D'};
  *((_QWORD *)this + 7) = &CGeometry2DGroup::`vftable'{for `CCyclicResourceListEntry'};
  CGeometry2DGroup::UnRegisterNotifiers(this);
  CCyclicResourceListEntry::~CCyclicResourceListEntry((CGeometry2DGroup *)((char *)this + 56));
  CGeometry2D::~CGeometry2D(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CGeometry2DGroup *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
