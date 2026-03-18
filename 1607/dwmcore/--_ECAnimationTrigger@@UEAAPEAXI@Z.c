/*
 * XREFs of ??_ECAnimationTrigger@@UEAAPEAXI@Z @ 0x18012B5E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??1CAnimationTrigger@@UEAA@XZ @ 0x180145020 (--1CAnimationTrigger@@UEAA@XZ.c)
 */

CAnimationTrigger *__fastcall CAnimationTrigger::`vector deleting destructor'(CAnimationTrigger *this, char a2)
{
  CAnimationTrigger::~CAnimationTrigger(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CAnimationTrigger *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
