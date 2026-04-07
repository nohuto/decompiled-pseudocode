/*
 * XREFs of ??_ECAccentTransition@@UEAAPEAXI@Z @ 0x180097B74
 * Callers:
 *     ??_ECAccentTransition@@W7EAAPEAXI@Z @ 0x18004A1D0 (--_ECAccentTransition@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

CAccentTransition *__fastcall CAccentTransition::`vector deleting destructor'(CAccentTransition *this, char a2)
{
  CBaseObject *v4; // rcx

  *(_QWORD *)this = &CAccentTransition::`vftable'{for `IAnimationListener'};
  *((_QWORD *)this + 1) = &CAccentTransition::`vftable'{for `CBaseObject'};
  v4 = (CBaseObject *)*((_QWORD *)this + 3);
  if ( v4 )
  {
    CBaseObject::Release(v4);
    *((_QWORD *)this + 3) = 0LL;
  }
  *((_QWORD *)this + 1) = &CBaseObject::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CAccentTransition *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
