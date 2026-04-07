/*
 * XREFs of ??_GCPenBarrelKeyVisual@@MEAAPEAXI@Z @ 0x180087360
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ??1CPenBarrelKeyVisual@@MEAA@XZ @ 0x1800872B8 (--1CPenBarrelKeyVisual@@MEAA@XZ.c)
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
