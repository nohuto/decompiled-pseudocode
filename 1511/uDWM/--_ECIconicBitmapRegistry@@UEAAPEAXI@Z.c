/*
 * XREFs of ??_ECIconicBitmapRegistry@@UEAAPEAXI@Z @ 0x180074520
 * Callers:
 *     ??1CDesktopManager@@EEAA@XZ @ 0x1800740E0 (--1CDesktopManager@@EEAA@XZ.c)
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ??1CIconicBitmapRegistry@@UEAA@XZ @ 0x180075C1C (--1CIconicBitmapRegistry@@UEAA@XZ.c)
 */

CIconicBitmapRegistry *__fastcall CIconicBitmapRegistry::`vector deleting destructor'(
        CIconicBitmapRegistry *this,
        char a2)
{
  CIconicBitmapRegistry::~CIconicBitmapRegistry(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CIconicBitmapRegistry *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
