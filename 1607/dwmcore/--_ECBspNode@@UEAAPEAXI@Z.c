/*
 * XREFs of ??_ECBspNode@@UEAAPEAXI@Z @ 0x180199650
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??1CBspNode@@UEAA@XZ @ 0x1801995DC (--1CBspNode@@UEAA@XZ.c)
 */

CBspNode *__fastcall CBspNode::`vector deleting destructor'(CBspNode *this, char a2)
{
  CBspNode::~CBspNode(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CBspNode *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
