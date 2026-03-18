/*
 * XREFs of ??0CLegacyMilBrush@@IEAA@PEAVCComposition@@@Z @ 0x18002EF3C
 * Callers:
 *     ??0CLinearGradientLegacyMilBrush@@IEAA@PEAVCComposition@@@Z @ 0x1800175DC (--0CLinearGradientLegacyMilBrush@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CTileLegacyMilBrush@@IEAA@PEAVCComposition@@@Z @ 0x180024BA4 (--0CTileLegacyMilBrush@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CSolidColorLegacyMilBrush@@IEAA@PEAVCComposition@@@Z @ 0x1800318B4 (--0CSolidColorLegacyMilBrush@@IEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ??0CResource@@IEAA@PEAVCComposition@@@Z @ 0x18008DD68 (--0CResource@@IEAA@PEAVCComposition@@@Z.c)
 */

CLegacyMilBrush *__fastcall CLegacyMilBrush::CLegacyMilBrush(CLegacyMilBrush *this, struct CComposition *a2)
{
  CResource::CResource(this, a2);
  *((_DWORD *)this + 8) |= 1u;
  *(_QWORD *)this = &CLegacyMilBrush::`vftable';
  return this;
}
