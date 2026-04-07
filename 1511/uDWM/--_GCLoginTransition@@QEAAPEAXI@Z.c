/*
 * XREFs of ??_GCLoginTransition@@QEAAPEAXI@Z @ 0x18007EFC8
 * Callers:
 *     ?SwitchDesktop@CWindowList@@UEAAJK_K@Z @ 0x18002CF00 (-SwitchDesktop@CWindowList@@UEAAJK_K@Z.c)
 *     ??1CWindowList@@UEAA@XZ @ 0x18007EC44 (--1CWindowList@@UEAA@XZ.c)
 * Callees:
 *     ?StopAnimation@CLoginTransition@@QEAAJXZ @ 0x180040534 (-StopAnimation@CLoginTransition@@QEAAJXZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

CLoginTransition *__fastcall CLoginTransition::`scalar deleting destructor'(CLoginTransition *this)
{
  *(_QWORD *)this = &CLoginTransition::`vftable';
  CLoginTransition::StopAnimation(this);
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CLoginTransition *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    this);
  return this;
}
