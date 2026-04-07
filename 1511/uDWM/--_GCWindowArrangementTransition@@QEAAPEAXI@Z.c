/*
 * XREFs of ??_GCWindowArrangementTransition@@QEAAPEAXI@Z @ 0x18007F148
 * Callers:
 *     ?UnloadTheme@CDesktopManager@@AEAAXXZ @ 0x1800449A8 (-UnloadTheme@CDesktopManager@@AEAAXXZ.c)
 *     ??1CWindowList@@UEAA@XZ @ 0x18007EC44 (--1CWindowList@@UEAA@XZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

CWindowArrangementTransition *__fastcall CWindowArrangementTransition::`scalar deleting destructor'(CBaseObject **this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rcx

  v2 = *this;
  if ( v2 )
    CBaseObject::Release(v2);
  v3 = this[1];
  if ( v3 )
    CBaseObject::Release(v3);
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CBaseObject **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    this);
  return (CWindowArrangementTransition *)this;
}
