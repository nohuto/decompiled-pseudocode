/*
 * XREFs of ??_ECBitmap@@UEAAPEAXI@Z @ 0x18009F120
 * Callers:
 *     ??_ECBitmap@@WHA@EAAPEAXI@Z @ 0x180050E80 (--_ECBitmap@@WHA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CBitmap@@UEAA@XZ @ 0x1800427EC (--1CBitmap@@UEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

CBitmap *__fastcall CBitmap::`vector deleting destructor'(CBitmap *this, char a2)
{
  CBitmap::~CBitmap(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CBitmap *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
