/*
 * XREFs of ??_ECAccentTransitionAnimatedVisual@@UEAAPEAXI@Z @ 0x180099624
 * Callers:
 *     ??_ECAccentTransitionAnimatedVisual@@W7EAAPEAXI@Z @ 0x180050890 (--_ECAccentTransitionAnimatedVisual@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

CAccentTransitionAnimatedVisual *__fastcall CAccentTransitionAnimatedVisual::`vector deleting destructor'(
        CAccentTransitionAnimatedVisual *this,
        char a2)
{
  CBaseObject *v4; // rcx

  *(_QWORD *)this = &CAccentTransitionAnimatedVisual::`vftable'{for `IAnimatedVisual'};
  *((_QWORD *)this + 1) = &CAccentTransitionAnimatedVisual::`vftable'{for `CBaseObject'};
  v4 = (CBaseObject *)*((_QWORD *)this + 3);
  if ( v4 )
    CBaseObject::Release(v4);
  *((_QWORD *)this + 1) = &CBaseObject::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CAccentTransitionAnimatedVisual *))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                      + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
