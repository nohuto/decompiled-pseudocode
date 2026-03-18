/*
 * XREFs of ??0CMatrixTransform@@IEAA@PEAVCComposition@@@Z @ 0x180024360
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002FDA8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CTransform@@IEAA@PEAVCComposition@@@Z @ 0x180023508 (--0CTransform@@IEAA@PEAVCComposition@@@Z.c)
 */

CMatrixTransform *__fastcall CMatrixTransform::CMatrixTransform(CMatrixTransform *this, struct CComposition *a2)
{
  CTransform::CTransform(this, a2);
  *(_QWORD *)this = &CMatrixTransform::`vftable';
  *((_QWORD *)this + 27) = 0x3FF0000000000000LL;
  *((_QWORD *)this + 30) = 0x3FF0000000000000LL;
  return this;
}
