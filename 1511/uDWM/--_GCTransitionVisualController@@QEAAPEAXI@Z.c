/*
 * XREFs of ??_GCTransitionVisualController@@QEAAPEAXI@Z @ 0x180074638
 * Callers:
 *     ??1CDesktopManager@@EEAA@XZ @ 0x1800740E0 (--1CDesktopManager@@EEAA@XZ.c)
 * Callees:
 *     ?CleanupTransition@CTransitionVisualController@@QEAAJXZ @ 0x18000A8F0 (-CleanupTransition@CTransitionVisualController@@QEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18002B05C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

void **__fastcall CTransitionVisualController::`scalar deleting destructor'(void **this)
{
  CBaseObject *v2; // rcx

  *this = &CTransitionVisualController::`vftable';
  CTransitionVisualController::CleanupTransition((CTransitionVisualController *)this);
  v2 = (CBaseObject *)this[1];
  if ( v2 )
  {
    CBaseObject::Release(v2);
    this[1] = 0LL;
  }
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 19);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 14);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 7);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 3);
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, void **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    this);
  return this;
}
