/*
 * XREFs of ??0CScaleTransform@@IEAA@PEAVCComposition@@@Z @ 0x180022A6C
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002FDA8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CTransform@@IEAA@PEAVCComposition@@@Z @ 0x180023508 (--0CTransform@@IEAA@PEAVCComposition@@@Z.c)
 */

CScaleTransform *__fastcall CScaleTransform::CScaleTransform(CScaleTransform *this, struct CComposition *a2)
{
  CTransform::CTransform(this, a2);
  *(_QWORD *)this = &CScaleTransform::`vftable';
  *((_QWORD *)this + 27) = 0x3FF0000000000000LL;
  *((_QWORD *)this + 28) = 0x3FF0000000000000LL;
  return this;
}
