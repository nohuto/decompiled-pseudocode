/*
 * XREFs of ??_GCDisplay@@EEAAPEAXI@Z @ 0x180057A90
 * Callers:
 *     <none>
 * Callees:
 *     ??1CDisplay@@EEAA@XZ @ 0x1800582D0 (--1CDisplay@@EEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

CDisplay *__fastcall CDisplay::`scalar deleting destructor'(CDisplay *this, char a2)
{
  CDisplay::~CDisplay(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CDisplay *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
