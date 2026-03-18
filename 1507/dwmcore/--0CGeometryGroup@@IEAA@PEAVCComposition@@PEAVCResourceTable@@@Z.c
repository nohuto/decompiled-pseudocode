/*
 * XREFs of ??0CGeometryGroup@@IEAA@PEAVCComposition@@PEAVCResourceTable@@@Z @ 0x1800F8874
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18006D070 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVC.c)
 * Callees:
 *     ??0CCyclicResourceListEntry@@IEAA@PEAVCResourceTable@@@Z @ 0x180017D30 (--0CCyclicResourceListEntry@@IEAA@PEAVCResourceTable@@@Z.c)
 */

CGeometryGroup *__fastcall CGeometryGroup::CGeometryGroup(
        CGeometryGroup *this,
        struct CComposition *a2,
        struct CResourceTable *a3)
{
  __int64 v3; // r10
  CGeometryGroup *result; // rax

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 8) |= 1u;
  *(_QWORD *)this = &CGeometry::`vftable';
  CCyclicResourceListEntry::CCyclicResourceListEntry((CGeometryGroup *)((char *)this + 80), a3);
  *(_DWORD *)(v3 + 32) |= 1u;
  *(_QWORD *)(v3 + 80) = &CCombinedGeometry::`vftable'{for `CCyclicResourceListEntry'};
  result = (CGeometryGroup *)v3;
  *(_QWORD *)v3 = &CGeometryGroup::`vftable'{for `CGeometry'};
  return result;
}
