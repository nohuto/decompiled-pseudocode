/*
 * XREFs of ??0CEffectGroup@@IEAA@PEAVCComposition@@@Z @ 0x180056028
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002FDA8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ?SetOpacity@CCoRenderVisualProxy@@UEAAJM@Z @ 0x180125E90 (-SetOpacity@CCoRenderVisualProxy@@UEAAJM@Z.c)
 * Callees:
 *     ??0CEffect@@IEAA@PEAVCComposition@@@Z @ 0x18002355C (--0CEffect@@IEAA@PEAVCComposition@@@Z.c)
 */

CEffectGroup *__fastcall CEffectGroup::CEffectGroup(CEffectGroup *this, struct CComposition *a2)
{
  CEffect::CEffect(this, a2);
  *(_QWORD *)this = &CEffectGroup::`vftable';
  *((_QWORD *)this + 17) = 0x3FF0000000000000LL;
  return this;
}
