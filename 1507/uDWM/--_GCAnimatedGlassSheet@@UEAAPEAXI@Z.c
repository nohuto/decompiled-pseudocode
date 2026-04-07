/*
 * XREFs of ??_GCAnimatedGlassSheet@@UEAAPEAXI@Z @ 0x18007B2E0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ??1CAnimatedGlassSheet@@UEAA@XZ @ 0x18007B224 (--1CAnimatedGlassSheet@@UEAA@XZ.c)
 */

CAnimatedGlassSheet *__fastcall CAnimatedGlassSheet::`scalar deleting destructor'(CAnimatedGlassSheet *this, char a2)
{
  CAnimatedGlassSheet::~CAnimatedGlassSheet(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CAnimatedGlassSheet *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
