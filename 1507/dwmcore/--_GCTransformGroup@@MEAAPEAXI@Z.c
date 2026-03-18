/*
 * XREFs of ??_GCTransformGroup@@MEAAPEAXI@Z @ 0x18001A060
 * Callers:
 *     <none>
 * Callees:
 *     ??1CTransformGroup@@MEAA@XZ @ 0x18001A438 (--1CTransformGroup@@MEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180031300 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

CTransformGroup *__fastcall CTransformGroup::`scalar deleting destructor'(CTransformGroup *this, char a2)
{
  void (*v4)(WPF::ProcessHeapImpl *__hidden, void *); // rsi

  CTransformGroup::~CTransformGroup(this);
  if ( (a2 & 1) != 0 )
  {
    v4 = *(void (**)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v4 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this);
    else
      ((void (__fastcall *)(WPF::ProcessHeapImpl *, CTransformGroup *))v4)(WPF::g_pProcessHeap, this);
  }
  return this;
}
