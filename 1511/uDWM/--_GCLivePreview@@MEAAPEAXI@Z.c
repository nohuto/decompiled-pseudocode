/*
 * XREFs of ??_GCLivePreview@@MEAAPEAXI@Z @ 0x180071180
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ??1CLivePreview@@MEAA@XZ @ 0x180071048 (--1CLivePreview@@MEAA@XZ.c)
 */

void **__fastcall CLivePreview::`scalar deleting destructor'(void **this, char a2)
{
  CLivePreview::~CLivePreview(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, void **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
