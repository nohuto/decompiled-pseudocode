/*
 * XREFs of ??_GCAnimationClock@@UEAAPEAXI@Z @ 0x180004C90
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAnimationClock@@UEAA@XZ @ 0x180005510 (--1CAnimationClock@@UEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

CAnimationClock *__fastcall CAnimationClock::`scalar deleting destructor'(CAnimationClock *this, char a2)
{
  CAnimationClock::~CAnimationClock(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CAnimationClock *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
