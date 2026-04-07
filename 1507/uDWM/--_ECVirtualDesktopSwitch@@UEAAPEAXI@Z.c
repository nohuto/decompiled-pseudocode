/*
 * XREFs of ??_ECVirtualDesktopSwitch@@UEAAPEAXI@Z @ 0x180090580
 * Callers:
 *     <none>
 * Callees:
 *     ??1CStoryboard@@UEAA@XZ @ 0x18000FBB4 (--1CStoryboard@@UEAA@XZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180028054 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

void **__fastcall CVirtualDesktopSwitch::`vector deleting destructor'(void **this, char a2)
{
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 19);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 15);
  CStoryboard::~CStoryboard((CStoryboard *)this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, void **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
