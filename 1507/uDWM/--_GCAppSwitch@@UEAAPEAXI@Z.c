/*
 * XREFs of ??_GCAppSwitch@@UEAAPEAXI@Z @ 0x180090520
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ??1CGroupingStoryboard@@UEAA@XZ @ 0x18009036C (--1CGroupingStoryboard@@UEAA@XZ.c)
 */

void **__fastcall CAppSwitch::`scalar deleting destructor'(void **this, char a2)
{
  CGroupingStoryboard::~CGroupingStoryboard(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, void **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
