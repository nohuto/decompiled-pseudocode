/*
 * XREFs of ??_GCImmersiveIconicBitmapRegistry@@UEAAPEAXI@Z @ 0x18006C550
 * Callers:
 *     ??1CDesktopManager@@EEAA@XZ @ 0x18006C0B0 (--1CDesktopManager@@EEAA@XZ.c)
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ??1CImmersiveIconicBitmapRegistry@@UEAA@XZ @ 0x1800702F0 (--1CImmersiveIconicBitmapRegistry@@UEAA@XZ.c)
 */

CImmersiveIconicBitmapRegistry *__fastcall CImmersiveIconicBitmapRegistry::`scalar deleting destructor'(
        CImmersiveIconicBitmapRegistry *this,
        char a2)
{
  CImmersiveIconicBitmapRegistry::~CImmersiveIconicBitmapRegistry(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CImmersiveIconicBitmapRegistry *))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                     + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
