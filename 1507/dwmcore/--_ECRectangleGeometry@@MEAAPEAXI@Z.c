/*
 * XREFs of ??_ECRectangleGeometry@@MEAAPEAXI@Z @ 0x180017624
 * Callers:
 *     ??_ECRectangleGeometry@@O7EAAPEAXI@Z @ 0x18009A030 (--_ECRectangleGeometry@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ??1CRectangleGeometry@@MEAA@XZ @ 0x1800175B4 (--1CRectangleGeometry@@MEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180031300 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

CRectangleGeometry *__fastcall CRectangleGeometry::`vector deleting destructor'(CRectangleGeometry *this, char a2)
{
  void (*v4)(WPF::ProcessHeapImpl *__hidden, void *); // rsi

  CRectangleGeometry::~CRectangleGeometry(this);
  if ( (a2 & 1) != 0 )
  {
    v4 = *(void (**)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v4 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this);
    else
      ((void (__fastcall *)(WPF::ProcessHeapImpl *, CRectangleGeometry *))v4)(WPF::g_pProcessHeap, this);
  }
  return this;
}
