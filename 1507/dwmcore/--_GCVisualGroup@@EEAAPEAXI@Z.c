/*
 * XREFs of ??_GCVisualGroup@@EEAAPEAXI@Z @ 0x180106D50
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??1CVisualGroup@@EEAA@XZ @ 0x180106D1C (--1CVisualGroup@@EEAA@XZ.c)
 */

CVisualGroup *__fastcall CVisualGroup::`scalar deleting destructor'(CVisualGroup *this, char a2)
{
  CVisualGroup::~CVisualGroup(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CVisualGroup *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
