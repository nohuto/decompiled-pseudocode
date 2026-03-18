/*
 * XREFs of ??_ECImageLegacyMilBrush@@MEAAPEAXI@Z @ 0x180032170
 * Callers:
 *     <none>
 * Callees:
 *     ??1CImageLegacyMilBrush@@MEAA@XZ @ 0x180032A40 (--1CImageLegacyMilBrush@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CImageLegacyMilBrush *__fastcall CImageLegacyMilBrush::`vector deleting destructor'(
        CImageLegacyMilBrush *this,
        char a2)
{
  CImageLegacyMilBrush::~CImageLegacyMilBrush(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CImageLegacyMilBrush *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
