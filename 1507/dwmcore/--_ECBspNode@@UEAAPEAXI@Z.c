/*
 * XREFs of ??_ECBspNode@@UEAAPEAXI@Z @ 0x180158D00
 * Callers:
 *     ??_ECBspNode@@W7EAAPEAXI@Z @ 0x18009C220 (--_ECBspNode@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??1CBspNode@@UEAA@XZ @ 0x180158C6C (--1CBspNode@@UEAA@XZ.c)
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
