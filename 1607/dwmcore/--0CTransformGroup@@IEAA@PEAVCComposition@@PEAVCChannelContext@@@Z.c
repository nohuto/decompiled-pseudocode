/*
 * XREFs of ??0CTransformGroup@@IEAA@PEAVCComposition@@PEAVCChannelContext@@@Z @ 0x180022E44
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002FDA8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CTransform@@IEAA@PEAVCComposition@@@Z @ 0x180023508 (--0CTransform@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CCyclicResourceListEntry@@IEAA@PEAVCResourceTable@@@Z @ 0x18009EEA8 (--0CCyclicResourceListEntry@@IEAA@PEAVCResourceTable@@@Z.c)
 */

CTransformGroup *__fastcall CTransformGroup::CTransformGroup(
        CTransformGroup *this,
        struct CComposition *a2,
        struct CResourceTable **a3)
{
  _QWORD *v5; // r9
  CTransformGroup *result; // rax

  CTransform::CTransform(this, a2);
  CCyclicResourceListEntry::CCyclicResourceListEntry((CTransformGroup *)((char *)this + 216), a3[3]);
  *v5 = &CTransformGroup::`vftable'{for `CCyclicResourceListEntry'};
  result = this;
  *(_QWORD *)this = &CTransformGroup::`vftable'{for `CTransform'};
  return result;
}
