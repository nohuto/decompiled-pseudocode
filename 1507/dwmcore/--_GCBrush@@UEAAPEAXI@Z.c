/*
 * XREFs of ??_GCBrush@@UEAAPEAXI@Z @ 0x1800F1110
 * Callers:
 *     <none>
 * Callees:
 *     ??1CBrush@@UEAA@XZ @ 0x180083780 (--1CBrush@@UEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

CBrush *__fastcall CBrush::`scalar deleting destructor'(CBrush *this, char a2)
{
  CBrush::~CBrush(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CBrush *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
