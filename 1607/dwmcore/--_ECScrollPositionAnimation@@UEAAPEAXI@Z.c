/*
 * XREFs of ??_ECScrollPositionAnimation@@UEAAPEAXI@Z @ 0x18015D610
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??1CScrollAnimation@@UEAA@XZ @ 0x18015D5A0 (--1CScrollAnimation@@UEAA@XZ.c)
 */

CScrollPositionAnimation *__fastcall CScrollPositionAnimation::`vector deleting destructor'(
        CScrollPositionAnimation *this,
        char a2)
{
  CScrollAnimation::~CScrollAnimation(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CScrollPositionAnimation *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
