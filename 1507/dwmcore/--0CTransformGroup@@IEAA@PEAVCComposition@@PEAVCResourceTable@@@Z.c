/*
 * XREFs of ??0CTransformGroup@@IEAA@PEAVCComposition@@PEAVCResourceTable@@@Z @ 0x18001A1E4
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18006D070 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVC.c)
 * Callees:
 *     ??0CCyclicResourceListEntry@@IEAA@PEAVCResourceTable@@@Z @ 0x180017D30 (--0CCyclicResourceListEntry@@IEAA@PEAVCResourceTable@@@Z.c)
 */

CTransformGroup *__fastcall CTransformGroup::CTransformGroup(
        CTransformGroup *this,
        struct CComposition *a2,
        struct CResourceTable *a3)
{
  CTransformGroup *v3; // r10
  CTransformGroup *result; // rax

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 8) |= 1u;
  *(_QWORD *)this = &CTransform::`vftable';
  CCyclicResourceListEntry::CCyclicResourceListEntry((CTransformGroup *)((char *)this + 104), a3);
  *((_QWORD *)v3 + 13) = &CTransform3DGroup::`vftable'{for `CCyclicResourceListEntry'};
  result = v3;
  *(_QWORD *)v3 = &CTransformGroup::`vftable'{for `CTransform'};
  return result;
}
