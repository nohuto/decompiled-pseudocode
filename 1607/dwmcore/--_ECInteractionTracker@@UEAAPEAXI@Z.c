/*
 * XREFs of ??_ECInteractionTracker@@UEAAPEAXI@Z @ 0x180149C40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??1CInteractionTracker@@UEAA@XZ @ 0x180149A8C (--1CInteractionTracker@@UEAA@XZ.c)
 */

CInteractionTracker *__fastcall CInteractionTracker::`vector deleting destructor'(CInteractionTracker *this, char a2)
{
  CInteractionTracker::~CInteractionTracker(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CInteractionTracker *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
