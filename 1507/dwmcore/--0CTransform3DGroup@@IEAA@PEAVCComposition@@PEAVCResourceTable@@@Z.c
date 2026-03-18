/*
 * XREFs of ??0CTransform3DGroup@@IEAA@PEAVCComposition@@PEAVCResourceTable@@@Z @ 0x18006053C
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18006D070 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVC.c)
 * Callees:
 *     ??0CCyclicResourceListEntry@@IEAA@PEAVCResourceTable@@@Z @ 0x180017D30 (--0CCyclicResourceListEntry@@IEAA@PEAVCResourceTable@@@Z.c)
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
  CCyclicResourceListEntry::CCyclicResourceListEntry((CTransform3DGroup *)((char *)this + 104), a3);
  *((_QWORD *)v3 + 13) = &CTransform3DGroup::`vftable'{for `CCyclicResourceListEntry'};
  result = v3;
  *(_QWORD *)v3 = &CTransform3DGroup::`vftable'{for `CTransform3D'};
  return result;
}
