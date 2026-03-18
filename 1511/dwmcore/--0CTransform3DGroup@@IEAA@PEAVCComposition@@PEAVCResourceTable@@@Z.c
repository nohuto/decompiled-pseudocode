/*
 * XREFs of ??0CTransform3DGroup@@IEAA@PEAVCComposition@@PEAVCResourceTable@@@Z @ 0x180068740
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x180092F84 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVC.c)
 * Callees:
 *     ??0CCyclicResourceListEntry@@IEAA@PEAVCResourceTable@@@Z @ 0x1800674B4 (--0CCyclicResourceListEntry@@IEAA@PEAVCResourceTable@@@Z.c)
 */

CTransform3DGroup *__fastcall CTransform3DGroup::CTransform3DGroup(
        CTransform3DGroup *this,
        struct CComposition *a2,
        struct CResourceTable *a3)
{
  CTransform3DGroup *v3; // r10
  CTransform3DGroup *result; // rax

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 8) |= 1u;
  *(_QWORD *)this = &CTransform3D::`vftable';
  CCyclicResourceListEntry::CCyclicResourceListEntry((CTransform3DGroup *)((char *)this + 120), a3);
  *((_QWORD *)v3 + 15) = &CTransform3DGroup::`vftable'{for `CCyclicResourceListEntry'};
  result = v3;
  *(_QWORD *)v3 = &CTransform3DGroup::`vftable'{for `CTransform3D'};
  return result;
}
