/*
 * XREFs of ??0CAtlasedRectsGroup@@IEAA@PEAVCComposition@@PEAVCResourceTable@@@Z @ 0x180026164
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x180092F84 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVC.c)
 * Callees:
 *     ??0CCyclicResourceListEntry@@IEAA@PEAVCResourceTable@@@Z @ 0x1800674B4 (--0CCyclicResourceListEntry@@IEAA@PEAVCResourceTable@@@Z.c)
 */

CAtlasedRectsGroup *__fastcall CAtlasedRectsGroup::CAtlasedRectsGroup(
        CAtlasedRectsGroup *this,
        struct CComposition *a2,
        struct CResourceTable *a3)
{
  CAtlasedRectsGroup *v3; // r10

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CAtlasedRects::`vftable'{for `CResource'};
  *((_QWORD *)this + 5) = &CAtlasedRectsMesh::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 9) = (char *)this + 104;
  *((_QWORD *)this + 10) = (char *)this + 104;
  *((_DWORD *)this + 22) = 2;
  *(_QWORD *)((char *)this + 92) = 2LL;
  CCyclicResourceListEntry::CCyclicResourceListEntry((CAtlasedRectsGroup *)((char *)this + 120), a3);
  *((_QWORD *)v3 + 5) = &CAtlasedRectsMesh::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)v3 = &CAtlasedRectsGroup::`vftable'{for `CResource'};
  *((_QWORD *)v3 + 15) = &CAtlasedRectsGroup::`vftable';
  return v3;
}
