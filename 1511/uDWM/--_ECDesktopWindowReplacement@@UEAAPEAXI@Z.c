/*
 * XREFs of ??_ECDesktopWindowReplacement@@UEAAPEAXI@Z @ 0x18007EF70
 * Callers:
 *     <none>
 * Callees:
 *     ??1CVisual@@MEAA@XZ @ 0x180022130 (--1CVisual@@MEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

CDesktopWindowReplacement *__fastcall CDesktopWindowReplacement::`vector deleting destructor'(
        CDesktopWindowReplacement *this,
        char a2)
{
  CVisual::~CVisual(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CDesktopWindowReplacement *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
