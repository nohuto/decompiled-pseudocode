/*
 * XREFs of ??_GCPenBarrelKeyVisual@@MEAAPEAXI@Z @ 0x18008B020
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ??1CPenBarrelKeyVisual@@MEAA@XZ @ 0x18008AF78 (--1CPenBarrelKeyVisual@@MEAA@XZ.c)
 */

CPenBarrelKeyVisual *__fastcall CPenBarrelKeyVisual::`scalar deleting destructor'(CPenBarrelKeyVisual *this, char a2)
{
  CPenBarrelKeyVisual::~CPenBarrelKeyVisual(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CPenBarrelKeyVisual *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
