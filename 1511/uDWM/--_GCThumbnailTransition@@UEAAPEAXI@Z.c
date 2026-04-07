/*
 * XREFs of ??_GCThumbnailTransition@@UEAAPEAXI@Z @ 0x18009B5C0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?StopAnimation@CThumbnailTransition@@QEAAXXZ @ 0x18009BA84 (-StopAnimation@CThumbnailTransition@@QEAAXXZ.c)
 */

CThumbnailTransition *__fastcall CThumbnailTransition::`scalar deleting destructor'(
        CThumbnailTransition *this,
        char a2)
{
  *(_QWORD *)this = &CThumbnailTransition::`vftable'{for `CBaseObject'};
  *((_QWORD *)this + 2) = &CThumbnailTransition::`vftable'{for `IAnimationListener'};
  CThumbnailTransition::StopAnimation(this);
  *(_QWORD *)this = &CBaseObject::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CThumbnailTransition *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
