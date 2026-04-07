/*
 * XREFs of ??_ECAtlasedRectsVisual@@MEAAPEAXI@Z @ 0x180067F70
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAtlasedRectsVisual@@MEAA@XZ @ 0x18001B7B4 (--1CAtlasedRectsVisual@@MEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

void **__fastcall CAtlasedRectsVisual::`vector deleting destructor'(void **this, char a2)
{
  CAtlasedRectsVisual::~CAtlasedRectsVisual(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, void **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
