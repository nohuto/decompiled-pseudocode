/*
 * XREFs of ??_GCWindowNode@@MEAAPEAXI@Z @ 0x180079180
 * Callers:
 *     <none>
 * Callees:
 *     ??1CWindowNode@@MEAA@XZ @ 0x18007D9D0 (--1CWindowNode@@MEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

CWindowNode *__fastcall CWindowNode::`scalar deleting destructor'(CWindowNode *this, char a2)
{
  CWindowNode::~CWindowNode(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CWindowNode *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
