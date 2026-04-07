/*
 * XREFs of ??_ECThumbnailData@@UEAAPEAXI@Z @ 0x180040F50
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

CThumbnailData *__fastcall CThumbnailData::`vector deleting destructor'(CThumbnailData *this, char a2)
{
  *(_QWORD *)this = &CThumbnailData::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CThumbnailData *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
