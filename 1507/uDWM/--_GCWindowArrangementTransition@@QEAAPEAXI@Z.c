/*
 * XREFs of ??_GCWindowArrangementTransition@@QEAAPEAXI@Z @ 0x180077358
 * Callers:
 *     ?UnloadTheme@CDesktopManager@@AEAAXXZ @ 0x18003FC64 (-UnloadTheme@CDesktopManager@@AEAAXXZ.c)
 *     ??1CWindowList@@UEAA@XZ @ 0x180076E54 (--1CWindowList@@UEAA@XZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
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
