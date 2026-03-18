/*
 * XREFs of ??0CTransform3DGroup@@IEAA@PEAVCComposition@@PEAVCChannelContext@@@Z @ 0x180021AE4
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002FDA8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CTransform3D@@IEAA@PEAVCComposition@@_N@Z @ 0x180024194 (--0CTransform3D@@IEAA@PEAVCComposition@@_N@Z.c)
 *     ??0CCyclicResourceListEntry@@IEAA@PEAVCResourceTable@@@Z @ 0x18009EEA8 (--0CCyclicResourceListEntry@@IEAA@PEAVCResourceTable@@@Z.c)
 */

CTransform3DGroup *__fastcall CTransform3DGroup::CTransform3DGroup(
        CTransform3DGroup *this,
        struct CComposition *a2,
        struct CResourceTable **a3)
{
  _QWORD *v5; // r9
  CTransform3DGroup *result; // rax

  CTransform3D::CTransform3D(this, a2, 0);
  CCyclicResourceListEntry::CCyclicResourceListEntry((CTransform3DGroup *)((char *)this + 216), a3[3]);
  *v5 = &CTransform3DGroup::`vftable'{for `CCyclicResourceListEntry'};
  result = this;
  *(_QWORD *)this = &CTransform3DGroup::`vftable'{for `CTransform3D'};
  return result;
}
