/*
 * XREFs of ??_GCBaseClipStack@@UEAAPEAXI@Z @ 0x1800F10B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CBaseClipStack@@UEAA@XZ @ 0x180058F20 (--1CBaseClipStack@@UEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

CBaseClipStack *__fastcall CBaseClipStack::`scalar deleting destructor'(CBaseClipStack *this, char a2)
{
  CBaseClipStack::~CBaseClipStack(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CBaseClipStack *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
