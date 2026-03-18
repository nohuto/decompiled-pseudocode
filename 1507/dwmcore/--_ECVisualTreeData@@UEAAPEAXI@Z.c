/*
 * XREFs of ??_ECVisualTreeData@@UEAAPEAXI@Z @ 0x180059FF0
 * Callers:
 *     ??1CVisual@@MEAA@XZ @ 0x180039240 (--1CVisual@@MEAA@XZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180031300 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ??1CTreeData@@UEAA@XZ @ 0x180059654 (--1CTreeData@@UEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

CVisualTreeData *__fastcall CVisualTreeData::`vector deleting destructor'(CVisualTreeData *this, char a2)
{
  void (__fastcall *v4)(WPF::ProcessHeapImpl *, void *); // rsi

  *(_QWORD *)this = &CVisualTreeData::`vftable';
  CTreeData::~CTreeData(this);
  if ( (a2 & 1) != 0 )
  {
    v4 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v4 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this);
    else
      v4(WPF::g_pProcessHeap, this);
  }
  return this;
}
