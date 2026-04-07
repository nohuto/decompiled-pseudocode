/*
 * XREFs of ??_GVisualCollection@@UEAAPEAXI@Z @ 0x180076D60
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ??1VisualCollection@@UEAA@XZ @ 0x180067AB8 (--1VisualCollection@@UEAA@XZ.c)
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
