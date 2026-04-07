/*
 * XREFs of ??_GVisualCollection@@UEAAPEAXI@Z @ 0x18007EB50
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ??1VisualCollection@@UEAA@XZ @ 0x180070404 (--1VisualCollection@@UEAA@XZ.c)
 */

void **__fastcall VisualCollection::`scalar deleting destructor'(void **this, char a2)
{
  VisualCollection::~VisualCollection(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, void **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
