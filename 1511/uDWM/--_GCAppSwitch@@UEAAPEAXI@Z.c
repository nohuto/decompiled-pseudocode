/*
 * XREFs of ??_GCAppSwitch@@UEAAPEAXI@Z @ 0x180093360
 * Callers:
 *     <none>
 * Callees:
 *     ??1CGroupingStoryboard@@UEAA@XZ @ 0x1800024A8 (--1CGroupingStoryboard@@UEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

CAppSwitch *__fastcall CAppSwitch::`scalar deleting destructor'(CAppSwitch *this, char a2)
{
  CGroupingStoryboard::~CGroupingStoryboard(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CAppSwitch *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
