/*
 * XREFs of ??0CEffect@@IEAA@PEAVCComposition@@@Z @ 0x18002355C
 * Callers:
 *     ??0CFilterEffect@@IEAA@PEAVCComposition@@AEBU_GUID@@@Z @ 0x180014E8C (--0CFilterEffect@@IEAA@PEAVCComposition@@AEBU_GUID@@@Z.c)
 *     ??0CEffectGroup@@IEAA@PEAVCComposition@@@Z @ 0x180056028 (--0CEffectGroup@@IEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ??0CPropertyChangeResource@@QEAA@PEAVCComposition@@@Z @ 0x180023F70 (--0CPropertyChangeResource@@QEAA@PEAVCComposition@@@Z.c)
 */

CEffect *__fastcall CEffect::CEffect(CEffect *this, struct CComposition *a2)
{
  CPropertyChangeResource::CPropertyChangeResource(this, a2);
  *(_QWORD *)this = &CEffect::`vftable';
  return this;
}
