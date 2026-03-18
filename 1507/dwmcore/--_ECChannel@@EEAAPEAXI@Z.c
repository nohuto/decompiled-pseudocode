/*
 * XREFs of ??_ECChannel@@EEAAPEAXI@Z @ 0x1800E13A0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??1CChannel@@EEAA@XZ @ 0x1800E1280 (--1CChannel@@EEAA@XZ.c)
 */

CChannel *__fastcall CChannel::`vector deleting destructor'(CChannel *this, char a2)
{
  CChannel::~CChannel(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CChannel *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
